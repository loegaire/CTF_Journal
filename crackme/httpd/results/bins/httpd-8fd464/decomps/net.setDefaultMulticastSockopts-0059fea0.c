
/* WARNING: Removing unreachable block (ram,0x0059ffe9) */
/* WARNING: Removing unreachable block (ram,0x005a0039) */
/* WARNING: Removing unreachable block (ram,0x005a002e) */
/* WARNING: Removing unreachable block (ram,0x005a0047) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.setDefaultMulticastSockopts(int s, error ~r1) */

error net_setDefaultMulticastSockopts(int s)

{
  undefined1 auVar1 [16];
  runtime_itab *extraout_RAX;
  runtime_itab *prVar2;
  int unaff_RBX;
  uintptr in_RSI;
  void *in_RDI;
  long in_FS_OFFSET;
  error eVar3;
  int s_spill;
  long local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  long local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: error err@[???] */
                    /* Unresolved local var: int32 n@[???] */
  local_28 = 1;
  eVar3 = syscall_setsockopt(s_spill,unaff_RBX,(int)&local_28,in_RDI,in_RSI);
  if (local_38 == 0) {
                    /* Unresolved local var: int32 n@[???] */
    local_24 = 1;
    eVar3 = syscall_setsockopt((int)&local_24,(int)eVar3.data,0,in_RDI,in_RSI);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = eVar3.data;
    return (error)(auVar1 << 0x40);
  }
  local_10 = local_38;
  local_20 = local_30;
  runtime_newobject((runtime__type *)&DAT_0024d4a0);
  prVar2 = (runtime_itab *)&DAT_0000ffff;
  _DAT_00010007 = 10;
  _DAT_0000ffff = &DAT_00290376;
  _DAT_0001000f = local_10;
  if (runtime_writeBarrier._0_4_ == 0) {
    _DAT_00010017 = local_20;
  }
  else {
    runtime_gcWriteBarrierCX();
    prVar2 = extraout_RAX;
  }
  eVar3.tab = prVar2;
  return eVar3;
}

