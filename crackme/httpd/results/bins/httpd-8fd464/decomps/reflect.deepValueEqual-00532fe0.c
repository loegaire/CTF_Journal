
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.deepValueEqual(reflect.Value v1, reflect.Value v2,
   map[reflect.visit]bool visited, bool ~r3) */

bool reflect_deepValueEqual(reflect_Value v1,reflect_Value v2,map_reflect_visit_bool visited)

{
  runtime_maptype *t;
  void *key;
  undefined8 uVar1;
  undefined8 uVar2;
  runtime__type *prVar3;
  reflect_flag rVar4;
  bool bVar5;
  undefined1 uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  reflect_flag rVar13;
  long lVar14;
  runtime_hmap *prVar15;
  undefined8 *puVar16;
  runtime_hmap *h;
  undefined8 *puVar17;
  undefined1 *puVar18;
  undefined1 *unaff_RBP;
  undefined *puVar19;
  undefined8 uVar20;
  undefined1 *i;
  long *plVar21;
  map_reflect_visit_bool phVar23;
  long in_FS_OFFSET;
  bool bVar24;
  reflect_Type rVar25;
  interface___ iVar26;
  interface___ e;
  interface___ e_00;
  interface___ e_01;
  interface___ e_02;
  interface___ e_03;
  interface___ e_04;
  reflect_Value v;
  reflect_Value v1_00;
  reflect_Value v_00;
  reflect_Value v_01;
  reflect_Value rVar27;
  reflect_Value v1_01;
  reflect_Value v_03;
  reflect_Value v_04;
  reflect_Value v_05;
  reflect_Value v_06;
  reflect_Value v_07;
  reflect_Value v_08;
  reflect_Value v_09;
  reflect_Value v_10;
  reflect_Value v_11;
  reflect_Value v_12;
  reflect_Value v_13;
  reflect_Value v_14;
  reflect_Value v_15;
  reflect_Value v_16;
  reflect_Value v_17;
  reflect_Value v_18;
  reflect_Value v1_02;
  reflect_Value v_19;
  reflect_Value v_20;
  reflect_Value v1_03;
  reflect_Value v_21;
  reflect_Value v_22;
  reflect_Value v_23;
  reflect_Value v1_04;
  reflect_Value v_24;
  reflect_Value v_25;
  reflect_Value v1_05;
  reflect_Value v_26;
  reflect_Value v_27;
  reflect_Value v_28;
  reflect_Value v1_06;
  reflect_Value v2_00;
  reflect_Value v2_01;
  reflect_Value v2_02;
  reflect_Value key_00;
  reflect_Value key_01;
  reflect_Value v2_03;
  reflect_Value v2_04;
  reflect_Value v2_05;
  reflect_Value v2_06;
  reflect_Value v1_spill;
  reflect_Value v2_spill;
  map_reflect_visit_bool visited_spill;
  runtime_itab *tab;
  reflect_Value v_02;
  undefined1 *puVar22;
  
  h = v1.ptr;
  do {
                    /* Unresolved local var: func(reflect.Value,_reflect.Value)_bool * * hard@[???]
                        */
    puVar18 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) <
        (undefined1 *)((long)register0x00000020 + -0x98)) {
      puVar18 = (undefined1 *)((long)register0x00000020 + -0x118);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      lVar11 = *(long *)((long)register0x00000020 + 0x18);
      if (lVar11 == 0) {
        lVar14 = *(long *)((long)register0x00000020 + 0x30);
LAB_00533da4:
        *(bool *)((long)register0x00000020 + 0x40) = (lVar14 != 0) == (lVar11 != 0);
        return lVar11 != 0;
      }
      if (*(long *)((long)register0x00000020 + 0x30) == 0) {
        lVar14 = 0;
        goto LAB_00533da4;
      }
      *(reflect_flag *)((long)register0x00000020 + -0x118) =
           *(reflect_flag *)((long)register0x00000020 + 8);
      *(undefined8 *)((long)register0x00000020 + -0x110) =
           *(undefined8 *)((long)register0x00000020 + 0x10);
      *(long *)((long)register0x00000020 + -0x108) = lVar11;
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0x533065;
      rVar27.ptr = h;
      rVar27.typ = (reflect_rtype *)lVar11;
      rVar27.flag = *(reflect_flag *)((long)register0x00000020 + 8);
      reflect_Value_Type(rVar27);
      *(undefined8 *)((long)register0x00000020 + -0x30) =
           *(undefined8 *)((long)register0x00000020 + -0x100);
      *(reflect_flag *)((long)register0x00000020 + -0x38) =
           *(reflect_flag *)((long)register0x00000020 + -0xf8);
      *(undefined8 *)((long)register0x00000020 + -0x118) =
           *(undefined8 *)((long)register0x00000020 + 0x20);
      *(undefined8 *)((long)register0x00000020 + -0x110) =
           *(undefined8 *)((long)register0x00000020 + 0x28);
      *(undefined8 *)((long)register0x00000020 + -0x108) =
           *(undefined8 *)((long)register0x00000020 + 0x30);
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0x5330aa;
      v.ptr = (void *)*(undefined8 *)((long)register0x00000020 + 0x28);
      v.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + -0x100);
      v.flag = *(reflect_flag *)((long)register0x00000020 + -0xf8);
      rVar25 = reflect_Value_Type(v);
      tab = *(runtime_itab **)((long)register0x00000020 + -0xf8);
      if (*(long *)((long)register0x00000020 + -0x100) !=
          *(long *)((long)register0x00000020 + -0x30)) {
LAB_005330e2:
        *(undefined1 *)((long)register0x00000020 + 0x40) = 0;
        return SUB81(tab,0);
      }
      *(long *)((long)register0x00000020 + -0x118) = *(long *)((long)register0x00000020 + -0x30);
      *(void **)((long)register0x00000020 + -0x110) = *(void **)((long)register0x00000020 + -0x38);
      *(runtime_itab **)((long)register0x00000020 + -0x108) = tab;
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0x5330d9;
      bVar5 = runtime_ifaceeq(tab,rVar25.data,*(void **)((long)register0x00000020 + -0x38));
      tab = (runtime_itab *)(ulong)bVar5;
      if (*(char *)((long)register0x00000020 + -0x100) == '\0') goto LAB_005330e2;
      *(reflect_flag *)((long)register0x00000020 + -0x118) =
           *(reflect_flag *)((long)register0x00000020 + 8);
      h = *(runtime_hmap **)((long)register0x00000020 + 0x10);
      *(runtime_hmap **)((long)register0x00000020 + -0x110) = h;
      puVar19 = *(undefined **)((long)register0x00000020 + 0x18);
      *(undefined **)((long)register0x00000020 + -0x108) = puVar19;
      i = *(undefined1 **)((long)register0x00000020 + 0x20);
      *(undefined1 **)((long)register0x00000020 + -0x100) = i;
      puVar22 = *(undefined1 **)((long)register0x00000020 + 0x28);
      *(undefined1 **)((long)register0x00000020 + -0xf8) = puVar22;
      phVar23 = *(map_reflect_visit_bool *)((long)register0x00000020 + 0x30);
      *(map_reflect_visit_bool *)((long)register0x00000020 + -0xf0) = phVar23;
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0x533157;
      v1_00.ptr = h;
      v1_00.typ = (reflect_rtype *)reflect_deepValueEqual_func1;
      v1_00.flag = *(reflect_flag *)((long)register0x00000020 + 8);
      v2_00.ptr = puVar19;
      v2_00.typ = (reflect_rtype *)i;
      v2_00.flag = (reflect_flag)puVar22;
      reflect_deepValueEqual_func1(v1_00,v2_00);
      if (*(char *)((long)register0x00000020 + -0xe8) == '\0') goto code_r0x0053338f;
      uVar9 = *(ulong *)((long)register0x00000020 + 0x18);
      if ((uVar9 & 0x1f) - 0x15 < 2) {
        plVar7 = *(long **)((long)register0x00000020 + 8);
        if ((*plVar7 == 8) && (plVar7[1] != 0)) {
          if (((uint)uVar9 >> 7 & 1) == 0) {
            prVar15 = *(runtime_hmap **)((long)register0x00000020 + 0x10);
            h = prVar15;
          }
          else {
            prVar15 = *(runtime_hmap **)((long)register0x00000020 + 0x10);
            h = (runtime_hmap *)prVar15->count;
          }
          goto code_r0x005331da;
        }
      }
      else {
        plVar7 = *(long **)((long)register0x00000020 + 8);
        prVar15 = *(runtime_hmap **)((long)register0x00000020 + 0x10);
        h = prVar15;
code_r0x005331da:
        if (1 < (*(ulong *)((long)register0x00000020 + 0x30) & 0x1f) - 0x15) {
          phVar23 = *(map_reflect_visit_bool *)((long)register0x00000020 + 0x28);
          goto LAB_00533239;
        }
        if ((**(long **)((long)register0x00000020 + 0x20) == 8) &&
           ((*(long **)((long)register0x00000020 + 0x20))[1] != 0)) break;
        *(undefined **)((long)register0x00000020 + -0x118) = &DAT_00225520;
        *(undefined ***)((long)register0x00000020 + -0x110) = &reflect__stmp_10;
        *(undefined8 *)((long)register0x00000020 + -0x120) = 0x5344f2;
        e_03.data = h;
        e_03._type = (runtime__type *)&reflect__stmp_10;
        runtime_gopanic(e_03);
      }
      *(undefined **)((long)register0x00000020 + -0x118) = &DAT_00225520;
      *(undefined ***)((long)register0x00000020 + -0x110) = &reflect__stmp_10;
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0x53450e;
      e_04.data = h;
      e_04._type = (runtime__type *)&reflect__stmp_10;
      runtime_gopanic(e_04);
    }
    *(undefined8 *)(puVar18 + -8) = 0x534514;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar18;
  } while( true );
  if (((uint)*(ulong *)((long)register0x00000020 + 0x30) >> 7 & 1) == 0) {
                    /* Unresolved local var: reflect.Kind k@[???]
                       Unresolved local var: void * ptr@[???] */
    phVar23 = *(map_reflect_visit_bool *)((long)register0x00000020 + 0x28);
  }
  else {
    phVar23 = (map_reflect_visit_bool)**(undefined8 **)((long)register0x00000020 + 0x28);
  }
