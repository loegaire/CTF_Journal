
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140004564(void)

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
  *(undefined8 *)(puVar3 + -8) = 0x14000458f;
  FUN_140004638((PCONTEXT)&DAT_140008340);
  _DAT_1400082b0 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_1400083d8 = puVar3 + 0x40;
  _DAT_1400083c0 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_1400082a0 = 0xc0000409;
  _DAT_1400082a4 = 1;
  _DAT_1400082b8 = 1;
  DAT_1400082c0 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_140008000;
  *(undefined8 *)(puVar3 + 0x28) = DAT_140008040;
  *(undefined8 *)(puVar3 + -8) = 0x140004631;
  DAT_140008438 = _DAT_1400082b0;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_1400064b0);
  return;
}

