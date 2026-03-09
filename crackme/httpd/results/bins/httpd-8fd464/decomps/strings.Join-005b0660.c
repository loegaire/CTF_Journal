
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strings.Join([]string elems, string sep, string ~r2) */

string strings_Join(__string elems,string sep)

{
  ulong uVar1;
  uint8 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  runtime__type *et;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  void *len;
  undefined1 *puVar10;
  undefined1 *unaff_RBP;
  int *cap;
  void *cap_00;
  int iVar11;
  ulong uVar12;
  long lVar13;
  long in_FS_OFFSET;
  string sVar14;
  string sVar15;
  interface___ e;
  interface___ e_00;
  interface___ e_01;
  interface___ e_02;
  runtime_slice old;
  runtime_slice old_00;
  runtime_slice rVar16;
  __string elems_spill;
  string sep_spill;
  
  len = (void *)elems.len;
code_r0x005b0660:
                    /* Unresolved local var: int n@[???]
                       Unresolved local var: strings.Builder b@[???] */
  puVar10 = (undefined1 *)register0x00000020;
  if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) <
      (undefined1 *)((long)register0x00000020 + -0x50)) {
    puVar10 = (undefined1 *)((long)register0x00000020 + -0xd0);
    *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
    unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
    lVar8 = *(long *)((long)register0x00000020 + 0x10);
    if (lVar8 == 0) {
      *(undefined8 *)((long)register0x00000020 + 0x30) = 0;
      *(undefined8 *)((long)register0x00000020 + 0x38) = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = len;
      return (string)(auVar4 << 0x40);
    }
    if (lVar8 == 1) {
      puVar2 = (uint8 *)(*(undefined8 **)((long)register0x00000020 + 8))[1];
      *(undefined8 *)((long)register0x00000020 + 0x30) =
           **(undefined8 **)((long)register0x00000020 + 8);
      *(uint8 **)((long)register0x00000020 + 0x38) = puVar2;
      sVar14.len = (int)len;
      sVar14.str = puVar2;
      return sVar14;
    }
    lVar7 = lVar8 + -1;
    len = *(void **)((long)register0x00000020 + 0x28);
    lVar9 = (long)len * lVar7;
                    /* Unresolved local var: int i@[???] */
    cap = *(int **)((long)register0x00000020 + 8);
    for (lVar6 = 0; lVar6 < lVar8; lVar6 = lVar6 + 1) {
      lVar9 = lVar9 + cap[lVar6 * 2 + 1];
    }
    *(undefined8 *)((long)register0x00000020 + -0x28) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x18) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0;
    *(undefined1 **)((long)register0x00000020 + -0x28) =
         (undefined1 *)((long)register0x00000020 + -0x28);
    if (-1 < lVar9) {
      *(long *)((long)register0x00000020 + -0x58) = lVar7;
      lVar8 = *(long *)((long)register0x00000020 + -0x18);
      if (*(long *)((long)register0x00000020 + -0x10) - lVar8 < lVar9) {
        *(long *)((long)register0x00000020 + -0x80) = lVar8;
                    /* Unresolved local var: []uint8 buf@[???] */
        *(undefined **)((long)register0x00000020 + -0xd0) = &DAT_00225720;
        *(long *)((long)register0x00000020 + -200) = lVar8;
        lVar9 = lVar9 + *(long *)((long)register0x00000020 + -0x10) * 2;
        *(long *)((long)register0x00000020 + -0x78) = lVar9;
        *(long *)((long)register0x00000020 + -0xc0) = lVar9;
        *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x5b07b2;
        runtime_makeslice((runtime__type *)&DAT_00225720,(int)len,lVar9);
        lVar8 = *(long *)((long)register0x00000020 + -0x80);
        lVar7 = lVar8;
        if (*(long *)((long)register0x00000020 + -0x18) < lVar8) {
          lVar7 = *(long *)((long)register0x00000020 + -0x18);
        }
        lVar6 = *(long *)((long)register0x00000020 + -0xb8);
        if (*(long *)((long)register0x00000020 + -0x20) != lVar6) {
          *(long *)((long)register0x00000020 + -0x30) = lVar6;
          *(long *)((long)register0x00000020 + -0xd0) = lVar6;
          *(long *)((long)register0x00000020 + -200) = *(long *)((long)register0x00000020 + -0x20);
          *(long *)((long)register0x00000020 + -0xc0) = lVar7;
          *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x5b07f6;
          runtime_memmove();
          lVar6 = *(long *)((long)register0x00000020 + -0x30);
          lVar8 = *(long *)((long)register0x00000020 + -0x80);
        }
        *(long *)((long)register0x00000020 + -0x18) = lVar8;
        *(undefined8 *)((long)register0x00000020 + -0x10) =
             *(undefined8 *)((long)register0x00000020 + -0x78);
        *(long *)((long)register0x00000020 + -0x20) = lVar6;
                    /* Unresolved local var: string s@[???] */
        lVar7 = *(long *)((long)register0x00000020 + -0x58);
        len = *(void **)((long)register0x00000020 + 0x28);
        cap = *(int **)((long)register0x00000020 + 8);
      }
      lVar8 = cap[1];
      iVar11 = *cap;
      if (*(undefined1 **)((long)register0x00000020 + -0x28) == (undefined1 *)0x0) {
        *(undefined1 **)((long)register0x00000020 + -0x28) =
             (undefined1 *)((long)register0x00000020 + -0x28);
LAB_005b0864:
        lVar6 = *(long *)((long)register0x00000020 + -0x18);
        uVar1 = lVar8 + lVar6;
        *(ulong *)((long)register0x00000020 + -0x60) = uVar1;
        uVar12 = *(ulong *)((long)register0x00000020 + -0x10);
        lVar9 = *(long *)((long)register0x00000020 + -0x20);
        if (uVar12 < uVar1) {
          *(long *)((long)register0x00000020 + -0x68) = lVar6;
          *(long *)((long)register0x00000020 + -0x90) = lVar8;
          *(int *)((long)register0x00000020 + -0x50) = iVar11;
          *(undefined **)((long)register0x00000020 + -0xd0) = &DAT_00225720;
          *(long *)((long)register0x00000020 + -200) = lVar9;
          *(long *)((long)register0x00000020 + -0xc0) = lVar6;
          *(ulong *)((long)register0x00000020 + -0xb8) = uVar12;
          *(ulong *)((long)register0x00000020 + -0xb0) = uVar1;
          *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x5b08c5;
          rVar16.len = lVar7;
          rVar16.array = len;
          rVar16.cap = iVar11;
          rVar16 = runtime_growslice((runtime__type *)&DAT_00225720,rVar16,(int)cap);
          len = (void *)rVar16.len;
          lVar9 = *(long *)((long)register0x00000020 + -0xa8);
          uVar12 = *(ulong *)((long)register0x00000020 + -0x98);
          lVar8 = *(long *)((long)register0x00000020 + -0x90);
          iVar11 = *(int *)((long)register0x00000020 + -0x50);
          lVar6 = *(long *)((long)register0x00000020 + -0x68);
        }
        *(ulong *)((long)register0x00000020 + -0x68) = uVar12;
        *(long *)((long)register0x00000020 + -0x38) = lVar9;
        *(long *)((long)register0x00000020 + -0xd0) = lVar9 + lVar6;
        *(int *)((long)register0x00000020 + -200) = iVar11;
        *(long *)((long)register0x00000020 + -0xc0) = lVar8;
        *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x5b0905;
        runtime_memmove();
        *(undefined8 *)((long)register0x00000020 + -0x18) =
             *(undefined8 *)((long)register0x00000020 + -0x60);
        *(undefined8 *)((long)register0x00000020 + -0x10) =
             *(undefined8 *)((long)register0x00000020 + -0x68);
        *(undefined8 *)((long)register0x00000020 + -0x20) =
             *(undefined8 *)((long)register0x00000020 + -0x38);
        puVar5 = (undefined8 *)
                 ((-(*(long *)((long)register0x00000020 + 0x18) + -1) >> 0x3f & 0x10U) +
                 *(long *)((long)register0x00000020 + 8));
        lVar8 = *(long *)((long)register0x00000020 + -0x58);
        if (lVar8 < 1) {
LAB_005b096e:
          *(uint8 **)((long)register0x00000020 + 0x30) =
               *(uint8 **)((long)register0x00000020 + -0x20);
          *(undefined8 *)((long)register0x00000020 + 0x38) =
               *(undefined8 *)((long)register0x00000020 + -0x18);
          sVar15.len = (int)len;
          sVar15.str = *(uint8 **)((long)register0x00000020 + -0x20);
          return sVar15;
        }
        lVar7 = *(long *)((long)register0x00000020 + 0x28);
        len = *(void **)((long)register0x00000020 + 0x20);
        lVar6 = 0;
        do {
          iVar11 = puVar5[1];
          uVar3 = *puVar5;
          if (*(undefined1 **)((long)register0x00000020 + -0x28) == (undefined1 *)0x0) {
            *(undefined1 **)((long)register0x00000020 + -0x28) =
                 (undefined1 *)((long)register0x00000020 + -0x28);
          }
          else if (*(undefined1 **)((long)register0x00000020 + -0x28) !=
                   (undefined1 *)((long)register0x00000020 + -0x28)) goto LAB_005b0c0e;
          *(int *)((long)register0x00000020 + -0x88) = iVar11;
          *(undefined8 *)((long)register0x00000020 + -0x48) = uVar3;
          *(long *)((long)register0x00000020 + -0x60) = lVar6;
          *(undefined8 **)((long)register0x00000020 + -0x40) = puVar5;
          lVar9 = *(long *)((long)register0x00000020 + -0x18);
          uVar1 = lVar7 + lVar9;
          *(ulong *)((long)register0x00000020 + -0x68) = uVar1;
          uVar12 = *(ulong *)((long)register0x00000020 + -0x10);
          lVar13 = *(long *)((long)register0x00000020 + -0x20);
          if (uVar12 < uVar1) {
            *(long *)((long)register0x00000020 + -0x70) = lVar9;
            *(undefined **)((long)register0x00000020 + -0xd0) = &DAT_00225720;
            *(long *)((long)register0x00000020 + -200) = lVar13;
            *(long *)((long)register0x00000020 + -0xc0) = lVar9;
            *(ulong *)((long)register0x00000020 + -0xb8) = uVar12;
            *(ulong *)((long)register0x00000020 + -0xb0) = uVar1;
            *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x5b0a6e;
            old.len = lVar8;
            old.array = len;
            old.cap = iVar11;
            runtime_growslice((runtime__type *)&DAT_00225720,old,lVar6);
            lVar13 = *(long *)((long)register0x00000020 + -0xa8);
            uVar12 = *(ulong *)((long)register0x00000020 + -0x98);
            lVar7 = *(long *)((long)register0x00000020 + 0x28);
            len = *(void **)((long)register0x00000020 + 0x20);
            lVar9 = *(long *)((long)register0x00000020 + -0x70);
          }
          *(ulong *)((long)register0x00000020 + -0x70) = uVar12;
          *(long *)((long)register0x00000020 + -0x38) = lVar13;
          *(long *)((long)register0x00000020 + -0xd0) = lVar13 + lVar9;
          *(void **)((long)register0x00000020 + -200) = len;
          *(long *)((long)register0x00000020 + -0xc0) = lVar7;
          *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x5b0ab2;
          runtime_memmove();
          *(undefined8 *)((long)register0x00000020 + -0x18) =
               *(undefined8 *)((long)register0x00000020 + -0x68);
          *(undefined8 *)((long)register0x00000020 + -0x10) =
               *(undefined8 *)((long)register0x00000020 + -0x70);
          *(undefined8 *)((long)register0x00000020 + -0x20) =
               *(undefined8 *)((long)register0x00000020 + -0x38);
          if (*(undefined1 **)((long)register0x00000020 + -0x28) == (undefined1 *)0x0) {
            *(undefined1 **)((long)register0x00000020 + -0x28) =
                 (undefined1 *)((long)register0x00000020 + -0x28);
          }
          else if (*(undefined1 **)((long)register0x00000020 + -0x28) !=
                   (undefined1 *)((long)register0x00000020 + -0x28)) goto LAB_005b0bf2;
          et = *(runtime__type **)((long)register0x00000020 + -0x18);
          lVar8 = *(long *)((long)register0x00000020 + -0x88);
          len = (void *)((long)&et->size + lVar8);
          *(void **)((long)register0x00000020 + -0x68) = len;
          cap_00 = *(void **)((long)register0x00000020 + -0x10);
          lVar7 = *(long *)((long)register0x00000020 + -0x20);
          if (cap_00 < len) {
            *(runtime__type **)((long)register0x00000020 + -0x70) = et;
            *(undefined **)((long)register0x00000020 + -0xd0) = &DAT_00225720;
            *(long *)((long)register0x00000020 + -200) = lVar7;
            *(runtime__type **)((long)register0x00000020 + -0xc0) = et;
            *(void **)((long)register0x00000020 + -0xb8) = cap_00;
            *(void **)((long)register0x00000020 + -0xb0) = len;
            *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x5b0b6e;
            old_00.len = (int)&DAT_00225720;
            old_00.array = len;
            old_00.cap = lVar7;
            rVar16 = runtime_growslice(et,old_00,(int)cap_00);
            len = (void *)rVar16.len;
            lVar7 = *(long *)((long)register0x00000020 + -0xa8);
            cap_00 = *(void **)((long)register0x00000020 + -0x98);
            et = *(runtime__type **)((long)register0x00000020 + -0x70);
            lVar8 = *(long *)((long)register0x00000020 + -0x88);
          }
          *(void **)((long)register0x00000020 + -0x70) = cap_00;
          *(long *)((long)register0x00000020 + -0x38) = lVar7;
          *(long *)((long)register0x00000020 + -0xd0) = (long)&et->size + lVar7;
          *(undefined8 *)((long)register0x00000020 + -200) =
               *(undefined8 *)((long)register0x00000020 + -0x48);
          *(long *)((long)register0x00000020 + -0xc0) = lVar8;
          *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x5b0bad;
          runtime_memmove();
          *(undefined8 *)((long)register0x00000020 + -0x18) =
               *(undefined8 *)((long)register0x00000020 + -0x68);
          *(undefined8 *)((long)register0x00000020 + -0x10) =
               *(undefined8 *)((long)register0x00000020 + -0x70);
          *(undefined8 *)((long)register0x00000020 + -0x20) =
               *(undefined8 *)((long)register0x00000020 + -0x38);
          lVar6 = *(long *)((long)register0x00000020 + -0x60) + 1;
          lVar8 = *(long *)((long)register0x00000020 + -0x58);
          if (lVar8 <= lVar6) goto LAB_005b096e;
          puVar5 = (undefined8 *)(*(long *)((long)register0x00000020 + -0x40) + 0x10);
          lVar7 = *(long *)((long)register0x00000020 + 0x28);
          len = *(void **)((long)register0x00000020 + 0x20);
        } while( true );
      }
      if (*(undefined1 **)((long)register0x00000020 + -0x28) ==
          (undefined1 *)((long)register0x00000020 + -0x28)) goto LAB_005b0864;
      goto LAB_005b0c2a;
    }
    goto LAB_005b0c46;
  }
  goto LAB_005b0c66;
