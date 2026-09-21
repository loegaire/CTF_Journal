
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_stoplockedm(void)

{
  uint uVar1;
  runtime_p *_p_;
  long lVar2;
  void *p;
  void *p_00;
  int64 v;
  int64 v_00;
  runtime_p *prVar3;
  runtime_p *extraout_RAX;
  int unaff_RBX;
  long in_FS_OFFSET;
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
  
                    /* Unresolved local var: runtime.g * _g_@[???]
                       Unresolved local var: uint32 status@[???]
                       Unresolved local var: uint32 ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  _p_ = *(runtime_p **)(in_FS_OFFSET + -8);
  lVar2 = (_p_->sysmontick).syscallwhen;
  if ((*(long *)(lVar2 + 0x170) != 0) && (*(long *)(*(long *)(lVar2 + 0x170) + 0xe8) == lVar2)) {
    prVar3 = _p_;
    if (*(long *)(lVar2 + 0xd8) != 0) {
      prVar3 = runtime_releasep();
      runtime_handoffp(prVar3);
      prVar3 = extraout_RAX;
    }
    runtime_incidlelocked((int32)prVar3);
    runtime_mPark();
    uVar1 = *(uint *)(*(long *)((_p_->sysmontick).syscallwhen + 0x170) + 0x90);
    if ((uVar1 & 0xffffefff) == 1) {
      runtime_acquirep(_p_);
      *(undefined8 *)((_p_->sysmontick).syscallwhen + 0xe0) = 0;
      return;
    }
    runtime_printlock();
    s.len = unaff_RBX;
    s.str = &DAT_002a787f;
    runtime_printstring(s);
    runtime_printuint((ulong)uVar1);
    s_00.len = unaff_RBX;
    s_00.str = &DAT_002a4801;
    runtime_printstring(s_00);
    runtime_printunlock();
    p = *(void **)((_p_->sysmontick).syscallwhen + 0x170);
                    /* Unresolved local var: runtime.g * _g_@[???] */
    p_00 = *(void **)(in_FS_OFFSET + -8);
    uVar1 = *(uint *)((long)p + 0x90);
    v = *(int64 *)((long)p + 0x98);
    runtime_printlock();
    s_01.len = v;
    s_01.str = &DAT_00299ad5;
    runtime_printstring(s_01);
    runtime_printpointer(p);
    s_02.len = v;
    s_02.str = &DAT_0028a40e;
    runtime_printstring(s_02);
    runtime_printint(v);
    s_03.len = v;
    s_03.str = &DAT_0029ae57;
    runtime_printstring(s_03);
    runtime_printuint((ulong)uVar1);
    runtime_printnl();
    runtime_printunlock();
    uVar1 = *(uint *)((long)p_00 + 0x90);
    v_00 = *(int64 *)((long)p_00 + 0x98);
    runtime_printlock();
    s_04.len = v;
    s_04.str = &DAT_00299aa5;
    runtime_printstring(s_04);
    runtime_printpointer(p_00);
    s_05.len = v;
    s_05.str = &DAT_0028a40e;
    runtime_printstring(s_05);
    runtime_printint(v_00);
    s_06.len = v;
    s_06.str = &DAT_0029ae44;
    runtime_printstring(s_06);
    runtime_printuint((ulong)uVar1);
    runtime_printnl();
    runtime_printunlock();
    s_07.len = v;
    s_07.str = &DAT_0029ef01;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_07);
  }
  s_08.len = unaff_RBX;
  s_08.str = (uint8 *)0x2a342d;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_08);
}

