
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.supportsABI(uint32 ver, bool ~r1) */

bool syscall_supportsABI(uint32 ver)

{
  func__ **unaff_RBX;
  long in_FS_OFFSET;
  uint32 ver_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (syscall_osreldateOnce.done == 0) {
    sync___Once__doSlow((sync_Once *)&PTR_syscall_supportsABI_func1_002b3b30,unaff_RBX);
  }
  return SUB41(ver_spill,0);
}

