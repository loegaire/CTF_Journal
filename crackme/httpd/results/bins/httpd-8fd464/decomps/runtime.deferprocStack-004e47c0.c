
/* WARNING: Unknown calling convention */

void runtime_deferprocStack(runtime__defer *d)

{
  long lVar1;
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  uintptr unaff_retaddr;
  runtime__defer *d_spill;
  
                    /* Unresolved local var: runtime.g * gp@[DW_OP_reg0(RAX)] */
  lVar1 = *(long *)(in_FS_OFFSET + -8);
  if (*(long *)(*(long *)(lVar1 + 0x30) + 200) == lVar1) {
    d_spill->started = false;
    d_spill->heap = false;
    d_spill->openDefer = false;
    d_spill->sp = (uintptr)&d_spill;
    d_spill->pc = unaff_retaddr;
    d_spill->framepc = 0;
    d_spill->varp = 0;
    d_spill->_panic = (runtime__panic *)0x0;
    d_spill->fd = (void *)0x0;
    d_spill->link = *(runtime__defer **)(lVar1 + 0x28);
    *(runtime__defer **)(lVar1 + 0x28) = d_spill;
    runtime_return0();
    return;
  }
  s.len = unaff_RBX;
  s.str = &DAT_0029c877;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}

