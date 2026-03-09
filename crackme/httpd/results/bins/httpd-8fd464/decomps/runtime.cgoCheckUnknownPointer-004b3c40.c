
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.cgoCheckUnknownPointer(void * p, string msg, uintptr base,
   uintptr i) */

multireturn_uintptr_uintptr_ runtime_cgoCheckUnknownPointer(void *p,string msg)

{
  byte bVar1;
  runtime_heapArena *prVar2;
  void *p_00;
  runtime_moduledata *prVar3;
  undefined1 auVar4 [16];
  uintptr uVar5;
  uint uVar6;
  runtime_moduledata **pprVar7;
  ulong uVar8;
  undefined *puVar9;
  uint8 *puVar10;
  uint8 *puVar11;
  undefined1 *puVar12;
  undefined1 *unaff_RBP;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  multireturn_uintptr_uintptr_ mVar16;
  string val;
  interface___ e;
  multireturn_uintptr_uintptr_ mVar17;
  string val_00;
  interface___ e_00;
  multireturn_uintptr_runtime_mspan___uintptr_ mVar18;
  runtime_heapBits h;
  void *p_spill;
  string msg_spill;
  
  puVar9 = (undefined *)msg.len;
  puVar11 = msg.str;
  do {
    puVar12 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar12 = (undefined1 *)((long)register0x00000020 + -0x68);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      *(uintptr *)((long)register0x00000020 + -0x68) = *(uintptr *)((long)register0x00000020 + 8);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4b3c6f;
      runtime_spanOfHeap(*(uintptr *)((long)register0x00000020 + 8));
      if (*(long *)((long)register0x00000020 + -0x60) != 0) {
                    /* Unresolved local var: uintptr b@[???]
                       Unresolved local var: runtime.mspan * span@[???]
                       Unresolved local var: uintptr n@[???]
                       Unresolved local var: runtime.heapBits hbits@[???] */
        *(uintptr *)((long)register0x00000020 + -0x68) = *(uintptr *)((long)register0x00000020 + 8);
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x58) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4b3cb6;
        mVar18 = runtime_findObject(*(uintptr *)((long)register0x00000020 + 8),(uintptr)puVar11,
                                    (uintptr)puVar9);
        uVar14 = *(ulong *)((long)register0x00000020 + -0x50);
        if (uVar14 == 0) {
          *(undefined8 *)((long)register0x00000020 + 0x20) = 0;
          *(undefined8 *)((long)register0x00000020 + 0x28) = 0;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = mVar18.s;
          return (multireturn_uintptr_uintptr_)(auVar4 << 0x40);
        }
                    /* Unresolved local var: runtime.heapArena * ha@[???] */
        puVar9 = (undefined *)(uVar14 + 0x800000000000 >> 0x1a);
        if (&DAT_003fffff < puVar9) goto LAB_004b3e8b;
        prVar2 = (*runtime_mheap_.arenas[0])[(long)puVar9];
        if (prVar2 == (runtime_heapArena *)0x0) {
          puVar9 = (undefined *)0x0;
          uVar13 = 0;
          puVar10 = (uint8 *)0x0;
          puVar11 = (uint8 *)0x0;
        }
        else {
          puVar11 = prVar2->bitmap + (uVar14 >> 5 & 0x1fffff);
          uVar13 = uVar14 >> 3 & 3;
          puVar10 = prVar2->bitmap + 0x1fffff;
        }
        *(ulong *)((long)register0x00000020 + -0x20) = uVar14;
        uVar15 = *(ulong *)(*(long *)((long)register0x00000020 + -0x48) + 0x68);
        *(ulong *)((long)register0x00000020 + -0x30) = uVar15;
        uVar8 = 0;
        break;
      }
                    /* Unresolved local var: []*runtime.moduledata * p@[???] */
      if (runtime_modulesSlice == (___runtime_moduledata *)0x0) {
        uVar5 = 0;
        pprVar7 = (runtime_moduledata **)0x0;
      }
      else {
        pprVar7 = runtime_modulesSlice->array;
        uVar5 = runtime_modulesSlice->len;
                    /* Unresolved local var: runtime.moduledata * datap@[???] */
      }
      uVar14 = *(ulong *)((long)register0x00000020 + 8);
      puVar11 = (uint8 *)0x0;
      while( true ) {
        if ((long)uVar5 <= (long)puVar11) {
          *(undefined8 *)((long)register0x00000020 + 0x20) = 0;
          *(undefined8 *)((long)register0x00000020 + 0x28) = 0;
          mVar17.i = (uintptr)puVar11;
          mVar17.base = uVar5;
          return mVar17;
        }
        prVar3 = pprVar7[(long)puVar11];
        if (((prVar3->data <= uVar14) && (uVar14 < prVar3->edata)) ||
           ((prVar3->bss <= uVar14 && (uVar14 < prVar3->ebss)))) break;
        puVar11 = puVar11 + 1;
      }
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + 0x10);
      *(uint8 **)((long)register0x00000020 + -0x60) = *(uint8 **)((long)register0x00000020 + 0x18);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4b3f19;
      val_00.len = (int)puVar11;
      val_00.str = *(uint8 **)((long)register0x00000020 + 0x18);
      runtime_convTstring(val_00);
      puVar9 = &DAT_00237b20;
      *(undefined **)((long)register0x00000020 + -0x68) = &DAT_00237b20;
      *(runtime__type **)((long)register0x00000020 + -0x60) =
           *(runtime__type **)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4b3f33;
      e_00.data = puVar11;
      e_00._type = *(runtime__type **)((long)register0x00000020 + -0x58);
      runtime_gopanic(e_00);
    }
    *(undefined8 *)(puVar12 + -8) = 0x4b3f39;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar12;
  } while( true );
