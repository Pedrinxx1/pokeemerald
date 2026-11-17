#include "global.h"
#include "battle.h"
#include "battle_main.h"
#include "constants/rgb.h"
#include "constants/species.h"
#include "palette.h"
#include "pokemon.h"
#include "sprite.h"
#include "string_util.h"
#include "text.h"
#include "summary_accessories.h"

struct AccArt
{
    const u32 *gfx1;
    const u32 *gfx2;
    const u16 *pal;
    u8 w1, h1, w2, h2;
};

struct AccPos
{
    u16 species;
    u8 topX, topY, eyeX, eyeY, neckX, neckY;
    u8 foot0X, foot0Y, foot1X, foot1Y;
    u8 hand0X, hand0Y, hand1X, hand1Y;
    u8 scale;
};

// itens: 0 chapeu, 1 bone, 2 laco, 3 oculos, 4 oculos_escuros, 5 sapato, 6 luva, 7 roupinha
#define ITEM_SHOES 5
#define ITEM_GLOVES 6
#define ITEM_CLOTH 7

#include "data/summary_accessories.h"
#include "data/summary_accessories_back.h"

#define MAX_ACC_SPRITES 7

static const struct OamData sOamData_Acc =
{
    .shape = SPRITE_SHAPE(32x32),
    .size = SPRITE_SIZE(32x32),
    .priority = 0,
};

#define NUM_CTX 3 // 0 = resumo, 1/2 = batalha (jogador esquerda/direita)

struct AccCtx
{
    u8 sprites[MAX_ACC_SPRITES];
    u8 monSprite;
    u8 count;
    u8 palNum[ACC_NUM_SLOTS];
    struct SpriteFrameImage frames[MAX_ACC_SPRITES][1];
};

static struct AccCtx sCtx[NUM_CTX];
static struct AccCtx *sC; // contexto em uso

static const u8 sTxtNone[] = _("--");
static const u8 sTxtHead[][12] = {_("Cab:--"), _("Cab:Chapéu"), _("Cab:Boné"), _("Cab:Laço")};
static const u8 sTxtEyes[][12] = {_("Olh:--"), _("Olh:Óculos"), _("Olh:Escuros")};
static const u8 sTxtShoes[][12] = {_("Pés:--"), _("Pés:Sapato")};
static const u8 sTxtGloves[][12] = {_("Mão:--"), _("Mão:Luvas")};
static const u8 sTxtCloth[][12] = {_("Cor:--"), _("Cor:Roupa")};

static u8 GetSlotValue(u8 code, u8 slot)
{
    switch (slot)
    {
    case ACC_SLOT_HEAD:   return code & 3;
    case ACC_SLOT_EYES:   return (code >> 2) & 3;
    case ACC_SLOT_SHOES:  return (code >> 4) & 1;
    case ACC_SLOT_GLOVES: return (code >> 5) & 1;
    default:              return (code >> 6) & 1;
    }
}

static const u8 sSlotMax[ACC_NUM_SLOTS] = {4, 3, 2, 2, 2};

u8 SummaryAcc_Change(u8 code, u8 slot, s8 dir)
{
    static const u8 sShift[ACC_NUM_SLOTS] = {0, 2, 4, 5, 6};
    static const u8 sMask[ACC_NUM_SLOTS] = {3, 3, 1, 1, 1};
    u8 v = GetSlotValue(code, slot);

    v = (v + sSlotMax[slot] + dir) % sSlotMax[slot];
    code &= ~(sMask[slot] << sShift[slot]);
    return code | (v << sShift[slot]);
}

const u8 *SummaryAcc_GetLabel(u8 code, u8 slot)
{
    u8 v = GetSlotValue(code, slot);

    switch (slot)
    {
    case ACC_SLOT_HEAD:   return sTxtHead[v];
    case ACC_SLOT_EYES:   return sTxtEyes[v];
    case ACC_SLOT_SHOES:  return sTxtShoes[v];
    case ACC_SLOT_GLOVES: return sTxtGloves[v];
    default:              return sTxtCloth[v];
    }
}

