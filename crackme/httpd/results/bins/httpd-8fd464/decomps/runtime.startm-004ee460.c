
/* WARNING: Removing unreachable block (ram,0x004ee5f0) */
/* WARNING: Removing unreachable block (ram,0x004ee60e) */
/* WARNING: Removing unreachable block (ram,0x004ee662) */
/* WARNING: Removing unreachable block (ram,0x004ee625) */
/* WARNING: Removing unreachable block (ram,0x004ee647) */
/* WARNING: Removing unreachable block (ram,0x004ee650) */
/* WARNING: Removing unreachable block (ram,0x004ee658) */
/* WARNING: Unknown calling convention */

void runtime_startm(runtime_p *_p_,bool spinning)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  runtime_mutex *l;
  runtime_muintptr rVar4;
  undefined7 unaff_00000019;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  runtime_p *_p__spill;
  bool spinning_spill;
  
  s_00.len = (runtime_p *)CONCAT71(unaff_00000019,spinning);
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: runtime.m * nmp@[???]
                       Unresolved local var: runtime.m * ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: runtime.g * _g_@[DW_OP_reg0(RAX)] */
  lVar3 = *(long *)(in_FS_OFFSET + -8);
  piVar1 = (int *)(*(long *)(lVar3 + 0x30) + 0x110);
  *piVar1 = *piVar1 + 1;
  l = *(runtime_mutex **)(lVar3 + 0x30);
  runtime_lock2(l);
  if (_p__spill == (runtime_p *)0x0) {
    runtime_pidleget();
    _p__spill = (runtime_p *)&runtime_sched.lock;
  }
                    /* Unresolved local var: runtime.m * mp@[???] */
  rVar4 = runtime_sched.midle;
  if (runtime_sched.midle == 0) {
                    /* Unresolved local var: int64 id@[???]
                       Unresolved local var: func() * * fn@[???] */
    runtime_mReserveID();
    runtime_unlock2(&runtime_sched.lock);
    runtime_newm((func__ **)&runtime_sched.lock,s_00.len,0x2b3950);
                    /* Unresolved local var: runtime.g * _g_@[???] */
    lVar3 = *(long *)(in_FS_OFFSET + -8);
    iVar2 = (int)l[0x22].key;
    *(int *)&l[0x22].key = iVar2 + -1;
    if ((iVar2 == 1) && (*(char *)(lVar3 + 0xb1) != '\0')) {
      *(undefined8 *)(lVar3 + 0x10) = 0xfffffffffffffade;
    }
    return;
  }
  runtime_sched.midle = *(runtime_muintptr *)(runtime_sched.midle + 0x168);
  runtime_sched.nmidle = runtime_sched.nmidle + -1;
  runtime_unlock2(&runtime_sched.lock);
  if (*(char *)(rVar4 + 0x11c) != '\0') {
    s_01.len = (int)s_00.len;
    s_01.str = &DAT_0029cb17;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_01);
  }
  if (*(long *)(rVar4 + 0xe0) != 0) {
    s_00.str = &DAT_00299091;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_00);
  }
  if (spinning_spill) {
    do {
    } while (_p__spill->runqtail != _p__spill->runqtail);
    if ((_p__spill->runqtail != _p__spill->runqhead) || (_p__spill->runnext != 0)) {
      s.len._0_4_ = _p__spill->runqhead;
      s.str = &DAT_0029eee8;
      s.len._4_4_ = 0;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s);
    }
  }
  else {
    spinning_spill = false;
  }
  *(bool *)(rVar4 + 0x11c) = spinning_spill;
  *(runtime_p **)(rVar4 + 0xe0) = _p__spill;
  runtime_notewakeup((runtime_note *)(rVar4 + 0x158));
                    /* Unresolved local var: runtime.g * _g_@[???] */
  lVar3 = *(long *)(in_FS_OFFSET + -8);
  iVar2 = (int)l[0x22].key;
  *(int *)&l[0x22].key = iVar2 + -1;
  if ((iVar2 == 1) && (*(char *)(lVar3 + 0xb1) != '\0')) {
    *(undefined8 *)(lVar3 + 0x10) = 0xfffffffffffffade;
  }
  return;
}

