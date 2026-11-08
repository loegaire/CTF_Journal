
/* WARNING: Unknown calling convention */

void runtime_addtimer(runtime_timer *t)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  runtime_timer *t_00;
  runtime_p *pp;
  long lVar4;
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  runtime_timer *t_spill;
  
                    /* Unresolved local var: int64 when@[???]
                       Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: runtime.p * pp@[???]
                       Unresolved local var: runtime.m * ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (t_spill->when < 1) {
    s_01.len = unaff_RBX;
    s_01.str = (uint8 *)0x2a0005;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_01);
  }
  if (t_spill->period < 0) {
    s_00.len = unaff_RBX;
    s_00.str = (uint8 *)0x2a3490;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_00);
  }
  if (t_spill->status == 0) {
    t_spill->status = 1;
                    /* Unresolved local var: runtime.g * _g_@[???] */
    lVar3 = *(long *)(in_FS_OFFSET + -8);
    t_00 = (runtime_timer *)t_spill->when;
    piVar1 = (int *)(*(long *)(lVar3 + 0x30) + 0x110);
    *piVar1 = *piVar1 + 1;
    pp = *(runtime_p **)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8);
    lVar3 = *(long *)(lVar3 + 0x30);
    runtime_lock2((runtime_mutex *)t_spill);
    runtime_cleantimers(pp);
    runtime_doaddtimer((runtime_p *)t_spill,t_00);
    runtime_unlock2(&pp->timersLock);
    runtime_wakeNetPoller((int64)t_00);
                    /* Unresolved local var: runtime.g * _g_@[???] */
    lVar4 = *(long *)(in_FS_OFFSET + -8);
    iVar2 = *(int *)(lVar3 + 0x110);
    *(int *)(lVar3 + 0x110) = iVar2 + -1;
    if ((iVar2 == 1) && (*(char *)(lVar4 + 0xb1) != '\0')) {
      *(undefined8 *)(lVar4 + 0x10) = 0xfffffffffffffade;
    }
    return;
  }
  s.len = unaff_RBX;
  s.str = &DAT_002a57b7;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}

