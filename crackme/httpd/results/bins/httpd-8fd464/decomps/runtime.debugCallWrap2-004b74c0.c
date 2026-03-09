
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Unknown calling convention */

void runtime_debugCallWrap2(uintptr dispatch)

{
  long in_FS_OFFSET;
  uintptr dispatch_spill;
  bool local_2a [10];
  bool *local_20;
  undefined **local_18;
  bool *pbStack_10;
  
                    /* Unresolved local var: func() * * dispatchF@[???]
                       Unresolved local var: runtime.funcval dispatchFV@[???]
                       Unresolved local var: bool ok@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_20 = local_2a + 2;
  local_2a[0] = false;
  local_18 = &PTR_runtime_debugCallWrap2_func1_002b37e8;
  pbStack_10 = local_2a;
  local_2a[1] = true;
  (*(code *)dispatch_spill)();
  local_2a[0] = true;
  local_2a[1] = false;
  runtime_debugCallWrap2_func1(pbStack_10);
  return;
}

