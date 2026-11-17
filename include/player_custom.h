#ifndef GUARD_PLAYER_CUSTOM_H
#define GUARD_PLAYER_CUSTOM_H

#define VAR_PLAYER_LOOK VAR_UNUSED_0x40BB

extern u16 gPlayerCustomPal[16];

void BuildPlayerCustomPalette(void);
u8 GetPlayerLookStyle(void);
u8 GetPlayerLookSkin(void);
u8 GetPlayerLookHair(void);
u8 GetPlayerLookOutfit(void);
void SetPlayerLook(u8 style, u8 skin, u8 hair, u8 outfit);
u16 GetCustomPlayerGfxId(u8 gender, u8 stateIndex);

#endif
