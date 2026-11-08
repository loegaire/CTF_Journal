
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_minit(void)

{
  long in_FS_OFFSET;
  undefined8 local_30;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_thr_self();
  *(undefined8 *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0x48) = local_30;
                    /* Unresolved local var: runtime.g * gp@[???] */
  if ((((runtime_isarchive == false) && (runtime_islibrary == false)) &&
      ((*(runtime_g **)(in_FS_OFFSET + -8))->m == &runtime_m0)) &&
     (runtime_m0.g0 == *(runtime_g **)(in_FS_OFFSET + -8))) {
                    /* Unresolved local var: runtime.stackt st@[???] */
    runtime_sigaltstack();
  }
  runtime_minitSignals();
  return;
}

