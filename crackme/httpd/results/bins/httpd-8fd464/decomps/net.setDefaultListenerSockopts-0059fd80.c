
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.setDefaultListenerSockopts(int s, error ~r1) */

error net_setDefaultListenerSockopts(int s)

{
  undefined1 *puVar1;
  int in_RCX;
  int unaff_RBX;
  uintptr in_RSI;
  void *in_RDI;
  long in_FS_OFFSET;
  error eVar2;
  int s_spill;
  long local_30;
  undefined8 local_28;
  undefined4 local_1c;
  undefined8 local_18;
  long local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: int32 n@[???] */
  local_1c = 1;
  eVar2 = syscall_setsockopt((int)&local_1c,unaff_RBX,in_RCX,in_RDI,in_RSI);
  if (local_30 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    local_10 = local_30;
    local_18 = local_28;
    runtime_newobject((runtime__type *)&DAT_0024d4a0);
    _DAT_00010007 = 10;
    _DAT_0000ffff = &DAT_00290376;
    _DAT_0001000f = local_10;
    if (runtime_writeBarrier._0_4_ == 0) {
      _DAT_00010017 = local_18;
    }
    else {
      runtime_gcWriteBarrierCX();
    }
    puVar1 = go_itab__os_SyscallError_error;
  }
  eVar2.tab = (runtime_itab *)puVar1;
  return eVar2;
}

