
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.getPageSize(uintptr ~r0) */

uintptr runtime_getPageSize(void)

{
  uintptr extraout_RAX;
  long in_FS_OFFSET;
  undefined4 local_28;
  
                    /* Unresolved local var: uint32[2] mib@[???]
                       Unresolved local var: uint32 out@[???]
                       Unresolved local var: uintptr nout@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_sysctl();
  if (-1 < local_28) {
    return 0;
  }
  return extraout_RAX;
}