static void SpriteCB_Acc(struct Sprite *sprite)
{
    struct Sprite *mon = &gSprites[sprite->data[0]];

    sprite->invisible = mon->invisible || !mon->inUse
        || (mon->oam.affineMode != ST_OAM_AFFINE_OFF && !mon->affineAnimEnded);
    sprite->x = mon->x + mon->x2 + sprite->data[1];
    sprite->y = mon->y + mon->y2 + sprite->data[2];
    sprite->oam.priority = mon->oam.priority;
    sprite->subpriority = mon->subpriority > 0 ? mon->subpriority - 1 : 0;
}

static void AddAccSprite(u8 slot, u8 item, u8 scale, s16 cx, s16 cy, u8 anchor, bool8 flipped)
{
    struct SpriteTemplate tmpl = {
        .tileTag = TAG_NONE, .paletteTag = TAG_NONE, .oam = &sOamData_Acc,
        .anims = gDummySpriteAnimTable, .images = NULL, .affineAnims = gDummySpriteAffineAnimTable,
        .callback = SpriteCB_Acc,
    };
    const struct AccArt *art = &sAccArt[item];
    u8 w = scale == 2 ? art->w2 : art->w1;
    u8 h = scale == 2 ? art->h2 : art->h1;
    s16 x, y;
    u8 id;

    if (sC->count >= MAX_ACC_SPRITES || sC->palNum[slot] == 0xFF)
        return;
    if (flipped)
        cx = 63 - cx;
    x = cx - w / 2;
    switch (anchor)
    {
    case 0: y = cy - h + 2 * scale; break;   // base (chapéu)
    case 1: y = cy - h / 2; break;           // meio
    case 2: y = cy; break;                   // topo (roupa)
    default: y = cy - h + 1; break;          // pé
    }
    sC->frames[sC->count][0].data = (scale == 2 ? art->gfx2 : art->gfx1);
    sC->frames[sC->count][0].size = 512;
    tmpl.images = sC->frames[sC->count];
    id = CreateSprite(&tmpl, 0, 0, 0);
    if (id == MAX_SPRITES)
        return;
    gSprites[id].oam.paletteNum = sC->palNum[slot];
    gSprites[id].data[0] = sC->monSprite;
    gSprites[id].data[1] = x - 32;   // sprite do Pokémon: 64x64 centrado
    gSprites[id].data[2] = y - 32;
    gSprites[id].x2 = 16;            // o canvas é 32x32: centro do canvas
    gSprites[id].y2 = 16;
    sC->sprites[sC->count++] = id;
}

static void DestroyCtx(struct AccCtx *c)
{
    u8 i;

    for (i = 0; i < c->count; i++)
        if (gSprites[c->sprites[i]].inUse && gSprites[c->sprites[i]].callback == SpriteCB_Acc)
            DestroySprite(&gSprites[c->sprites[i]]);
    c->count = 0;
}

void SummaryAcc_Destroy(void)
{
    DestroyCtx(&sCtx[0]);
}

static const struct AccPos *FindPos(u16 species, bool8 back)
{
    u16 i;
    const struct AccPos *t = back ? sAccPosBack : sAccPos;
    u16 n = back ? ARRAY_COUNT(sAccPosBack) : ARRAY_COUNT(sAccPos);

    for (i = 0; i < n; i++)
        if (t[i].species == species)
            return &t[i];
    return NULL;
}

