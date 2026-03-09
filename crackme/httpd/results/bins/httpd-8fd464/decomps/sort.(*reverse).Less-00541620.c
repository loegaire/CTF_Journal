
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void sort.(*reverse).Less(int i, int j, bool ~r2) */

bool sort___reverse__Less(int i,int j)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  int i_spill;
  int j_spill;
  
  do {
    lVar1 = *(long *)(in_FS_OFFSET + -8);
    puVar4 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(lVar1 + 0x10) < register0x00000020) {
      puVar4 = (undefined1 *)((long)register0x00000020 + -0x28);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      plVar2 = *(long **)(lVar1 + 0x20);
      if ((plVar2 != (long *)0x0) &&
         ((undefined1 *)*plVar2 == (undefined1 *)((long)register0x00000020 + 8))) {
        *plVar2 = (long)((long)register0x00000020 + -0x28);
      }
      plVar2 = *(long **)((long)register0x00000020 + 8);
      if (plVar2 != (long *)0x0) {
        pcVar3 = *(code **)(*plVar2 + 0x20);
        *(long *)((long)register0x00000020 + -0x28) = plVar2[1];
        *(undefined8 *)((long)register0x00000020 + -0x20) =
             *(undefined8 *)((long)register0x00000020 + 0x18);
        *(undefined8 *)((long)register0x00000020 + -0x18) =
             *(undefined8 *)((long)register0x00000020 + 0x10);
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x541675;
        (*pcVar3)();
        *(undefined1 *)((long)register0x00000020 + 0x20) =
             *(undefined1 *)((long)register0x00000020 + -0x10);
        return (bool)*(undefined1 *)((long)register0x00000020 + -0x10);
      }
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x54168d;
      runtime_panicwrap();
    }
    *(undefined8 *)(puVar4 + -8) = 0x541693;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar4;
  } while( true );
}