LAB_00533239:
  *(runtime_hmap **)((long)register0x00000020 + -0x80) = h;
  *(map_reflect_visit_bool *)((long)register0x00000020 + -0x68) = phVar23;
  *(runtime_hmap **)((long)register0x00000020 + -0x88) = h;
  *(map_reflect_visit_bool *)((long)register0x00000020 + -0x90) = phVar23;
  *(long **)((long)register0x00000020 + -0x118) = plVar7;
  *(runtime_hmap **)((long)register0x00000020 + -0x110) = prVar15;
  *(ulong *)((long)register0x00000020 + -0x108) = uVar9;
  *(undefined8 *)((long)register0x00000020 + -0x120) = 0x53326c;
  v_00.ptr = h;
  v_00.typ = (reflect_rtype *)plVar7;
  v_00.flag = uVar9;
  reflect_Value_Type(v_00);
  t = *(runtime_maptype **)((long)register0x00000020 + -0xf8);
  *(runtime_maptype **)((long)register0x00000020 + -0x78) = t;
  key = *(void **)((long)register0x00000020 + -0x100);
  *(void **)((long)register0x00000020 + -0x40) = key;
  h = *(runtime_hmap **)((long)register0x00000020 + -0x68);
  prVar15 = *(runtime_hmap **)((long)register0x00000020 + -0x80);
  if (*(ulong *)((long)register0x00000020 + -0x90) < *(ulong *)((long)register0x00000020 + -0x88)) {
    prVar15 = h;
  }
  *(runtime_hmap **)((long)register0x00000020 + -0x68) = prVar15;
  *(runtime_hmap **)((long)register0x00000020 + -0x28) = prVar15;
  if (*(ulong *)((long)register0x00000020 + -0x90) < *(ulong *)((long)register0x00000020 + -0x88)) {
    h = *(runtime_hmap **)((long)register0x00000020 + -0x80);
  }
  *(runtime_hmap **)((long)register0x00000020 + -0x70) = h;
  *(runtime_hmap **)((long)register0x00000020 + -0x20) = h;
  *(void **)((long)register0x00000020 + -0x18) = key;
  *(runtime_maptype **)((long)register0x00000020 + -0x10) = t;
  puVar19 = &DAT_00235e40;
  *(undefined **)((long)register0x00000020 + -0x118) = &DAT_00235e40;
  i = *(undefined1 **)((long)register0x00000020 + 0x38);
  *(undefined1 **)((long)register0x00000020 + -0x110) = i;
  puVar22 = (undefined1 *)((long)register0x00000020 + -0x28);
  *(undefined1 **)((long)register0x00000020 + -0x108) = puVar22;
  *(undefined8 *)((long)register0x00000020 + -0x120) = 0x53330e;
  runtime_mapaccess1(t,h,key);
  if (**(char **)((long)register0x00000020 + -0x100) != '\0') {
    *(undefined1 *)((long)register0x00000020 + 0x40) = 1;
    return SUB81(*(char **)((long)register0x00000020 + -0x100),0);
  }
  *(undefined8 *)((long)register0x00000020 + -0x28) =
       *(undefined8 *)((long)register0x00000020 + -0x68);
  *(undefined8 *)((long)register0x00000020 + -0x20) =
       *(undefined8 *)((long)register0x00000020 + -0x70);
  *(undefined8 *)((long)register0x00000020 + -0x18) =
       *(undefined8 *)((long)register0x00000020 + -0x40);
  *(undefined8 *)((long)register0x00000020 + -0x10) =
       *(undefined8 *)((long)register0x00000020 + -0x78);
  *(undefined **)((long)register0x00000020 + -0x118) = &DAT_00235e40;
  *(runtime_maptype **)((long)register0x00000020 + -0x110) =
       *(runtime_maptype **)((long)register0x00000020 + 0x38);
  *(undefined1 **)((long)register0x00000020 + -0x108) =
       (undefined1 *)((long)register0x00000020 + -0x28);
  *(undefined8 *)((long)register0x00000020 + -0x120) = 0x533386;
  runtime_mapassign(*(runtime_maptype **)((long)register0x00000020 + 0x38),h,
                    (undefined1 *)((long)register0x00000020 + -0x28));
  **(undefined1 **)((long)register0x00000020 + -0x100) = 1;
