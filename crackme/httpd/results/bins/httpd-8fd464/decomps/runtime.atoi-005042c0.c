
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.atoi(string s, int ~r1, bool ~r2) */

multireturn_int_bool__conflict runtime_atoi(string s)

{
  uint8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  multireturn_int_bool__conflict mVar5;
  multireturn_int_bool__conflict mVar6;
  multireturn_int_bool__conflict mVar7;
  multireturn_int_bool__conflict mVar8;
  multireturn_int_bool__conflict mVar9;
  multireturn_int_bool__conflict mVar10;
  string s_spill;
  
                    /* Unresolved local var: uint un@[???]
                       Unresolved local var: int n@[???] */
  if (s_spill.len == 0) {
    return (multireturn_int_bool__conflict)((unkuint9)(byte)s.len << 0x40);
  }
  uVar1 = *s_spill.str;
  if (uVar1 == 0x2d) {
    s_spill.len = s_spill.len + -1;
    s_spill.str = s_spill.str + (-s_spill.len >> 0x3f & 1);
  }
  uVar2 = 0;
  for (lVar3 = 0; mVar5.~r2 = SUB81(s_spill.len,0), lVar3 < s_spill.len; lVar3 = lVar3 + 1) {
                    /* Unresolved local var: uint8 c@[???]
                       Unresolved local var: uint un1@[???] */
    if (9 < (byte)(s_spill.str[lVar3] - 0x30)) {
      mVar7.~r2 = mVar5.~r2;
      mVar7.~r1 = (int)s_spill.str;
      return mVar7;
    }
    if (0x1999999999999999 < uVar2) {
      mVar6.~r2 = mVar5.~r2;
      mVar6.~r1 = (int)s_spill.str;
      return mVar6;
    }
    uVar4 = uVar2 * 10;
    uVar2 = ((ulong)s_spill.str[lVar3] + uVar2 * 10) - 0x30;
    if (uVar2 < uVar4) {
      mVar5.~r1 = (int)s_spill.str;
      return mVar5;
    }
  }
  if (uVar1 != 0x2d) {
    if (0x7fffffffffffffff < uVar2) {
      mVar10.~r2 = mVar5.~r2;
      mVar10.~r1 = 0x7fffffffffffffff;
      return mVar10;
    }
    if (uVar1 != 0x2d) goto LAB_005043b4;
  }
  if (0x8000000000000000 < uVar2) {
    mVar8.~r2 = mVar5.~r2;
    mVar8.~r1 = -0x8000000000000000;
    return mVar8;
  }
LAB_005043b4:
  if (uVar1 == 0x2d) {
    uVar2 = -uVar2;
  }
  mVar9.~r2 = mVar5.~r2;
  mVar9.~r1 = uVar2;
  return mVar9;
}

