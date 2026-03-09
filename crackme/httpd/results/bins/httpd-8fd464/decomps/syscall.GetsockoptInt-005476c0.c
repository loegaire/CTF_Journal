
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.GetsockoptInt(int fd, int level, int opt, int value, error
   err) */

multireturn_int_error__conflict4 syscall_GetsockoptInt(int fd,int level,int opt)

{
  syscall__Socklen *in_RSI;
  void *in_RDI;
  long in_FS_OFFSET;
  error eVar1;
  multireturn_int_error__conflict4 mVar2;
  int fd_spill;
  int level_spill;
  int opt_spill;
  undefined8 local_20;
  void *local_18;
  undefined4 local_10;
  int32 n;
  
                    /* Unresolved local var: syscall._Socklen vallen@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  n = 0;
  local_10 = 4;
  eVar1 = syscall_getsockopt((int)&local_10,level,opt,in_RDI,in_RSI);
  mVar2.err.tab = eVar1.data;
  mVar2.value = local_20;
  mVar2.err.data = local_18;
  return mVar2;
}

