
/* WARNING: Unknown calling convention */

void runtime_preemptPark(runtime_g *gp)

{
  uint uVar1;
  long lVar2;
  void *p;
  int64 v;
  int64 v_00;
  runtime_g *extraout_RAX;
  runtime_moduledata *unaff_RBX;
  long in_FS_OFFSET;
  runtime_funcInfo rVar3;
  string sVar4;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  string s_05;
  string s_06;
  string s_07;
  string s_08;
  string s_09;
  runtime_g *gp_spill;
  long local_48;
  runtime__func *local_40;
  uint8 *local_38;
  
                    /* Unresolved local var: uint32 status@[???]
                       Unresolved local var: uint32 ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x18)) {
    runtime_morestackc();
    gp = extraout_RAX;
  }
  if (runtime_trace.enabled != false) {
    local_48 = 0;
    runtime_traceGoPark((uint8)gp,(int)unaff_RBX);
  }
  if ((gp_spill->atomicstatus & 0xffffefff) != 2) {
                    /* Unresolved local var: runtime.g * _g_@[???] */
    p = *(void **)(in_FS_OFFSET + -8);
    uVar1 = gp_spill->atomicstatus;
    v = gp_spill->goid;
    runtime_printlock();
    sVar4.len = v;
    sVar4.str = &DAT_00299ad5;
    runtime_printstring(sVar4);
    runtime_printpointer(gp_spill);
    s_04.len = v;
    s_04.str = &DAT_0028a40e;
    runtime_printstring(s_04);
    runtime_printint(v);
    s_05.len = v;
    s_05.str = &DAT_0029ae57;
    runtime_printstring(s_05);
    runtime_printuint((ulong)uVar1);
    runtime_printnl();
    runtime_printunlock();
    uVar1 = *(uint *)((long)p + 0x90);
    v_00 = *(int64 *)((long)p + 0x98);
    runtime_printlock();
    s_06.len = v;
    s_06.str = &DAT_00299aa5;
    runtime_printstring(s_06);
    runtime_printpointer(p);
    s_07.len = v;
    s_07.str = &DAT_0028a40e;
    runtime_printstring(s_07);
    runtime_printint(v_00);
    s_08.len = v;
    s_08.str = &DAT_0029ae44;
    runtime_printstring(s_08);
    runtime_printuint((ulong)uVar1);
    runtime_printnl();
    runtime_printunlock();
    s_09.len = v;
    s_09.str = &DAT_00292f6e;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_09);
  }
  gp_spill->waitreason = 0x19;
  if (gp_spill->asyncSafePoint != false) {
    rVar3 = runtime_findfunc((uintptr)gp_spill);
    if (local_48 == 0) {
      s_03.len = (int)rVar3.datap;
      s_03.str = &DAT_0029c9c7;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_03);
    }
    unaff_RBX = rVar3.datap;
    if ((*(byte *)(local_48 + 0x29) & 2) != 0) {
      rVar3._func = local_40;
      sVar4 = runtime_funcname(rVar3);
      s.len = sVar4.len;
      runtime_printlock();
      s.str = &DAT_002a54c9;
      runtime_printstring(s);
      s_00.len = s.len;
      s_00.str = local_38;
      runtime_printstring(s_00);
      s_01.len = s.len;
      s_01.str = &DAT_0029a4a0;
      runtime_printstring(s_01);
      runtime_printunlock();
      s_02.len = s.len;
      s_02.str = &DAT_00298f38;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_02);
    }
  }
  runtime_casGToPreemptScan(gp_spill,(uint32)unaff_RBX,2);
                    /* Unresolved local var: runtime.g * _g_@[???] */
  lVar2 = *(long *)(in_FS_OFFSET + -8);
  *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x30) + 200) + 0x30) = 0;
  *(undefined8 *)(*(long *)(lVar2 + 0x30) + 200) = 0;
  runtime_casfrom_Gscanstatus((runtime_g *)0x900001009,(uint32)unaff_RBX,0);
  runtime_schedule();
  return;
}

