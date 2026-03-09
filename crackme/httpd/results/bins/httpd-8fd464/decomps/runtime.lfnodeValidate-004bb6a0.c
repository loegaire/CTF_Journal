
/* WARNING: Unknown calling convention */

void runtime_lfnodeValidate(runtime_lfnode *node)

{
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  runtime_lfnode *node_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (node_spill == (runtime_lfnode *)(((long)((long)node_spill << 0x10 | 0x7ffffU) >> 0x13) * 8)) {
    return;
  }
  runtime_printlock();
  runtime_printlock();
  s.len = unaff_RBX;
  s.str = (uint8 *)0x2a0770;
  runtime_printstring(s);
  runtime_printhex((uint64)node_spill);
  runtime_printnl();
  runtime_printunlock();
  s_00.len = unaff_RBX;
  s_00.str = &DAT_0029aa9a;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_00);
}

