#include "global.h"
#include "constants/event_objects.h"
#include "event_data.h"
#include "gba/gba.h"
#include "constants/rgb.h"
#include "gba/types.h"
#include "player_custom.h"
#include "player_custom_pal.h"

u16 gPlayerCustomPal[16];

static u8 Get(u8 shift, u8 mask)
{
    return (VarGet(VAR_PLAYER_LOOK) >> shift) & mask;
}

u8 GetPlayerLookStyle(void)  { u8 v = Get(0, 7);  return v >= CUSTOM_NUM_STYLES ? 0 : v; }
u8 GetPlayerLookSkin(void)   { u8 v = Get(3, 7);  return v >= CUSTOM_NUM_SKIN ? 0 : v; }
u8 GetPlayerLookHair(void)   { u8 v = Get(6, 15); return v >= CUSTOM_NUM_HAIR ? 0 : v; }
u8 GetPlayerLookOutfit(void) { u8 v = Get(10, 15); return v >= CUSTOM_NUM_OUTFIT ? 0 : v; }

void SetPlayerLook(u8 style, u8 skin, u8 hair, u8 outfit)
{
    VarSet(VAR_PLAYER_LOOK, style | (skin << 3) | (hair << 6) | (outfit << 10));
}

static u16 Darken(u16 c)
{
    s32 r = (c & 31) - 6, g = ((c >> 5) & 31) - 6, b = ((c >> 10) & 31) - 6;
    if (r < 0) r = 0;
    if (g < 0) g = 0;
    if (b < 0) b = 0;
    return r | (g << 5) | (b << 10);
}

void BuildPlayerCustomPalette(void)
{
    u8 i;
    const u16 *skin = sCustomSkinPal[GetPlayerLookSkin()];
    const u16 *hair = sCustomHairPal[GetPlayerLookHair()];
    const u16 *out = sCustomOutfitPal[GetPlayerLookOutfit()];

    gPlayerCustomPal[0] = RGB(14, 24, 20);
    for (i = 0; i < 3; i++)
    {
        gPlayerCustomPal[1 + i] = skin[i];
        gPlayerCustomPal[5 + i] = hair[i];
    }
    gPlayerCustomPal[4] = Darken(skin[2]);
    for (i = 0; i < 5; i++)
        gPlayerCustomPal[8 + i] = out[i];
    gPlayerCustomPal[13] = out[5];
    gPlayerCustomPal[14] = RGB_WHITE;
    gPlayerCustomPal[15] = RGB_BLACK;
}

u16 GetCustomPlayerGfxId(u8 gender, u8 stateIndex)
{
    return OBJ_EVENT_GFX_CUSTOM_BASE + (gender * CUSTOM_NUM_STYLES + GetPlayerLookStyle()) * CUSTOM_NUM_STATES + stateIndex;
}
