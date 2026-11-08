
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.maxListenerBacklog(int ~r0) */

int net_maxListenerBacklog(void)

{
  int unaff_RBX;
  long in_FS_OFFSET;
  string name;
  uint local_20;
  long local_18;
  
                    /* Unresolved local var: uint32 n@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  name.len = unaff_RBX;
  name.str = &DAT_0029d30b;
  syscall_SysctlUint32(name);
  if ((local_20 != 0) && (local_18 == 0)) {
    if (0xffff < local_20) {
      local_20 = 0xffff;
    }
    return (ulong)local_20;
  }
  return (ulong)local_20;
}

