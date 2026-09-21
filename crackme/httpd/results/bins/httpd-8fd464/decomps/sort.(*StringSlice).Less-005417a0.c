
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void sort.(*StringSlice).Less(int i, int j, bool ~r2) */

bool sort___StringSlice__Less(int i,int j)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 extraout_AL;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  int i_spill;
  int i_1;
  int j_1;
  
  do {
                    /* Unresolved local var: sort.StringSlice x@[???] */
    lVar1 = *(long *)(in_FS_OFFSET + -8);
    puVar8 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(lVar1 + 0x10) < register0x00000020) {
      puVar8 = (undefined1 *)((long)register0x00000020 + -0x30);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      plVar2 = *(long **)(lVar1 + 0x20);
      if ((plVar2 != (long *)0x0) &&
         ((undefined1 *)*plVar2 == (undefined1 *)((long)register0x00000020 + 8))) {
        *plVar2 = (long)((long)register0x00000020 + -0x30);
      }
      plVar2 = *(long **)((long)register0x00000020 + 8);
      if (plVar2 != (long *)0x0) {
        lVar1 = *plVar2;
        if ((ulong)plVar2[1] <= *(ulong *)((long)register0x00000020 + 0x10)) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)register0x00000020 + -0x38) = 0x54184a;
          runtime_panicIndex();
        }
        lVar6 = *(ulong *)((long)register0x00000020 + 0x10) * 0x10;
        uVar3 = *(undefined8 *)(lVar6 + 8 + lVar1);
        if (*(ulong *)((long)register0x00000020 + 0x18) < (ulong)plVar2[1]) {
          lVar7 = *(ulong *)((long)register0x00000020 + 0x18) * 0x10;
          uVar4 = *(undefined8 *)(lVar1 + lVar7);
          uVar5 = *(undefined8 *)(lVar1 + 8 + lVar7);
          *(undefined8 *)((long)register0x00000020 + -0x30) = *(undefined8 *)(lVar6 + lVar1);
          *(undefined8 *)((long)register0x00000020 + -0x28) = uVar3;
          *(undefined8 *)((long)register0x00000020 + -0x20) = uVar4;
          *(undefined8 *)((long)register0x00000020 + -0x18) = uVar5;
          *(undefined8 *)((long)register0x00000020 + -0x38) = 0x54182a;
          runtime_cmpstring();
          *(bool *)((long)register0x00000020 + 0x20) =
               *(long *)((long)register0x00000020 + -0x10) < 0;
          return (bool)extraout_AL;
        }
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x541845;
        runtime_panicIndex();
      }
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x54184f;
      runtime_panicwrap();
    }
    *(undefined8 *)(puVar8 + -8) = 0x541855;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar8;
  } while( true );
}

