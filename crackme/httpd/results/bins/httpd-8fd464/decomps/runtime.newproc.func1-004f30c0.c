
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_newproc_func1(void)

{
  runtime_g *gp;
  long in_RDX;
  long extraout_RDX;
  runtime_g *in_RDI;
  long in_FS_OFFSET;
  undefined1 local_10;
  
                    /* Unresolved local var: runtime.funcval * * &fn@[???]
                       Unresolved local var: void * argp@[???]
                       Unresolved local var: int32 siz@[???]
                       Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: uintptr pc@[???]
                       Unresolved local var: runtime.g * newg@[???]
                       Unresolved local var: runtime.p * _p_@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  gp = *(runtime_g **)(in_RDX + 0x20);
  runtime_newproc1(*(runtime_funcval **)(in_RDX + 0x10),gp,*(int32 *)(in_RDX + 0x18),in_RDI,
                   *(uintptr *)(in_RDX + 0x28));
  runtime_runqput(*(runtime_p **)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8),gp,local_10
                 );
  if (runtime_mainStarted != false) {
    runtime_wakep();
  }
  return;
}

