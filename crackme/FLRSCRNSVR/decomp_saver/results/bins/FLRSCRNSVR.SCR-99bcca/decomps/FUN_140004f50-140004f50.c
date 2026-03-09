
/* WARNING: Removing unreachable block (ram,0x000140005041) */
/* WARNING: Removing unreachable block (ram,0x000140005031) */
/* WARNING: Removing unreachable block (ram,0x00014000500c) */
/* WARNING: Removing unreachable block (ram,0x000140004f8a) */
/* WARNING: Removing unreachable block (ram,0x000140004f68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140004f50(void)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  longlong lVar4;
  uint uVar5;
  byte bVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint in_XCR0;
  
  piVar1 = (int *)cpuid_basic_info(0);
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar5 = puVar2[3];
  if ((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) {
    uVar8 = *puVar2 & 0xfff3ff0;
    _DAT_140008060 = 0x8000;
    _DAT_140008068 = 0xffffffffffffffff;
    if ((((uVar8 == 0x106c0) || (uVar8 == 0x20660)) || (uVar8 == 0x20670)) ||
       ((uVar8 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar8 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_140008880 = DAT_140008880 | 1;
    }
  }
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  if (6 < *piVar1) {
    piVar3 = (int *)cpuid_Extended_Feature_Enumeration_info(7);
    uVar8 = piVar3[1];
    uVar9 = piVar3[2];
    if ((uVar8 >> 9 & 1) != 0) {
      DAT_140008880 = DAT_140008880 | 2;
    }
    if (0 < *piVar3) {
      lVar4 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar10 = *(uint *)(lVar4 + 8);
    }
    if (0x23 < *piVar1) {
      lVar4 = cpuid(0x24);
      uVar11 = (ulonglong)*(uint *)(lVar4 + 4);
    }
  }
  _DAT_140008058 = 1;
  DAT_14000805c = 2;
  uVar7 = DAT_140008050 & 0xfffffffffffffffe;
  if ((uVar5 >> 0x14 & 1) != 0) {
    _DAT_140008058 = 2;
    DAT_14000805c = 6;
    uVar7 = DAT_140008050 & 0xffffffffffffffee;
  }
  DAT_140008050 = uVar7;
  if ((uVar5 >> 0x1b & 1) != 0) {
    if (((uVar5 >> 0x1c & 1) != 0) && (bVar6 = (byte)in_XCR0, (bVar6 & 6) == 6)) {
      _DAT_140008058 = 3;
      uVar7 = DAT_140008050;
      uVar5 = DAT_14000805c | 8;
      if ((uVar8 & 0x20) != 0) {
        _DAT_140008058 = 5;
        uVar7 = DAT_140008050 & 0xfffffffffffffffd;
        uVar5 = DAT_14000805c | 0x28;
        if (((uVar8 & 0xd0030000) == 0xd0030000) && ((bVar6 & 0xe0) == 0xe0)) {
          DAT_14000805c = DAT_14000805c | 0x68;
          _DAT_140008058 = 6;
          uVar7 = DAT_140008050 & 0xffffffffffffffd9;
          uVar5 = DAT_14000805c;
        }
      }
      DAT_14000805c = uVar5;
      DAT_140008050 = uVar7;
      if ((uVar9 >> 0x17 & 1) != 0) {
        DAT_140008050 = DAT_140008050 & 0xfffffffffeffffff;
      }
      if (((uVar10 >> 0x13 & 1) != 0) && ((bVar6 & 0xe0) == 0xe0)) {
        _DAT_14000887c = (uint)uVar11 & 0x400ff;
        DAT_140008050 = ~((ulonglong)((uint)(uVar11 >> 0x10) & 6) | 0x1000029) & DAT_140008050;
        if (1 < (byte)_DAT_14000887c) {
          DAT_140008050 = DAT_140008050 & 0xffffffffffffffbf;
        }
      }
    }
    if (((uVar10 >> 0x15 & 1) != 0) && ((in_XCR0 >> 0x13 & 1) != 0)) {
      DAT_140008050 = DAT_140008050 & 0xffffffffffffff7f;
    }
  }
  return 0;
}

