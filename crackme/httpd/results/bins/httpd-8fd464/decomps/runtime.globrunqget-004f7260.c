
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.globrunqget(runtime.p * _p_, int32 max, runtime.g * ~r2)
    */

runtime_g * runtime_globrunqget(runtime_p *_p_,int32 max)

{
  runtime_guintptr rVar1;
  int iVar2;
  int iVar3;
  runtime_g *gp;
  long in_FS_OFFSET;
  runtime_p *_p__spill;
  int32 n;
  
                    /* Unresolved local var: runtime.g * gp@[???] */
  while (rVar1 = runtime_sched.runq.head,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (runtime_sched.runqsize == 0) {
    return (runtime_g *)0x0;
  }
  if (runtime_gomaxprocs == 0) {
                    /* WARNING: Subroutine does not return */
    runtime_panicdivide();
  }
  if (runtime_gomaxprocs == -1) {
    iVar2 = -runtime_sched.runqsize;
  }
  else {
    iVar2 = runtime_sched.runqsize / runtime_gomaxprocs;
  }
  iVar3 = iVar2 + 1;
  if (runtime_sched.runqsize < iVar2 + 1) {
    iVar3 = runtime_sched.runqsize;
  }
  if ((0 < n) && (n < iVar3)) {
    iVar3 = n;
  }
  if (0x80 < iVar3) {
    iVar3 = 0x80;
  }
  runtime_sched.runqsize = runtime_sched.runqsize - iVar3;
  gp = (runtime_g *)(ulong)(uint)runtime_sched.runqsize;
                    /* Unresolved local var: runtime.g * gp@[???] */
  if ((runtime_sched.runq.head != 0) &&
     (runtime_sched.runq.head = *(runtime_guintptr *)(runtime_sched.runq.head + 0xa0),
     runtime_sched.runq.head == 0)) {
    runtime_sched.runq.tail = 0;
  }
  while (iVar3 = iVar3 + -1, 0 < iVar3) {
                    /* Unresolved local var: runtime.g * gp@[???] */
    if ((runtime_sched.runq.head != 0) &&
       (gp = *(runtime_g **)(runtime_sched.runq.head + 0xa0),
       runtime_sched.runq.head = (runtime_guintptr)gp, gp == (runtime_g *)0x0)) {
      runtime_sched.runq.tail = 0;
    }
                    /* Unresolved local var: runtime.g * gp1@[???] */
    runtime_runqput(_p__spill,gp,SUB41(iVar3,0));
  }
  return (runtime_g *)rVar1;
}

