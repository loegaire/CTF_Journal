
/* int __gnu_cxx::__stoa<long, int, char, int>(long (*)(char const*, char**, int), char const*, char
   const*, unsigned long*, int) */

int __gnu_cxx::__stoa<long,int,char,int>
              (_func_long_char_ptr_char_ptr_ptr_int *param_1,char *param_2,char *param_3,
              ulong *param_4,int param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong extraout_RDX;
  int iVar10;
  uint uVar11;
  byte abStack_130 [208];
  code *pcStack_60;
  char *local_50;
  char *local_40 [2];
  char **ppcVar12;
  
  pcStack_60 = (code *)0x1084f8;
  local_50 = param_2;
  piVar6 = __errno_location();
  iVar1 = *piVar6;
  *piVar6 = 0;
  ppcVar12 = local_40;
                    /* try { // try from 0010850f to 0010855b has its CatchHandler @ 0010855c */
  pcStack_60 = (code *)0x108512;
  lVar7 = (*param_1)(param_3,ppcVar12,param_5);
  iVar10 = (int)ppcVar12;
  if (local_40[0] == param_3) {
    pcStack_60 = (code *)0x10855c;
    uVar8 = std::__throw_invalid_argument(local_50);
                    /* catch() { ... } // from try @ 0010850f with catch @ 0010855c
                       catch() { ... } // from try @ 00108571 with catch @ 0010855c */
    if (*piVar6 == 0) {
      *piVar6 = iVar1;
    }
                    /* WARNING: Subroutine does not return */
    pcStack_60 = (code *)0x10856c;
    _Unwind_Resume(uVar8);
  }
  if ((*piVar6 != 0x22) && (lVar7 + 0x80000000U >> 0x20 == 0)) {
    if (param_4 != (ulong *)0x0) {
      *param_4 = (long)local_40[0] - (long)param_3;
    }
    if (*piVar6 == 0) {
      *piVar6 = iVar1;
    }
    return (int)lVar7;
  }
                    /* try { // try from 00108571 to 00108575 has its CatchHandler @ 0010855c */
  pcStack_60 = std::__detail::__to_chars_10_impl<unsigned_int>;
  std::__throw_out_of_range(local_50);
  uVar9 = (uint)extraout_RDX;
  abStack_130[0] = 0x30;
  abStack_130[1] = 0x30;
  abStack_130[2] = 0x30;
  abStack_130[3] = 0x31;
  abStack_130[4] = 0x30;
  abStack_130[5] = 0x32;
  abStack_130[6] = 0x30;
  abStack_130[7] = 0x33;
  abStack_130[8] = 0x30;
  abStack_130[9] = 0x34;
  abStack_130[10] = 0x30;
  abStack_130[0xb] = 0x35;
  abStack_130[0xc] = 0x30;
  abStack_130[0xd] = 0x36;
  abStack_130[0xe] = 0x30;
  abStack_130[0xf] = 0x37;
  abStack_130[0x10] = 0x30;
  abStack_130[0x11] = 0x38;
  abStack_130[0x12] = 0x30;
  abStack_130[0x13] = 0x39;
  abStack_130[0x14] = 0x31;
  abStack_130[0x15] = 0x30;
  abStack_130[0x16] = 0x31;
  abStack_130[0x17] = 0x31;
  abStack_130[0x18] = 0x31;
  abStack_130[0x19] = 0x32;
  abStack_130[0x1a] = 0x31;
  abStack_130[0x1b] = 0x33;
  abStack_130[0x1c] = 0x31;
  abStack_130[0x1d] = 0x34;
  abStack_130[0x1e] = 0x31;
  abStack_130[0x1f] = 0x35;
  abStack_130[0x20] = 0x31;
  abStack_130[0x21] = 0x36;
  abStack_130[0x22] = 0x31;
  abStack_130[0x23] = 0x37;
  abStack_130[0x24] = 0x31;
  abStack_130[0x25] = 0x38;
  abStack_130[0x26] = 0x31;
  abStack_130[0x27] = 0x39;
  abStack_130[0x28] = 0x32;
  abStack_130[0x29] = 0x30;
  abStack_130[0x2a] = 0x32;
  abStack_130[0x2b] = 0x31;
  abStack_130[0x2c] = 0x32;
  abStack_130[0x2d] = 0x32;
  abStack_130[0x2e] = 0x32;
  abStack_130[0x2f] = 0x33;
  abStack_130[0x30] = 0x32;
  abStack_130[0x31] = 0x34;
  abStack_130[0x32] = 0x32;
  abStack_130[0x33] = 0x35;
  abStack_130[0x34] = 0x32;
  abStack_130[0x35] = 0x36;
  abStack_130[0x36] = 0x32;
  abStack_130[0x37] = 0x37;
  abStack_130[0x38] = 0x32;
  abStack_130[0x39] = 0x38;
  abStack_130[0x3a] = 0x32;
  abStack_130[0x3b] = 0x39;
  abStack_130[0x3c] = 0x33;
  abStack_130[0x3d] = 0x30;
  abStack_130[0x3e] = 0x33;
  abStack_130[0x3f] = 0x31;
  abStack_130[0x40] = 0x33;
  abStack_130[0x41] = 0x32;
  abStack_130[0x42] = 0x33;
  abStack_130[0x43] = 0x33;
  abStack_130[0x44] = 0x33;
  abStack_130[0x45] = 0x34;
  abStack_130[0x46] = 0x33;
  abStack_130[0x47] = 0x35;
  abStack_130[0x48] = 0x33;
  abStack_130[0x49] = 0x36;
  abStack_130[0x4a] = 0x33;
  abStack_130[0x4b] = 0x37;
  abStack_130[0x4c] = 0x33;
  abStack_130[0x4d] = 0x38;
  abStack_130[0x4e] = 0x33;
  abStack_130[0x4f] = 0x39;
  abStack_130[0x50] = 0x34;
  abStack_130[0x51] = 0x30;
  abStack_130[0x52] = 0x34;
  abStack_130[0x53] = 0x31;
  abStack_130[0x54] = 0x34;
  abStack_130[0x55] = 0x32;
  abStack_130[0x56] = 0x34;
  abStack_130[0x57] = 0x33;
  abStack_130[0x58] = 0x34;
  abStack_130[0x59] = 0x34;
  abStack_130[0x5a] = 0x34;
  abStack_130[0x5b] = 0x35;
  abStack_130[0x5c] = 0x34;
  abStack_130[0x5d] = 0x36;
  abStack_130[0x5e] = 0x34;
  abStack_130[0x5f] = 0x37;
  abStack_130[0x60] = 0x34;
  abStack_130[0x61] = 0x38;
  abStack_130[0x62] = 0x34;
  abStack_130[99] = 0x39;
  abStack_130[100] = 0x35;
  abStack_130[0x65] = 0x30;
  abStack_130[0x66] = 0x35;
  abStack_130[0x67] = 0x31;
  abStack_130[0x68] = 0x35;
  abStack_130[0x69] = 0x32;
  abStack_130[0x6a] = 0x35;
  abStack_130[0x6b] = 0x33;
  abStack_130[0x6c] = 0x35;
  abStack_130[0x6d] = 0x34;
  abStack_130[0x6e] = 0x35;
  abStack_130[0x6f] = 0x35;
  abStack_130[0x70] = 0x35;
  abStack_130[0x71] = 0x36;
  abStack_130[0x72] = 0x35;
  abStack_130[0x73] = 0x37;
  abStack_130[0x74] = 0x35;
  abStack_130[0x75] = 0x38;
  abStack_130[0x76] = 0x35;
  abStack_130[0x77] = 0x39;
  abStack_130[0x78] = 0x36;
  abStack_130[0x79] = 0x30;
  abStack_130[0x7a] = 0x36;
  abStack_130[0x7b] = 0x31;
  abStack_130[0x7c] = 0x36;
  abStack_130[0x7d] = 0x32;
  abStack_130[0x7e] = 0x36;
  abStack_130[0x7f] = 0x33;
  abStack_130[0x80] = 0x36;
  abStack_130[0x81] = 0x34;
  abStack_130[0x82] = 0x36;
  abStack_130[0x83] = 0x35;
  abStack_130[0x84] = 0x36;
  abStack_130[0x85] = 0x36;
  abStack_130[0x86] = 0x36;
  abStack_130[0x87] = 0x37;
  abStack_130[0x88] = 0x36;
  abStack_130[0x89] = 0x38;
  abStack_130[0x8a] = 0x36;
  abStack_130[0x8b] = 0x39;
  abStack_130[0x8c] = 0x37;
  abStack_130[0x8d] = 0x30;
  abStack_130[0x8e] = 0x37;
  abStack_130[0x8f] = 0x31;
  abStack_130[0x90] = 0x37;
  abStack_130[0x91] = 0x32;
  abStack_130[0x92] = 0x37;
  abStack_130[0x93] = 0x33;
  abStack_130[0x94] = 0x37;
  abStack_130[0x95] = 0x34;
  abStack_130[0x96] = 0x37;
  abStack_130[0x97] = 0x35;
  abStack_130[0x98] = 0x37;
  abStack_130[0x99] = 0x36;
  abStack_130[0x9a] = 0x37;
  abStack_130[0x9b] = 0x37;
  abStack_130[0x9c] = 0x37;
  abStack_130[0x9d] = 0x38;
  abStack_130[0x9e] = 0x37;
  abStack_130[0x9f] = 0x39;
  abStack_130[0xa0] = 0x38;
  abStack_130[0xa1] = 0x30;
  abStack_130[0xa2] = 0x38;
  abStack_130[0xa3] = 0x31;
  abStack_130[0xa4] = 0x38;
  abStack_130[0xa5] = 0x32;
  abStack_130[0xa6] = 0x38;
  abStack_130[0xa7] = 0x33;
  abStack_130[0xa8] = 0x38;
  abStack_130[0xa9] = 0x34;
  abStack_130[0xaa] = 0x38;
  abStack_130[0xab] = 0x35;
  abStack_130[0xac] = 0x38;
  abStack_130[0xad] = 0x36;
  abStack_130[0xae] = 0x38;
  abStack_130[0xaf] = 0x37;
  abStack_130[0xb0] = 0x38;
  abStack_130[0xb1] = 0x38;
  abStack_130[0xb2] = 0x38;
  abStack_130[0xb3] = 0x39;
  abStack_130[0xb4] = 0x39;
  abStack_130[0xb5] = 0x30;
  abStack_130[0xb6] = 0x39;
  abStack_130[0xb7] = 0x31;
  abStack_130[0xb8] = 0x39;
  abStack_130[0xb9] = 0x32;
  abStack_130[0xba] = 0x39;
  abStack_130[0xbb] = 0x33;
  abStack_130[0xbc] = 0x39;
  abStack_130[0xbd] = 0x34;
  abStack_130[0xbe] = 0x39;
  abStack_130[0xbf] = 0x35;
  abStack_130[0xc0] = 0x39;
  abStack_130[0xc1] = 0x36;
  abStack_130[0xc2] = 0x39;
  abStack_130[0xc3] = 0x37;
  abStack_130[0xc4] = 0x39;
  abStack_130[0xc5] = 0x38;
  abStack_130[0xc6] = 0x39;
  abStack_130[199] = 0x39;
  abStack_130[200] = 0;
  uVar11 = iVar10 - 1;
  uVar3 = extraout_RDX;
  if (99 < uVar9) {
    do {
      uVar2 = (uVar3 & 0xffffffff) / 100;
      uVar9 = (uint)uVar2;
      uVar5 = (uint)uVar3;
      uVar4 = (uVar5 + uVar9 * -100) * 2;
      local_50[uVar11] = abStack_130[uVar4 + 1];
      local_50[uVar11 - 1] = abStack_130[uVar4];
      uVar11 = uVar11 - 2;
      uVar3 = uVar2;
    } while (9999 < uVar5);
  }
  uVar11 = uVar9 + 0x30;
  if (9 < uVar9) {
    local_50[1] = abStack_130[uVar9 * 2 + 1];
    uVar11 = (uint)abStack_130[uVar9 * 2];
  }
  *local_50 = (char)uVar11;
  return uVar11;
}