code_r0x0053338f:
  uVar9 = *(ulong *)((long)register0x00000020 + 0x18);
  uVar8 = uVar9 & 0x1f;
  uVar12 = (uint)uVar9;
  if (0x14 < uVar8) {
    if (0x16 < uVar8) {
      if (uVar8 != 0x17) {
        if (uVar8 == 0x19) {
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int n@[???] */
          *(undefined8 *)((long)register0x00000020 + -0x118) =
               *(undefined8 *)((long)register0x00000020 + 8);
          *(undefined8 *)((long)register0x00000020 + -0x110) =
               *(undefined8 *)((long)register0x00000020 + 0x10);
          *(ulong *)((long)register0x00000020 + -0x108) = uVar9;
          *(undefined8 *)((long)register0x00000020 + -0x120) = 0x533733;
          v_03.ptr = h;
          v_03.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + 8);
          v_03.flag = uVar9;
          reflect_Value_NumField(v_03);
          lVar11 = *(long *)((long)register0x00000020 + -0x100);
          *(long *)((long)register0x00000020 + -0xd0) = lVar11;
          rVar13 = 0;
          goto LAB_0053416c;
        }
        goto LAB_00533745;
      }
      uVar8 = *(ulong *)((long)register0x00000020 + 0x30) & 0x1f;
      *(ulong *)((long)register0x00000020 + -0x98) = uVar8;
      plVar7 = *(long **)((long)register0x00000020 + 0x10);
      if (uVar8 < 0x15) {
        i = (undefined1 *)(uVar8 - 0x12);
        if ((undefined1 *)0x1 < i) {
          if (uVar8 != 0x14) {
LAB_00534116:
            *(undefined **)((long)register0x00000020 + -0x118) = &DAT_0024d5e0;
            *(undefined8 *)((long)register0x00000020 + -0x120) = 0x534126;
            runtime_newobject((runtime__type *)&DAT_0024d5e0);
            prVar3 = *(runtime__type **)((long)register0x00000020 + -0x110);
            prVar3->ptrdata = 0x13;
            prVar3->size = (uintptr)&DAT_0029b752;
            uVar20 = *(undefined8 *)((long)register0x00000020 + -0x98);
            prVar3->hash = (int)uVar20;
            prVar3->tflag = (char)((ulong)uVar20 >> 0x20);
            prVar3->align = (char)((ulong)uVar20 >> 0x28);
            prVar3->fieldAlign = (char)((ulong)uVar20 >> 0x30);
            prVar3->kind = (char)((ulong)uVar20 >> 0x38);
            *(undefined **)((long)register0x00000020 + -0x118) = &DAT_00233920;
            *(runtime__type **)((long)register0x00000020 + -0x110) = prVar3;
            *(undefined8 *)((long)register0x00000020 + -0x120) = 0x53415e;
            iVar26.data = plVar7;
            iVar26._type = prVar3;
            runtime_gopanic(iVar26);
            while( true ) {
              rVar13 = *(long *)((long)register0x00000020 + -0xb8) + 1;
              lVar11 = *(long *)((long)register0x00000020 + -0xd0);
LAB_0053416c:
              if (lVar11 <= (long)rVar13) break;
              *(reflect_flag *)((long)register0x00000020 + -0xb8) = rVar13;
              *(undefined8 *)((long)register0x00000020 + -0x118) =
                   *(undefined8 *)((long)register0x00000020 + 8);
              *(undefined8 *)((long)register0x00000020 + -0x110) =
                   *(undefined8 *)((long)register0x00000020 + 0x10);
              *(undefined8 *)((long)register0x00000020 + -0x108) =
                   *(undefined8 *)((long)register0x00000020 + 0x18);
              *(reflect_flag *)((long)register0x00000020 + -0x100) = rVar13;
              *(undefined8 *)((long)register0x00000020 + -0x120) = 0x5341aa;
              v_24.ptr = (void *)*(undefined8 *)((long)register0x00000020 + 0x18);
              v_24.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + 8);
              v_24.flag = rVar13;
              reflect_Value_Field(v_24,(int)i);
              *(undefined8 *)((long)register0x00000020 + -0x48) =
                   *(undefined8 *)((long)register0x00000020 + -0xf8);
              *(reflect_flag *)((long)register0x00000020 + -0x38) =
                   *(reflect_flag *)((long)register0x00000020 + -0xf0);
              *(undefined8 *)((long)register0x00000020 + -0x98) =
                   *(undefined8 *)((long)register0x00000020 + -0xe8);
              *(undefined8 *)((long)register0x00000020 + -0x118) =
                   *(undefined8 *)((long)register0x00000020 + 0x20);
              uVar20 = *(undefined8 *)((long)register0x00000020 + 0x28);
              *(undefined8 *)((long)register0x00000020 + -0x110) = uVar20;
              i = *(undefined1 **)((long)register0x00000020 + 0x30);
              *(undefined1 **)((long)register0x00000020 + -0x108) = i;
              rVar13 = *(reflect_flag *)((long)register0x00000020 + -0xb8);
              *(reflect_flag *)((long)register0x00000020 + -0x100) = rVar13;
              *(undefined8 *)((long)register0x00000020 + -0x120) = 0x534206;
              v_25.ptr = (void *)*(undefined8 *)((long)register0x00000020 + 0x20);
              v_25.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + -0xf8);
              v_25.flag = *(reflect_flag *)((long)register0x00000020 + -0xf0);
              reflect_Value_Field(v_25,(int)i);
              rVar4 = *(reflect_flag *)((long)register0x00000020 + -0xf0);
              *(undefined8 *)((long)register0x00000020 + -0x118) =
                   *(undefined8 *)((long)register0x00000020 + -0x48);
              *(undefined8 *)((long)register0x00000020 + -0x110) =
                   *(undefined8 *)((long)register0x00000020 + -0x38);
              *(undefined8 *)((long)register0x00000020 + -0x108) =
                   *(undefined8 *)((long)register0x00000020 + -0x98);
              *(undefined8 *)((long)register0x00000020 + -0x100) =
                   *(undefined8 *)((long)register0x00000020 + -0xf8);
              *(reflect_flag *)((long)register0x00000020 + -0xf8) = rVar4;
              *(undefined8 *)((long)register0x00000020 + -0xf0) =
                   *(undefined8 *)((long)register0x00000020 + -0xe8);
              *(undefined8 *)((long)register0x00000020 + -0xe8) =
                   *(undefined8 *)((long)register0x00000020 + 0x38);
              *(undefined8 *)((long)register0x00000020 + -0x120) = 0x53425c;
              v1_05.ptr = (void *)*(undefined8 *)((long)register0x00000020 + -0x98);
              v1_05.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + 0x38);
              v1_05.flag = rVar4;
              v2_05.ptr = (void *)uVar20;
              v2_05.typ = (reflect_rtype *)i;
              v2_05.flag = rVar13;
              bVar5 = reflect_deepValueEqual(v1_05,v2_05,phVar23);
              if (*(char *)((long)register0x00000020 + -0xe0) == '\0') {
                *(undefined1 *)((long)register0x00000020 + 0x40) = 0;
                return bVar5;
              }
            }
            *(undefined1 *)((long)register0x00000020 + 0x40) = 1;
            return SUB81(lVar11,0);
          }
LAB_00533857:
          plVar10 = *(long **)((long)register0x00000020 + 0x28);
          i = (undefined1 *)CONCAT71((int7)((ulong)i >> 8),*plVar10 == 0);
          goto LAB_005338b7;
        }
      }
      else if (0x16 < uVar8) {
        if (uVar8 == 0x17) goto LAB_00533857;
        if (uVar8 != 0x1a) goto LAB_00534116;
      }
      uVar12 = (uint)*(ulong *)((long)register0x00000020 + 0x30);
      if ((uVar12 >> 9 & 1) == 0) {
        if ((uVar12 >> 7 & 1) == 0) {
          plVar10 = *(long **)((long)register0x00000020 + 0x28);
          plVar21 = plVar10;
        }
        else {
          plVar10 = *(long **)((long)register0x00000020 + 0x28);
          plVar21 = (long *)*plVar10;
        }
        i = (undefined1 *)CONCAT71((int7)((ulong)plVar21 >> 8),plVar21 == (long *)0x0);
      }
      else {
        plVar10 = *(long **)((long)register0x00000020 + 0x28);
        i = (undefined1 *)0x0;
      }
