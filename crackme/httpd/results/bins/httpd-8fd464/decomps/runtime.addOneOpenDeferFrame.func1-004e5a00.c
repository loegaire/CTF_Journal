
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_addOneOpenDeferFrame_func1(void)

{
  long in_RDX;
  long extraout_RDX;
  runtime_g *in_RDI;
  uintptr *in_R8;
  int in_R9;
  func__runtime_stkframe__unsafe_Pointer__bool **in_R10;
  void *in_R11;
  long in_FS_OFFSET;
  code *local_20;
  uintptr uStack_18;
  undefined8 local_10;
  
                    /* Unresolved local var: uintptr pc@[???]
                       Unresolved local var: void * sp@[???]
                       Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: runtime._defer * prevDefer@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  local_10 = *(undefined8 *)(in_RDX + 0x18);
  uStack_18 = *(uintptr *)(in_RDX + 0x20);
  local_20 = runtime_addOneOpenDeferFrame_func1_1;
  runtime_gentraceback
            ((uintptr)&local_20,uStack_18,*(uintptr *)(in_RDX + 0x10),in_RDI,0x4e5ac0,in_R8,in_R9,
             in_R10,in_R11,*(uint *)(in_RDX + 8));
  return;
}

