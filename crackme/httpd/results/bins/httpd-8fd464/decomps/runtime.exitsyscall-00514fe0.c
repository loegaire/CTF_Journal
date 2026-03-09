
/* WARNING: Removing unreachable block (ram,0x00515140) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_exitsyscall(void)

{
  int *piVar1;
  runtime_p *oldp;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_RBX;
  long in_FS_OFFSET;
  string s;
  char local_20;
  
                    /* Unresolved local var: runtime.g * _g_@[???]
                       Unresolved local var: runtime.p * oldp@[???] */
  oldp = *(runtime_p **)(in_FS_OFFSET + -8);
  piVar1 = (int *)((oldp->sysmontick).syscallwhen + 0x110);
  *piVar1 = *piVar1 + 1;
  if ((undefined1 *)oldp->deferpool[0].len < &stack0x00000008) {
    s.len = unaff_RBX;
    s.str = &DAT_002a7ead;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  oldp->deferpool[2].cap = 0;
  lVar2 = (oldp->sysmontick).syscallwhen;
  lVar3 = *(long *)(lVar2 + 0xe8);
  *(undefined8 *)(lVar2 + 0xe8) = 0;
  runtime_exitsyscallfast(oldp);
  if (local_20 == '\0') {
    oldp->deferpool[4].len = 0;
    if (runtime_trace.enabled != false) {
      while ((lVar3 != 0 &&
             (*(int *)((oldp->sysmontick).syscallwhen + 0x2ac) == *(int *)(lVar3 + 0x14)))) {
        runtime_osyield();
      }
      runtime_cputicks();
      oldp->deferpool[4].len = lVar3;
    }
    piVar1 = (int *)((oldp->sysmontick).syscallwhen + 0x110);
    *piVar1 = *piVar1 + -1;
    runtime_mcall();
    oldp->deferpool[0].len = 0;
    piVar1 = (int *)(*(long *)((oldp->sysmontick).syscallwhen + 0xd8) + 0x14);
    *piVar1 = *piVar1 + 1;
    *(undefined1 *)((long)&oldp->deferpool[3].array + 7) = 0;
    return;
  }
  if (runtime_trace.enabled != false) {
    lVar2 = (oldp->sysmontick).syscallwhen;
    lVar4 = *(long *)(lVar2 + 0xd8);
    unaff_RBX = lVar3;
    if ((lVar4 != lVar3) || (*(int *)(lVar4 + 0x14) != *(int *)(lVar2 + 0x2ac))) {
      runtime_systemstack();
    }
  }
  piVar1 = (int *)(*(long *)((oldp->sysmontick).syscallwhen + 0xd8) + 0x14);
  *piVar1 = *piVar1 + 1;
  runtime_casgstatus((runtime_g *)oldp,(uint32)unaff_RBX,3);
  oldp->deferpool[0].len = 0;
  piVar1 = (int *)((oldp->sysmontick).syscallwhen + 0x110);
  *piVar1 = *piVar1 + -1;
  if (*(char *)((long)&oldp->deferpool[3].array + 1) == '\0') {
    *(long *)&oldp->schedtick = *(long *)oldp + 0x3a0;
  }
  else {
    oldp->schedtick = 0xfffffade;
    oldp->syscalltick = 0xffffffff;
  }
  *(undefined1 *)((long)&oldp->deferpool[3].array + 7) = 0;
  if (runtime_sched.disable.user != false) {
    runtime_schedEnabled((runtime_g *)oldp);
  }
  return;
}

