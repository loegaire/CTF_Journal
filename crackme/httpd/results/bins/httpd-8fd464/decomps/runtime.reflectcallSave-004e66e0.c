
/* WARNING: Unknown calling convention */

void runtime_reflectcallSave(runtime__panic *p,void *fn,void *arg,uint32 argsize)

{
  runtime__panic *prVar1;
  long in_FS_OFFSET;
  uintptr unaff_retaddr;
  runtime__panic *p_spill;
  void *fn_spill;
  void *arg_spill;
  uint32 argsize_spill;
  void *local_38;
  
                    /* Unresolved local var: internal/abi.RegArgs regs@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (p_spill != (runtime__panic *)0x0) {
    runtime_getargp();
    prVar1 = p_spill;
    if (runtime_writeBarrier._0_4_ == 0) {
      p_spill->argp = local_38;
    }
    else {
      runtime_gcWriteBarrier();
    }
    prVar1->pc = unaff_retaddr;
    if (runtime_writeBarrier._0_4_ == 0) {
      prVar1->sp = &p_spill;
    }
    else {
      runtime_gcWriteBarrier();
    }
  }
  runtime_reflectcall();
  if (p_spill != (runtime__panic *)0x0) {
    p_spill->pc = 0;
    if (runtime_writeBarrier._0_4_ == 0) {
      p_spill->sp = (void *)0x0;
    }
    else {
      runtime_gcWriteBarrier();
    }
  }
  return;
}

