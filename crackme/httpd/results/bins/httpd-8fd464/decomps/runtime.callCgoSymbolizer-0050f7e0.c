
/* WARNING: Unknown calling convention */

void runtime_callCgoSymbolizer(runtime_cgoSymbolizerArg *arg)

{
  undefined **ppuVar1;
  undefined8 in_RSI;
  undefined8 in_RDI;
  long in_FS_OFFSET;
  runtime_cgoSymbolizerArg *arg_spill;
  
                    /* Unresolved local var: func(unsafe.Pointer,_unsafe.Pointer)_int32 * *
                       call@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((runtime_panicking == 0) &&
     (*(long *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 200) ==
      *(long *)(in_FS_OFFSET + -8))) {
    ppuVar1 = &PTR_runtime_cgocall_002b37a8;
  }
  else {
    ppuVar1 = &PTR_runtime_asmcgocall_002b3750;
  }
  (*(code *)*ppuVar1)(in_RDI,in_RSI,ppuVar1);
  return;
}

