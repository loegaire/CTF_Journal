
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void syscall_supportsABI_func1(void)

{
  int unaff_RBX;
  long in_FS_OFFSET;
  string name;
  uint32 local_20;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  name.len = unaff_RBX;
  name.str = &DAT_0029758f;
  syscall_SysctlUint32(name);
  syscall_osreldate = local_20;
  return;
}

