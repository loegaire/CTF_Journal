
/* WARNING: Unknown calling convention */

void runtime_goroutineReady(interface___ arg,uintptr seq)

{
  undefined1 *puVar1;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  interface___ arg_spill;
  uintptr seq_spill;
  
  do {
    puVar1 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar1 = (undefined1 *)((long)register0x00000020 + -0x20);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      if (*(undefined **)((long)register0x00000020 + 8) == &DAT_0021e160) {
        *(runtime_g **)((long)register0x00000020 + -0x20) =
             *(runtime_g **)((long)register0x00000020 + 0x10);
        *(undefined8 *)((long)register0x00000020 + -0x18) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x28) = 0x5072c5;
        runtime_goready(*(runtime_g **)((long)register0x00000020 + 0x10),(int)arg.data);
        return;
      }
      *(undefined **)((long)register0x00000020 + -0x20) =
           *(undefined **)((long)register0x00000020 + 8);
      *(undefined **)((long)register0x00000020 + -0x18) = &DAT_0021e160;
      *(undefined8 **)((long)register0x00000020 + -0x10) = &DAT_0022dfe0;
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0x5072e9;
      runtime_panicdottypeE((runtime__type *)&DAT_0022dfe0,arg.data,(runtime__type *)&DAT_0021e160);
    }
    *(undefined8 *)(puVar1 + -8) = 0x5072ef;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar1;
  } while( true );
}

