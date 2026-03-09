
/* WARNING: Unknown calling convention */

void context_propagateCancel_func1(context_Context parent,context_canceler child)

{
  code *pcVar1;
  uint16 *order0;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *unaff_RBP;
  int in_RSI;
  void *nsends;
  undefined1 in_R8B;
  long in_FS_OFFSET;
  context_Context parent_spill;
  context_canceler child_spill;
  
  nsends = child.data;
  do {
    puVar4 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      pcVar1 = *(code **)(*(long *)((long)register0x00000020 + 8) + 0x20);
      *(undefined8 *)((long)register0x00000020 + -0x78) =
           *(undefined8 *)((long)register0x00000020 + 0x10);
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x571e7b;
      (*pcVar1)();
      *(undefined8 *)((long)register0x00000020 + -0x30) =
           *(undefined8 *)((long)register0x00000020 + -0x70);
      pcVar1 = *(code **)(*(long *)((long)register0x00000020 + 0x18) + 0x18);
      order0 = *(uint16 **)((long)register0x00000020 + 0x20);
      *(uint16 **)((long)register0x00000020 + -0x78) = order0;
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x571e9f;
      (*pcVar1)();
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x18) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x10) = 0;
      *(uintptr **)((long)register0x00000020 + -0x18) =
           *(uintptr **)((long)register0x00000020 + -0x30);
      *(undefined8 *)((long)register0x00000020 + -0x28) =
           *(undefined8 *)((long)register0x00000020 + -0x70);
      *(undefined1 **)((long)register0x00000020 + -0x78) =
           (undefined1 *)((long)register0x00000020 + -0x28);
      *(runtime_scase **)((long)register0x00000020 + -0x70) =
           (runtime_scase *)((long)register0x00000020 + -0x38);
      *(undefined8 *)((long)register0x00000020 + -0x68) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x58) = 2;
      *(undefined1 *)((long)register0x00000020 + -0x50) = 1;
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x571efd;
      runtime_selectgo((runtime_scase *)((long)register0x00000020 + -0x38),order0,
                       *(uintptr **)((long)register0x00000020 + -0x30),(int)nsends,in_RSI,
                       (bool)in_R8B);
      if (*(long *)((long)register0x00000020 + -0x48) == 0) {
        return;
      }
      puVar4 = (undefined1 *)((long)register0x00000020 + -0x78);
      if (*(long *)((long)register0x00000020 + -0x48) == 1) {
        pcVar1 = *(code **)(*(long *)((long)register0x00000020 + 8) + 0x28);
        *(undefined8 *)((long)register0x00000020 + -0x78) =
             *(undefined8 *)((long)register0x00000020 + 0x10);
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x571f27;
        (*pcVar1)();
        pcVar1 = *(code **)(*(long *)((long)register0x00000020 + 0x18) + 0x20);
        uVar2 = *(undefined8 *)((long)register0x00000020 + -0x70);
        uVar3 = *(undefined8 *)((long)register0x00000020 + -0x68);
        *(undefined8 *)((long)register0x00000020 + -0x78) =
             *(undefined8 *)((long)register0x00000020 + 0x20);
        *(undefined1 *)((long)register0x00000020 + -0x70) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x68) = uVar2;
        *(undefined8 *)((long)register0x00000020 + -0x60) = uVar3;
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x571f5a;
        (*pcVar1)();
        return;
      }
    }
    register0x00000020 = (BADSPACEBASE *)puVar4;
    *(undefined8 *)((long)register0x00000020 + -8) = 0x571f6a;
    runtime_morestack_noctxt();
  } while( true );
}

