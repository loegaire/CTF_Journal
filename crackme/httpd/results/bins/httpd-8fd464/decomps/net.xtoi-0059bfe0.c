
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.xtoi(string s, int n, int i, bool ok) */

multireturn_int_int_bool__conflict2 net_xtoi(string s)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  multireturn_int_int_bool__conflict2 mVar4;
  multireturn_int_int_bool__conflict2 mVar5;
  multireturn_int_int_bool__conflict2 mVar6;
  string s_spill;
  
  lVar3 = 0;
  for (lVar2 = 0;
      (mVar4.ok = SUB81(s_spill.len,0), lVar2 < s_spill.len &&
      (bVar1 = s_spill.str[lVar2], 0x2f < bVar1)); lVar2 = lVar2 + 1) {
    if (bVar1 < 0x3a) {
      lVar3 = lVar3 * 0x10 + (ulong)(byte)(bVar1 - 0x30);
    }
    else if (bVar1 < 0x61) {
      if ((bVar1 < 0x41) || (0x46 < bVar1)) break;
      lVar3 = (ulong)(byte)(bVar1 + 0xbf) + lVar3 * 0x10 + 10;
    }
    else {
      if (0x66 < bVar1) break;
      lVar3 = (ulong)(byte)(bVar1 + 0x9f) + lVar3 * 0x10 + 10;
    }
    if (0xfffffe < lVar3) {
      mVar4.i = lVar3;
      mVar4.n = (int)s_spill.str;
      return mVar4;
    }
  }
  if (lVar2 == 0) {
    mVar5.i = lVar3;
    mVar5.n = (int)s_spill.str;
    mVar5.ok = mVar4.ok;
    return mVar5;
  }
  mVar6.i = lVar3;
  mVar6.n = (int)s_spill.str;
  mVar6.ok = mVar4.ok;
  return mVar6;
}

