
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_entersyscallblock(void)

{
  int *piVar1;
  int32 *piVar2;
  runtime_g *gp;
  ulong uVar3;
  undefined1 *unaff_RBX;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: runtime.g * _g_@[???]
                       Unresolved local var: uintptr pc@[???]
                       Unresolved local var: uintptr sp@[???] */
  gp = *(runtime_g **)(in_FS_OFFSET + -8);
  piVar2 = &gp->m->locks;
  *piVar2 = *piVar2 + 1;
  gp->throwsplit = true;
  gp->stackguard0 = 0xfffffffffffffade;
  gp->m->syscalltick = *(uint32 *)(gp->m->p + 0x14);
  gp->sysblocktraced = true;
  piVar1 = (int *)(gp->m->p + 0x14);
  *piVar1 = *piVar1 + 1;
  runtime_save((uintptr)gp,(uintptr)unaff_RBX);
  uVar3 = (gp->sched).sp;
  gp->syscallsp = uVar3;
  gp->syscallpc = (gp->sched).pc;
  if ((uVar3 < (gp->stack).lo) || ((gp->stack).hi < uVar3)) {
                    /* Unresolved local var: uintptr sp1@[???]
                       Unresolved local var: uintptr sp2@[???] */
    unaff_RBX = &stack0x00000008;
    runtime_systemstack();
  }
  runtime_casgstatus(gp,(uint32)unaff_RBX,2);
  if ((gp->syscallsp < (gp->stack).lo) || ((gp->stack).hi < gp->syscallsp)) {
    runtime_systemstack();
  }
  runtime_systemstack();
  runtime_save((uintptr)&stack0x00000008,(uintptr)unaff_RBX);
  piVar2 = &gp->m->locks;
  *piVar2 = *piVar2 + -1;
  return;
}

