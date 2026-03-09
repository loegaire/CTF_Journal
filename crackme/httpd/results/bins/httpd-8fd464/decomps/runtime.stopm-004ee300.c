
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_stopm(void)

{
  runtime_p *_p_;
  long lVar1;
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  
                    /* Unresolved local var: runtime.g * _g_@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  _p_ = *(runtime_p **)(in_FS_OFFSET + -8);
  lVar1 = (_p_->sysmontick).syscallwhen;
  if (*(int *)(lVar1 + 0x110) != 0) {
    s_01.len = unaff_RBX;
    s_01.str = &DAT_0029b7ea;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_01);
  }
  if (*(long *)(lVar1 + 0xd8) != 0) {
    s_00.len = unaff_RBX;
    s_00.str = &DAT_002990a0;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_00);
  }
  if (*(char *)(lVar1 + 0x11c) == '\0') {
    runtime_lock2(&runtime_sched.lock);
    runtime_mput((runtime_m *)_p_);
    runtime_unlock2(&runtime_sched.lock);
    runtime_mPark();
    runtime_acquirep(_p_);
    *(undefined8 *)((_p_->sysmontick).syscallwhen + 0xe0) = 0;
    return;
  }
  s.len = unaff_RBX;
  s.str = &DAT_0029800f;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}

