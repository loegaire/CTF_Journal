
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_oneNewExtraM(void)

{
  bool nilokay;
  runtime_p *in_RAX;
  long extraout_RAX;
  uintptr extraout_RAX_00;
  uintptr uVar1;
  runtime_g *gp;
  runtime_p *extraout_RAX_01;
  int64 in_RCX;
  long lVar2;
  func__ **unaff_RBX;
  long in_FS_OFFSET;
  undefined8 local_20;
  
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: runtime.m * mnext@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    in_RAX = extraout_RAX_01;
  }
  runtime_allocm(in_RAX,unaff_RBX,in_RCX);
  runtime_malg((int32)local_20);
  _DAT_00000040 = 0x5199e1;
  _DAT_00000038 = _DAT_00000008 + -0x20;
  _DAT_00000060 = 0;
  _DAT_00000048 = 0;
  uRam0000000000000078 = 0x5199e1;
  lRam0000000000000070 = _DAT_00000038;
  lRam0000000000000080 = _DAT_00000038;
  runtime_casgstatus((runtime_g *)0x600000000,(uint32)unaff_RBX,(uint32)_DAT_00000038);
  if (runtime_writeBarrier._0_4_ == 0) {
    lVar2 = 0;
    _DAT_00000030 = local_20;
  }
  else {
    runtime_gcWriteBarrierCX();
    lVar2 = extraout_RAX;
  }
  if (runtime_writeBarrier._0_4_ == 0) {
    *(long *)(local_20 + 200) = lVar2;
    uVar1 = local_20;
  }
  else {
    runtime_gcWriteBarrierCX();
    uVar1 = extraout_RAX_00;
  }
  *(int *)(uVar1 + 0x27c) = *(int *)(uVar1 + 0x27c) + 1;
  *(long *)(uVar1 + 0x170) = lVar2;
  *(uintptr *)(lVar2 + 0xe8) = uVar1;
  LOCK();
  UNLOCK();
  gp = (runtime_g *)(runtime_sched.goidgen + 1);
  runtime_sched.goidgen = runtime_sched.goidgen + 1;
  *(runtime_g **)(lVar2 + 0x98) = gp;
  runtime_allgadd(gp);
  LOCK();
  UNLOCK();
  nilokay = SUB41(runtime_sched.ngsys,0);
  runtime_sched.ngsys = runtime_sched.ngsys + 1;
  runtime_lockextra(nilokay);
  *(undefined8 *)(local_20 + 0x168) = 0x600000000;
  runtime_extraMCount = runtime_extraMCount + 1;
  LOCK();
  runtime_extram = local_20;
  UNLOCK();
  return;
}

