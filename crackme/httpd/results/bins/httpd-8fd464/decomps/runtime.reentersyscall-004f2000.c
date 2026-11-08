
/* WARNING: Unknown calling convention */

void runtime_reentersyscall(uintptr pc,uintptr sp)

{
  ulong *pc_00;
  uintptr sp_00;
  long in_FS_OFFSET;
  uintptr pc_spill;
  uintptr sp_spill;
  
                    /* Unresolved local var: runtime.g * _g_@[DW_OP_reg0(RAX)]
                       Unresolved local var: runtime.p * pp@[???] */
  pc_00 = *(ulong **)(in_FS_OFFSET + -8);
  *(int *)(pc_00[6] + 0x110) = *(int *)(pc_00[6] + 0x110) + 1;
  pc_00[2] = 0xfffffffffffffade;
  *(undefined1 *)((long)pc_00 + 0xb7) = 1;
  runtime_save((uintptr)pc_00,sp);
  pc_00[0xe] = sp_spill;
  pc_00[0xf] = pc_spill;
  runtime_casgstatus((runtime_g *)sp_spill,2,(uint32)pc_00);
  if ((pc_00[0xe] < *pc_00) || (pc_00[1] < pc_00[0xe])) {
    runtime_systemstack();
  }
  if (runtime_trace.enabled != false) {
    runtime_systemstack();
    runtime_save(pc_spill,0x300000002);
  }
  if (runtime_sched.sysmonwait != 0) {
    runtime_systemstack();
    runtime_save(pc_spill,0x300000002);
  }
  if (*(int *)(*(long *)(pc_00[6] + 0xd8) + 0x26d0) != 0) {
    runtime_systemstack();
    runtime_save(pc_spill,0x300000002);
  }
  *(undefined4 *)(pc_00[6] + 0x2ac) = *(undefined4 *)(*(long *)(pc_00[6] + 0xd8) + 0x14);
  *(undefined1 *)((long)pc_00 + 0xbb) = 1;
  sp_00 = *(uintptr *)(pc_00[6] + 0xd8);
  *(undefined8 *)(sp_00 + 0x38) = 0;
  *(uintptr *)(pc_00[6] + 0xe8) = sp_00;
  *(undefined8 *)(pc_00[6] + 0xd8) = 0;
  LOCK();
  *(undefined4 *)(sp_00 + 4) = 2;
  UNLOCK();
  if (runtime_sched.gcwaiting != 0) {
    runtime_systemstack();
    runtime_save(sp_spill,sp_00);
  }
  *(int *)(pc_00[6] + 0x110) = *(int *)(pc_00[6] + 0x110) + -1;
  return;
}

