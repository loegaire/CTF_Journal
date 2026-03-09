
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_Stack_func1(void)

{
  char cVar1;
  runtime_g *prVar2;
  runtime_m *prVar3;
  uintptr sp;
  int *piVar4;
  int iVar5;
  runtime_g *extraout_RAX;
  runtime_g *gp;
  runtime_m *lr;
  long in_RDX;
  long extraout_RDX;
  uint flags;
  runtime_g *gp_00;
  runtime_g *me;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: uintptr pc@[???]
                       Unresolved local var: uintptr sp@[???]
                       Unresolved local var: int * &n@[???]
                       Unresolved local var: runtime.g * g0@[???]
                       Unresolved local var: []uint8 buf@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  prVar2 = *(runtime_g **)(in_FS_OFFSET + -8);
  prVar3 = prVar2->m;
  sp = *(uintptr *)(in_RDX + 0x28);
  flags = *(uint *)(in_RDX + 0x30);
  piVar4 = *(int **)(in_RDX + 0x40);
  me = *(runtime_g **)(in_RDX + 0x20);
  lr = *(runtime_m **)(in_RDX + 8);
  iVar5 = *(int *)(in_RDX + 0x10);
  cVar1 = *(char *)(in_RDX + 0x38);
  prVar3->traceback = 1;
  (prVar2->writebuf).len = 0;
  (prVar2->writebuf).cap = iVar5;
  gp_00 = (runtime_g *)&prVar2->writebuf;
  if (runtime_writeBarrier._0_4_ == 0) {
    (prVar2->writebuf).array = (uint8 *)lr;
    gp = prVar2;
    lr = prVar3;
  }
  else {
    runtime_gcWriteBarrierCX();
    gp = extraout_RAX;
  }
  runtime_goroutineheader(gp);
  runtime_traceback1((uintptr)me,sp,(uintptr)lr,gp_00,flags);
  if (cVar1 != '\0') {
    runtime_tracebackothers(me);
  }
  prVar2->m->traceback = 0;
  *piVar4 = (prVar2->writebuf).len;
  (prVar2->writebuf).len = 0;
  (prVar2->writebuf).cap = 0;
  if (runtime_writeBarrier._0_4_ == 0) {
    (prVar2->writebuf).array = (uint8 *)0x0;
  }
  else {
    runtime_gcWriteBarrier();
  }
  return;
}

