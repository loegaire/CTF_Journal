
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_debugCallWrap1(void)

{
  undefined8 uVar1;
  uintptr extraout_RAX;
  uintptr dispatch;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: runtime.debugCallWrapArgs * args@[???]
                       Unresolved local var: uintptr dispatch@[???]
                       Unresolved local var: runtime.g * callingG@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  dispatch = *(uintptr *)(in_FS_OFFSET + -8);
  uVar1 = *(undefined8 *)(*(long *)(dispatch + 0x88) + 8);
  if (runtime_writeBarrier._0_4_ == 0) {
    *(undefined8 *)(dispatch + 0x88) = 0;
  }
  else {
    runtime_gcWriteBarrier();
    dispatch = extraout_RAX;
  }
  runtime_debugCallWrap2(dispatch);
  *(undefined8 *)(*(long *)(in_FS_OFFSET + -8) + 0xa0) = uVar1;
  runtime_mcall();
  return;
}