LAB_005338b7:
      if (SUB81(i,0) != (*plVar7 == 0)) {
        *(undefined1 *)((long)register0x00000020 + 0x40) = 0;
        return SUB81(plVar10,0);
      }
      *(undefined8 *)((long)register0x00000020 + -0x118) =
           *(undefined8 *)((long)register0x00000020 + 8);
      *(long **)((long)register0x00000020 + -0x110) = plVar7;
      *(ulong *)((long)register0x00000020 + -0x108) = uVar9;
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0x5338e5;
      v_06.ptr = plVar7;
      v_06.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + 8);
      v_06.flag = uVar9;
      reflect_Value_Len(v_06);
      *(undefined8 *)((long)register0x00000020 + -0xa0) =
           *(undefined8 *)((long)register0x00000020 + -0x100);
      *(reflect_flag *)((long)register0x00000020 + -0x118) =
           *(reflect_flag *)((long)register0x00000020 + 0x20);
      *(undefined8 *)((long)register0x00000020 + -0x110) =
           *(undefined8 *)((long)register0x00000020 + 0x28);
      uVar20 = *(undefined8 *)((long)register0x00000020 + 0x30);
      *(undefined8 *)((long)register0x00000020 + -0x108) = uVar20;
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0x53391a;
      v_07.ptr = (void *)uVar20;
      v_07.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + -0x100);
      v_07.flag = *(reflect_flag *)((long)register0x00000020 + 0x20);
      reflect_Value_Len(v_07);
      if (*(long *)((long)register0x00000020 + -0x100) !=
          *(long *)((long)register0x00000020 + -0xa0)) {
        *(undefined1 *)((long)register0x00000020 + 0x40) = 0;
        return SUB81(*(long *)((long)register0x00000020 + -0xa0),0);
      }
      *(undefined8 *)((long)register0x00000020 + -0x118) =
           *(undefined8 *)((long)register0x00000020 + 8);
      *(reflect_flag *)((long)register0x00000020 + -0x110) =
           *(reflect_flag *)((long)register0x00000020 + 0x10);
      *(undefined8 *)((long)register0x00000020 + -0x108) =
           *(undefined8 *)((long)register0x00000020 + 0x18);
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0x533956;
      v_08.ptr = (void *)uVar20;
      v_08.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + 8);
      v_08.flag = *(reflect_flag *)((long)register0x00000020 + 0x10);
      reflect_Value_Pointer(v_08);
      *(undefined8 *)((long)register0x00000020 + -0x88) =
           *(undefined8 *)((long)register0x00000020 + -0x100);
      *(reflect_flag *)((long)register0x00000020 + -0x118) =
           *(reflect_flag *)((long)register0x00000020 + 0x20);
      *(undefined8 *)((long)register0x00000020 + -0x110) =
           *(undefined8 *)((long)register0x00000020 + 0x28);
      *(undefined8 *)((long)register0x00000020 + -0x108) =
           *(undefined8 *)((long)register0x00000020 + 0x30);
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0x53398e;
      v_09.ptr = (void *)*(undefined8 *)((long)register0x00000020 + 0x30);
      v_09.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + -0x100);
      v_09.flag = *(reflect_flag *)((long)register0x00000020 + 0x20);
      reflect_Value_Pointer(v_09);
      if (*(long *)((long)register0x00000020 + -0x100) !=
          *(long *)((long)register0x00000020 + -0x88)) {
        lVar11 = 0;
        goto LAB_00533fb9;
      }
      *(undefined1 *)((long)register0x00000020 + 0x40) = 1;
      return SUB81(*(long *)((long)register0x00000020 + -0x88),0);
    }
    if (uVar8 != 0x15) {
      *(undefined8 *)((long)register0x00000020 + -0x118) =
           *(undefined8 *)((long)register0x00000020 + 8);
      *(undefined8 *)((long)register0x00000020 + -0x110) =
           *(undefined8 *)((long)register0x00000020 + 0x10);
      *(ulong *)((long)register0x00000020 + -0x108) = uVar9;
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0x533c54;
      v_15.ptr = h;
      v_15.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + 8);
      v_15.flag = uVar9;
      reflect_Value_Pointer(v_15);
      *(undefined8 *)((long)register0x00000020 + -0x88) =
           *(undefined8 *)((long)register0x00000020 + -0x100);
      rVar13 = *(reflect_flag *)((long)register0x00000020 + 0x20);
      *(reflect_flag *)((long)register0x00000020 + -0x118) = rVar13;
      *(undefined8 *)((long)register0x00000020 + -0x110) =
           *(undefined8 *)((long)register0x00000020 + 0x28);
      uVar20 = *(undefined8 *)((long)register0x00000020 + 0x30);
      *(undefined8 *)((long)register0x00000020 + -0x108) = uVar20;
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0x533c8c;
      v_16.ptr = (void *)uVar20;
      v_16.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + -0x100);
      v_16.flag = rVar13;
      reflect_Value_Pointer(v_16);
      if (*(long *)((long)register0x00000020 + -0x100) !=
          *(long *)((long)register0x00000020 + -0x88)) {
        *(undefined8 *)((long)register0x00000020 + -0x118) =
             *(undefined8 *)((long)register0x00000020 + 8);
        *(undefined8 *)((long)register0x00000020 + -0x110) =
             *(undefined8 *)((long)register0x00000020 + 0x10);
        *(undefined8 *)((long)register0x00000020 + -0x108) =
             *(undefined8 *)((long)register0x00000020 + 0x18);
        *(undefined8 *)((long)register0x00000020 + -0x120) = 0x533cde;
        v_17.ptr = (void *)uVar20;
        v_17.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + 0x18);
        v_17.flag = rVar13;
        reflect_Value_Elem(v_17);
        *(undefined8 *)((long)register0x00000020 + -0x48) =
             *(undefined8 *)((long)register0x00000020 + -0x100);
        *(reflect_flag *)((long)register0x00000020 + -0x38) =
             *(reflect_flag *)((long)register0x00000020 + -0xf8);
        *(undefined8 *)((long)register0x00000020 + -0x98) =
             *(undefined8 *)((long)register0x00000020 + -0xf0);
        *(undefined8 *)((long)register0x00000020 + -0x118) =
             *(undefined8 *)((long)register0x00000020 + 0x20);
        *(undefined8 *)((long)register0x00000020 + -0x110) =
             *(undefined8 *)((long)register0x00000020 + 0x28);
        *(undefined8 *)((long)register0x00000020 + -0x108) =
             *(undefined8 *)((long)register0x00000020 + 0x30);
        *(undefined8 *)((long)register0x00000020 + -0x120) = 0x533d30;
        v_18.ptr = (void *)*(undefined8 *)((long)register0x00000020 + 0x30);
        v_18.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + -0x100);
        v_18.flag = *(reflect_flag *)((long)register0x00000020 + -0xf8);
        rVar27 = reflect_Value_Elem(v_18);
        v1_02.flag = rVar27.flag;
        v1_02.ptr = rVar27.ptr;
        *(undefined8 *)((long)register0x00000020 + -0x118) =
             *(undefined8 *)((long)register0x00000020 + -0x48);
        *(undefined8 *)((long)register0x00000020 + -0x110) =
             *(undefined8 *)((long)register0x00000020 + -0x38);
        *(undefined8 *)((long)register0x00000020 + -0x108) =
             *(undefined8 *)((long)register0x00000020 + -0x98);
        *(undefined8 *)((long)register0x00000020 + -0xe8) =
             *(undefined8 *)((long)register0x00000020 + 0x38);
        *(undefined8 *)((long)register0x00000020 + -0x120) = 0x533d68;
        v1_02.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + 0x38);
        v2_02.ptr = puVar19;
        v2_02.typ = (reflect_rtype *)i;
        v2_02.flag = (reflect_flag)puVar22;
        reflect_deepValueEqual(v1_02,v2_02,phVar23);
        *(undefined1 *)((long)register0x00000020 + 0x40) =
             *(undefined1 *)((long)register0x00000020 + -0xe0);
        return (bool)*(undefined1 *)((long)register0x00000020 + -0xe0);
      }
      *(undefined1 *)((long)register0x00000020 + 0x40) = 1;
      return SUB81(*(long *)((long)register0x00000020 + -0x88),0);
    }
                    /* Unresolved local var: void * ptr@[???] */
    if ((uVar12 >> 9 & 1) == 0) {
      if ((uVar12 >> 7 & 1) == 0) {
        puVar17 = *(undefined8 **)((long)register0x00000020 + 0x10);
        puVar16 = puVar17;
      }
      else {
        puVar17 = *(undefined8 **)((long)register0x00000020 + 0x10);
        puVar16 = (undefined8 *)*puVar17;
      }
      bVar5 = puVar16 == (undefined8 *)0x0;
    }
    else {
      puVar17 = *(undefined8 **)((long)register0x00000020 + 0x10);
      bVar5 = false;
    }
    e.data = (undefined1 *)(*(ulong *)((long)register0x00000020 + 0x30) & 0x1f);
    *(undefined1 **)((long)register0x00000020 + -0x98) = e.data;
    if (&DAT_00000014 < e.data) {
      if (&DAT_00000016 < e.data) {
        if (e.data == (undefined1 *)0x17) goto LAB_00533a71;
        if (e.data != &DAT_0000001a) goto LAB_00533f68;
      }
    }
    else {
      i = e.data + -0x12;
      if ((undefined1 *)0x1 < i) {
        if (e.data != &DAT_00000014) {
LAB_00533f68:
          *(undefined **)((long)register0x00000020 + -0x118) = &DAT_0024d5e0;
          *(undefined8 *)((long)register0x00000020 + -0x120) = 0x533f78;
          runtime_newobject((runtime__type *)&DAT_0024d5e0);
          prVar3 = *(runtime__type **)((long)register0x00000020 + -0x110);
          prVar3->ptrdata = 0x13;
          prVar3->size = (uintptr)&DAT_0029b752;
          uVar20 = *(undefined8 *)((long)register0x00000020 + -0x98);
          prVar3->hash = (int)uVar20;
          prVar3->tflag = (char)((ulong)uVar20 >> 0x20);
          prVar3->align = (char)((ulong)uVar20 >> 0x28);
          prVar3->fieldAlign = (char)((ulong)uVar20 >> 0x30);
          prVar3->kind = (char)((ulong)uVar20 >> 0x38);
          *(undefined **)((long)register0x00000020 + -0x118) = &DAT_00233920;
          *(runtime__type **)((long)register0x00000020 + -0x110) = prVar3;
          *(undefined8 *)((long)register0x00000020 + -0x120) = 0x533fb0;
          e._type = prVar3;
          runtime_gopanic(e);
          while( true ) {
                    /* Unresolved local var: int i@[???] */
            lVar11 = *(long *)((long)register0x00000020 + -0xc0) + 1;
LAB_00533fb9:
            *(long *)((long)register0x00000020 + -0xc0) = lVar11;
            *(reflect_flag *)((long)register0x00000020 + -0x118) =
                 *(reflect_flag *)((long)register0x00000020 + 8);
            *(undefined8 *)((long)register0x00000020 + -0x110) =
                 *(undefined8 *)((long)register0x00000020 + 0x10);
            *(undefined8 *)((long)register0x00000020 + -0x108) =
                 *(undefined8 *)((long)register0x00000020 + 0x18);
            *(undefined8 *)((long)register0x00000020 + -0x120) = 0x533fe9;
            v_21.ptr = (void *)*(undefined8 *)((long)register0x00000020 + 0x18);
            v_21.typ = (reflect_rtype *)lVar11;
            v_21.flag = *(reflect_flag *)((long)register0x00000020 + 8);
            reflect_Value_Len(v_21);
            lVar11 = *(long *)((long)register0x00000020 + -0xc0);
            if (*(long *)((long)register0x00000020 + -0x100) <= lVar11) break;
            *(reflect_flag *)((long)register0x00000020 + -0x118) =
                 *(reflect_flag *)((long)register0x00000020 + 8);
            *(undefined8 *)((long)register0x00000020 + -0x110) =
                 *(undefined8 *)((long)register0x00000020 + 0x10);
            *(undefined8 *)((long)register0x00000020 + -0x108) =
                 *(undefined8 *)((long)register0x00000020 + 0x18);
            *(long *)((long)register0x00000020 + -0x100) = lVar11;
            *(undefined8 *)((long)register0x00000020 + -0x120) = 0x534029;
            v_22.ptr = (void *)*(undefined8 *)((long)register0x00000020 + 0x18);
            v_22.typ = (reflect_rtype *)lVar11;
            v_22.flag = *(reflect_flag *)((long)register0x00000020 + 8);
            reflect_Value_Index(v_22,(int)i);
            *(undefined8 *)((long)register0x00000020 + -0x48) =
                 *(undefined8 *)((long)register0x00000020 + -0xf8);
            *(reflect_flag *)((long)register0x00000020 + -0x38) =
                 *(reflect_flag *)((long)register0x00000020 + -0xf0);
            *(undefined8 *)((long)register0x00000020 + -0x98) =
                 *(undefined8 *)((long)register0x00000020 + -0xe8);
            *(undefined8 *)((long)register0x00000020 + -0x118) =
                 *(undefined8 *)((long)register0x00000020 + 0x20);
            uVar20 = *(undefined8 *)((long)register0x00000020 + 0x28);
            *(undefined8 *)((long)register0x00000020 + -0x110) = uVar20;
            i = *(undefined1 **)((long)register0x00000020 + 0x30);
            *(undefined1 **)((long)register0x00000020 + -0x108) = i;
            rVar13 = *(reflect_flag *)((long)register0x00000020 + -0xc0);
            *(reflect_flag *)((long)register0x00000020 + -0x100) = rVar13;
            *(undefined8 *)((long)register0x00000020 + -0x120) = 0x534085;
            v_23.ptr = (void *)*(undefined8 *)((long)register0x00000020 + 0x20);
            v_23.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + -0xf8);
            v_23.flag = *(reflect_flag *)((long)register0x00000020 + -0xf0);
            reflect_Value_Index(v_23,(int)i);
            rVar4 = *(reflect_flag *)((long)register0x00000020 + -0xf0);
            *(undefined8 *)((long)register0x00000020 + -0x118) =
                 *(undefined8 *)((long)register0x00000020 + -0x48);
            *(undefined8 *)((long)register0x00000020 + -0x110) =
                 *(undefined8 *)((long)register0x00000020 + -0x38);
            *(undefined8 *)((long)register0x00000020 + -0x108) =
                 *(undefined8 *)((long)register0x00000020 + -0x98);
            *(undefined8 *)((long)register0x00000020 + -0x100) =
                 *(undefined8 *)((long)register0x00000020 + -0xf8);
            *(reflect_flag *)((long)register0x00000020 + -0xf8) = rVar4;
            *(undefined8 *)((long)register0x00000020 + -0xf0) =
                 *(undefined8 *)((long)register0x00000020 + -0xe8);
            *(undefined8 *)((long)register0x00000020 + -0xe8) =
                 *(undefined8 *)((long)register0x00000020 + 0x38);
            *(undefined8 *)((long)register0x00000020 + -0x120) = 0x5340db;
            v1_04.ptr = (void *)*(undefined8 *)((long)register0x00000020 + -0x98);
            v1_04.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + 0x38);
            v1_04.flag = rVar4;
            v2_04.ptr = (void *)uVar20;
            v2_04.typ = (reflect_rtype *)i;
            v2_04.flag = rVar13;
            bVar5 = reflect_deepValueEqual(v1_04,v2_04,phVar23);
            if (*(char *)((long)register0x00000020 + -0xe0) == '\0') {
              *(undefined1 *)((long)register0x00000020 + 0x40) = 0;
              return bVar5;
            }
          }
          *(undefined1 *)((long)register0x00000020 + 0x40) = 1;
          return SUB81(lVar11,0);
        }
