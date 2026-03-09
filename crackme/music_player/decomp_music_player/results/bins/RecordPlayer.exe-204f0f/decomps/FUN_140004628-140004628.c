
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140004628(void)

{
  code *pcVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [48];
  
  puVar3 = auStack_38;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(2);
    puVar3 = auStack_30;
  }
  *(undefined8 *)(puVar3 + -8) = 0x140004653;
  FUN_1400046fc((PCONTEXT)&DAT_1400093f0);
  _DAT_140009360 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_140009488 = puVar3 + 0x40;
  _DAT_140009470 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_140009350 = 0xc0000409;
  _DAT_140009354 = 1;
  _DAT_140009368 = 1;
  DAT_140009370 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_140009000;
  *(undefined8 *)(puVar3 + 0x28) = DAT_140009040;
  *(undefined8 *)(puVar3 + -8) = 0x1400046f5;
  DAT_1400094e8 = _DAT_140009360;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_140006730);
  return;
}

