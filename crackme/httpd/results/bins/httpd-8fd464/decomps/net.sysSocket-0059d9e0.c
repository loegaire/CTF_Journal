
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.sysSocket(int family, int sotype, int proto, int ~r3, error
   ~r4) */

multireturn_int_error__conflict10 net_sysSocket(int family,int sotype,int proto)

{
  int iVar1;
  int iVar2;
  undefined8 *extraout_RAX;
  undefined8 *extraout_RAX_00;
  undefined8 *extraout_RAX_01;
  undefined8 *puVar3;
  int in_RSI;
  long *plVar4;
  int in_RDI;
  error *peVar5;
  int iVar6;
  error *in_R8;
  error *peVar7;
  long in_FS_OFFSET;
  error eVar8;
  multireturn_int_error__conflict10 mVar9;
  multireturn_int_error__conflict10 mVar10;
  multireturn_int_error__conflict10 mVar11;
  multireturn_int_error__conflict10 mVar12;
  multireturn_int_error__conflict10 mVar13;
  int family_spill;
  int sotype_spill;
  int proto_spill;
  undefined8 *local_50;
  long local_48;
  int local_40;
  error *local_38;
  long *local_30;
  
                    /* Unresolved local var: int s@[???]
                       Unresolved local var: error err@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  puVar3 = (undefined8 *)(sotype_spill | 0x30000000);
  (**net_socketFunc)(in_RDI,in_RSI,(int)net_socketFunc,(int *)family_spill,in_R8);
  if (local_38 == (error *)0x0) {
    mVar13.~r4.tab = (runtime_itab *)local_30;
    mVar13.~r3 = local_40;
    mVar13.~r4.data = (void *)0x0;
    return mVar13;
  }
  if (local_38 != (error *)0x0) {
    peVar7 = (error *)&DAT_002463a0;
    if (((local_38->data == &DAT_002463a0) && (*local_30 == 0x2b)) ||
       ((local_38 != (error *)0x0 && ((local_38->data == &DAT_002463a0 && (*local_30 == 0x16)))))) {
      LOCK();
      iVar1 = syscall_ForkLock.readerCount + 1;
      UNLOCK();
      iVar2 = syscall_ForkLock.readerCount + 1;
      plVar4 = local_30;
      peVar5 = local_38;
      syscall_ForkLock.readerCount = iVar1;
      if (iVar2 < 0) {
        sync_runtime_SemacquireMutex(&syscall_ForkLock.readerSem,SUB81(local_30,0),0xcf9f20);
      }
      local_50 = (undefined8 *)sotype_spill;
      local_48 = proto_spill;
      (**net_socketFunc)((int)peVar5,(int)plVar4,(int)net_socketFunc,(int *)proto_spill,peVar7);
      if (local_38 == (error *)0x0) {
        local_50 = (undefined8 *)0x2;
        local_48 = 1;
        syscall_fcntl(local_40,(int)local_30,0);
      }
                    /* Unresolved local var: int32 r@[???] */
      iVar6 = 0xcf9f20;
      LOCK();
      iVar1 = syscall_ForkLock.readerCount + -1;
      UNLOCK();
      iVar2 = syscall_ForkLock.readerCount + -1;
      syscall_ForkLock.readerCount = iVar1;
      if (iVar2 < 0) {
        local_50 = (undefined8 *)CONCAT44(local_50._4_4_,iVar2);
        sync___RWMutex__rUnlockSlow(&syscall_ForkLock,(int32)local_30);
      }
      if (local_38 == (error *)0x0) {
        local_50 = (undefined8 *)CONCAT71(local_50._1_7_,1);
        eVar8 = syscall_SetNonblock(local_40,SUB81(local_30,0));
        mVar10.~r4.tab = eVar8.data;
        if (local_48 == 0) {
          mVar11.~r4.tab = mVar10.~r4.tab;
          mVar11.~r3 = local_40;
          mVar11.~r4.data = (void *)0x0;
          return mVar11;
        }
        (**internal_poll_CloseFunc)(iVar6,local_38);
        runtime_newobject((runtime__type *)&DAT_0024d4a0);
        local_50[1] = 0xb;
        *local_50 = &DAT_0029224a;
        local_50[2] = local_48;
        if (runtime_writeBarrier._0_4_ == 0) {
          local_50[3] = local_40;
        }
        else {
          runtime_gcWriteBarrierCX();
          local_50 = extraout_RAX_00;
        }
        mVar10.~r3 = (int)local_50;
        mVar10.~r4.data = go_itab__os_SyscallError_error;
        return mVar10;
      }
      runtime_newobject((runtime__type *)&DAT_0024d4a0);
      local_50[1] = 6;
      *local_50 = &DAT_0028a0c2;
      local_50[2] = local_38;
      if (runtime_writeBarrier._0_4_ == 0) {
        local_50[3] = local_30;
      }
      else {
        runtime_gcWriteBarrierCX();
        local_50 = extraout_RAX;
      }
      mVar9.~r4.tab = (runtime_itab *)local_30;
      mVar9.~r3 = (int)local_50;
      mVar9.~r4.data = go_itab__os_SyscallError_error;
      return mVar9;
    }
  }
  runtime_newobject((runtime__type *)&DAT_0024d4a0);
  puVar3[1] = 6;
  *puVar3 = &DAT_0028a0c2;
  puVar3[2] = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    puVar3[3] = local_30;
  }
  else {
    runtime_gcWriteBarrierCX();
    puVar3 = extraout_RAX_01;
  }
  mVar12.~r4.tab = (runtime_itab *)local_30;
  mVar12.~r3 = (int)puVar3;
  mVar12.~r4.data = go_itab__os_SyscallError_error;
  return mVar12;
}

