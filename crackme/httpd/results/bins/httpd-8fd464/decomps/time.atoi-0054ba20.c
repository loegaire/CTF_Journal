
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.atoi(string s, int x, error err) */

multireturn_int_error__conflict8 time_atoi(string s)

{
  uint8 uVar1;
  uint8 *puVar2;
  ulong uVar3;
  runtime_itab *prVar4;
  uint8 *puVar5;
  long lVar6;
  bool bVar7;
  multireturn_int_error__conflict8 mVar8;
  multireturn_int_error__conflict8 mVar9;
  string s_spill;
  
                    /* Unresolved local var: bool neg@[???]
                       Unresolved local var: int64 q@[???]
                       Unresolved local var: string rem@[???] */
  if ((s_spill.len == 0) || ((uVar1 = *s_spill.str, uVar1 != 0x2d && (uVar1 != 0x2b)))) {
    bVar7 = false;
    puVar5 = s_spill.str;
  }
  else {
    bVar7 = uVar1 == 0x2d;
    s_spill.len = s_spill.len - 1;
    puVar5 = s_spill.str + (-s_spill.len >> 0x3f & 1);
  }
  puVar2 = (uint8 *)0x0;
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: uint8 c@[???] */
  for (uVar3 = 0;
      ((long)uVar3 < s_spill.len &&
      (s_spill.str = (uint8 *)(ulong)puVar5[uVar3], (byte)(puVar5[uVar3] - 0x30) < 10));
      uVar3 = uVar3 + 1) {
    prVar4 = time_errLeadingInt.tab;
    if (0xccccccccccccccc < (long)puVar2) {
      lVar6 = 0;
      puVar2 = (uint8 *)0x0;
      goto LAB_0054bada;
    }
    puVar2 = s_spill.str + (long)puVar2 * 10 + -0x30;
    s_spill.str = puVar2;
    if ((long)puVar2 < 0) {
      lVar6 = 0;
      puVar2 = (uint8 *)0x0;
      goto LAB_0054bada;
    }
  }
  if ((ulong)s_spill.len < uVar3) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceB();
  }
  lVar6 = s_spill.len - uVar3;
  prVar4 = (runtime_itab *)0x0;
LAB_0054bada:
  if ((prVar4 == (runtime_itab *)0x0) && (lVar6 == 0)) {
    mVar9.x = (uint8 *)-(long)puVar2;
    if (bVar7) {
      puVar2 = mVar9.x;
    }
    mVar9.err.tab = (runtime_itab *)s_spill.str;
    mVar9.err.data = puVar2;
    return mVar9;
  }
  mVar8.err.tab = (runtime_itab *)s_spill.str;
  mVar8.x = (int)time_atoiError.tab;
  mVar8.err.data = time_atoiError.data;
  return mVar8;
}

