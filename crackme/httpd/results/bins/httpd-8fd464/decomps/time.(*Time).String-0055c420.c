
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.(*Time).String(string ~r0) */

string time___Time__String(void)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  time_Location *ptVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 unaff_RBX;
  undefined1 *puVar7;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  time_Time t;
  string sVar8;
  
  do {
    lVar1 = *(long *)(in_FS_OFFSET + -8);
    puVar7 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(lVar1 + 0x10) < register0x00000020) {
      puVar7 = (undefined1 *)((long)register0x00000020 + -0x30);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      plVar2 = *(long **)(lVar1 + 0x20);
      if ((plVar2 != (long *)0x0) &&
         ((undefined1 *)*plVar2 == (undefined1 *)((long)register0x00000020 + 8))) {
        *plVar2 = (long)((long)register0x00000020 + -0x30);
      }
      puVar3 = *(undefined8 **)((long)register0x00000020 + 8);
      if (puVar3 != (undefined8 *)0x0) {
        ptVar4 = (time_Location *)*puVar3;
        uVar5 = puVar3[1];
        uVar6 = puVar3[2];
        *(time_Location **)((long)register0x00000020 + -0x30) = ptVar4;
        *(undefined8 *)((long)register0x00000020 + -0x28) = uVar5;
        *(undefined8 *)((long)register0x00000020 + -0x20) = uVar6;
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x55c46e;
        t.ext = unaff_RBX;
        t.wall = uVar6;
        t.loc = ptVar4;
        sVar8 = time_Time_String(t);
        *(uint8 **)((long)register0x00000020 + 0x10) = *(uint8 **)((long)register0x00000020 + -0x18)
        ;
        *(undefined8 *)((long)register0x00000020 + 0x18) =
             *(undefined8 *)((long)register0x00000020 + -0x10);
        sVar8.str = *(uint8 **)((long)register0x00000020 + -0x18);
        return sVar8;
      }
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x55c491;
      runtime_panicwrap();
    }
    *(undefined8 *)(puVar7 + -8) = 0x55c497;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar7;
  } while( true );
}

