
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.(*Time).MarshalBinary([]uint8 ~r0, error ~r1) */

multireturn___uint8_error__conflict time___Time__MarshalBinary(void)

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
  multireturn___uint8_error__conflict mVar8;
  
  do {
    lVar1 = *(long *)(in_FS_OFFSET + -8);
    puVar7 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(lVar1 + 0x10) < register0x00000020) {
      puVar7 = (undefined1 *)((long)register0x00000020 + -0x48);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      plVar2 = *(long **)(lVar1 + 0x20);
      if ((plVar2 != (long *)0x0) &&
         ((undefined1 *)*plVar2 == (undefined1 *)((long)register0x00000020 + 8))) {
        *plVar2 = (long)((long)register0x00000020 + -0x48);
      }
      puVar3 = *(undefined8 **)((long)register0x00000020 + 8);
      if (puVar3 != (undefined8 *)0x0) {
        ptVar4 = (time_Location *)*puVar3;
        uVar5 = puVar3[1];
        uVar6 = puVar3[2];
        *(time_Location **)((long)register0x00000020 + -0x48) = ptVar4;
        *(undefined8 *)((long)register0x00000020 + -0x40) = uVar5;
        *(undefined8 *)((long)register0x00000020 + -0x38) = uVar6;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x55c3b2;
        t.ext = unaff_RBX;
        t.wall = uVar6;
        t.loc = ptVar4;
        mVar8 = time_Time_MarshalBinary(t);
        *(undefined8 *)((long)register0x00000020 + 0x10) =
             *(undefined8 *)((long)register0x00000020 + -0x30);
        *(undefined8 *)((long)register0x00000020 + 0x18) =
             *(undefined8 *)((long)register0x00000020 + -0x28);
        *(undefined8 *)((long)register0x00000020 + 0x20) =
             *(undefined8 *)((long)register0x00000020 + -0x20);
        *(int *)((long)register0x00000020 + 0x28) = *(int *)((long)register0x00000020 + -0x18);
        *(void **)((long)register0x00000020 + 0x30) = *(void **)((long)register0x00000020 + -0x10);
        mVar8.~r0.len = *(undefined8 *)((long)register0x00000020 + -0x20);
        mVar8.~r0.array = (uint8 *)*(undefined8 *)((long)register0x00000020 + -0x30);
        mVar8.~r0.cap = *(int *)((long)register0x00000020 + -0x18);
        mVar8.~r1.data = *(void **)((long)register0x00000020 + -0x10);
        return mVar8;
      }
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x55c3f3;
      runtime_panicwrap();
    }
    *(undefined8 *)(puVar7 + -8) = 0x55c3f9;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar7;
  } while( true );
}

