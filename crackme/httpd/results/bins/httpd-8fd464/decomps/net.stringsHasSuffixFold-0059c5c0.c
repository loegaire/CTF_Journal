
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.stringsHasSuffixFold(string s, string suffix, bool ~r2) */

bool net_stringsHasSuffixFold(string s,string suffix)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint8 uVar5;
  uint8 uVar6;
  string s_spill;
  string suffix_spill;
  
  if (s_spill.len < suffix_spill.len) {
    bVar1 = false;
  }
  else {
    uVar2 = s_spill.len - suffix_spill.len;
    if ((ulong)s_spill.len < uVar2) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    lVar3 = s_spill.len - uVar2;
                    /* Unresolved local var: int i@[???] */
    if (suffix_spill.len == lVar3) {
      for (lVar4 = 0; lVar4 < lVar3; lVar4 = lVar4 + 1) {
        uVar5 = s_spill.str[lVar4 + (uVar2 & -lVar3 >> 0x3f)];
        if ((byte)(uVar5 + 0xbf) < 0x1a) {
          uVar5 = uVar5 + 0x20;
        }
        uVar6 = suffix_spill.str[lVar4];
        if ((byte)(uVar6 + 0xbf) < 0x1a) {
          uVar6 = uVar6 + 0x20;
        }
        if (uVar5 != uVar6) {
          return false;
        }
      }
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}

