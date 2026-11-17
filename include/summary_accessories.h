#ifndef GUARD_SUMMARY_ACCESSORIES_H
#define GUARD_SUMMARY_ACCESSORIES_H

// Codigo guardado no Pokemon (7 bits): cabeca(2) | olhos(2)<<2 | sapato<<4 | luva<<5 | roupa<<6
#define ACC_SLOT_HEAD   0
#define ACC_SLOT_EYES   1
#define ACC_SLOT_SHOES  2
#define ACC_SLOT_GLOVES 3
#define ACC_SLOT_CLOTH  4
#define ACC_NUM_SLOTS   5

void SummaryAcc_Refresh(struct Pokemon *mon, u8 monSpriteId);
void SummaryAcc_Destroy(void);
void BattleAcc_Update(void);
void BattleAcc_Clear(void);
u8 SummaryAcc_Change(u8 code, u8 slot, s8 dir);
const u8 *SummaryAcc_GetLabel(u8 code, u8 slot);

#endif
