
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*itab).init(runtime.itab * m, string ~r0) */

string runtime___itab__init(runtime_itab *m)

{
  uint uVar1;
  undefined4 uVar2;
  runtime__type *t;
  uintptr uVar3;
  runtime_name n;
  uint8 *puVar4;
  undefined8 uVar5;
  void *ptrInModule;
  long lVar6;
  char cVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined1 *unaff_RBP;
  ulong uVar13;
  long in_FS_OFFSET;
  string sVar14;
  string sVar15;
  runtime_itab *m_spill;
  runtime_textOff off;
  
  do {
                    /* Unresolved local var: runtime.interfacetype * inter@[???]
                       Unresolved local var: runtime._type * typ@[???]
                       Unresolved local var: runtime.uncommontype * x@[???]
                       Unresolved local var: int ni@[???]
                       Unresolved local var: int j@[???]
                       Unresolved local var: void * fun0@[???]
                       Unresolved local var: []runtime.method xmhdr@[???]
                       Unresolved local var: []unsafe.Pointer methods@[???]
                       Unresolved local var: void * ~R0@[???] */
    puVar12 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) <
        (undefined1 *)((long)register0x00000020 + -0x30)) {
      puVar12 = (undefined1 *)((long)register0x00000020 + -0xb0);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      t = *(runtime__type **)((long)register0x00000020 + 8);
      *(uintptr *)((long)register0x00000020 + -0x30) = t->size;
      uVar3 = t->ptrdata;
      *(uintptr *)((long)register0x00000020 + -0x40) = uVar3;
      *(uintptr *)((long)register0x00000020 + -0xb0) = uVar3;
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4ba494;
      runtime____type__uncommon(t);
      lVar6 = *(long *)((long)register0x00000020 + -0xa8);
      lVar8 = *(long *)((long)register0x00000020 + -0x30);
      uVar10 = *(ulong *)(lVar8 + 0x40);
      uVar11 = (ulong)*(ushort *)(lVar6 + 4);
      uVar1 = *(uint *)(lVar6 + 8);
      if (uVar11 < 0x10001) {
        if (uVar10 < 0x10001) break;
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4ba8c5;
        runtime_panicSlice3Alen();
      }
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4ba8d2;
      runtime_panicSlice3Alen();
    }
    *(undefined8 *)(puVar12 + -8) = 0x4ba8d8;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar12;
  } while( true );
  *(long *)((long)register0x00000020 + -0x48) = lVar6;
  *(ulong *)((long)register0x00000020 + -0x50) = (ulong)uVar1 + lVar6;
  *(ulong *)((long)register0x00000020 + -0x90) = uVar10;
  *(ulong *)((long)register0x00000020 + -0x60) = uVar11;
  uVar13 = 0;
  uVar9 = 0;
  uVar5 = 0;
