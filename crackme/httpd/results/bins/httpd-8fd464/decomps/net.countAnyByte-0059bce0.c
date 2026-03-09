
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.countAnyByte(string s, string t, int ~r2) */

int net_countAnyByte(string s,string t)

{
  int iVar1;
  long in_FS_OFFSET;
  string s_spill;
  string t_spill;
  
                    /* Unresolved local var: int n@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: int i@[???] */
  for (iVar1 = 0; iVar1 < s_spill.len; iVar1 = iVar1 + 1) {
    internal_bytealg_IndexByteString();
  }
  return iVar1;
}

