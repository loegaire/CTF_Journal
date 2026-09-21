
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void context_WithDeadline_func1(void)

{
  long in_RDX;
  long extraout_RDX;
  bool unaff_BL;
  void *in_RDI;
  long in_FS_OFFSET;
  error err;
  
                    /* Unresolved local var: context.timerCtx * c@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  err.data = in_RDI;
  err.tab = context_Canceled.tab;
  context___timerCtx__cancel(*(context_timerCtx **)(in_RDX + 8),unaff_BL,err);
  return;
}

