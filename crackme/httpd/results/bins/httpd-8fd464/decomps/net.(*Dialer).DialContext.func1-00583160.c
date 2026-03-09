
/* WARNING: Unknown calling convention */

void net___Dialer__DialContext_func1
               (<_chan_struct___ oldCancel,context_CancelFunc **cancel,context_Context subCtx)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 *unaff_RBP;
  int in_RSI;
  void *nsends;
  undefined1 in_R8B;
  long in_FS_OFFSET;
  multireturn_int_bool_ mVar4;
  <_chan_struct___ oldCancel_spill;
  context_CancelFunc **cancel_spill;
  context_Context subCtx_spill;
  
  uVar3 = SUB81(cancel,0);
  nsends = subCtx.data;
  do {
    puVar2 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      pcVar1 = *(code **)(*(long *)((long)register0x00000020 + 0x18) + 0x20);
      *(undefined8 *)((long)register0x00000020 + -0x70) =
           *(undefined8 *)((long)register0x00000020 + 0x20);
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x58319b;
      (*pcVar1)();
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x18) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x10) = 0;
      *(uintptr **)((long)register0x00000020 + -0x18) = *(uintptr **)((long)register0x00000020 + 8);
      *(undefined8 *)((long)register0x00000020 + -0x28) =
           *(undefined8 *)((long)register0x00000020 + -0x68);
      *(undefined1 **)((long)register0x00000020 + -0x70) =
           (undefined1 *)((long)register0x00000020 + -0x28);
      *(runtime_scase **)((long)register0x00000020 + -0x68) =
           (runtime_scase *)((long)register0x00000020 + -0x30);
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x50) = 2;
      *(undefined1 *)((long)register0x00000020 + -0x48) = 1;
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x5831f9;
      mVar4 = runtime_selectgo((runtime_scase *)((long)register0x00000020 + -0x30),
                               (uint16 *)CONCAT71((int7)((ulong)cancel >> 8),uVar3),
                               *(uintptr **)((long)register0x00000020 + 8),(int)nsends,in_RSI,
                               (bool)in_R8B);
      uVar3 = mVar4.~r7;
      if (*(long *)((long)register0x00000020 + -0x40) == 0) {
        return;
      }
      puVar2 = (undefined1 *)((long)register0x00000020 + -0x70);
      if (*(long *)((long)register0x00000020 + -0x40) == 1) {
        pcVar1 = (code *)**(undefined8 **)((long)register0x00000020 + 0x10);
        *(undefined8 *)((long)register0x00000020 + -0x78) = 0x583218;
        (*pcVar1)();
        return;
      }
    }
    register0x00000020 = (BADSPACEBASE *)puVar2;
    *(undefined8 *)((long)register0x00000020 + -8) = 0x583228;
    runtime_morestack_noctxt();
  } while( true );
}

