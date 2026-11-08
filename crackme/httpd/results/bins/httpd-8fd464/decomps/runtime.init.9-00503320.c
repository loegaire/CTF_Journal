
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_init_9(void)

{
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((runtime_abiRegArgsType->kind & 0x40) == 0) {
    return;
  }
  s.len = unaff_RBX;
  s.str = &DAT_002ab34e;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}

