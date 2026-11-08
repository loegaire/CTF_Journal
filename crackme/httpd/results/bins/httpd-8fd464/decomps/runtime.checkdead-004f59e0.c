
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_checkdead(void)

{
  runtime_puintptr rVar1;
  runtime_muintptr rVar2;
  int32 iVar3;
  int32 iVar4;
  int32 iVar5;
  uint uVar6;
  undefined8 in_RAX;
  undefined8 extraout_RAX;
  runtime_puintptr *prVar7;
  int iVar8;
  long lVar9;
  long in_FS_OFFSET;
  multireturn_int64_runtime_p___ mVar10;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  string s_05;
  string s_06;
  runtime_puintptr local_40;
  long local_28;
  runtime_p *local_20;
  func__runtime_g_ *local_18;
  long *plStack_10;
  
                    /* Unresolved local var: int32 run0@[???]
                       Unresolved local var: int32 run@[???]
                       Unresolved local var: int grunning@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    in_RAX = extraout_RAX;
  }
  if ((runtime_islibrary != false) || (runtime_isarchive != false)) {
    return;
  }
  if (runtime_panicking != 0) {
    return;
  }
  if ((runtime_iscgo == false) && (runtime_cgoHasExtraM != false)) {
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: bool haveExtraM@[???] */
    runtime_lockextra(SUB81(in_RAX,0));
    LOCK();
    runtime_extram = local_40;
    UNLOCK();
    uVar6 = (uint)(runtime_extraMCount != 0);
  }
  else {
    uVar6 = 0;
  }
  iVar5 = runtime_sched.nmsys;
  iVar4 = runtime_sched.nmidlelocked;
  iVar3 = runtime_sched.nmidle;
  s_00.len = (runtime_p *)(runtime_sched.mnext - runtime_sched.nmfreed);
  iVar8 = (((int)s_00.len - runtime_sched.nmidle) - runtime_sched.nmidlelocked) -
          runtime_sched.nmsys;
  if ((int)uVar6 < iVar8) {
    return;
  }
  if (iVar8 < 0) {
    local_20 = s_00.len;
    runtime_printlock();
    s_02.len = (int)s_00.len;
    s_02.str = &DAT_0029fec1;
    runtime_printstring(s_02);
    runtime_printint((long)iVar3);
    s_03.len = (int)s_00.len;
    s_03.str = &DAT_0029648d;
    runtime_printstring(s_03);
    runtime_printint((long)iVar4);
    s_04.len = (int)s_00.len;
    s_04.str = &DAT_0028b87a;
    runtime_printstring(s_04);
    runtime_printint((long)(int)local_20);
    s_05.len = (int)s_00.len;
    s_05.str = &DAT_0028a3f2;
    runtime_printstring(s_05);
    runtime_printint((long)iVar5);
    runtime_printnl();
    runtime_printunlock();
    s_06.len = (int)s_00.len;
    s_06.str = (uint8 *)0x2a1730;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_06);
  }
  local_28 = 0;
  local_18 = runtime_checkdead_func1;
  plStack_10 = &local_28;
  runtime_forEachG(&local_18);
  if (local_28 == 0) {
    runtime_unlock2(&runtime_sched.lock);
    s_01.len = (int)s_00.len;
    s_01.str = &DAT_002aa23c;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_01);
  }
  if (runtime_faketime != 0) {
                    /* Unresolved local var: int64 when@[???]
                       Unresolved local var: runtime.p * _p_@[???] */
    mVar10 = runtime_timeSleepUntil();
    s_00.len = mVar10.~r1;
    if (local_40 != 0) {
                    /* Unresolved local var: runtime.m * mp@[???] */
                    /* Unresolved local var: runtime.puintptr * pp@[???] */
      prVar7 = &runtime_sched.pidle;
      do {
        rVar1 = *prVar7;
        runtime_faketime = (int64)&local_18;
        if (rVar1 == 0) {
code_r0x004f5bb9:
                    /* Unresolved local var: runtime.m * mp@[???] */
          rVar2 = runtime_sched.midle;
          if (runtime_sched.midle == 0) {
            s_00.str = &DAT_0029ec2c;
                    /* WARNING: Subroutine does not return */
            runtime_throw(s_00);
          }
          runtime_sched.nmidle = runtime_sched.nmidle + -1;
          prVar7 = (runtime_puintptr *)(runtime_sched.midle + 0xe0);
          runtime_sched.midle = *(runtime_muintptr *)(runtime_sched.midle + 0x168);
          *prVar7 = local_40;
          runtime_notewakeup((runtime_note *)(rVar2 + 0x158));
          return;
        }
        if (rVar1 == local_40) {
          *prVar7 = *(runtime_puintptr *)(local_40 + 8);
          goto code_r0x004f5bb9;
        }
        prVar7 = (runtime_puintptr *)(rVar1 + 8);
      } while( true );
    }
  }
                    /* Unresolved local var: runtime.p * _p_@[???] */
  lVar9 = 0;
  while( true ) {
    if (runtime_allp.len <= lVar9) {
      *(undefined4 *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xfc) = 0xffffffff;
      runtime_unlock2(&runtime_sched.lock);
      s.len = (int)s_00.len;
      s.str = &DAT_002a519b;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s);
    }
    s_00.len = runtime_allp.array[lVar9];
    if (0 < ((s_00.len)->timers).len) break;
    lVar9 = lVar9 + 1;
  }
  return;
}