LAB_00533a71:
        plVar7 = *(long **)((long)register0x00000020 + 0x28);
        bVar24 = *plVar7 == 0;
        goto LAB_00533ac4;
      }
    }
    uVar12 = (uint)*(ulong *)((long)register0x00000020 + 0x30);
    if ((uVar12 >> 9 & 1) == 0) {
      if ((uVar12 >> 7 & 1) == 0) {
        plVar7 = *(long **)((long)register0x00000020 + 0x28);
        plVar10 = plVar7;
      }
      else {
        plVar7 = *(long **)((long)register0x00000020 + 0x28);
        plVar10 = (long *)*plVar7;
      }
      bVar24 = plVar10 == (long *)0x0;
    }
    else {
      plVar7 = *(long **)((long)register0x00000020 + 0x28);
      bVar24 = false;
    }
LAB_00533ac4:
    if (bVar5 != bVar24) {
      *(undefined1 *)((long)register0x00000020 + 0x40) = 0;
      return SUB81(puVar17,0);
    }
    *(undefined8 *)((long)register0x00000020 + -0x118) =
         *(undefined8 *)((long)register0x00000020 + 8);
    *(undefined8 **)((long)register0x00000020 + -0x110) = puVar17;
    *(ulong *)((long)register0x00000020 + -0x108) = uVar9;
    *(undefined8 *)((long)register0x00000020 + -0x120) = 0x533ae8;
    v_10.ptr = plVar7;
    v_10.typ = (reflect_rtype *)puVar17;
    v_10.flag = uVar9;
    reflect_Value_Len(v_10);
    *(undefined8 *)((long)register0x00000020 + -0xa0) =
         *(undefined8 *)((long)register0x00000020 + -0x100);
    *(reflect_flag *)((long)register0x00000020 + -0x118) =
         *(reflect_flag *)((long)register0x00000020 + 0x20);
    *(undefined8 *)((long)register0x00000020 + -0x110) =
         *(undefined8 *)((long)register0x00000020 + 0x28);
    uVar20 = *(undefined8 *)((long)register0x00000020 + 0x30);
    *(undefined8 *)((long)register0x00000020 + -0x108) = uVar20;
    *(undefined8 *)((long)register0x00000020 + -0x120) = 0x533b1d;
    v_11.ptr = (void *)uVar20;
    v_11.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + -0x100);
    v_11.flag = *(reflect_flag *)((long)register0x00000020 + 0x20);
    reflect_Value_Len(v_11);
    if (*(long *)((long)register0x00000020 + -0x100) != *(long *)((long)register0x00000020 + -0xa0))
    {
      *(undefined1 *)((long)register0x00000020 + 0x40) = 0;
      return SUB81(*(long *)((long)register0x00000020 + -0xa0),0);
    }
    *(undefined8 *)((long)register0x00000020 + -0x118) =
         *(undefined8 *)((long)register0x00000020 + 8);
    *(reflect_flag *)((long)register0x00000020 + -0x110) =
         *(reflect_flag *)((long)register0x00000020 + 0x10);
    *(undefined8 *)((long)register0x00000020 + -0x108) =
         *(undefined8 *)((long)register0x00000020 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x120) = 0x533b58;
    v_12.ptr = (void *)uVar20;
    v_12.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + 8);
    v_12.flag = *(reflect_flag *)((long)register0x00000020 + 0x10);
    reflect_Value_Pointer(v_12);
    *(undefined8 *)((long)register0x00000020 + -0x88) =
         *(undefined8 *)((long)register0x00000020 + -0x100);
    *(reflect_flag *)((long)register0x00000020 + -0x118) =
         *(reflect_flag *)((long)register0x00000020 + 0x20);
    *(undefined8 *)((long)register0x00000020 + -0x110) =
         *(undefined8 *)((long)register0x00000020 + 0x28);
    uVar20 = *(undefined8 *)((long)register0x00000020 + 0x30);
    *(undefined8 *)((long)register0x00000020 + -0x108) = uVar20;
    *(undefined8 *)((long)register0x00000020 + -0x120) = 0x533b90;
    v_13.ptr = (void *)uVar20;
    v_13.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + -0x100);
    v_13.flag = *(reflect_flag *)((long)register0x00000020 + 0x20);
    reflect_Value_Pointer(v_13);
    if (*(long *)((long)register0x00000020 + -0x100) == *(long *)((long)register0x00000020 + -0x88))
    {
      *(undefined1 *)((long)register0x00000020 + 0x40) = 1;
      return SUB81(*(long *)((long)register0x00000020 + -0x88),0);
    }
    *(undefined8 *)((long)register0x00000020 + -0x118) =
         *(undefined8 *)((long)register0x00000020 + 8);
    *(reflect_flag *)((long)register0x00000020 + -0x110) =
         *(reflect_flag *)((long)register0x00000020 + 0x10);
    *(undefined8 *)((long)register0x00000020 + -0x108) =
         *(undefined8 *)((long)register0x00000020 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x120) = 0x533bca;
    v_14.ptr = (void *)uVar20;
    v_14.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + 8);
    v_14.flag = *(reflect_flag *)((long)register0x00000020 + 0x10);
    reflect_Value_MapKeys(v_14);
    lVar11 = *(long *)((long)register0x00000020 + -0xf8);
    puVar17 = *(undefined8 **)((long)register0x00000020 + -0x100);
    if (lVar11 < 1) {
LAB_00533dc7:
      *(undefined1 *)((long)register0x00000020 + 0x40) = 1;
      return SUB81(lVar11,0);
    }
    *(long *)((long)register0x00000020 + -0xa0) = lVar11;
    lVar11 = 0;
    while( true ) {
      *(long *)((long)register0x00000020 + -0xa8) = lVar11;
      *(undefined8 **)((long)register0x00000020 + -0x50) = puVar17;
      uVar20 = puVar17[1];
      *(undefined8 *)((long)register0x00000020 + -0x38) = uVar20;
      uVar1 = puVar17[2];
      *(undefined8 *)((long)register0x00000020 + -0x98) = uVar1;
      uVar2 = *puVar17;
      *(undefined8 *)((long)register0x00000020 + -0x48) = uVar2;
      *(undefined8 *)((long)register0x00000020 + -0x118) =
           *(undefined8 *)((long)register0x00000020 + 8);
      *(reflect_flag *)((long)register0x00000020 + -0x110) =
           *(reflect_flag *)((long)register0x00000020 + 0x10);
      phVar23 = *(map_reflect_visit_bool *)((long)register0x00000020 + 0x18);
      *(map_reflect_visit_bool *)((long)register0x00000020 + -0x108) = phVar23;
      *(undefined8 *)((long)register0x00000020 + -0x100) = uVar2;
      *(undefined8 *)((long)register0x00000020 + -0xf8) = uVar20;
      *(undefined8 *)((long)register0x00000020 + -0xf0) = uVar1;
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0x533e5b;
      v_19.ptr = (void *)uVar1;
      v_19.typ = (reflect_rtype *)uVar20;
      v_19.flag = (reflect_flag)puVar17;
      key_00.ptr = (void *)uVar2;
      key_00.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + 8);
      key_00.flag = *(reflect_flag *)((long)register0x00000020 + 0x10);
      reflect_Value_MapIndex(v_19,key_00);
      *(undefined8 *)((long)register0x00000020 + -0x58) =
           *(undefined8 *)((long)register0x00000020 + -0xe8);
      *(reflect_flag *)((long)register0x00000020 + -0x60) =
           *(reflect_flag *)((long)register0x00000020 + -0xe0);
      *(undefined8 *)((long)register0x00000020 + -0xb0) =
           *(undefined8 *)((long)register0x00000020 + -0xd8);
      *(undefined8 *)((long)register0x00000020 + -0x118) =
           *(undefined8 *)((long)register0x00000020 + 0x20);
      *(undefined8 *)((long)register0x00000020 + -0x110) =
           *(undefined8 *)((long)register0x00000020 + 0x28);
      uVar20 = *(undefined8 *)((long)register0x00000020 + 0x30);
      *(undefined8 *)((long)register0x00000020 + -0x108) = uVar20;
      *(undefined8 *)((long)register0x00000020 + -0x100) =
           *(undefined8 *)((long)register0x00000020 + -0x48);
      *(undefined8 *)((long)register0x00000020 + -0xf8) =
           *(undefined8 *)((long)register0x00000020 + -0x38);
      rVar13 = *(reflect_flag *)((long)register0x00000020 + -0x98);
      *(reflect_flag *)((long)register0x00000020 + -0xf0) = rVar13;
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0x533ed1;
      v_20.ptr = (void *)*(undefined8 *)((long)register0x00000020 + 0x20);
      v_20.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + -0xe8);
      v_20.flag = *(reflect_flag *)((long)register0x00000020 + -0xe0);
      key_01.ptr = (void *)*(undefined8 *)((long)register0x00000020 + 0x28);
      key_01.typ = (reflect_rtype *)uVar20;
      key_01.flag = rVar13;
      reflect_Value_MapIndex(v_20,key_01);
      uVar9 = *(ulong *)((long)register0x00000020 + -0xd8);
      rVar4 = *(reflect_flag *)((long)register0x00000020 + -0xe8);
      lVar11 = *(long *)((long)register0x00000020 + -0xb0);
      if ((lVar11 == 0) || (uVar9 == 0)) break;
      *(undefined8 *)((long)register0x00000020 + -0x118) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x110) =
           *(undefined8 *)((long)register0x00000020 + -0x60);
      *(long *)((long)register0x00000020 + -0x108) = lVar11;
      *(reflect_flag *)((long)register0x00000020 + -0x100) = rVar4;
      *(undefined8 *)((long)register0x00000020 + -0xf8) =
           *(undefined8 *)((long)register0x00000020 + -0xe0);
      *(ulong *)((long)register0x00000020 + -0xf0) = uVar9;
      *(undefined8 *)((long)register0x00000020 + -0xe8) =
           *(undefined8 *)((long)register0x00000020 + 0x38);
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0x533f2e;
      v1_03.ptr = (void *)lVar11;
      v1_03.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + 0x38);
      v1_03.flag = rVar4;
      v2_03.ptr = (void *)*(undefined8 *)((long)register0x00000020 + -0x60);
      v2_03.typ = (reflect_rtype *)uVar20;
      v2_03.flag = rVar13;
      bVar5 = reflect_deepValueEqual(v1_03,v2_03,phVar23);
      uVar9 = (ulong)bVar5;
      if (*(char *)((long)register0x00000020 + -0xe0) == '\0') break;
      lVar11 = *(long *)((long)register0x00000020 + -0xa8) + 1;
      if (*(long *)((long)register0x00000020 + -0xa0) <= lVar11) goto LAB_00533dc7;
      puVar17 = (undefined8 *)(*(long *)((long)register0x00000020 + -0x50) + 0x18);
    }
    *(undefined1 *)((long)register0x00000020 + 0x40) = 0;
    return SUB81(uVar9,0);
  }
  if (uVar8 == 0x11) {
    lVar11 = 0;
    goto LAB_00534380;
  }
  if (uVar8 == 0x13) {
                    /* Unresolved local var: void * ptr@[???] */
    uVar9 = 0x13;
    if ((uVar12 >> 9 & 1) != 0) goto LAB_0053349c;
    if ((uVar12 >> 7 & 1) == 0) {
      uVar9 = *(ulong *)((long)register0x00000020 + 0x10);
    }
    else {
      uVar9 = **(ulong **)((long)register0x00000020 + 0x10);
    }
    if (uVar9 != 0) goto LAB_0053349c;
    uVar9 = *(ulong *)((long)register0x00000020 + 0x30) & 0x1f;
    *(ulong *)((long)register0x00000020 + -0x98) = uVar9;
    if (uVar9 < 0x15) {
      if (uVar9 - 0x12 < 2) goto LAB_00533458;
      if (uVar9 != 0x14) goto LAB_00534327;
LAB_0053343d:
      lVar11 = **(long **)((long)register0x00000020 + 0x28);
    }
    else {
      if (0x16 < uVar9) {
        if (uVar9 == 0x17) goto LAB_0053343d;
        if (uVar9 != 0x1a) goto LAB_00534327;
      }
LAB_00533458:
      uVar12 = (uint)*(ulong *)((long)register0x00000020 + 0x30);
      if ((uVar12 >> 9 & 1) != 0) goto LAB_0053349c;
      if ((uVar12 >> 7 & 1) == 0) {
        lVar11 = *(long *)((long)register0x00000020 + 0x28);
      }
      else {
        lVar11 = **(long **)((long)register0x00000020 + 0x28);
      }
    }
    uVar9 = (ulong)(lVar11 == 0);
    if (lVar11 == 0) {
      *(undefined1 *)((long)register0x00000020 + 0x40) = 1;
      return true;
    }
LAB_0053349c:
    *(undefined1 *)((long)register0x00000020 + 0x40) = 0;
    return SUB81(uVar9,0);
  }
  if (uVar8 != 0x14) {
LAB_00533745:
    *(undefined8 *)((long)register0x00000020 + -0x118) =
         *(undefined8 *)((long)register0x00000020 + 8);
    *(undefined8 *)((long)register0x00000020 + -0x110) =
         *(undefined8 *)((long)register0x00000020 + 0x10);
    *(ulong *)((long)register0x00000020 + -0x108) = uVar9;
    *(undefined1 *)((long)register0x00000020 + -0x100) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x120) = 0x53376d;
    v_04.ptr = h;
    v_04.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + 0x10);
    v_04.flag = uVar9;
    iVar26 = reflect_valueInterface(v_04,SUB81(i,0));
    v_05.ptr = iVar26.data;
    *(undefined8 *)((long)register0x00000020 + -0x30) =
         *(undefined8 *)((long)register0x00000020 + -0xf8);
    *(reflect_flag *)((long)register0x00000020 + -0x38) =
         *(reflect_flag *)((long)register0x00000020 + -0xf0);
    *(undefined8 *)((long)register0x00000020 + -0x118) =
         *(undefined8 *)((long)register0x00000020 + 0x20);
    *(undefined8 *)((long)register0x00000020 + -0x110) =
         *(undefined8 *)((long)register0x00000020 + 0x28);
    *(undefined8 *)((long)register0x00000020 + -0x108) =
         *(undefined8 *)((long)register0x00000020 + 0x30);
    *(undefined1 *)((long)register0x00000020 + -0x100) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x120) = 0x5337b7;
    v_05.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + -0xf8);
    v_05.flag = *(reflect_flag *)((long)register0x00000020 + -0xf0);
    iVar26 = reflect_valueInterface(v_05,SUB81(i,0));
    if (*(long *)((long)register0x00000020 + -0xf8) == *(long *)((long)register0x00000020 + -0x30))
    {
      *(long *)((long)register0x00000020 + -0x118) = *(long *)((long)register0x00000020 + -0x30);
      *(void **)((long)register0x00000020 + -0x110) = *(void **)((long)register0x00000020 + -0x38);
      *(runtime__type **)((long)register0x00000020 + -0x108) =
           *(runtime__type **)((long)register0x00000020 + -0xf0);
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0x5337ea;
      runtime_efaceeq(*(runtime__type **)((long)register0x00000020 + -0xf0),iVar26.data,
                      *(void **)((long)register0x00000020 + -0x38));
      uVar6 = *(undefined1 *)((long)register0x00000020 + -0x100);
    }
    else {
      uVar6 = 0;
    }
    *(undefined1 *)((long)register0x00000020 + 0x40) = uVar6;
    return (bool)uVar6;
  }
  plVar7 = *(long **)((long)register0x00000020 + 0x10);
  lVar11 = *plVar7;
  if (lVar11 != 0) {
    uVar8 = *(ulong *)((long)register0x00000020 + 0x30);
    h = (runtime_hmap *)(uVar8 & 0x1f);
    *(runtime_hmap **)((long)register0x00000020 + -0x98) = h;
    if ((runtime_hmap *)&DAT_00000014 < h) {
      if ((runtime_hmap *)&DAT_00000016 < h) {
        if (h == (runtime_hmap *)0x17) goto LAB_0053352c;
        if (h != (runtime_hmap *)&DAT_0000001a) goto LAB_005342df;
      }
LAB_0053354a:
      if (((uint)uVar8 >> 9 & 1) != 0) goto LAB_00533630;
      if (((uint)uVar8 >> 7 & 1) == 0) {
        h = *(runtime_hmap **)((long)register0x00000020 + 0x28);
        prVar15 = h;
      }
      else {
        h = *(runtime_hmap **)((long)register0x00000020 + 0x28);
        prVar15 = (runtime_hmap *)h->count;
      }
      i = (undefined1 *)CONCAT71((int7)((ulong)prVar15 >> 8),prVar15 == (runtime_hmap *)0x0);
LAB_00533580:
      if ((char)i == '\0') {
LAB_00533630:
        *(undefined8 *)((long)register0x00000020 + -0x118) =
             *(undefined8 *)((long)register0x00000020 + 8);
        *(long **)((long)register0x00000020 + -0x110) = plVar7;
        *(ulong *)((long)register0x00000020 + -0x108) = uVar9;
        *(undefined8 *)((long)register0x00000020 + -0x120) = 0x53364b;
        v_01.ptr = h;
        v_01.typ = (reflect_rtype *)plVar7;
        v_01.flag = uVar9;
        reflect_Value_Elem(v_01);
        *(undefined8 *)((long)register0x00000020 + -0x48) =
             *(undefined8 *)((long)register0x00000020 + -0x100);
        *(reflect_flag *)((long)register0x00000020 + -0x38) =
             *(reflect_flag *)((long)register0x00000020 + -0xf8);
        *(undefined8 *)((long)register0x00000020 + -0x98) =
             *(undefined8 *)((long)register0x00000020 + -0xf0);
        *(undefined8 *)((long)register0x00000020 + -0x118) =
             *(undefined8 *)((long)register0x00000020 + 0x20);
        *(undefined8 *)((long)register0x00000020 + -0x110) =
             *(undefined8 *)((long)register0x00000020 + 0x28);
        *(undefined8 *)((long)register0x00000020 + -0x108) =
             *(undefined8 *)((long)register0x00000020 + 0x30);
        *(undefined8 *)((long)register0x00000020 + -0x120) = 0x53369d;
        v_02.ptr = (void *)*(undefined8 *)((long)register0x00000020 + 0x30);
        v_02.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + -0x100);
        v_02.flag = *(reflect_flag *)((long)register0x00000020 + -0xf8);
        rVar27 = reflect_Value_Elem(v_02);
        v1_01.flag = rVar27.flag;
        v1_01.ptr = rVar27.ptr;
        *(undefined8 *)((long)register0x00000020 + -0x118) =
             *(undefined8 *)((long)register0x00000020 + -0x48);
        *(undefined8 *)((long)register0x00000020 + -0x110) =
             *(undefined8 *)((long)register0x00000020 + -0x38);
        *(undefined8 *)((long)register0x00000020 + -0x108) =
             *(undefined8 *)((long)register0x00000020 + -0x98);
        *(undefined8 *)((long)register0x00000020 + -0xe8) =
             *(undefined8 *)((long)register0x00000020 + 0x38);
        *(undefined8 *)((long)register0x00000020 + -0x120) = 0x5336d5;
        v1_01.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + 0x38);
        v2_01.ptr = (void *)uVar8;
        v2_01.typ = (reflect_rtype *)i;
        v2_01.flag = (reflect_flag)puVar22;
        reflect_deepValueEqual(v1_01,v2_01,phVar23);
        *(undefined1 *)((long)register0x00000020 + 0x40) =
             *(undefined1 *)((long)register0x00000020 + -0xe0);
        return (bool)*(undefined1 *)((long)register0x00000020 + -0xe0);
      }
      goto LAB_00533589;
    }
    i = (undefined1 *)((long)&h[-1].oldbuckets + 6);
    if (i < (undefined1 *)0x2) goto LAB_0053354a;
    if (h == (runtime_hmap *)&DAT_00000014) {
LAB_0053352c:
      h = *(runtime_hmap **)((long)register0x00000020 + 0x28);
      i = (undefined1 *)CONCAT71((int7)((ulong)i >> 8),h->count == 0);
      goto LAB_00533580;
    }
