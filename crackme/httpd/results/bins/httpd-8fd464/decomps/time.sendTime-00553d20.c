
/* WARNING: Unknown calling convention */

void time_sendTime(interface___ c,uintptr seq)

{
  undefined1 *puVar1;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  time_Time tVar2;
  interface___ c_spill;
  uintptr seq_spill;
  
  do {
    puVar1 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar1 = (undefined1 *)((long)register0x00000020 + -0x38);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      if (*(undefined **)((long)register0x00000020 + 8) == &DAT_00222ee0) {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x553d57;
        tVar2 = time_Now();
        *(undefined8 *)((long)register0x00000020 + -0x20) =
             *(undefined8 *)((long)register0x00000020 + -0x38);
        *(undefined8 *)((long)register0x00000020 + -0x18) =
             *(undefined8 *)((long)register0x00000020 + -0x30);
        *(undefined8 *)((long)register0x00000020 + -0x10) =
             *(undefined8 *)((long)register0x00000020 + -0x28);
        *(undefined8 *)((long)register0x00000020 + -0x38) =
             *(undefined8 *)((long)register0x00000020 + 0x10);
        *(runtime_hchan **)((long)register0x00000020 + -0x30) =
             (runtime_hchan *)((long)register0x00000020 + -0x20);
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x553d8c;
        runtime_selectnbsend((runtime_hchan *)((long)register0x00000020 + -0x20),(void *)tVar2.ext);
        return;
      }
      *(undefined **)((long)register0x00000020 + -0x38) =
           *(undefined **)((long)register0x00000020 + 8);
      *(undefined **)((long)register0x00000020 + -0x30) = &DAT_00222ee0;
      *(undefined8 **)((long)register0x00000020 + -0x28) = &DAT_0022dfe0;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x553db9;
      runtime_panicdottypeE((runtime__type *)&DAT_0022dfe0,c.data,(runtime__type *)&DAT_00222ee0);
    }
    *(undefined8 *)(puVar1 + -8) = 0x553dbf;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar1;
  } while( true );
}

