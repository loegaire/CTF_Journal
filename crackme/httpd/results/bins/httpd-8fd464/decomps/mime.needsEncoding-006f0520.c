
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void mime.needsEncoding(string s, bool ~r1) */

bool mime_needsEncoding(string s)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  long in_FS_OFFSET;
  string s_00;
  string s_spill;
  uint local_18;
  long local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: int32 b@[???] */
  lVar2 = 0;
  do {
    if (s_spill.len <= lVar2) {
      return SUB81(s_spill.str,0);
    }
    bVar1 = s_spill.str[lVar2];
    if (bVar1 < 0x80) {
      lVar2 = lVar2 + 1;
      uVar3 = (uint)bVar1;
    }
    else {
      s_00.len._0_1_ = bVar1;
      s_00.str = s_spill.str;
      s_00.len._1_7_ = 0;
      runtime_decoderune(s_00,s_spill.len);
      lVar2 = local_10;
      uVar3 = local_18;
    }
  } while ((uVar3 - 0x20 < 0x5f) || (uVar3 == 9));
  return SUB81(s_spill.str,0);
}

