
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.isLocalhost(string h, bool ~r1) */

bool net_isLocalhost(string h)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  ulong in_RDI;
  long in_FS_OFFSET;
  string suffix;
  string suffix_00;
  string s;
  string s_00;
  string h_spill;
  char local_10;
  
  uVar3 = h.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: int i@[???] */
  if (h_spill.len == 9) {
    for (lVar2 = 0; lVar2 < 9; lVar2 = lVar2 + 1) {
      bVar4 = h_spill.str[lVar2];
      uVar3 = (ulong)bVar4;
      if ((byte)(bVar4 + 0xbf) < 0x1a) {
        uVar3 = (ulong)(bVar4 + 0x20);
      }
      bVar4 = (&DAT_0028e13e)[lVar2];
      in_RDI = (ulong)(bVar4 - 0x41);
      if ((byte)(bVar4 - 0x41) < 0x1a) {
        bVar4 = bVar4 + 0x20;
      }
      if ((byte)uVar3 != bVar4) goto LAB_00580a51;
    }
    bVar1 = true;
  }
  else {
LAB_00580a51:
    if (h_spill.len == 0x15) {
      for (lVar2 = 0; lVar2 < 0x15; lVar2 = lVar2 + 1) {
        bVar4 = h_spill.str[lVar2];
        uVar3 = (ulong)bVar4;
        if ((byte)(bVar4 + 0xbf) < 0x1a) {
          uVar3 = (ulong)(bVar4 + 0x20);
        }
        bVar4 = (&DAT_0029c973)[lVar2];
        in_RDI = (ulong)(bVar4 - 0x41);
        if ((byte)(bVar4 - 0x41) < 0x1a) {
          bVar4 = bVar4 + 0x20;
        }
        if ((byte)uVar3 != bVar4) goto LAB_00580a6e;
      }
      bVar1 = true;
    }
    else {
LAB_00580a6e:
      suffix.len = in_RDI;
      suffix.str = h_spill.str;
      s.len = uVar3;
      s.str = (uint8 *)h_spill.len;
      net_stringsHasSuffixFold(s,suffix);
      if (local_10 == '\0') {
        suffix_00.len = in_RDI;
        suffix_00.str = h_spill.str;
        s_00.len = uVar3;
        s_00.str = &DAT_0029cbff;
        net_stringsHasSuffixFold(s_00,suffix_00);
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
  }
  return bVar1;
}

