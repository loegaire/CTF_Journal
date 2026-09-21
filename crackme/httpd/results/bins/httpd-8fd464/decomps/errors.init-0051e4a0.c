
/* WARNING: Removing unreachable block (ram,0x0051e4ee) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void errors_init(void)

{
  long in_FS_OFFSET;
  runtime_itab *local_28;
  void *local_20;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  internal_reflectlite___rtype__Elem((internal_reflectlite_rtype *)&DAT_0021a5a0);
  errors_errorType.tab = local_28;
  if (runtime_writeBarrier._0_4_ == 0) {
    errors_errorType.data = local_20;
  }
  else {
    runtime_gcWriteBarrier();
  }
  return;
}

