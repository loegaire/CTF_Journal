
/* WARNING: Unknown calling convention */

void runtime_netpollWriteDeadline(interface___ arg,uintptr seq)

{
  undefined1 *puVar1;
  undefined1 *unaff_RBP;
  undefined1 in_DIL;
  long in_FS_OFFSET;
  interface___ arg_spill;
  uintptr seq_spill;
  
  do {
    puVar1 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar1 = (undefined1 *)((long)register0x00000020 + -0x20);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      if (*(undefined **)((long)register0x00000020 + 8) == &DAT_00233c80) {
        *(undefined8 *)((long)register0x00000020 + -0x20) =
             **(undefined8 **)((long)register0x00000020 + 0x10);
        *(runtime_pollDesc **)((long)register0x00000020 + -0x18) =
             *(runtime_pollDesc **)((long)register0x00000020 + 0x18);
        *(undefined2 *)((long)register0x00000020 + -0x10) = 0x100;
        *(undefined8 *)((long)register0x00000020 + -0x28) = 0x4e2270;
        runtime_netpolldeadlineimpl
                  (*(runtime_pollDesc **)((long)register0x00000020 + 0x18),(uintptr)arg.data,true,
                   (bool)in_DIL);
        return;
      }
      *(undefined **)((long)register0x00000020 + -0x20) =
           *(undefined **)((long)register0x00000020 + 8);
      *(undefined **)((long)register0x00000020 + -0x18) = &DAT_00233c80;
      *(undefined8 **)((long)register0x00000020 + -0x10) = &DAT_0022dfe0;
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0x4e2294;
      runtime_panicdottypeE((runtime__type *)&DAT_0022dfe0,arg.data,(runtime__type *)&DAT_00233c80);
    }
    *(undefined8 *)(puVar1 + -8) = 0x4e229a;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar1;
  } while( true );
}

