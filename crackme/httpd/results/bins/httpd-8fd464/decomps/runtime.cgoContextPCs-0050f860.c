
/* WARNING: Unknown calling convention */

void runtime_cgoContextPCs(uintptr ctxt,__uintptr buf)

{
  undefined **ppuVar1;
  long in_FS_OFFSET;
  uintptr ctxt_spill;
  __uintptr buf_spill;
  
                    /* Unresolved local var: func(unsafe.Pointer,_unsafe.Pointer)_int32 * *
                       call@[???]
                       Unresolved local var: runtime.cgoTracebackArg arg@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (runtime_cgoTraceback == (void *)0x0) {
    return;
  }
  if ((runtime_panicking == 0) &&
     (*(long *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 200) ==
      *(long *)(in_FS_OFFSET + -8))) {
    ppuVar1 = &PTR_runtime_cgocall_002b37a8;
  }
  else {
    ppuVar1 = &PTR_runtime_asmcgocall_002b3750;
  }
  if (buf_spill.len != 0) {
    (*(code *)*ppuVar1)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

