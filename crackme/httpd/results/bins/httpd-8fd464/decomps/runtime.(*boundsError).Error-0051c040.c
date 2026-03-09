
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*boundsError).Error(string ~r0) */

string runtime___boundsError__Error(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  string sVar8;
  
  do {
    lVar3 = *(long *)(in_FS_OFFSET + -8);
    puVar7 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(lVar3 + 0x10) < register0x00000020) {
      puVar7 = (undefined1 *)((long)register0x00000020 + -0x30);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      plVar4 = *(long **)(lVar3 + 0x20);
      if ((plVar4 != (long *)0x0) &&
         ((undefined1 *)*plVar4 == (undefined1 *)((long)register0x00000020 + 8))) {
        *plVar4 = (long)((long)register0x00000020 + -0x30);
      }
      puVar5 = *(undefined8 **)((long)register0x00000020 + 8);
      if (puVar5 != (undefined8 *)0x0) {
        uVar6 = puVar5[1];
        uVar1 = *(undefined1 *)(puVar5 + 2);
        uVar2 = *(undefined1 *)((long)puVar5 + 0x11);
        *(undefined8 *)((long)register0x00000020 + -0x30) = *puVar5;
        *(undefined8 *)((long)register0x00000020 + -0x28) = uVar6;
        *(undefined1 *)((long)register0x00000020 + -0x20) = uVar1;
        *(undefined1 *)((long)register0x00000020 + -0x1f) = uVar2;
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x51c095;
        sVar8 = runtime_boundsError_Error();
        *(uint8 **)((long)register0x00000020 + 0x10) = *(uint8 **)((long)register0x00000020 + -0x18)
        ;
        *(undefined8 *)((long)register0x00000020 + 0x18) =
             *(undefined8 *)((long)register0x00000020 + -0x10);
        sVar8.str = *(uint8 **)((long)register0x00000020 + -0x18);
        return sVar8;
      }
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x51c0b8;
      runtime_panicwrap();
    }
    *(undefined8 *)(puVar7 + -8) = 0x51c0be;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar7;
  } while( true );
}

