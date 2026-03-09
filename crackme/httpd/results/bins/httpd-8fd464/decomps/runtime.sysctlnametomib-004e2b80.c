
/* WARNING: Removing unreachable block (ram,0x004e2c1f) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.sysctlnametomib([]uint8 name, uint32[24] * mib, uint32
   ~r2) */

uint32 runtime_sysctlnametomib(__uint8 name,uint32 (*mib) [24])

{
  uint32 extraout_EAX;
  long in_FS_OFFSET;
  __uint8 name_spill;
  uint32 (*mib_spill) [24];
  undefined4 local_20;
  uint32 oid [2];
  
                    /* Unresolved local var: uintptr miblen@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (name_spill.len != 0) {
    runtime_sysctl();
    if (-1 < local_20) {
      return 6;
    }
    return extraout_EAX;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

