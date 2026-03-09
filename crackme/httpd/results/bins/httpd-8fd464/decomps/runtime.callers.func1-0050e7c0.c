
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_callers_func1(void)

{
  undefined8 *max;
  undefined8 in_RAX;
  undefined8 in_RDX;
  long lVar1;
  func__runtime_stkframe__unsafe_Pointer__bool **in_R10;
  void *in_R11;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  undefined8 local_18;
  
  auVar2._8_8_ = in_RDX;
  auVar2._0_8_ = in_RAX;
                    /* Unresolved local var: uintptr pc@[???]
                       Unresolved local var: uintptr sp@[???]
                       Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: int skip@[???]
                       Unresolved local var: int * &n@[???]
                       Unresolved local var: []uintptr pcbuf@[???] */
  while (lVar1 = auVar2._8_8_,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    auVar2 = runtime_morestack();
  }
  max = *(undefined8 **)(lVar1 + 0x40);
  if (*(uintptr *)(lVar1 + 0x30) != 0) {
    runtime_gentraceback
              (auVar2._0_8_,*(uintptr *)(lVar1 + 0x10),*(uintptr *)(lVar1 + 0x30),
               *(runtime_g **)(lVar1 + 0x20),*(int *)(lVar1 + 0x18),*(uintptr **)(lVar1 + 0x28),
               (int)max,in_R10,in_R11,*(uint *)(lVar1 + 8));
    *max = local_18;
    return;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

