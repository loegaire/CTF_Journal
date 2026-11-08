
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void fmt.parseArgNumber(string format, int index, int wid, bool ok) */

multireturn_int_int_bool__conflict fmt_parseArgNumber(string format)

{
  byte bVar1;
  bool in_CL;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  multireturn_int_int_bool__conflict mVar6;
  multireturn_int_int_bool__conflict mVar7;
  multireturn_int_int_bool__conflict mVar8;
  multireturn_int_int_bool__conflict mVar9;
  string format_spill;
  
  mVar6.wid = format.len;
  if (format_spill.len < 3) {
    mVar6.index = format_spill.len;
    mVar6.ok = in_CL;
    return mVar6;
  }
  lVar3 = 1;
  while( true ) {
    if (format_spill.len <= lVar3) {
      mVar7.wid = mVar6.wid;
      mVar7.index = format_spill.len;
      mVar7.ok = SUB81(format_spill.str,0);
      return mVar7;
    }
    mVar6.wid = (ulong)format_spill.str[lVar3];
    if (format_spill.str[lVar3] == 0x5d) break;
                    /* Unresolved local var: int i@[???] */
    lVar3 = lVar3 + 1;
  }
  if (lVar3 < 2) {
    bVar2 = false;
    lVar5 = 0;
    lVar4 = lVar3;
                    /* Unresolved local var: int width@[???]
                       Unresolved local var: bool ok@[???]
                       Unresolved local var: int newi@[???] */
  }
  else {
    bVar2 = false;
    lVar5 = 0;
    for (lVar4 = 1; lVar4 < lVar3; lVar4 = lVar4 + 1) {
      bVar1 = format_spill.str[lVar4];
      if ((bVar1 < 0x30) || (0x39 < bVar1)) break;
      if (2000000 < lVar5 + 1000000U) {
        bVar2 = false;
        lVar5 = 0;
        lVar4 = lVar3;
        break;
      }
      lVar5 = (ulong)(bVar1 - 0x30 & 0xff) + lVar5 * 10;
      bVar2 = true;
    }
  }
  if ((bVar2 != false) && (lVar4 == lVar3)) {
    mVar8.ok = (bool)((char)lVar5 + -1);
    mVar8.index = lVar3 + 1;
    mVar8.wid = lVar5;
    return mVar8;
  }
  mVar9.index = lVar3 + 1;
  mVar9.wid = lVar5;
  mVar9.ok = bVar2;
  return mVar9;
}

