
/* WARNING: Unknown calling convention */

void runtime_debugCallWrap2_func1(bool *_ok)

{
  long in_FS_OFFSET;
  bool *_ok_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (*_ok_spill == false) {
                    /* Unresolved local var: interface_{} err@[???] */
    runtime_gorecover((uintptr)&_ok_spill);
    runtime_debugCallPanicked();
  }
  return;
}