LAB_005342df:
    *(undefined **)((long)register0x00000020 + -0x118) = &DAT_0024d5e0;
    *(undefined8 *)((long)register0x00000020 + -0x120) = 0x5342ef;
    runtime_newobject((runtime__type *)&DAT_0024d5e0);
    prVar3 = *(runtime__type **)((long)register0x00000020 + -0x110);
    prVar3->ptrdata = 0x13;
    prVar3->size = (uintptr)&DAT_0029b752;
    uVar20 = *(undefined8 *)((long)register0x00000020 + -0x98);
    prVar3->hash = (int)uVar20;
    prVar3->tflag = (char)((ulong)uVar20 >> 0x20);
    prVar3->align = (char)((ulong)uVar20 >> 0x28);
    prVar3->fieldAlign = (char)((ulong)uVar20 >> 0x30);
    prVar3->kind = (char)((ulong)uVar20 >> 0x38);
    *(undefined **)((long)register0x00000020 + -0x118) = &DAT_00233920;
    *(runtime__type **)((long)register0x00000020 + -0x110) = prVar3;
    *(undefined8 *)((long)register0x00000020 + -0x120) = 0x534327;
    e_01.data = h;
    e_01._type = prVar3;
    runtime_gopanic(e_01);
LAB_00534327:
    *(undefined **)((long)register0x00000020 + -0x118) = &DAT_0024d5e0;
    *(undefined8 *)((long)register0x00000020 + -0x120) = 0x534337;
    runtime_newobject((runtime__type *)&DAT_0024d5e0);
    prVar3 = *(runtime__type **)((long)register0x00000020 + -0x110);
    prVar3->ptrdata = 0x13;
    prVar3->size = (uintptr)&DAT_0029b752;
    uVar20 = *(undefined8 *)((long)register0x00000020 + -0x98);
    prVar3->hash = (int)uVar20;
    prVar3->tflag = (char)((ulong)uVar20 >> 0x20);
    prVar3->align = (char)((ulong)uVar20 >> 0x28);
    prVar3->fieldAlign = (char)((ulong)uVar20 >> 0x30);
    prVar3->kind = (char)((ulong)uVar20 >> 0x38);
    *(undefined **)((long)register0x00000020 + -0x118) = &DAT_00233920;
    *(runtime__type **)((long)register0x00000020 + -0x110) = prVar3;
    *(undefined8 *)((long)register0x00000020 + -0x120) = 0x53436f;
    e_02.data = h;
    e_02._type = prVar3;
    runtime_gopanic(e_02);
    while( true ) {
                    /* Unresolved local var: int i@[???] */
      lVar11 = *(long *)((long)register0x00000020 + -200) + 1;
      uVar9 = *(ulong *)((long)register0x00000020 + 0x18);
LAB_00534380:
      *(long *)((long)register0x00000020 + -200) = lVar11;
      *(undefined8 *)((long)register0x00000020 + -0x118) =
           *(undefined8 *)((long)register0x00000020 + 8);
      *(undefined8 *)((long)register0x00000020 + -0x110) =
           *(undefined8 *)((long)register0x00000020 + 0x10);
      *(ulong *)((long)register0x00000020 + -0x108) = uVar9;
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0x5343a8;
      v_26.ptr = (void *)*(undefined8 *)((long)register0x00000020 + 0x10);
      v_26.typ = (reflect_rtype *)lVar11;
      v_26.flag = uVar9;
      reflect_Value_Len(v_26);
      lVar11 = *(long *)((long)register0x00000020 + -200);
      if (*(long *)((long)register0x00000020 + -0x100) <= lVar11) break;
      *(reflect_flag *)((long)register0x00000020 + -0x118) =
           *(reflect_flag *)((long)register0x00000020 + 8);
      *(undefined8 *)((long)register0x00000020 + -0x110) =
           *(undefined8 *)((long)register0x00000020 + 0x10);
      *(undefined8 *)((long)register0x00000020 + -0x108) =
           *(undefined8 *)((long)register0x00000020 + 0x18);
      *(long *)((long)register0x00000020 + -0x100) = lVar11;
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0x5343e8;
      v_27.ptr = (void *)*(undefined8 *)((long)register0x00000020 + 0x18);
      v_27.typ = (reflect_rtype *)lVar11;
      v_27.flag = *(reflect_flag *)((long)register0x00000020 + 8);
      reflect_Value_Index(v_27,(int)i);
      *(undefined8 *)((long)register0x00000020 + -0x48) =
           *(undefined8 *)((long)register0x00000020 + -0xf8);
      *(reflect_flag *)((long)register0x00000020 + -0x38) =
           *(reflect_flag *)((long)register0x00000020 + -0xf0);
      *(undefined8 *)((long)register0x00000020 + -0x98) =
           *(undefined8 *)((long)register0x00000020 + -0xe8);
      *(undefined8 *)((long)register0x00000020 + -0x118) =
           *(undefined8 *)((long)register0x00000020 + 0x20);
      uVar20 = *(undefined8 *)((long)register0x00000020 + 0x28);
      *(undefined8 *)((long)register0x00000020 + -0x110) = uVar20;
      i = *(undefined1 **)((long)register0x00000020 + 0x30);
      *(undefined1 **)((long)register0x00000020 + -0x108) = i;
      rVar13 = *(reflect_flag *)((long)register0x00000020 + -200);
      *(reflect_flag *)((long)register0x00000020 + -0x100) = rVar13;
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0x534445;
      v_28.ptr = (void *)*(undefined8 *)((long)register0x00000020 + 0x20);
      v_28.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + -0xf8);
      v_28.flag = *(reflect_flag *)((long)register0x00000020 + -0xf0);
      reflect_Value_Index(v_28,(int)i);
      rVar4 = *(reflect_flag *)((long)register0x00000020 + -0xf0);
      *(undefined8 *)((long)register0x00000020 + -0x118) =
           *(undefined8 *)((long)register0x00000020 + -0x48);
      *(undefined8 *)((long)register0x00000020 + -0x110) =
           *(undefined8 *)((long)register0x00000020 + -0x38);
      *(undefined8 *)((long)register0x00000020 + -0x108) =
           *(undefined8 *)((long)register0x00000020 + -0x98);
      *(undefined8 *)((long)register0x00000020 + -0x100) =
           *(undefined8 *)((long)register0x00000020 + -0xf8);
      *(reflect_flag *)((long)register0x00000020 + -0xf8) = rVar4;
      *(undefined8 *)((long)register0x00000020 + -0xf0) =
           *(undefined8 *)((long)register0x00000020 + -0xe8);
      *(undefined8 *)((long)register0x00000020 + -0xe8) =
           *(undefined8 *)((long)register0x00000020 + 0x38);
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0x53449b;
      v1_06.ptr = (void *)*(undefined8 *)((long)register0x00000020 + -0x98);
      v1_06.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + 0x38);
      v1_06.flag = rVar4;
      v2_06.ptr = (void *)uVar20;
      v2_06.typ = (reflect_rtype *)i;
      v2_06.flag = rVar13;
      bVar5 = reflect_deepValueEqual(v1_06,v2_06,phVar23);
      if (*(char *)((long)register0x00000020 + -0xe0) == '\0') {
        *(undefined1 *)((long)register0x00000020 + 0x40) = 0;
        return bVar5;
      }
    }
    *(undefined1 *)((long)register0x00000020 + 0x40) = 1;
    return SUB81(lVar11,0);
  }
                    /* Unresolved local var: reflect.Kind k@[???]
                       Unresolved local var: void * ptr@[???] */
  h = *(runtime_hmap **)((long)register0x00000020 + 0x28);
  uVar8 = *(ulong *)((long)register0x00000020 + 0x30);
