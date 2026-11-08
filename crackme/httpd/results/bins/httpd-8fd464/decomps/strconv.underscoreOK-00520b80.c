
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strconv.underscoreOK(string s, bool ~r1) */

bool strconv_underscoreOK(string s)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  byte bVar4;
  bool bVar5;
  string s_spill;
  
                    /* Unresolved local var: int32 saw@[???]
                       Unresolved local var: int i@[???]
                       Unresolved local var: bool hex@[???] */
  if ((0 < s_spill.len) && ((*s_spill.str == 0x2d || (*s_spill.str == 0x2b)))) {
    s_spill.len = s_spill.len - 1;
    s_spill.str = s_spill.str + (-s_spill.len >> 0x3f & 1);
  }
  if (((s_spill.len < 2) || (*s_spill.str != 0x30)) ||
     ((bVar4 = s_spill.str[1] | 0x20, bVar4 != 0x62 && ((bVar4 != 0x6f && (bVar4 != 0x78)))))) {
    uVar2 = 0;
    bVar5 = false;
    iVar3 = 0x5e;
  }
  else {
    bVar5 = bVar4 == 0x78;
    uVar2 = 2;
    iVar3 = 0x30;
  }
  while( true ) {
    bVar1 = SUB81(uVar2,0);
    if (s_spill.len <= (long)uVar2) {
      return bVar1;
    }
    if ((ulong)s_spill.len <= uVar2) break;
    bVar4 = s_spill.str[uVar2];
    if (((0x2f < bVar4) && (bVar4 < 0x3a)) ||
       ((bVar5 && ((0x60 < (bVar4 | 0x20) && ((bVar4 | 0x20) < 0x67)))))) {
      iVar3 = 0x30;
    }
    else if (bVar4 == 0x5f) {
      if (iVar3 != 0x30) {
        return bVar1;
      }
      iVar3 = 0x5f;
    }
    else {
      if (iVar3 == 0x5f) {
        return bVar1;
      }
      iVar3 = 0x21;
    }
    uVar2 = uVar2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