static void BuildCtx(u8 ctx, u8 code, u16 species, u8 monSpriteId, bool8 back)
{
    u8 slot, i;
    const struct AccPos *p;
    bool8 flipped;
    static const u8 sPalItem[ACC_NUM_SLOTS] = {0, 3, ITEM_SHOES, ITEM_GLOVES, ITEM_CLOTH};
    u8 head, eyes;

    sC = &sCtx[ctx];
    DestroyCtx(sC);
    if (monSpriteId == SPRITE_NONE || code == 0)
        return;
    p = FindPos(species, back);
    if (p == NULL)
        return;
    sC->monSprite = monSpriteId;
    flipped = gSprites[monSpriteId].hFlip;
    head = GetSlotValue(code, ACC_SLOT_HEAD);
    eyes = GetSlotValue(code, ACC_SLOT_EYES);
    if (back)
        eyes = 0; // de costas não se vê o rosto

    for (slot = 0; slot < ACC_NUM_SLOTS; slot++)
    {
        u8 item = sPalItem[slot];
        if (slot == ACC_SLOT_HEAD) item = head ? head - 1 : 0;
        if (slot == ACC_SLOT_EYES) item = eyes == 2 ? 4 : 3;
        sC->palNum[slot] = 0xFF;
        if (GetSlotValue(code, slot) == 0 || (back && slot == ACC_SLOT_EYES))
            continue;
        sC->palNum[slot] = AllocSpritePalette(0xAC00 + ctx * 8 + slot);
        if (sC->palNum[slot] != 0xFF)
            LoadPalette(sAccArt[item].pal, OBJ_PLTT_ID(sC->palNum[slot]), PLTT_SIZE_4BPP);
    }
    if (GetSlotValue(code, ACC_SLOT_CLOTH))
        AddAccSprite(ACC_SLOT_CLOTH, ITEM_CLOTH, p->scale, p->neckX, p->neckY - p->scale, 2, flipped);
    if (GetSlotValue(code, ACC_SLOT_SHOES))
        for (i = 0; i < 2; i++)
            AddAccSprite(ACC_SLOT_SHOES, ITEM_SHOES, p->scale, i ? p->foot1X : p->foot0X, (i ? p->foot1Y : p->foot0Y) + 1, 3, flipped);
    if (GetSlotValue(code, ACC_SLOT_GLOVES))
        for (i = 0; i < 2; i++)
            AddAccSprite(ACC_SLOT_GLOVES, ITEM_GLOVES, p->scale, i ? p->hand1X : p->hand0X, i ? p->hand1Y : p->hand0Y, 1, flipped);
    if (eyes)
        AddAccSprite(ACC_SLOT_EYES, eyes == 2 ? 4 : 3, p->scale, p->eyeX, p->eyeY, 1, flipped);
    if (head)
        AddAccSprite(ACC_SLOT_HEAD, head - 1, p->scale, p->topX, p->topY, 0, flipped);
}

void SummaryAcc_Refresh(struct Pokemon *mon, u8 monSpriteId)
{
    if (GetMonData(mon, MON_DATA_IS_EGG))
        DestroyCtx(&sCtx[0]);
    else
        BuildCtx(0, GetMonData(mon, MON_DATA_ACCESSORY), GetMonData(mon, MON_DATA_SPECIES), monSpriteId, FALSE);
}

static u32 sKey[2];

// Batalha: chamado todo quadro; refaz os acessórios quando muda o Pokémon do jogador.
void BattleAcc_Update(void)
{
    u8 side, b;

    for (side = 0; side < 2; side++)
    {
        struct AccCtx *c = &sCtx[1 + side];
        u8 pos = side == 0 ? B_POSITION_PLAYER_LEFT : B_POSITION_PLAYER_RIGHT;
        u32 key = 0;
        u8 spriteId = SPRITE_NONE, code = 0;
        u16 species = 0;

        b = GetBattlerAtPosition(pos);
        if (b < gBattlersCount && gBattlerPartyIndexes[b] < PARTY_SIZE && gBattlerSpriteIds[b] < MAX_SPRITES
            && gSprites[gBattlerSpriteIds[b]].inUse && !(gBattleTypeFlags & BATTLE_TYPE_LINK))
        {
            struct Pokemon *mon = &gPlayerParty[gBattlerPartyIndexes[b]];

            spriteId = gBattlerSpriteIds[b];
            code = GetMonData(mon, MON_DATA_ACCESSORY);
            species = gBattleMons[b].species;
            key = (GetMonData(mon, MON_DATA_PERSONALITY) ^ (species << 16) ^ (code << 8) ^ (spriteId << 24)) | 1;
        }
        if (key != sKey[side])
        {
            sKey[side] = key;
            BuildCtx(1 + side, code, species, spriteId, TRUE);
        }
    }
}

void BattleAcc_Clear(void)
{
    DestroyCtx(&sCtx[1]);
    DestroyCtx(&sCtx[2]);
    sKey[0] = sKey[1] = 0;
}