LAB_00533589:
  uVar9 = uVar8 & 0x1f;
  *(ulong *)((long)register0x00000020 + -0x98) = uVar9;
  if (uVar9 < 0x15) {
    if (1 < uVar9 - 0x12) {
      if (uVar9 == 0x14) {
LAB_005335cc:
        bVar5 = h->count == 0;
        goto LAB_00533613;
      }
LAB_00534297:
      *(undefined **)((long)register0x00000020 + -0x118) = &DAT_0024d5e0;
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0x5342a7;
      runtime_newobject((runtime__type *)&DAT_0024d5e0);
      prVar3 = *(runtime__type **)((long)register0x00000020 + -0x110);
      prVar3->ptrdata = 0x13;
      prVar3->size = (uintptr)&DAT_0029b752;
      uVar20 = *(undefined8 *)((long)register0x00000020 + -0x98);
      prVar3->hash = (int)uVar20;
      prVar3->tflag = (char)((ulong)uVar20 >> 0x20);
      prVar3->align = (char)((ulong)uVar20 >> 0x28);
      prVar3->fieldAlign = (char)((ulong)uVar20 >> 0x30);
      prVar3->kind = (char)((ulong)uVar20 >> 0x38);
      *(undefined **)((long)register0x00000020 + -0x118) = &DAT_00233920;
      *(runtime__type **)((long)register0x00000020 + -0x110) = prVar3;
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0x5342df;
      e_00.data = h;
      e_00._type = prVar3;
      runtime_gopanic(e_00);
      goto LAB_005342df;
    }
  }
  else if (0x16 < uVar9) {
    if (uVar9 == 0x17) goto LAB_005335cc;
    if (uVar9 != 0x1a) goto LAB_00534297;
  }
  if (((uint)uVar8 >> 9 & 1) == 0) {
    if (((uint)uVar8 >> 7 & 1) != 0) {
      h = (runtime_hmap *)h->count;
    }
    bVar5 = h == (runtime_hmap *)0x0;
  }
  else {
    bVar5 = false;
  }
LAB_00533613:
  *(bool *)((long)register0x00000020 + 0x40) = bVar5 == (lVar11 == 0);
  return bVar5;
}

