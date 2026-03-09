
/* WARNING: Unknown calling convention */

void fmt___pp__free(fmt_pp *p)

{
  fmt_pp *extraout_RAX;
  fmt_pp *extraout_RAX_00;
  fmt_pp *extraout_RAX_01;
  runtime__type *unaff_RBX;
  long in_FS_OFFSET;
  interface___ x;
  fmt_pp *p_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((p_spill->buf).cap < 0x10001) {
    (p_spill->buf).len = 0;
    (p_spill->arg)._type = (runtime__type *)0x0;
    if (runtime_writeBarrier._0_4_ == 0) {
      (p_spill->arg).data = (void *)0x0;
    }
    else {
      runtime_gcWriteBarrierCX();
      p_spill = extraout_RAX;
    }
    (p_spill->value).flag = 0;
    if (runtime_writeBarrier._0_4_ == 0) {
      (p_spill->value).typ = (reflect_rtype *)0x0;
      (p_spill->value).ptr = (void *)0x0;
    }
    else {
      runtime_gcWriteBarrierCX();
      runtime_gcWriteBarrierCX();
      p_spill = extraout_RAX_00;
    }
    (p_spill->wrappedErr).tab = (runtime_itab *)0x0;
    if (runtime_writeBarrier._0_4_ == 0) {
      (p_spill->wrappedErr).data = (void *)0x0;
    }
    else {
      runtime_gcWriteBarrierCX();
      p_spill = extraout_RAX_01;
    }
    x.data = &DAT_0027d1e0;
    x._type = unaff_RBX;
    sync___Pool__Put((sync_Pool *)p_spill,x);
    return;
  }
  return;
}

