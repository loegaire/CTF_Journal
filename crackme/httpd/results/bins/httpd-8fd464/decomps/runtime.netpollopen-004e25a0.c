
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.netpollopen(uintptr fd, runtime.pollDesc * pd, int32 ~r2)
    */

int32 runtime_netpollopen(uintptr fd,runtime_pollDesc *pd)

{
  long in_FS_OFFSET;
  uintptr fd_spill;
  runtime_pollDesc *pd_spill;
  undefined4 local_50;
  runtime_keventt ev [2];
  
                    /* Unresolved local var: int32 n@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_kevent();
  if (local_50 < 0) {
    return -local_50;
  }
  return local_50;
}

