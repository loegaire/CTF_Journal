
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.nonblockingPipe(int32 r, int32 w, int32 errno) */

multireturn_int32_int32_int32_ runtime_nonblockingPipe(void)

{
  undefined4 unaff_EBX;
  long in_FS_OFFSET;
  multireturn_int32_int32_int32_ mVar1;
  multireturn_int32_int32_int32_ mVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_pipe2();
  if (local_20 == -0x4e) {
    runtime_pipe();
    if (local_28 != 0) {
      mVar2.w = unaff_EBX;
      mVar2.r = local_28;
      mVar2.errno = local_2c;
      return mVar2;
    }
    runtime_closeonexec();
    runtime_setNonblock();
    runtime_closeonexec();
    runtime_setNonblock();
    local_28 = 0x100004;
    local_20 = 0;
  }
  mVar1.w = unaff_EBX;
  mVar1.r = local_20;
  mVar1.errno = local_28;
  return mVar1;
}