LAB_004ba516:
  if ((long)uVar10 <= (long)uVar13) {
    puVar4 = *(uint8 **)((long)register0x00000020 + 8);
    *(undefined8 *)(puVar4 + 0x18) = uVar5;
    *(undefined8 *)((long)register0x00000020 + 0x10) = 0;
    *(undefined8 *)((long)register0x00000020 + 0x18) = 0;
    sVar14.len = uVar11;
    sVar14.str = puVar4;
    return sVar14;
  }
  lVar6 = *(long *)(lVar8 + 0x38);
  if (*(ulong *)(lVar8 + 0x40) <= uVar13) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4ba8b8;
    runtime_panicIndex();
  }
  *(ulong *)((long)register0x00000020 + -0x88) = uVar13;
  *(long *)((long)register0x00000020 + -0x10) = lVar6;
  *(undefined8 *)((long)register0x00000020 + -0x80) = uVar9;
  *(undefined8 *)((long)register0x00000020 + -0x20) = uVar5;
  uVar1 = *(uint *)(lVar6 + 4 + uVar13 * 8);
  *(long *)((long)register0x00000020 + -0xb0) = lVar8;
  *(uint *)((long)register0x00000020 + -0xa8) = uVar1;
  *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4ba55c;
  runtime_resolveTypeOff((void *)(ulong)uVar1,(runtime_typeOff)uVar11);
  uVar2 = *(undefined4 *)
           (*(long *)((long)register0x00000020 + -0x10) +
           (long)*(void **)((long)register0x00000020 + -0x88) * 8);
  *(undefined8 *)((long)register0x00000020 + -0x58) =
       *(undefined8 *)((long)register0x00000020 + -0xa0);
  *(undefined8 *)((long)register0x00000020 + -0xb0) =
       *(undefined8 *)((long)register0x00000020 + -0x30);
  *(undefined4 *)((long)register0x00000020 + -0xa8) = uVar2;
  *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4ba58b;
  runtime_resolveNameOff
            (*(void **)((long)register0x00000020 + -0x88),
             (runtime_nameOff)*(undefined8 *)((long)register0x00000020 + -0x30));
  n.bytes = *(uint8 **)((long)register0x00000020 + -0xa0);
  *(uint8 **)((long)register0x00000020 + -0x18) = n.bytes;
  *(uint8 **)((long)register0x00000020 + -0xb0) = n.bytes;
  *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4ba5a5;
  runtime_name_name(n);
  *(uint8 **)((long)register0x00000020 + -0x28) = *(uint8 **)((long)register0x00000020 + -0xa8);
  *(undefined8 *)((long)register0x00000020 + -0x70) =
       *(undefined8 *)((long)register0x00000020 + -0xa0);
  *(undefined8 *)((long)register0x00000020 + -0xb0) =
       *(undefined8 *)((long)register0x00000020 + -0x18);
  *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4ba5cd;
  runtime_name_pkgPath((runtime_name)*(uint8 **)((long)register0x00000020 + -0xa8));
  ptrInModule = *(void **)((long)register0x00000020 + -0xa0);
  uVar9 = *(undefined8 *)((long)register0x00000020 + -0xa8);
  if (ptrInModule == (void *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -0xb0) =
         *(undefined8 *)(*(uint8 **)((long)register0x00000020 + -0x30) + 0x30);
    *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4ba5f1;
    runtime_name_name((runtime_name)*(uint8 **)((long)register0x00000020 + -0x30));
    uVar9 = *(undefined8 *)((long)register0x00000020 + -0xa8);
    ptrInModule = *(void **)((long)register0x00000020 + -0xa0);
  }
  *(undefined8 *)((long)register0x00000020 + -0x38) = uVar9;
  *(void **)((long)register0x00000020 + -0x78) = ptrInModule;
  uVar9 = *(undefined8 *)((long)register0x00000020 + -0x40);
  lVar6 = *(long *)((long)register0x00000020 + -0x50);
  uVar11 = *(ulong *)((long)register0x00000020 + -0x60);
  uVar10 = *(ulong *)((long)register0x00000020 + -0x80);
  do {
    if ((long)uVar11 <= (long)uVar10) {
      *(undefined8 *)(*(long *)((long)register0x00000020 + 8) + 0x18) = 0;
      *(undefined8 *)((long)register0x00000020 + 0x10) =
           *(undefined8 *)((long)register0x00000020 + -0x28);
      *(uint8 **)((long)register0x00000020 + 0x18) = *(uint8 **)((long)register0x00000020 + -0x70);
      sVar15.len = lVar6;
      sVar15.str = *(uint8 **)((long)register0x00000020 + -0x70);
      return sVar15;
    }
    if (uVar11 <= uVar10) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4ba8ad;
      runtime_panicIndex();
    }
    *(ulong *)((long)register0x00000020 + -0x80) = uVar10;
    *(ulong *)((long)register0x00000020 + -0x68) = uVar10 * 0x10;
    uVar2 = *(undefined4 *)(lVar6 + uVar10 * 0x10);
    *(undefined8 *)((long)register0x00000020 + -0xb0) = uVar9;
    *(undefined4 *)((long)register0x00000020 + -0xa8) = uVar2;
    *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4ba70e;
    runtime_resolveNameOff(ptrInModule,(runtime_nameOff)lVar6);
    uVar2 = *(undefined4 *)
             (*(long *)((long)register0x00000020 + -0x50) + 4 +
             (long)*(void **)((long)register0x00000020 + -0x68));
    *(undefined8 *)((long)register0x00000020 + -0x18) =
         *(undefined8 *)((long)register0x00000020 + -0xa0);
    *(undefined8 *)((long)register0x00000020 + -0xb0) =
         *(undefined8 *)((long)register0x00000020 + -0x40);
    *(undefined4 *)((long)register0x00000020 + -0xa8) = uVar2;
    *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4ba73b;
    runtime_resolveTypeOff
              (*(void **)((long)register0x00000020 + -0x68),
               (runtime_typeOff)*(undefined8 *)((long)register0x00000020 + -0xa0));
    if (*(long *)((long)register0x00000020 + -0xa0) == *(long *)((long)register0x00000020 + -0x58))
    {
      *(uint8 **)((long)register0x00000020 + -0xb0) = *(uint8 **)((long)register0x00000020 + -0x18);
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4ba75c;
      runtime_name_name((runtime_name)*(uint8 **)((long)register0x00000020 + -0x18));
      if (*(long *)((long)register0x00000020 + -0xa0) == *(long *)((long)register0x00000020 + -0x70)
         ) {
        *(undefined8 *)((long)register0x00000020 + -0xb0) =
             *(undefined8 *)((long)register0x00000020 + -0xa8);
        *(undefined8 *)((long)register0x00000020 + -0xa8) =
             *(undefined8 *)((long)register0x00000020 + -0x28);
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4ba787;
        runtime_memequal();
        cVar7 = *(char *)((long)register0x00000020 + -0x98);
      }
      else {
        cVar7 = '\0';
      }
    }
    else {
      cVar7 = '\0';
    }
    if (cVar7 != '\0') {
      *(uint8 **)((long)register0x00000020 + -0xb0) = *(uint8 **)((long)register0x00000020 + -0x18);
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4ba7b9;
      sVar14 = runtime_name_pkgPath((runtime_name)*(uint8 **)((long)register0x00000020 + -0x18));
      off = (runtime_textOff)sVar14.len;
      lVar6 = *(long *)((long)register0x00000020 + -0xa0);
      uVar9 = *(undefined8 *)((long)register0x00000020 + -0xa8);
      if (lVar6 == 0) {
        uVar2 = **(undefined4 **)((long)register0x00000020 + -0x48);
        *(undefined8 *)((long)register0x00000020 + -0xb0) =
             *(undefined8 *)((long)register0x00000020 + -0x40);
        *(undefined4 *)((long)register0x00000020 + -0xa8) = uVar2;
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4ba7e5;
        runtime_resolveNameOff(*(undefined4 **)((long)register0x00000020 + -0x48),off);
        *(uint8 **)((long)register0x00000020 + -0xb0) =
             *(uint8 **)((long)register0x00000020 + -0xa0);
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4ba7f3;
        sVar14 = runtime_name_name((runtime_name)*(uint8 **)((long)register0x00000020 + -0xa0));
        off = (runtime_textOff)sVar14.len;
        uVar9 = *(undefined8 *)((long)register0x00000020 + -0xa8);
        lVar6 = *(long *)((long)register0x00000020 + -0xa0);
      }
      if ((**(byte **)((long)register0x00000020 + -0x18) & 1) == 0) {
        if (*(long *)((long)register0x00000020 + -0x78) == lVar6) {
          *(undefined8 *)((long)register0x00000020 + -0xb0) = uVar9;
          *(undefined8 *)((long)register0x00000020 + -0xa8) =
               *(undefined8 *)((long)register0x00000020 + -0x38);
          *(long *)((long)register0x00000020 + -0xa0) = lVar6;
          *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4ba845;
          runtime_memequal();
          cVar7 = *(char *)((long)register0x00000020 + -0x98);
        }
        else {
          cVar7 = '\0';
        }
      }
      else {
        cVar7 = '\x01';
      }
      if (cVar7 != '\0') break;
    }
    uVar10 = *(long *)((long)register0x00000020 + -0x80) + 1;
    uVar9 = *(undefined8 *)((long)register0x00000020 + -0x40);
    lVar6 = *(long *)((long)register0x00000020 + -0x50);
    uVar11 = *(ulong *)((long)register0x00000020 + -0x60);
    ptrInModule = *(void **)((long)register0x00000020 + -0x78);
  } while( true );
                    /* Unresolved local var: void * ifn@[???] */
  uVar1 = *(uint *)(*(long *)((long)register0x00000020 + -0x50) + 8 +
                   *(long *)((long)register0x00000020 + -0x68));
  *(undefined8 *)((long)register0x00000020 + -0xb0) =
       *(undefined8 *)((long)register0x00000020 + -0x40);
  *(uint *)((long)register0x00000020 + -0xa8) = uVar1;
  *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4ba63e;
  runtime____type__textOff((runtime__type *)(ulong)uVar1,off);
  uVar5 = *(undefined8 *)((long)register0x00000020 + -0xa0);
  lVar6 = *(long *)((long)register0x00000020 + -0x88);
  if (lVar6 != 0) {
    if (runtime_writeBarrier._0_4_ == 0) {
      *(undefined8 *)(*(long *)((long)register0x00000020 + 8) + 0x18 + lVar6 * 8) = uVar5;
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x4ba67f;
      runtime_gcWriteBarrier();
    }
    uVar5 = *(undefined8 *)((long)register0x00000020 + -0x20);
  }
                    /* Unresolved local var: int k@[???] */
  uVar13 = lVar6 + 1;
  lVar8 = *(long *)((long)register0x00000020 + -0x30);
  uVar10 = *(ulong *)((long)register0x00000020 + -0x90);
  uVar9 = *(undefined8 *)((long)register0x00000020 + -0x80);
                    /* Unresolved local var: runtime._type * itype@[???]
                       Unresolved local var: string iname@[???]
                       Unresolved local var: string ipkg@[???]
                       Unresolved local var: runtime._type * ~R0@[???] */
  uVar11 = *(ulong *)((long)register0x00000020 + -0x60);
                    /* Unresolved local var: string pkgPath@[???] */
  goto LAB_004ba516;
}

