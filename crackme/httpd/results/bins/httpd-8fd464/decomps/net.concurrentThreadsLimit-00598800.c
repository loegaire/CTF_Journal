
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.concurrentThreadsLimit(int ~r0) */

int net_concurrentThreadsLimit(void)

{
  syscall_Rlimit *unaff_RBX;
  long in_FS_OFFSET;
  error eVar1;
  long local_28;
  long local_18 [2];
  
                    /* Unresolved local var: int r@[???]
                       Unresolved local var: syscall.Rlimit rlim@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_18[0] = 0;
  local_18[1] = 0;
  eVar1 = syscall_Getrlimit((int)local_18,unaff_RBX);
  if (local_28 == 0) {
    if (local_18[0] < 0x1f5) {
      if (0x1e < local_18[0]) {
        local_18[0] = local_18[0] + -0x1e;
      }
    }
    else {
      local_18[0] = 500;
    }
    return local_18[0];
  }
  return (int)eVar1.tab;
}

