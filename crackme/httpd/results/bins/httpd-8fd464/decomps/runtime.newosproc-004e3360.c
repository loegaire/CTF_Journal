
/* WARNING: Unknown calling convention */

void runtime_newosproc(runtime_m *mp)

{
  int iVar1;
  int iVar2;
  uintptr uVar3;
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  undefined1 auVar4 [16];
  runtime_m *mp_spill;
  int local_98;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 local_60;
  long local_58;
  undefined8 *local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_28 [32];
  
                    /* Unresolved local var: void * stk@[???]
                       Unresolved local var: int32 ret@[???]
                       Unresolved local var: runtime.thrparam param@[???]
                       Unresolved local var: runtime.sigset oset@[???] */
  while (local_28 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar3 = (mp_spill->g0->stack).hi;
  local_70 = 0;
  auVar4 = FUN_0051a4ec(&local_68,0x3046f0,runtime_thr_start);
  local_70 = auVar4._8_8_;
  local_68 = auVar4._0_8_;
  local_60 = *(undefined8 *)*local_68;
  local_58 = uVar3 - *(long *)*local_68;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = local_68 + 0x12;
  local_80 = 0;
  uStack_78 = 0;
  runtime_sigprocmask();
  runtime_thr_new();
  local_98 = (int)&local_80;
  runtime_sigprocmask();
  if (-1 < local_98) {
    return;
  }
  iVar2 = (int)runtime_sched.nmfreed;
  iVar1 = (int)runtime_sched.mnext;
  runtime_printlock();
  s.len = unaff_RBX;
  s.str = &DAT_002a85ce;
  runtime_printstring(s);
  runtime_printint((long)(iVar1 - iVar2));
  s_00.len = unaff_RBX;
  s_00.str = &DAT_00299235;
  runtime_printstring(s_00);
  runtime_printint((long)-local_98);
  s_01.len = unaff_RBX;
  s_01.str = &DAT_00287783;
  runtime_printstring(s_01);
  runtime_printunlock();
  s_02.len = unaff_RBX;
  s_02.str = &DAT_0028e348;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_02);
}