LAB_005b0bf2:
  *(undefined **)((long)register0x00000020 + -0xd0) = &DAT_00225520;
  *(undefined8 **)((long)register0x00000020 + -200) = &net_http__stmp_78;
  *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x5b0c0e;
  e.data = len;
  e._type = (runtime__type *)&net_http__stmp_78;
  runtime_gopanic(e);
LAB_005b0c0e:
  *(undefined **)((long)register0x00000020 + -0xd0) = &DAT_00225520;
  *(undefined8 **)((long)register0x00000020 + -200) = &net_http__stmp_78;
  *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x5b0c2a;
  e_00.data = len;
  e_00._type = (runtime__type *)&net_http__stmp_78;
  runtime_gopanic(e_00);
LAB_005b0c2a:
  *(undefined **)((long)register0x00000020 + -0xd0) = &DAT_00225520;
  *(undefined8 **)((long)register0x00000020 + -200) = &net_http__stmp_78;
  *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x5b0c46;
  e_01.data = len;
  e_01._type = (runtime__type *)&net_http__stmp_78;
  runtime_gopanic(e_01);
LAB_005b0c46:
  *(undefined **)((long)register0x00000020 + -0xd0) = &DAT_00225520;
  *(undefined ***)((long)register0x00000020 + -200) = &net_http__stmp_79;
  *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x5b0c65;
  e_02.data = len;
  e_02._type = (runtime__type *)&net_http__stmp_79;
  runtime_gopanic(e_02);
LAB_005b0c66:
  *(undefined8 *)(puVar10 + -8) = 0x5b0c6b;
  runtime_morestack_noctxt();
  register0x00000020 = (BADSPACEBASE *)puVar10;
  goto code_r0x005b0660;
}

