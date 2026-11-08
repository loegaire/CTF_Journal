
/* std::__cxx11::string::_M_create(unsigned long&, unsigned long) */

void std::__cxx11::string::_M_create(ulong *param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  long *in_RCX;
  uint uVar10;
  ulong in_RDX;
  long extraout_RDX;
  ulong extraout_RDX_00;
  int iVar11;
  uint uVar12;
  char *pcVar14;
  undefined4 in_R8D;
  char acStack_138 [208];
  code *pcStack_68;
  char *pcStack_58;
  long alStack_48 [2];
  long *plVar13;
  
  uVar2 = *(ulong *)param_2;
  if ((long)uVar2 < 0) {
    pcVar14 = "basic_string::_M_create";
    std::__throw_length_error("basic_string::_M_create");
    param_1 = (ulong *)pcVar14;
LAB_001084c2:
    *(char *)(param_2 + 0) = -1;
    *(char *)(param_2 + 1) = -1;
    *(char *)(param_2 + 2) = -1;
    *(char *)(param_2 + 3) = -1;
    *(char *)(param_2 + 4) = -1;
    *(char *)(param_2 + 5) = -1;
    *(char *)(param_2 + 6) = -1;
    *(char *)(param_2 + 7) = '\x7f';
  }
  else {
    if ((in_RDX < uVar2) && (uVar3 = in_RDX * 2, uVar2 < uVar3)) {
      if ((long)uVar3 < 0) goto LAB_001084c2;
      *(ulong *)param_2 = uVar3;
    }
    param_1 = (ulong *)(*(long *)param_2 + 1);
    if (-1 < (long)param_1) {
      operator_new((ulong)param_1);
      return;
    }
  }
  std::__throw_bad_alloc();
  pcStack_68 = (code *)0x1084f8;
  pcStack_58 = (char *)param_2;
  piVar7 = __errno_location();
  iVar1 = *piVar7;
  *piVar7 = 0;
  plVar13 = alStack_48;
  pcStack_68 = (code *)0x108512;
  lVar8 = (*(code *)param_1)(extraout_RDX,plVar13,in_R8D);
  iVar11 = (int)plVar13;
  if (alStack_48[0] == extraout_RDX) {
    pcStack_68 = (code *)0x10855c;
    uVar9 = std::__throw_invalid_argument(pcStack_58);
    if (*piVar7 == 0) {
      *piVar7 = iVar1;
    }
                    /* WARNING: Subroutine does not return */
    pcStack_68 = (code *)0x10856c;
    _Unwind_Resume(uVar9);
  }
  if ((*piVar7 != 0x22) && (lVar8 + 0x80000000U >> 0x20 == 0)) {
    if (in_RCX != (long *)0x0) {
      *in_RCX = alStack_48[0] - extraout_RDX;
    }
    if (*piVar7 == 0) {
      *piVar7 = iVar1;
    }
    return;
  }
  pcStack_68 = __detail::__to_chars_10_impl<unsigned_int>;
  std::__throw_out_of_range(pcStack_58);
  uVar10 = (uint)extraout_RDX_00;
  builtin_strncpy(acStack_138,
                  "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                  ,0xc9);
  uVar12 = iVar11 - 1;
  uVar2 = extraout_RDX_00;
  if (99 < uVar10) {
    do {
      uVar3 = (uVar2 & 0xffffffff) / 100;
      uVar10 = (uint)uVar3;
      uVar6 = (uint)uVar2;
      uVar4 = (uVar6 + uVar10 * -100) * 2;
      pcStack_58[uVar12] = acStack_138[uVar4 + 1];
      pcStack_58[uVar12 - 1] = acStack_138[uVar4];
      uVar12 = uVar12 - 2;
      uVar2 = uVar3;
    } while (9999 < uVar6);
  }
  cVar5 = (char)uVar10 + '0';
  if (9 < uVar10) {
    pcStack_58[1] = acStack_138[uVar10 * 2 + 1];
    cVar5 = acStack_138[uVar10 * 2];
  }
  *pcStack_58 = cVar5;
  return;
}

