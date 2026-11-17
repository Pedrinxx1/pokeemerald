// GERADO por gerar_c.py - personagem customizavel


static const u32 gObjectEventPic_CstBrendan0Normal[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/original/walking.4bpp", "graphics/object_events/pics/people/custom/brendan/original/running.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan0Normal[] = {
    overworld_ascending_frames(gObjectEventPic_CstBrendan0Normal, 2, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan0Normal = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_BrendanMayNormal,
    .images = sPicTable_CstBrendan0Normal,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan0MachBike[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/original/mach_bike.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan0MachBike[] = {
    overworld_ascending_frames(gObjectEventPic_CstBrendan0MachBike, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan0MachBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstBrendan0MachBike,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan0AcroBike[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/original/acro_bike.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan0AcroBike[] = {
    overworld_ascending_frames(gObjectEventPic_CstBrendan0AcroBike, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan0AcroBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_AcroBike,
    .images = sPicTable_CstBrendan0AcroBike,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan0Surfing[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/original/surfing.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan0Surfing[] = {
    overworld_frame(gObjectEventPic_CstBrendan0Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan0Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan0Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstBrendan0Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan0Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan0Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan0Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan0Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstBrendan0Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstBrendan0Surfing, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan0Surfing, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstBrendan0Surfing, 4, 4, 5),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan0Surfing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Surfing,
    .images = sPicTable_CstBrendan0Surfing,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan0Underwater[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/original/underwater.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan0Underwater[] = {
    overworld_frame(gObjectEventPic_CstBrendan0Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan0Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan0Underwater, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan0Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan0Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan0Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan0Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan0Underwater, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan0Underwater, 4, 4, 2),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan0Underwater = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstBrendan0Underwater,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan0FieldMove[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/original/field_move.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan0FieldMove[] = {
    overworld_ascending_frames(gObjectEventPic_CstBrendan0FieldMove, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan0FieldMove = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_FieldMove,
    .images = sPicTable_CstBrendan0FieldMove,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan0Fishing[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/original/fishing.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan0Fishing[] = {
    overworld_ascending_frames(gObjectEventPic_CstBrendan0Fishing, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan0Fishing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Fishing,
    .images = sPicTable_CstBrendan0Fishing,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan0Watering[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/original/watering.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan0Watering[] = {
    overworld_frame(gObjectEventPic_CstBrendan0Watering, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan0Watering, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan0Watering, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstBrendan0Watering, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan0Watering, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan0Watering, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstBrendan0Watering, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstBrendan0Watering, 4, 4, 5),
    overworld_frame(gObjectEventPic_CstBrendan0Watering, 4, 4, 5),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan0Watering = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstBrendan0Watering,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan0Decorating[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/original/decorating.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan0Decorating[] = {
    obj_frame_tiles(gObjectEventPic_CstBrendan0Decorating),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan0Decorating = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_CstBrendan0Decorating,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan1Normal[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/curto/walking.4bpp", "graphics/object_events/pics/people/custom/brendan/curto/running.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan1Normal[] = {
    overworld_ascending_frames(gObjectEventPic_CstBrendan1Normal, 2, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan1Normal = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_BrendanMayNormal,
    .images = sPicTable_CstBrendan1Normal,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan1MachBike[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/curto/mach_bike.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan1MachBike[] = {
    overworld_ascending_frames(gObjectEventPic_CstBrendan1MachBike, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan1MachBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstBrendan1MachBike,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan1AcroBike[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/curto/acro_bike.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan1AcroBike[] = {
    overworld_ascending_frames(gObjectEventPic_CstBrendan1AcroBike, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan1AcroBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_AcroBike,
    .images = sPicTable_CstBrendan1AcroBike,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan1Surfing[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/curto/surfing.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan1Surfing[] = {
    overworld_frame(gObjectEventPic_CstBrendan1Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan1Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan1Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstBrendan1Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan1Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan1Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan1Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan1Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstBrendan1Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstBrendan1Surfing, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan1Surfing, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstBrendan1Surfing, 4, 4, 5),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan1Surfing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Surfing,
    .images = sPicTable_CstBrendan1Surfing,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan1Underwater[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/curto/underwater.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan1Underwater[] = {
    overworld_frame(gObjectEventPic_CstBrendan1Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan1Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan1Underwater, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan1Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan1Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan1Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan1Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan1Underwater, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan1Underwater, 4, 4, 2),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan1Underwater = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstBrendan1Underwater,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan1FieldMove[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/curto/field_move.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan1FieldMove[] = {
    overworld_ascending_frames(gObjectEventPic_CstBrendan1FieldMove, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan1FieldMove = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_FieldMove,
    .images = sPicTable_CstBrendan1FieldMove,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan1Fishing[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/curto/fishing.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan1Fishing[] = {
    overworld_ascending_frames(gObjectEventPic_CstBrendan1Fishing, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan1Fishing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Fishing,
    .images = sPicTable_CstBrendan1Fishing,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan1Watering[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/curto/watering.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan1Watering[] = {
    overworld_frame(gObjectEventPic_CstBrendan1Watering, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan1Watering, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan1Watering, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstBrendan1Watering, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan1Watering, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan1Watering, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstBrendan1Watering, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstBrendan1Watering, 4, 4, 5),
    overworld_frame(gObjectEventPic_CstBrendan1Watering, 4, 4, 5),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan1Watering = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstBrendan1Watering,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan1Decorating[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/curto/decorating.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan1Decorating[] = {
    obj_frame_tiles(gObjectEventPic_CstBrendan1Decorating),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan1Decorating = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_CstBrendan1Decorating,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan2Normal[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/espetado/walking.4bpp", "graphics/object_events/pics/people/custom/brendan/espetado/running.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan2Normal[] = {
    overworld_ascending_frames(gObjectEventPic_CstBrendan2Normal, 2, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan2Normal = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_BrendanMayNormal,
    .images = sPicTable_CstBrendan2Normal,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan2MachBike[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/espetado/mach_bike.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan2MachBike[] = {
    overworld_ascending_frames(gObjectEventPic_CstBrendan2MachBike, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan2MachBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstBrendan2MachBike,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan2AcroBike[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/espetado/acro_bike.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan2AcroBike[] = {
    overworld_ascending_frames(gObjectEventPic_CstBrendan2AcroBike, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan2AcroBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_AcroBike,
    .images = sPicTable_CstBrendan2AcroBike,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan2Surfing[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/espetado/surfing.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan2Surfing[] = {
    overworld_frame(gObjectEventPic_CstBrendan2Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan2Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan2Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstBrendan2Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan2Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan2Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan2Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan2Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstBrendan2Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstBrendan2Surfing, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan2Surfing, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstBrendan2Surfing, 4, 4, 5),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan2Surfing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Surfing,
    .images = sPicTable_CstBrendan2Surfing,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan2Underwater[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/espetado/underwater.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan2Underwater[] = {
    overworld_frame(gObjectEventPic_CstBrendan2Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan2Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan2Underwater, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan2Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan2Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan2Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan2Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan2Underwater, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan2Underwater, 4, 4, 2),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan2Underwater = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstBrendan2Underwater,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan2FieldMove[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/espetado/field_move.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan2FieldMove[] = {
    overworld_ascending_frames(gObjectEventPic_CstBrendan2FieldMove, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan2FieldMove = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_FieldMove,
    .images = sPicTable_CstBrendan2FieldMove,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan2Fishing[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/espetado/fishing.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan2Fishing[] = {
    overworld_ascending_frames(gObjectEventPic_CstBrendan2Fishing, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan2Fishing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Fishing,
    .images = sPicTable_CstBrendan2Fishing,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan2Watering[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/espetado/watering.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan2Watering[] = {
    overworld_frame(gObjectEventPic_CstBrendan2Watering, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan2Watering, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan2Watering, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstBrendan2Watering, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan2Watering, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan2Watering, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstBrendan2Watering, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstBrendan2Watering, 4, 4, 5),
    overworld_frame(gObjectEventPic_CstBrendan2Watering, 4, 4, 5),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan2Watering = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstBrendan2Watering,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan2Decorating[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/espetado/decorating.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan2Decorating[] = {
    obj_frame_tiles(gObjectEventPic_CstBrendan2Decorating),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan2Decorating = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_CstBrendan2Decorating,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan3Normal[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/moicano/walking.4bpp", "graphics/object_events/pics/people/custom/brendan/moicano/running.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan3Normal[] = {
    overworld_ascending_frames(gObjectEventPic_CstBrendan3Normal, 2, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan3Normal = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_BrendanMayNormal,
    .images = sPicTable_CstBrendan3Normal,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan3MachBike[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/moicano/mach_bike.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan3MachBike[] = {
    overworld_ascending_frames(gObjectEventPic_CstBrendan3MachBike, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan3MachBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstBrendan3MachBike,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan3AcroBike[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/moicano/acro_bike.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan3AcroBike[] = {
    overworld_ascending_frames(gObjectEventPic_CstBrendan3AcroBike, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan3AcroBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_AcroBike,
    .images = sPicTable_CstBrendan3AcroBike,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan3Surfing[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/moicano/surfing.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan3Surfing[] = {
    overworld_frame(gObjectEventPic_CstBrendan3Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan3Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan3Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstBrendan3Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan3Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan3Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan3Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan3Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstBrendan3Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstBrendan3Surfing, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan3Surfing, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstBrendan3Surfing, 4, 4, 5),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan3Surfing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Surfing,
    .images = sPicTable_CstBrendan3Surfing,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan3Underwater[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/moicano/underwater.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan3Underwater[] = {
    overworld_frame(gObjectEventPic_CstBrendan3Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan3Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan3Underwater, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan3Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan3Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan3Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan3Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan3Underwater, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan3Underwater, 4, 4, 2),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan3Underwater = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstBrendan3Underwater,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan3FieldMove[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/moicano/field_move.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan3FieldMove[] = {
    overworld_ascending_frames(gObjectEventPic_CstBrendan3FieldMove, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan3FieldMove = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_FieldMove,
    .images = sPicTable_CstBrendan3FieldMove,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan3Fishing[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/moicano/fishing.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan3Fishing[] = {
    overworld_ascending_frames(gObjectEventPic_CstBrendan3Fishing, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan3Fishing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Fishing,
    .images = sPicTable_CstBrendan3Fishing,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan3Watering[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/moicano/watering.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan3Watering[] = {
    overworld_frame(gObjectEventPic_CstBrendan3Watering, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan3Watering, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan3Watering, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstBrendan3Watering, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan3Watering, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan3Watering, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstBrendan3Watering, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstBrendan3Watering, 4, 4, 5),
    overworld_frame(gObjectEventPic_CstBrendan3Watering, 4, 4, 5),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan3Watering = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstBrendan3Watering,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan3Decorating[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/moicano/decorating.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan3Decorating[] = {
    obj_frame_tiles(gObjectEventPic_CstBrendan3Decorating),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan3Decorating = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_CstBrendan3Decorating,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan4Normal[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/longo/walking.4bpp", "graphics/object_events/pics/people/custom/brendan/longo/running.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan4Normal[] = {
    overworld_ascending_frames(gObjectEventPic_CstBrendan4Normal, 2, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan4Normal = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_BrendanMayNormal,
    .images = sPicTable_CstBrendan4Normal,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan4MachBike[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/longo/mach_bike.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan4MachBike[] = {
    overworld_ascending_frames(gObjectEventPic_CstBrendan4MachBike, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan4MachBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstBrendan4MachBike,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan4AcroBike[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/longo/acro_bike.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan4AcroBike[] = {
    overworld_ascending_frames(gObjectEventPic_CstBrendan4AcroBike, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan4AcroBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_AcroBike,
    .images = sPicTable_CstBrendan4AcroBike,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan4Surfing[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/longo/surfing.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan4Surfing[] = {
    overworld_frame(gObjectEventPic_CstBrendan4Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan4Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan4Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstBrendan4Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan4Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan4Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan4Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan4Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstBrendan4Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstBrendan4Surfing, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan4Surfing, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstBrendan4Surfing, 4, 4, 5),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan4Surfing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Surfing,
    .images = sPicTable_CstBrendan4Surfing,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan4Underwater[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/longo/underwater.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan4Underwater[] = {
    overworld_frame(gObjectEventPic_CstBrendan4Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan4Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan4Underwater, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan4Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan4Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan4Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan4Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan4Underwater, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan4Underwater, 4, 4, 2),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan4Underwater = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstBrendan4Underwater,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan4FieldMove[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/longo/field_move.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan4FieldMove[] = {
    overworld_ascending_frames(gObjectEventPic_CstBrendan4FieldMove, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan4FieldMove = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_FieldMove,
    .images = sPicTable_CstBrendan4FieldMove,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan4Fishing[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/longo/fishing.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan4Fishing[] = {
    overworld_ascending_frames(gObjectEventPic_CstBrendan4Fishing, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan4Fishing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Fishing,
    .images = sPicTable_CstBrendan4Fishing,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan4Watering[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/longo/watering.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan4Watering[] = {
    overworld_frame(gObjectEventPic_CstBrendan4Watering, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan4Watering, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan4Watering, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstBrendan4Watering, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan4Watering, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan4Watering, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstBrendan4Watering, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstBrendan4Watering, 4, 4, 5),
    overworld_frame(gObjectEventPic_CstBrendan4Watering, 4, 4, 5),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan4Watering = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstBrendan4Watering,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan4Decorating[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/longo/decorating.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan4Decorating[] = {
    obj_frame_tiles(gObjectEventPic_CstBrendan4Decorating),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan4Decorating = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_CstBrendan4Decorating,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan5Normal[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/rabo_de_cavalo/walking.4bpp", "graphics/object_events/pics/people/custom/brendan/rabo_de_cavalo/running.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan5Normal[] = {
    overworld_ascending_frames(gObjectEventPic_CstBrendan5Normal, 2, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan5Normal = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_BrendanMayNormal,
    .images = sPicTable_CstBrendan5Normal,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan5MachBike[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/rabo_de_cavalo/mach_bike.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan5MachBike[] = {
    overworld_ascending_frames(gObjectEventPic_CstBrendan5MachBike, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan5MachBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstBrendan5MachBike,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan5AcroBike[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/rabo_de_cavalo/acro_bike.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan5AcroBike[] = {
    overworld_ascending_frames(gObjectEventPic_CstBrendan5AcroBike, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan5AcroBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_AcroBike,
    .images = sPicTable_CstBrendan5AcroBike,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan5Surfing[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/rabo_de_cavalo/surfing.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan5Surfing[] = {
    overworld_frame(gObjectEventPic_CstBrendan5Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan5Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan5Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstBrendan5Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan5Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan5Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan5Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan5Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstBrendan5Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstBrendan5Surfing, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan5Surfing, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstBrendan5Surfing, 4, 4, 5),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan5Surfing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Surfing,
    .images = sPicTable_CstBrendan5Surfing,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan5Underwater[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/rabo_de_cavalo/underwater.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan5Underwater[] = {
    overworld_frame(gObjectEventPic_CstBrendan5Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan5Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan5Underwater, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan5Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan5Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan5Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan5Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan5Underwater, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan5Underwater, 4, 4, 2),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan5Underwater = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstBrendan5Underwater,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan5FieldMove[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/rabo_de_cavalo/field_move.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan5FieldMove[] = {
    overworld_ascending_frames(gObjectEventPic_CstBrendan5FieldMove, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan5FieldMove = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_FieldMove,
    .images = sPicTable_CstBrendan5FieldMove,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan5Fishing[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/rabo_de_cavalo/fishing.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan5Fishing[] = {
    overworld_ascending_frames(gObjectEventPic_CstBrendan5Fishing, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan5Fishing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Fishing,
    .images = sPicTable_CstBrendan5Fishing,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan5Watering[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/rabo_de_cavalo/watering.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan5Watering[] = {
    overworld_frame(gObjectEventPic_CstBrendan5Watering, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan5Watering, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan5Watering, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstBrendan5Watering, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan5Watering, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan5Watering, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstBrendan5Watering, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstBrendan5Watering, 4, 4, 5),
    overworld_frame(gObjectEventPic_CstBrendan5Watering, 4, 4, 5),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan5Watering = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstBrendan5Watering,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan5Decorating[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/rabo_de_cavalo/decorating.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan5Decorating[] = {
    obj_frame_tiles(gObjectEventPic_CstBrendan5Decorating),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan5Decorating = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_CstBrendan5Decorating,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan6Normal[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/black_power/walking.4bpp", "graphics/object_events/pics/people/custom/brendan/black_power/running.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan6Normal[] = {
    overworld_ascending_frames(gObjectEventPic_CstBrendan6Normal, 2, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan6Normal = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_BrendanMayNormal,
    .images = sPicTable_CstBrendan6Normal,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan6MachBike[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/black_power/mach_bike.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan6MachBike[] = {
    overworld_ascending_frames(gObjectEventPic_CstBrendan6MachBike, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan6MachBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstBrendan6MachBike,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan6AcroBike[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/black_power/acro_bike.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan6AcroBike[] = {
    overworld_ascending_frames(gObjectEventPic_CstBrendan6AcroBike, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan6AcroBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_AcroBike,
    .images = sPicTable_CstBrendan6AcroBike,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan6Surfing[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/black_power/surfing.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan6Surfing[] = {
    overworld_frame(gObjectEventPic_CstBrendan6Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan6Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan6Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstBrendan6Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan6Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan6Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan6Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan6Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstBrendan6Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstBrendan6Surfing, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan6Surfing, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstBrendan6Surfing, 4, 4, 5),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan6Surfing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Surfing,
    .images = sPicTable_CstBrendan6Surfing,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan6Underwater[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/black_power/underwater.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan6Underwater[] = {
    overworld_frame(gObjectEventPic_CstBrendan6Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan6Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan6Underwater, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan6Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan6Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan6Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan6Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan6Underwater, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan6Underwater, 4, 4, 2),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan6Underwater = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstBrendan6Underwater,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan6FieldMove[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/black_power/field_move.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan6FieldMove[] = {
    overworld_ascending_frames(gObjectEventPic_CstBrendan6FieldMove, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan6FieldMove = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_FieldMove,
    .images = sPicTable_CstBrendan6FieldMove,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan6Fishing[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/black_power/fishing.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan6Fishing[] = {
    overworld_ascending_frames(gObjectEventPic_CstBrendan6Fishing, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan6Fishing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Fishing,
    .images = sPicTable_CstBrendan6Fishing,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan6Watering[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/black_power/watering.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan6Watering[] = {
    overworld_frame(gObjectEventPic_CstBrendan6Watering, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstBrendan6Watering, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstBrendan6Watering, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstBrendan6Watering, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan6Watering, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstBrendan6Watering, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstBrendan6Watering, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstBrendan6Watering, 4, 4, 5),
    overworld_frame(gObjectEventPic_CstBrendan6Watering, 4, 4, 5),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan6Watering = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstBrendan6Watering,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstBrendan6Decorating[] = INCBIN_U32("graphics/object_events/pics/people/custom/brendan/black_power/decorating.4bpp");

static const struct SpriteFrameImage sPicTable_CstBrendan6Decorating[] = {
    obj_frame_tiles(gObjectEventPic_CstBrendan6Decorating),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstBrendan6Decorating = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_CstBrendan6Decorating,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay0Normal[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/original/walking.4bpp", "graphics/object_events/pics/people/custom/may/original/running.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay0Normal[] = {
    overworld_ascending_frames(gObjectEventPic_CstMay0Normal, 2, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay0Normal = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_BrendanMayNormal,
    .images = sPicTable_CstMay0Normal,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay0MachBike[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/original/mach_bike.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay0MachBike[] = {
    overworld_ascending_frames(gObjectEventPic_CstMay0MachBike, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay0MachBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstMay0MachBike,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay0AcroBike[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/original/acro_bike.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay0AcroBike[] = {
    overworld_ascending_frames(gObjectEventPic_CstMay0AcroBike, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay0AcroBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_AcroBike,
    .images = sPicTable_CstMay0AcroBike,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay0Surfing[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/original/surfing.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay0Surfing[] = {
    overworld_frame(gObjectEventPic_CstMay0Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay0Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay0Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstMay0Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay0Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay0Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay0Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay0Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstMay0Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstMay0Surfing, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay0Surfing, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstMay0Surfing, 4, 4, 5),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay0Surfing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Surfing,
    .images = sPicTable_CstMay0Surfing,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay0Underwater[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/original/underwater.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay0Underwater[] = {
    overworld_frame(gObjectEventPic_CstMay0Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay0Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay0Underwater, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay0Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay0Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay0Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay0Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay0Underwater, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay0Underwater, 4, 4, 2),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay0Underwater = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstMay0Underwater,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay0FieldMove[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/original/field_move.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay0FieldMove[] = {
    overworld_ascending_frames(gObjectEventPic_CstMay0FieldMove, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay0FieldMove = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_FieldMove,
    .images = sPicTable_CstMay0FieldMove,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay0Fishing[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/original/fishing.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay0Fishing[] = {
    overworld_ascending_frames(gObjectEventPic_CstMay0Fishing, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay0Fishing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Fishing,
    .images = sPicTable_CstMay0Fishing,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay0Watering[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/original/watering.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay0Watering[] = {
    overworld_frame(gObjectEventPic_CstMay0Watering, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay0Watering, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay0Watering, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstMay0Watering, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay0Watering, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay0Watering, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstMay0Watering, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstMay0Watering, 4, 4, 5),
    overworld_frame(gObjectEventPic_CstMay0Watering, 4, 4, 5),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay0Watering = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstMay0Watering,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay0Decorating[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/original/decorating.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay0Decorating[] = {
    obj_frame_tiles(gObjectEventPic_CstMay0Decorating),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay0Decorating = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_CstMay0Decorating,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay1Normal[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/curto/walking.4bpp", "graphics/object_events/pics/people/custom/may/curto/running.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay1Normal[] = {
    overworld_ascending_frames(gObjectEventPic_CstMay1Normal, 2, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay1Normal = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_BrendanMayNormal,
    .images = sPicTable_CstMay1Normal,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay1MachBike[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/curto/mach_bike.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay1MachBike[] = {
    overworld_ascending_frames(gObjectEventPic_CstMay1MachBike, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay1MachBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstMay1MachBike,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay1AcroBike[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/curto/acro_bike.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay1AcroBike[] = {
    overworld_ascending_frames(gObjectEventPic_CstMay1AcroBike, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay1AcroBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_AcroBike,
    .images = sPicTable_CstMay1AcroBike,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay1Surfing[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/curto/surfing.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay1Surfing[] = {
    overworld_frame(gObjectEventPic_CstMay1Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay1Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay1Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstMay1Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay1Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay1Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay1Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay1Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstMay1Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstMay1Surfing, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay1Surfing, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstMay1Surfing, 4, 4, 5),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay1Surfing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Surfing,
    .images = sPicTable_CstMay1Surfing,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay1Underwater[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/curto/underwater.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay1Underwater[] = {
    overworld_frame(gObjectEventPic_CstMay1Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay1Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay1Underwater, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay1Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay1Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay1Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay1Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay1Underwater, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay1Underwater, 4, 4, 2),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay1Underwater = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstMay1Underwater,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay1FieldMove[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/curto/field_move.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay1FieldMove[] = {
    overworld_ascending_frames(gObjectEventPic_CstMay1FieldMove, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay1FieldMove = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_FieldMove,
    .images = sPicTable_CstMay1FieldMove,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay1Fishing[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/curto/fishing.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay1Fishing[] = {
    overworld_ascending_frames(gObjectEventPic_CstMay1Fishing, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay1Fishing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Fishing,
    .images = sPicTable_CstMay1Fishing,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay1Watering[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/curto/watering.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay1Watering[] = {
    overworld_frame(gObjectEventPic_CstMay1Watering, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay1Watering, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay1Watering, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstMay1Watering, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay1Watering, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay1Watering, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstMay1Watering, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstMay1Watering, 4, 4, 5),
    overworld_frame(gObjectEventPic_CstMay1Watering, 4, 4, 5),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay1Watering = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstMay1Watering,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay1Decorating[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/curto/decorating.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay1Decorating[] = {
    obj_frame_tiles(gObjectEventPic_CstMay1Decorating),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay1Decorating = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_CstMay1Decorating,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay2Normal[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/espetado/walking.4bpp", "graphics/object_events/pics/people/custom/may/espetado/running.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay2Normal[] = {
    overworld_ascending_frames(gObjectEventPic_CstMay2Normal, 2, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay2Normal = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_BrendanMayNormal,
    .images = sPicTable_CstMay2Normal,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay2MachBike[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/espetado/mach_bike.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay2MachBike[] = {
    overworld_ascending_frames(gObjectEventPic_CstMay2MachBike, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay2MachBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstMay2MachBike,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay2AcroBike[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/espetado/acro_bike.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay2AcroBike[] = {
    overworld_ascending_frames(gObjectEventPic_CstMay2AcroBike, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay2AcroBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_AcroBike,
    .images = sPicTable_CstMay2AcroBike,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay2Surfing[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/espetado/surfing.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay2Surfing[] = {
    overworld_frame(gObjectEventPic_CstMay2Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay2Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay2Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstMay2Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay2Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay2Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay2Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay2Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstMay2Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstMay2Surfing, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay2Surfing, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstMay2Surfing, 4, 4, 5),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay2Surfing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Surfing,
    .images = sPicTable_CstMay2Surfing,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay2Underwater[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/espetado/underwater.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay2Underwater[] = {
    overworld_frame(gObjectEventPic_CstMay2Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay2Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay2Underwater, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay2Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay2Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay2Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay2Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay2Underwater, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay2Underwater, 4, 4, 2),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay2Underwater = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstMay2Underwater,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay2FieldMove[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/espetado/field_move.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay2FieldMove[] = {
    overworld_ascending_frames(gObjectEventPic_CstMay2FieldMove, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay2FieldMove = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_FieldMove,
    .images = sPicTable_CstMay2FieldMove,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay2Fishing[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/espetado/fishing.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay2Fishing[] = {
    overworld_ascending_frames(gObjectEventPic_CstMay2Fishing, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay2Fishing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Fishing,
    .images = sPicTable_CstMay2Fishing,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay2Watering[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/espetado/watering.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay2Watering[] = {
    overworld_frame(gObjectEventPic_CstMay2Watering, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay2Watering, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay2Watering, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstMay2Watering, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay2Watering, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay2Watering, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstMay2Watering, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstMay2Watering, 4, 4, 5),
    overworld_frame(gObjectEventPic_CstMay2Watering, 4, 4, 5),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay2Watering = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstMay2Watering,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay2Decorating[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/espetado/decorating.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay2Decorating[] = {
    obj_frame_tiles(gObjectEventPic_CstMay2Decorating),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay2Decorating = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_CstMay2Decorating,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay3Normal[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/moicano/walking.4bpp", "graphics/object_events/pics/people/custom/may/moicano/running.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay3Normal[] = {
    overworld_ascending_frames(gObjectEventPic_CstMay3Normal, 2, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay3Normal = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_BrendanMayNormal,
    .images = sPicTable_CstMay3Normal,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay3MachBike[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/moicano/mach_bike.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay3MachBike[] = {
    overworld_ascending_frames(gObjectEventPic_CstMay3MachBike, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay3MachBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstMay3MachBike,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay3AcroBike[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/moicano/acro_bike.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay3AcroBike[] = {
    overworld_ascending_frames(gObjectEventPic_CstMay3AcroBike, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay3AcroBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_AcroBike,
    .images = sPicTable_CstMay3AcroBike,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay3Surfing[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/moicano/surfing.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay3Surfing[] = {
    overworld_frame(gObjectEventPic_CstMay3Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay3Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay3Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstMay3Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay3Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay3Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay3Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay3Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstMay3Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstMay3Surfing, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay3Surfing, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstMay3Surfing, 4, 4, 5),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay3Surfing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Surfing,
    .images = sPicTable_CstMay3Surfing,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay3Underwater[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/moicano/underwater.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay3Underwater[] = {
    overworld_frame(gObjectEventPic_CstMay3Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay3Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay3Underwater, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay3Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay3Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay3Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay3Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay3Underwater, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay3Underwater, 4, 4, 2),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay3Underwater = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstMay3Underwater,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay3FieldMove[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/moicano/field_move.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay3FieldMove[] = {
    overworld_ascending_frames(gObjectEventPic_CstMay3FieldMove, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay3FieldMove = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_FieldMove,
    .images = sPicTable_CstMay3FieldMove,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay3Fishing[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/moicano/fishing.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay3Fishing[] = {
    overworld_ascending_frames(gObjectEventPic_CstMay3Fishing, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay3Fishing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Fishing,
    .images = sPicTable_CstMay3Fishing,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay3Watering[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/moicano/watering.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay3Watering[] = {
    overworld_frame(gObjectEventPic_CstMay3Watering, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay3Watering, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay3Watering, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstMay3Watering, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay3Watering, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay3Watering, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstMay3Watering, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstMay3Watering, 4, 4, 5),
    overworld_frame(gObjectEventPic_CstMay3Watering, 4, 4, 5),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay3Watering = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstMay3Watering,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay3Decorating[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/moicano/decorating.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay3Decorating[] = {
    obj_frame_tiles(gObjectEventPic_CstMay3Decorating),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay3Decorating = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_CstMay3Decorating,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay4Normal[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/longo/walking.4bpp", "graphics/object_events/pics/people/custom/may/longo/running.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay4Normal[] = {
    overworld_ascending_frames(gObjectEventPic_CstMay4Normal, 2, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay4Normal = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_BrendanMayNormal,
    .images = sPicTable_CstMay4Normal,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay4MachBike[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/longo/mach_bike.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay4MachBike[] = {
    overworld_ascending_frames(gObjectEventPic_CstMay4MachBike, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay4MachBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstMay4MachBike,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay4AcroBike[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/longo/acro_bike.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay4AcroBike[] = {
    overworld_ascending_frames(gObjectEventPic_CstMay4AcroBike, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay4AcroBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_AcroBike,
    .images = sPicTable_CstMay4AcroBike,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay4Surfing[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/longo/surfing.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay4Surfing[] = {
    overworld_frame(gObjectEventPic_CstMay4Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay4Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay4Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstMay4Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay4Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay4Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay4Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay4Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstMay4Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstMay4Surfing, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay4Surfing, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstMay4Surfing, 4, 4, 5),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay4Surfing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Surfing,
    .images = sPicTable_CstMay4Surfing,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay4Underwater[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/longo/underwater.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay4Underwater[] = {
    overworld_frame(gObjectEventPic_CstMay4Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay4Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay4Underwater, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay4Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay4Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay4Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay4Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay4Underwater, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay4Underwater, 4, 4, 2),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay4Underwater = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstMay4Underwater,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay4FieldMove[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/longo/field_move.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay4FieldMove[] = {
    overworld_ascending_frames(gObjectEventPic_CstMay4FieldMove, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay4FieldMove = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_FieldMove,
    .images = sPicTable_CstMay4FieldMove,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay4Fishing[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/longo/fishing.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay4Fishing[] = {
    overworld_ascending_frames(gObjectEventPic_CstMay4Fishing, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay4Fishing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Fishing,
    .images = sPicTable_CstMay4Fishing,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay4Watering[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/longo/watering.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay4Watering[] = {
    overworld_frame(gObjectEventPic_CstMay4Watering, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay4Watering, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay4Watering, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstMay4Watering, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay4Watering, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay4Watering, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstMay4Watering, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstMay4Watering, 4, 4, 5),
    overworld_frame(gObjectEventPic_CstMay4Watering, 4, 4, 5),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay4Watering = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstMay4Watering,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay4Decorating[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/longo/decorating.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay4Decorating[] = {
    obj_frame_tiles(gObjectEventPic_CstMay4Decorating),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay4Decorating = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_CstMay4Decorating,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay5Normal[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/rabo_de_cavalo/walking.4bpp", "graphics/object_events/pics/people/custom/may/rabo_de_cavalo/running.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay5Normal[] = {
    overworld_ascending_frames(gObjectEventPic_CstMay5Normal, 2, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay5Normal = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_BrendanMayNormal,
    .images = sPicTable_CstMay5Normal,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay5MachBike[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/rabo_de_cavalo/mach_bike.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay5MachBike[] = {
    overworld_ascending_frames(gObjectEventPic_CstMay5MachBike, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay5MachBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstMay5MachBike,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay5AcroBike[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/rabo_de_cavalo/acro_bike.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay5AcroBike[] = {
    overworld_ascending_frames(gObjectEventPic_CstMay5AcroBike, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay5AcroBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_AcroBike,
    .images = sPicTable_CstMay5AcroBike,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay5Surfing[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/rabo_de_cavalo/surfing.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay5Surfing[] = {
    overworld_frame(gObjectEventPic_CstMay5Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay5Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay5Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstMay5Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay5Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay5Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay5Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay5Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstMay5Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstMay5Surfing, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay5Surfing, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstMay5Surfing, 4, 4, 5),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay5Surfing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Surfing,
    .images = sPicTable_CstMay5Surfing,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay5Underwater[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/rabo_de_cavalo/underwater.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay5Underwater[] = {
    overworld_frame(gObjectEventPic_CstMay5Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay5Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay5Underwater, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay5Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay5Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay5Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay5Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay5Underwater, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay5Underwater, 4, 4, 2),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay5Underwater = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstMay5Underwater,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay5FieldMove[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/rabo_de_cavalo/field_move.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay5FieldMove[] = {
    overworld_ascending_frames(gObjectEventPic_CstMay5FieldMove, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay5FieldMove = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_FieldMove,
    .images = sPicTable_CstMay5FieldMove,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay5Fishing[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/rabo_de_cavalo/fishing.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay5Fishing[] = {
    overworld_ascending_frames(gObjectEventPic_CstMay5Fishing, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay5Fishing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Fishing,
    .images = sPicTable_CstMay5Fishing,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay5Watering[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/rabo_de_cavalo/watering.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay5Watering[] = {
    overworld_frame(gObjectEventPic_CstMay5Watering, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay5Watering, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay5Watering, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstMay5Watering, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay5Watering, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay5Watering, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstMay5Watering, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstMay5Watering, 4, 4, 5),
    overworld_frame(gObjectEventPic_CstMay5Watering, 4, 4, 5),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay5Watering = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstMay5Watering,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay5Decorating[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/rabo_de_cavalo/decorating.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay5Decorating[] = {
    obj_frame_tiles(gObjectEventPic_CstMay5Decorating),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay5Decorating = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_CstMay5Decorating,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay6Normal[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/black_power/walking.4bpp", "graphics/object_events/pics/people/custom/may/black_power/running.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay6Normal[] = {
    overworld_ascending_frames(gObjectEventPic_CstMay6Normal, 2, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay6Normal = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_BrendanMayNormal,
    .images = sPicTable_CstMay6Normal,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay6MachBike[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/black_power/mach_bike.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay6MachBike[] = {
    overworld_ascending_frames(gObjectEventPic_CstMay6MachBike, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay6MachBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstMay6MachBike,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay6AcroBike[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/black_power/acro_bike.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay6AcroBike[] = {
    overworld_ascending_frames(gObjectEventPic_CstMay6AcroBike, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay6AcroBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_AcroBike,
    .images = sPicTable_CstMay6AcroBike,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay6Surfing[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/black_power/surfing.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay6Surfing[] = {
    overworld_frame(gObjectEventPic_CstMay6Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay6Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay6Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstMay6Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay6Surfing, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay6Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay6Surfing, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay6Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstMay6Surfing, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstMay6Surfing, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay6Surfing, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstMay6Surfing, 4, 4, 5),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay6Surfing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Surfing,
    .images = sPicTable_CstMay6Surfing,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay6Underwater[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/black_power/underwater.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay6Underwater[] = {
    overworld_frame(gObjectEventPic_CstMay6Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay6Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay6Underwater, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay6Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay6Underwater, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay6Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay6Underwater, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay6Underwater, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay6Underwater, 4, 4, 2),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay6Underwater = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstMay6Underwater,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay6FieldMove[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/black_power/field_move.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay6FieldMove[] = {
    overworld_ascending_frames(gObjectEventPic_CstMay6FieldMove, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay6FieldMove = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_FieldMove,
    .images = sPicTable_CstMay6FieldMove,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay6Fishing[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/black_power/fishing.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay6Fishing[] = {
    overworld_ascending_frames(gObjectEventPic_CstMay6Fishing, 4, 4),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay6Fishing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Fishing,
    .images = sPicTable_CstMay6Fishing,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay6Watering[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/black_power/watering.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay6Watering[] = {
    overworld_frame(gObjectEventPic_CstMay6Watering, 4, 4, 0),
    overworld_frame(gObjectEventPic_CstMay6Watering, 4, 4, 2),
    overworld_frame(gObjectEventPic_CstMay6Watering, 4, 4, 4),
    overworld_frame(gObjectEventPic_CstMay6Watering, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay6Watering, 4, 4, 1),
    overworld_frame(gObjectEventPic_CstMay6Watering, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstMay6Watering, 4, 4, 3),
    overworld_frame(gObjectEventPic_CstMay6Watering, 4, 4, 5),
    overworld_frame(gObjectEventPic_CstMay6Watering, 4, 4, 5),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay6Watering = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_CstMay6Watering,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const u32 gObjectEventPic_CstMay6Decorating[] = INCBIN_U32("graphics/object_events/pics/people/custom/may/black_power/decorating.4bpp");

static const struct SpriteFrameImage sPicTable_CstMay6Decorating[] = {
    obj_frame_tiles(gObjectEventPic_CstMay6Decorating),
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CstMay6Decorating = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_CstMay6Decorating,
    .affineAnims = gDummySpriteAffineAnimTable,
};

const struct ObjectEventGraphicsInfo *const gCustomPlayerGfxInfoPointers[] = {
    &gObjectEventGraphicsInfo_CstBrendan0Normal,
    &gObjectEventGraphicsInfo_CstBrendan0MachBike,
    &gObjectEventGraphicsInfo_CstBrendan0AcroBike,
    &gObjectEventGraphicsInfo_CstBrendan0Surfing,
    &gObjectEventGraphicsInfo_CstBrendan0Underwater,
    &gObjectEventGraphicsInfo_CstBrendan0FieldMove,
    &gObjectEventGraphicsInfo_CstBrendan0Fishing,
    &gObjectEventGraphicsInfo_CstBrendan0Watering,
    &gObjectEventGraphicsInfo_CstBrendan0Decorating,
    &gObjectEventGraphicsInfo_CstBrendan1Normal,
    &gObjectEventGraphicsInfo_CstBrendan1MachBike,
    &gObjectEventGraphicsInfo_CstBrendan1AcroBike,
    &gObjectEventGraphicsInfo_CstBrendan1Surfing,
    &gObjectEventGraphicsInfo_CstBrendan1Underwater,
    &gObjectEventGraphicsInfo_CstBrendan1FieldMove,
    &gObjectEventGraphicsInfo_CstBrendan1Fishing,
    &gObjectEventGraphicsInfo_CstBrendan1Watering,
    &gObjectEventGraphicsInfo_CstBrendan1Decorating,
    &gObjectEventGraphicsInfo_CstBrendan2Normal,
    &gObjectEventGraphicsInfo_CstBrendan2MachBike,
    &gObjectEventGraphicsInfo_CstBrendan2AcroBike,
    &gObjectEventGraphicsInfo_CstBrendan2Surfing,
    &gObjectEventGraphicsInfo_CstBrendan2Underwater,
    &gObjectEventGraphicsInfo_CstBrendan2FieldMove,
    &gObjectEventGraphicsInfo_CstBrendan2Fishing,
    &gObjectEventGraphicsInfo_CstBrendan2Watering,
    &gObjectEventGraphicsInfo_CstBrendan2Decorating,
    &gObjectEventGraphicsInfo_CstBrendan3Normal,
    &gObjectEventGraphicsInfo_CstBrendan3MachBike,
    &gObjectEventGraphicsInfo_CstBrendan3AcroBike,
    &gObjectEventGraphicsInfo_CstBrendan3Surfing,
    &gObjectEventGraphicsInfo_CstBrendan3Underwater,
    &gObjectEventGraphicsInfo_CstBrendan3FieldMove,
    &gObjectEventGraphicsInfo_CstBrendan3Fishing,
    &gObjectEventGraphicsInfo_CstBrendan3Watering,
    &gObjectEventGraphicsInfo_CstBrendan3Decorating,
    &gObjectEventGraphicsInfo_CstBrendan4Normal,
    &gObjectEventGraphicsInfo_CstBrendan4MachBike,
    &gObjectEventGraphicsInfo_CstBrendan4AcroBike,
    &gObjectEventGraphicsInfo_CstBrendan4Surfing,
    &gObjectEventGraphicsInfo_CstBrendan4Underwater,
    &gObjectEventGraphicsInfo_CstBrendan4FieldMove,
    &gObjectEventGraphicsInfo_CstBrendan4Fishing,
    &gObjectEventGraphicsInfo_CstBrendan4Watering,
    &gObjectEventGraphicsInfo_CstBrendan4Decorating,
    &gObjectEventGraphicsInfo_CstBrendan5Normal,
    &gObjectEventGraphicsInfo_CstBrendan5MachBike,
    &gObjectEventGraphicsInfo_CstBrendan5AcroBike,
    &gObjectEventGraphicsInfo_CstBrendan5Surfing,
    &gObjectEventGraphicsInfo_CstBrendan5Underwater,
    &gObjectEventGraphicsInfo_CstBrendan5FieldMove,
    &gObjectEventGraphicsInfo_CstBrendan5Fishing,
    &gObjectEventGraphicsInfo_CstBrendan5Watering,
    &gObjectEventGraphicsInfo_CstBrendan5Decorating,
    &gObjectEventGraphicsInfo_CstBrendan6Normal,
    &gObjectEventGraphicsInfo_CstBrendan6MachBike,
    &gObjectEventGraphicsInfo_CstBrendan6AcroBike,
    &gObjectEventGraphicsInfo_CstBrendan6Surfing,
    &gObjectEventGraphicsInfo_CstBrendan6Underwater,
    &gObjectEventGraphicsInfo_CstBrendan6FieldMove,
    &gObjectEventGraphicsInfo_CstBrendan6Fishing,
    &gObjectEventGraphicsInfo_CstBrendan6Watering,
    &gObjectEventGraphicsInfo_CstBrendan6Decorating,
    &gObjectEventGraphicsInfo_CstMay0Normal,
    &gObjectEventGraphicsInfo_CstMay0MachBike,
    &gObjectEventGraphicsInfo_CstMay0AcroBike,
    &gObjectEventGraphicsInfo_CstMay0Surfing,
    &gObjectEventGraphicsInfo_CstMay0Underwater,
    &gObjectEventGraphicsInfo_CstMay0FieldMove,
    &gObjectEventGraphicsInfo_CstMay0Fishing,
    &gObjectEventGraphicsInfo_CstMay0Watering,
    &gObjectEventGraphicsInfo_CstMay0Decorating,
    &gObjectEventGraphicsInfo_CstMay1Normal,
    &gObjectEventGraphicsInfo_CstMay1MachBike,
    &gObjectEventGraphicsInfo_CstMay1AcroBike,
    &gObjectEventGraphicsInfo_CstMay1Surfing,
    &gObjectEventGraphicsInfo_CstMay1Underwater,
    &gObjectEventGraphicsInfo_CstMay1FieldMove,
    &gObjectEventGraphicsInfo_CstMay1Fishing,
    &gObjectEventGraphicsInfo_CstMay1Watering,
    &gObjectEventGraphicsInfo_CstMay1Decorating,
    &gObjectEventGraphicsInfo_CstMay2Normal,
    &gObjectEventGraphicsInfo_CstMay2MachBike,
    &gObjectEventGraphicsInfo_CstMay2AcroBike,
    &gObjectEventGraphicsInfo_CstMay2Surfing,
    &gObjectEventGraphicsInfo_CstMay2Underwater,
    &gObjectEventGraphicsInfo_CstMay2FieldMove,
    &gObjectEventGraphicsInfo_CstMay2Fishing,
    &gObjectEventGraphicsInfo_CstMay2Watering,
    &gObjectEventGraphicsInfo_CstMay2Decorating,
    &gObjectEventGraphicsInfo_CstMay3Normal,
    &gObjectEventGraphicsInfo_CstMay3MachBike,
    &gObjectEventGraphicsInfo_CstMay3AcroBike,
    &gObjectEventGraphicsInfo_CstMay3Surfing,
    &gObjectEventGraphicsInfo_CstMay3Underwater,
    &gObjectEventGraphicsInfo_CstMay3FieldMove,
    &gObjectEventGraphicsInfo_CstMay3Fishing,
    &gObjectEventGraphicsInfo_CstMay3Watering,
    &gObjectEventGraphicsInfo_CstMay3Decorating,
    &gObjectEventGraphicsInfo_CstMay4Normal,
    &gObjectEventGraphicsInfo_CstMay4MachBike,
    &gObjectEventGraphicsInfo_CstMay4AcroBike,
    &gObjectEventGraphicsInfo_CstMay4Surfing,
    &gObjectEventGraphicsInfo_CstMay4Underwater,
    &gObjectEventGraphicsInfo_CstMay4FieldMove,
    &gObjectEventGraphicsInfo_CstMay4Fishing,
    &gObjectEventGraphicsInfo_CstMay4Watering,
    &gObjectEventGraphicsInfo_CstMay4Decorating,
    &gObjectEventGraphicsInfo_CstMay5Normal,
    &gObjectEventGraphicsInfo_CstMay5MachBike,
    &gObjectEventGraphicsInfo_CstMay5AcroBike,
    &gObjectEventGraphicsInfo_CstMay5Surfing,
    &gObjectEventGraphicsInfo_CstMay5Underwater,
    &gObjectEventGraphicsInfo_CstMay5FieldMove,
    &gObjectEventGraphicsInfo_CstMay5Fishing,
    &gObjectEventGraphicsInfo_CstMay5Watering,
    &gObjectEventGraphicsInfo_CstMay5Decorating,
    &gObjectEventGraphicsInfo_CstMay6Normal,
    &gObjectEventGraphicsInfo_CstMay6MachBike,
    &gObjectEventGraphicsInfo_CstMay6AcroBike,
    &gObjectEventGraphicsInfo_CstMay6Surfing,
    &gObjectEventGraphicsInfo_CstMay6Underwater,
    &gObjectEventGraphicsInfo_CstMay6FieldMove,
    &gObjectEventGraphicsInfo_CstMay6Fishing,
    &gObjectEventGraphicsInfo_CstMay6Watering,
    &gObjectEventGraphicsInfo_CstMay6Decorating,
};
