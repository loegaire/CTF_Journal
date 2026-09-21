
/* WARNING: Variable defined which should be unmapped: s_spill */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strings.IndexRune(string s, int32 r, int ~r2) */

int strings_IndexRune(string s,int32 r)

{
  byte bVar1;
  uint8 *puVar2;
  uint uVar3;
  int in_RDI;
  long in_FS_OFFSET;
  string sVar4;
  string s_00;
  string substr;
  string s_spill;
  int32 r_spill;
  uint local_28;
  undefined4 uStack_24;
  long local_20;
  uint8 local_14 [4];
  long local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((uint)r_spill < 0x80) {
    internal_bytealg_IndexByteString();
    return CONCAT44(uStack_24,local_28);
  }
  if (r_spill == 0xfffd) {
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int32 r@[???] */
    local_10 = 0;
    do {
      if (s_spill.len <= local_10) {
        return s_spill.len;
      }
      bVar1 = s_spill.str[local_10];
      if (bVar1 < 0x80) {
        local_10 = local_10 + 1;
        uVar3 = (uint)bVar1;
      }
      else {
        sVar4.len._0_1_ = bVar1;
        sVar4.str = (uint8 *)s_spill.len;
        sVar4.len._1_7_ = 0;
        runtime_decoderune(sVar4,(int)s_spill.str);
        local_10 = local_20;
        uVar3 = local_28;
      }
    } while (uVar3 != 0xfffd);
    return s_spill.len;
  }
  if ((0xd7ff < (uint)r_spill) && (0x101fff < r_spill - 0xe000U)) {
    return (ulong)(uint)r_spill;
  }
  puVar2 = local_14;
  sVar4 = runtime_intstring((uint8 (*) [4])(long)r_spill,s.len);
  s_00.len = sVar4.len;
  s_00.str = (uint8 *)s_spill.len;
  substr.len = in_RDI;
  substr.str = puVar2;
  strings_Index(s_00,substr);
  return local_20;
}

