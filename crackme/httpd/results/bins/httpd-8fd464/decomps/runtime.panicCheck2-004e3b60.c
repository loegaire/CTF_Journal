
/* WARNING: Unknown calling convention */

void runtime_panicCheck2(string err)

{
  long lVar1;
  long in_FS_OFFSET;
  string s;
  string err_spill;
  
  s.len = err.len;
                    /* Unresolved local var: runtime.g * gp@[DW_OP_reg0(RAX)] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (((*(long *)(in_FS_OFFSET + -8) != 0) &&
      (lVar1 = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30), lVar1 != 0)) &&
     (*(int *)(lVar1 + 0xf8) != 0)) {
    s.str = (uint8 *)err_spill.len;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  return;
}

