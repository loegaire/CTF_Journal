
/* WARNING: Unknown calling convention */

void runtime_notesleep(runtime_note *n)

{
  uint32 *addr;
  long lVar1;
  int64 ns;
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  runtime_note *n_spill;
  
                    /* Unresolved local var: runtime.g * gp@[DW_OP_reg0(RAX)]
                       Unresolved local var: int64 ns@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  addr = *(uint32 **)(in_FS_OFFSET + -8);
  if ((uint32 *)**(undefined8 **)(addr + 0xc) != addr) {
    s.len = unaff_RBX;
    s.str = &DAT_0029b65b;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  ns = -1;
  if (*runtime_cgo_yield != (void *)0x0) {
    ns = 10000000;
  }
  while ((int)n_spill->key == 0) {
    lVar1 = *(long *)(addr + 0xc);
    *(undefined1 *)(lVar1 + 0x11d) = 1;
    runtime_futexsleep(addr,(uint32)lVar1,ns);
    if (*runtime_cgo_yield != (void *)0x0) {
      runtime_asmcgocall();
    }
    *(undefined1 *)(*(long *)(addr + 0xc) + 0x11d) = 0;
  }
  return;
}