LAB_004b3d60:
  if (uVar15 <= uVar8) {
LAB_004b3e3c:
    *(ulong *)((long)register0x00000020 + 0x20) = uVar14;
    *(ulong *)((long)register0x00000020 + 0x28) = uVar8;
    mVar16.i = (uintptr)puVar9;
    mVar16.base = (uintptr)puVar11;
    return mVar16;
  }
  bVar1 = *puVar11;
  uVar6 = (uint)uVar13;
  if (((bVar1 >> ((byte)uVar13 & 0x1f)) >> 4 & 1) == 0) goto LAB_004b3e3c;
  *(ulong *)((long)register0x00000020 + -0x28) = uVar8;
  if ((bVar1 >> (uVar6 & 0x1f) & 1) != 0) {
    *(uint8 **)((long)register0x00000020 + -0x18) = puVar10;
    *(int *)((long)register0x00000020 + -0x38) = (int)puVar9;
    *(uint *)((long)register0x00000020 + -0x34) = uVar6;
    *(uint8 **)((long)register0x00000020 + -0x10) = puVar11;
    p_00 = *(void **)(uVar8 + uVar14);
    *(void **)((long)register0x00000020 + -0x68) = p_00;
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4b3db3;
    runtime_cgoIsGoPointer(p_00);
    if (*(char *)((long)register0x00000020 + -0x60) != '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + 0x10);
      *(uint8 **)((long)register0x00000020 + -0x60) = *(uint8 **)((long)register0x00000020 + 0x18);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4b3e71;
      val.len = (int)puVar9;
      val.str = *(uint8 **)((long)register0x00000020 + 0x18);
      runtime_convTstring(val);
      *(undefined **)((long)register0x00000020 + -0x68) = &DAT_00237b20;
      *(runtime__type **)((long)register0x00000020 + -0x60) =
           *(runtime__type **)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4b3e8b;
      e.data = puVar9;
      e._type = *(runtime__type **)((long)register0x00000020 + -0x58);
      runtime_gopanic(e);
LAB_004b3e8b:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4b3e98;
      runtime_panicIndexU();
    }
    puVar11 = *(uint8 **)((long)register0x00000020 + -0x10);
    uVar6 = *(uint *)((long)register0x00000020 + -0x34);
    puVar10 = *(uint8 **)((long)register0x00000020 + -0x18);
    puVar9 = (undefined *)(ulong)*(uint *)((long)register0x00000020 + -0x38);
    uVar14 = *(ulong *)((long)register0x00000020 + -0x20);
    uVar15 = *(ulong *)((long)register0x00000020 + -0x30);
    uVar8 = *(ulong *)((long)register0x00000020 + -0x28);
  }
  if (uVar6 < 3) {
    uVar13 = (ulong)(uVar6 + 1);
  }
  else if (puVar11 == puVar10) {
    *(uint8 **)((long)register0x00000020 + -0x68) = puVar11;
    *(uint *)((long)register0x00000020 + -0x60) = uVar6;
    h.shift = SUB84(puVar9,0);
    *(undefined4 *)((long)register0x00000020 + -0x5c) = h.shift;
    *(uint8 **)((long)register0x00000020 + -0x58) = puVar10;
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4b3e13;
    h.bitp = puVar11;
    h.last = (uint8 *)uVar14;
    h.arena = uVar6;
    runtime_heapBits_nextArena(h);
    puVar11 = *(uint8 **)((long)register0x00000020 + -0x50);
    uVar13 = (ulong)*(uint *)((long)register0x00000020 + -0x48);
    puVar9 = (undefined *)(ulong)*(uint *)((long)register0x00000020 + -0x44);
    puVar10 = *(uint8 **)((long)register0x00000020 + -0x40);
    uVar14 = *(ulong *)((long)register0x00000020 + -0x20);
    uVar15 = *(ulong *)((long)register0x00000020 + -0x30);
    uVar8 = *(ulong *)((long)register0x00000020 + -0x28);
  }
  else {
    puVar11 = puVar11 + 1;
    uVar13 = 0;
  }
  uVar8 = uVar8 + 8;
  goto LAB_004b3d60;
}

