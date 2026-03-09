
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void mime.FormatMediaType(string t, map[string]string param, string
   ~r2) */

string mime_FormatMediaType(string t,map_string_string param)

{
  byte bVar1;
  func_int32__bool **ppfVar2;
  func_int32__bool **ppfVar3;
  int *piVar4;
  runtime_hmap *h;
  char cVar5;
  uint8 *puVar6;
  runtime_maptype *prVar7;
  runtime__type *prVar8;
  long lVar9;
  uint8 *puVar10;
  long lVar11;
  ulong extraout_RAX;
  ulong extraout_RAX_00;
  ulong uVar12;
  undefined8 uVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  long extraout_RDX;
  long extraout_RDX_00;
  byte bVar17;
  int iVar19;
  undefined1 *unaff_RBP;
  long lVar20;
  undefined8 in_RDI;
  ulong uVar21;
  long in_FS_OFFSET;
  bool bVar22;
  string s;
  string s_00;
  string sVar23;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  string sVar24;
  sort_Interface data;
  string sVar25;
  string s_05;
  string s_06;
  string s_07;
  string s_08;
  string sVar26;
  interface___ e;
  interface___ e_00;
  interface___ e_01;
  interface___ e_02;
  interface___ e_03;
  interface___ e_04;
  string s_09;
  interface___ e_05;
  interface___ e_06;
  interface___ e_07;
  interface___ e_08;
  interface___ e_09;
  interface___ e_10;
  interface___ e_11;
  interface___ e_12;
  interface___ e_13;
  interface___ e_14;
  interface___ e_15;
  interface___ e_16;
  interface___ e_17;
  interface___ e_18;
  interface___ e_19;
  runtime_slice old;
  runtime_slice old_00;
  runtime_slice old_01;
  runtime_slice old_02;
  runtime_slice old_03;
  runtime_slice old_04;
  runtime_slice old_05;
  runtime_slice old_06;
  runtime_slice old_07;
  runtime_slice old_08;
  runtime_slice old_09;
  runtime_slice old_10;
  runtime_slice old_11;
  runtime_slice old_12;
  runtime_slice old_13;
  runtime_slice old_14;
  runtime_slice old_15;
  runtime_slice old_16;
  runtime_slice old_17;
  runtime_slice old_18;
  runtime_slice old_19;
  runtime_slice rVar27;
  __uint8 val;
  string ky;
  string t_spill;
  map_string_string param_spill;
  strings_Builder b;
  ulong uVar18;
  
  e_16.data = (undefined1 *)t.len;
code_r0x006f0640:
                    /* Unresolved local var: []string attrs@[???] */
  rVar27.array = (undefined1 *)register0x00000020;
  if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) <
      (undefined1 *)((long)register0x00000020 + -0x160)) {
    rVar27.array = (undefined1 *)((long)register0x00000020 + -0x1e0);
    *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
    unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x1e0) =
         *(undefined8 *)((long)register0x00000020 + 8);
    *(undefined8 *)((long)register0x00000020 + -0x1d8) =
         *(undefined8 *)((long)register0x00000020 + 0x10);
    *(undefined1 *)((long)register0x00000020 + -0x1d0) = 0x2f;
    *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f06af;
    internal_bytealg_IndexByteString();
    ppfVar2 = *(func_int32__bool ***)((long)register0x00000020 + -0x1c8);
                    /* Unresolved local var: int slash@[???]
                       Unresolved local var: int ~R0@[???] */
    if (ppfVar2 != (func_int32__bool **)0xffffffffffffffff) {
                    /* Unresolved local var: string major@[???]
                       Unresolved local var: string sub@[???] */
      ppfVar3 = *(func_int32__bool ***)((long)register0x00000020 + 0x10);
      if (ppfVar3 < ppfVar2) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f22b2;
        runtime_panicSliceAlen();
      }
      if (ppfVar3 < (func_int32__bool **)((long)ppfVar2 + 1U)) goto LAB_006f22a5;
      *(func_int32__bool ***)((long)register0x00000020 + -0x198) = ppfVar2;
      lVar9 = (long)ppfVar3 - (long)ppfVar2;
      lVar11 = lVar9 + -1;
      *(long *)((long)register0x00000020 + -0x188) = lVar11;
      lVar16 = *(long *)((long)register0x00000020 + 8);
      puVar10 = (uint8 *)(((long)ppfVar2 + 1U & -lVar11 >> 0x3f) + lVar16);
      *(uint8 **)((long)register0x00000020 + -0x100) = puVar10;
      if (ppfVar2 == (func_int32__bool **)0x0) {
        bVar22 = false;
        uVar13 = 0;
      }
      else {
        *(long *)((long)register0x00000020 + -0x110) = lVar9;
        *(long *)((long)register0x00000020 + -0x1e0) = lVar16;
        *(func_int32__bool ***)((long)register0x00000020 + -0x1d8) = ppfVar2;
        *(undefined ***)((long)register0x00000020 + -0x1d0) = &PTR_mime_isNotTokenChar_002b33f8;
        *(undefined1 *)((long)register0x00000020 + -0x1c8) = 1;
        *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f08db;
        s_01.len = lVar16;
        s_01.str = (uint8 *)&PTR_mime_isNotTokenChar_002b33f8;
        strings_indexFunc(s_01,ppfVar2,SUB81(in_RDI,0));
        bVar22 = *(long *)((long)register0x00000020 + -0x1c0) < 0;
        uVar13 = *(undefined8 *)((long)register0x00000020 + -0x198);
        lVar9 = *(long *)((long)register0x00000020 + -0x110);
        lVar16 = *(long *)((long)register0x00000020 + 8);
        lVar11 = *(long *)((long)register0x00000020 + -0x188);
        puVar10 = *(uint8 **)((long)register0x00000020 + -0x100);
      }
      if (bVar22 != false) {
        if (lVar9 == 1) {
          bVar22 = false;
        }
        else {
          *(uint8 **)((long)register0x00000020 + -0x1e0) = puVar10;
          *(long *)((long)register0x00000020 + -0x1d8) = lVar11;
          *(undefined ***)((long)register0x00000020 + -0x1d0) = &PTR_mime_isNotTokenChar_002b33f8;
          *(undefined1 *)((long)register0x00000020 + -0x1c8) = 1;
          *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f093a;
          s_02.len = lVar16;
          s_02.str = puVar10;
          strings_indexFunc(s_02,(func_int32__bool **)&PTR_mime_isNotTokenChar_002b33f8,bVar22);
          bVar22 = *(long *)((long)register0x00000020 + -0x1c0) < 0;
          uVar13 = *(undefined8 *)((long)register0x00000020 + -0x198);
          lVar16 = *(long *)((long)register0x00000020 + 8);
          puVar10 = *(uint8 **)((long)register0x00000020 + -0x100);
        }
        if (bVar22) {
          *(long *)((long)register0x00000020 + -0x1e0) = lVar16;
          *(undefined8 *)((long)register0x00000020 + -0x1d8) = uVar13;
          *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f0976;
          s_03.len = lVar16;
          s_03.str = puVar10;
          strings_ToLower(s_03);
          lVar11 = *(long *)((long)register0x00000020 + -0x1c8);
          uVar13 = *(undefined8 *)((long)register0x00000020 + -0x1d0);
          if (*(undefined1 **)((long)register0x00000020 + -0x88) == (undefined1 *)0x0) {
            *(undefined1 **)((long)register0x00000020 + -0x88) =
                 (undefined1 *)((long)register0x00000020 + -0x88);
          }
          else {
            e_16.data = (undefined1 *)((long)register0x00000020 + -0x88);
            if (*(undefined1 **)((long)register0x00000020 + -0x88) != e_16.data) goto LAB_006f2285;
          }
          rVar27.array = (undefined1 *)((long)register0x00000020 + -0x88);
          lVar9 = *(long *)((long)register0x00000020 + -0x78);
          uVar18 = lVar11 + lVar9;
          *(ulong *)((long)register0x00000020 + -0x110) = uVar18;
          uVar15 = *(ulong *)((long)register0x00000020 + -0x70);
          lVar16 = *(long *)((long)register0x00000020 + -0x80);
          if (uVar15 < uVar18) {
            *(long *)((long)register0x00000020 + -0x118) = lVar9;
            *(long *)((long)register0x00000020 + -0x168) = lVar11;
            *(undefined8 *)((long)register0x00000020 + -0xe0) = uVar13;
            *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225720;
            *(long *)((long)register0x00000020 + -0x1d8) = lVar16;
            *(long *)((long)register0x00000020 + -0x1d0) = lVar9;
            *(ulong *)((long)register0x00000020 + -0x1c8) = uVar15;
            *(ulong *)((long)register0x00000020 + -0x1c0) = uVar18;
            *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f0a1f;
            rVar27.len = uVar13;
            rVar27.cap = uVar15;
            rVar27 = runtime_growslice((runtime__type *)&DAT_00225720,rVar27,uVar18);
            rVar27.array = (undefined1 *)rVar27.len;
            lVar16 = *(long *)((long)register0x00000020 + -0x1b8);
            uVar15 = *(ulong *)((long)register0x00000020 + -0x1a8);
            lVar11 = *(long *)((long)register0x00000020 + -0x168);
            uVar13 = *(undefined8 *)((long)register0x00000020 + -0xe0);
            lVar9 = *(long *)((long)register0x00000020 + -0x118);
          }
          *(ulong *)((long)register0x00000020 + -0x118) = uVar15;
          *(long *)((long)register0x00000020 + -0x90) = lVar16;
          *(long *)((long)register0x00000020 + -0x1e0) = lVar9 + lVar16;
          *(undefined8 *)((long)register0x00000020 + -0x1d8) = uVar13;
          *(long *)((long)register0x00000020 + -0x1d0) = lVar11;
          *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f0a65;
          runtime_memmove();
          *(undefined8 *)((long)register0x00000020 + -0x78) =
               *(undefined8 *)((long)register0x00000020 + -0x110);
          *(undefined8 *)((long)register0x00000020 + -0x70) =
               *(undefined8 *)((long)register0x00000020 + -0x118);
          *(undefined8 *)((long)register0x00000020 + -0x80) =
               *(undefined8 *)((long)register0x00000020 + -0x90);
          if (*(undefined1 **)((long)register0x00000020 + -0x88) == (undefined1 *)0x0) {
            *(undefined1 **)((long)register0x00000020 + -0x88) =
                 (undefined1 *)((long)register0x00000020 + -0x88);
          }
          else {
            e_16.data = rVar27.array;
            if (*(undefined1 **)((long)register0x00000020 + -0x88) !=
                (undefined1 *)((long)register0x00000020 + -0x88)) goto LAB_006f2265;
          }
          prVar8 = *(runtime__type **)((long)register0x00000020 + -0x78);
          e_16.data = (undefined1 *)((long)&prVar8->size + 1);
          lVar11 = *(long *)((long)register0x00000020 + -0x80);
          rVar27.array = *(undefined1 **)((long)register0x00000020 + -0x70);
          if (rVar27.array < e_16.data) {
            *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225720;
            *(long *)((long)register0x00000020 + -0x1d8) = lVar11;
            *(runtime__type **)((long)register0x00000020 + -0x1d0) = prVar8;
            *(undefined1 **)((long)register0x00000020 + -0x1c8) = rVar27.array;
            *(undefined1 **)((long)register0x00000020 + -0x1c0) = e_16.data;
            *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f0b14;
            old_00.len = (int)&DAT_00225720;
            old_00.array = (void *)lVar11;
            old_00.cap = uVar15;
            runtime_growslice(prVar8,old_00,(int)rVar27.array);
            lVar11 = *(long *)((long)register0x00000020 + -0x1b8);
            prVar8 = *(runtime__type **)((long)register0x00000020 + -0x1b0);
            *(undefined8 *)((long)register0x00000020 + -0x70) =
                 *(undefined8 *)((long)register0x00000020 + -0x1a8);
            *(long *)((long)register0x00000020 + -0x80) = lVar11;
          }
          *(undefined1 **)((long)register0x00000020 + -0x78) =
               (undefined1 *)((long)&prVar8->size + 1);
          *(undefined1 *)((long)&prVar8->size + lVar11) = 0x2f;
          *(undefined8 *)((long)register0x00000020 + -0x1e0) =
               *(undefined8 *)((long)register0x00000020 + -0x100);
          *(uint8 **)((long)register0x00000020 + -0x1d8) =
               *(uint8 **)((long)register0x00000020 + -0x188);
          *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f0b5e;
          s_04.len = lVar11;
          s_04.str = *(uint8 **)((long)register0x00000020 + -0x188);
          strings_ToLower(s_04);
          lVar11 = *(long *)((long)register0x00000020 + -0x1c8);
          uVar13 = *(undefined8 *)((long)register0x00000020 + -0x1d0);
          if (*(undefined1 **)((long)register0x00000020 + -0x88) == (undefined1 *)0x0) {
            *(undefined1 **)((long)register0x00000020 + -0x88) =
                 (undefined1 *)((long)register0x00000020 + -0x88);
          }
          else if (*(undefined1 **)((long)register0x00000020 + -0x88) !=
                   (undefined1 *)((long)register0x00000020 + -0x88)) goto LAB_006f2245;
          lVar9 = *(long *)((long)register0x00000020 + -0x78);
          uVar18 = lVar11 + lVar9;
          *(ulong *)((long)register0x00000020 + -0x110) = uVar18;
          uVar15 = *(ulong *)((long)register0x00000020 + -0x70);
          lVar16 = *(long *)((long)register0x00000020 + -0x80);
          if (uVar15 < uVar18) {
            *(long *)((long)register0x00000020 + -0x118) = lVar9;
            *(long *)((long)register0x00000020 + -0x170) = lVar11;
            *(undefined8 *)((long)register0x00000020 + -0xc0) = uVar13;
            *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225720;
            *(long *)((long)register0x00000020 + -0x1d8) = lVar16;
            *(long *)((long)register0x00000020 + -0x1d0) = lVar9;
            *(ulong *)((long)register0x00000020 + -0x1c8) = uVar15;
            *(ulong *)((long)register0x00000020 + -0x1c0) = uVar18;
            *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f0bfe;
            old_01.len = uVar13;
            old_01.array = (void *)uVar18;
            old_01.cap = lVar16;
            rVar27 = runtime_growslice((runtime__type *)&DAT_00225720,old_01,uVar15);
            uVar18 = rVar27.len;
            lVar16 = *(long *)((long)register0x00000020 + -0x1b8);
            uVar15 = *(ulong *)((long)register0x00000020 + -0x1a8);
            lVar11 = *(long *)((long)register0x00000020 + -0x170);
            uVar13 = *(undefined8 *)((long)register0x00000020 + -0xc0);
            lVar9 = *(long *)((long)register0x00000020 + -0x118);
          }
          *(ulong *)((long)register0x00000020 + -0x118) = uVar15;
          *(long *)((long)register0x00000020 + -0x90) = lVar16;
          *(long *)((long)register0x00000020 + -0x1e0) = lVar9 + lVar16;
          *(undefined8 *)((long)register0x00000020 + -0x1d8) = uVar13;
          *(long *)((long)register0x00000020 + -0x1d0) = lVar11;
          *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f0c45;
          runtime_memmove();
          *(undefined8 *)((long)register0x00000020 + -0x78) =
               *(undefined8 *)((long)register0x00000020 + -0x110);
          *(undefined8 *)((long)register0x00000020 + -0x70) =
               *(undefined8 *)((long)register0x00000020 + -0x118);
          *(undefined8 *)((long)register0x00000020 + -0x80) =
               *(undefined8 *)((long)register0x00000020 + -0x90);
          goto LAB_006f0c75;
        }
      }
      *(undefined8 *)((long)register0x00000020 + 0x20) = 0;
      *(undefined8 *)((long)register0x00000020 + 0x28) = 0;
      sVar24.len = lVar16;
      sVar24.str = puVar10;
      return sVar24;
    }
    puVar10 = *(uint8 **)((long)register0x00000020 + 0x10);
    puVar6 = (uint8 *)0x0;
    if (puVar10 == (uint8 *)0x0) {
LAB_006f083f:
      *(undefined8 *)((long)register0x00000020 + 0x20) = 0;
      *(undefined8 *)((long)register0x00000020 + 0x28) = 0;
      sVar23.len = (int)e_16.data;
      sVar23.str = puVar6;
      return sVar23;
    }
    *(func_int32__bool ***)((long)register0x00000020 + -0x1e0) =
         *(func_int32__bool ***)((long)register0x00000020 + 8);
    *(uint8 **)((long)register0x00000020 + -0x1d8) = puVar10;
    *(undefined ***)((long)register0x00000020 + -0x1d0) = &PTR_mime_isNotTokenChar_002b33f8;
    *(undefined1 *)((long)register0x00000020 + -0x1c8) = 1;
    *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f06f7;
    s.len = (int)e_16.data;
    s.str = puVar10;
    puVar6 = (uint8 *)strings_indexFunc(s,*(func_int32__bool ***)((long)register0x00000020 + 8),
                                        SUB81(in_RDI,0));
    if (-1 < *(long *)((long)register0x00000020 + -0x1c0)) goto LAB_006f083f;
    *(undefined8 *)((long)register0x00000020 + -0x1e0) =
         *(undefined8 *)((long)register0x00000020 + 8);
    *(uint8 **)((long)register0x00000020 + -0x1d8) = *(uint8 **)((long)register0x00000020 + 0x10);
    *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f0725;
    s_00.len = (int)e_16.data;
    s_00.str = *(uint8 **)((long)register0x00000020 + 0x10);
    strings_ToLower(s_00);
    lVar11 = *(long *)((long)register0x00000020 + -0x1c8);
    uVar13 = *(undefined8 *)((long)register0x00000020 + -0x1d0);
    if (*(undefined1 **)((long)register0x00000020 + -0x88) == (undefined1 *)0x0) {
      *(undefined1 **)((long)register0x00000020 + -0x88) =
           (undefined1 *)((long)register0x00000020 + -0x88);
LAB_006f075f:
      lVar9 = *(long *)((long)register0x00000020 + -0x78);
      uVar18 = lVar9 + lVar11;
      *(ulong *)((long)register0x00000020 + -0x110) = uVar18;
      uVar15 = *(ulong *)((long)register0x00000020 + -0x70);
      lVar16 = *(long *)((long)register0x00000020 + -0x80);
      if (uVar15 < uVar18) {
        *(long *)((long)register0x00000020 + -0x180) = lVar11;
        *(undefined8 *)((long)register0x00000020 + -0xd0) = uVar13;
        *(long *)((long)register0x00000020 + -0x118) = lVar9;
        *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225720;
        *(long *)((long)register0x00000020 + -0x1d8) = lVar16;
        *(long *)((long)register0x00000020 + -0x1d0) = lVar9;
        *(ulong *)((long)register0x00000020 + -0x1c8) = uVar15;
        *(ulong *)((long)register0x00000020 + -0x1c0) = uVar18;
        *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f07c5;
        old.len = uVar13;
        old.array = (void *)uVar18;
        old.cap = lVar16;
        rVar27 = runtime_growslice((runtime__type *)&DAT_00225720,old,uVar15);
        uVar18 = rVar27.len;
        lVar16 = *(long *)((long)register0x00000020 + -0x1b8);
        uVar15 = *(ulong *)((long)register0x00000020 + -0x1a8);
        lVar11 = *(long *)((long)register0x00000020 + -0x180);
        uVar13 = *(undefined8 *)((long)register0x00000020 + -0xd0);
        lVar9 = *(long *)((long)register0x00000020 + -0x118);
      }
      *(ulong *)((long)register0x00000020 + -0x118) = uVar15;
      *(long *)((long)register0x00000020 + -0x90) = lVar16;
      *(long *)((long)register0x00000020 + -0x1e0) = lVar9 + lVar16;
      *(undefined8 *)((long)register0x00000020 + -0x1d8) = uVar13;
      *(long *)((long)register0x00000020 + -0x1d0) = lVar11;
      *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f080a;
      runtime_memmove();
      *(undefined8 *)((long)register0x00000020 + -0x78) =
           *(undefined8 *)((long)register0x00000020 + -0x110);
      *(undefined8 *)((long)register0x00000020 + -0x70) =
           *(undefined8 *)((long)register0x00000020 + -0x118);
      *(undefined8 *)((long)register0x00000020 + -0x80) =
           *(undefined8 *)((long)register0x00000020 + -0x90);
LAB_006f0c75:
      if (*(int **)((long)register0x00000020 + 0x18) == (int *)0x0) {
        iVar14 = 0;
      }
      else {
        iVar14 = **(int **)((long)register0x00000020 + 0x18);
      }
      *(int *)((long)register0x00000020 + -0x148) = iVar14;
      *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225520;
      *(undefined8 *)((long)register0x00000020 + -0x1d8) = 0;
      *(int *)((long)register0x00000020 + -0x1d0) = iVar14;
      *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f0cb2;
      runtime_makeslice((runtime__type *)&DAT_00225520,uVar18,iVar14);
      *(undefined8 *)((long)register0x00000020 + -0x98) =
           *(undefined8 *)((long)register0x00000020 + -0x1c8);
                    /* Unresolved local var: string a@[???] */
      e_16.data = (undefined1 *)((long)register0x00000020 + -0x88);
      *(undefined1 **)((long)register0x00000020 + -0x1f0) = unaff_RBP;
      *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f0cef;
      prVar7 = (runtime_maptype *)FUN_0051a18b();
      *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00236500;
      *(undefined8 *)((long)register0x00000020 + -0x1d8) =
           *(undefined8 *)((long)register0x00000020 + 0x18);
      *(runtime_hmap **)((long)register0x00000020 + -0x1d0) =
           (runtime_hmap *)((long)register0x00000020 + -0x68);
      *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f0d1d;
      runtime_mapiterinit(prVar7,(runtime_hmap *)((long)register0x00000020 + -0x68),
                          (runtime_hiter *)&DAT_00236500);
      prVar8 = (runtime__type *)0x0;
      rVar27.array = *(undefined1 **)((long)register0x00000020 + -0x148);
      lVar11 = *(long *)((long)register0x00000020 + -0x98);
      while( true ) {
        *(runtime__type **)((long)register0x00000020 + -0x150) = prVar8;
        piVar4 = *(int **)((long)register0x00000020 + -0x68);
        if (piVar4 == (int *)0x0) break;
        iVar14 = *piVar4;
        iVar19 = piVar4[1];
        old_05.array = (undefined1 *)((long)&prVar8->size + 1);
        if (rVar27.array < old_05.array) {
          *(int *)((long)register0x00000020 + -0xa8) = iVar14;
          *(int *)((long)register0x00000020 + -0x138) = iVar19;
          *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225520;
          *(long *)((long)register0x00000020 + -0x1d8) = lVar11;
          *(runtime__type **)((long)register0x00000020 + -0x1d0) = prVar8;
          *(undefined1 **)((long)register0x00000020 + -0x1c8) = rVar27.array;
          *(undefined1 **)((long)register0x00000020 + -0x1c0) = old_05.array;
          *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f0dd9;
          old_02.len = (int)rVar27.array;
          old_02.array = &DAT_00225520;
          old_02.cap = (int)e_16.data;
          runtime_growslice(prVar8,old_02,iVar14);
          lVar11 = *(long *)((long)register0x00000020 + -0x1b8);
          rVar27.array = *(undefined1 **)((long)register0x00000020 + -0x1a8);
          old_05.array = (undefined1 *)(*(long *)((long)register0x00000020 + -0x1b0) + 1);
          prVar8 = *(runtime__type **)((long)register0x00000020 + -0x150);
          iVar19 = *(int *)((long)register0x00000020 + -0x138);
          iVar14 = *(int *)((long)register0x00000020 + -0xa8);
        }
        *(long *)((long)register0x00000020 + -0xb8) = lVar11;
        *(undefined1 **)((long)register0x00000020 + -0x150) = old_05.array;
        *(undefined1 **)((long)register0x00000020 + -0x148) = rVar27.array;
        lVar9 = (long)prVar8 * 0x10;
        *(int *)(lVar11 + 8 + lVar9) = iVar19;
        e_16.data = (undefined1 *)(lVar11 + lVar9);
        if (runtime_writeBarrier._0_4_ == 0) {
          *(int *)(lVar11 + lVar9) = iVar14;
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f0e45;
          runtime_gcWriteBarrierSI();
        }
        *(runtime_hiter **)((long)register0x00000020 + -0x1e0) =
             (runtime_hiter *)((long)register0x00000020 + -0x68);
        *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f0d5f;
        runtime_mapiternext((runtime_hiter *)((long)register0x00000020 + -0x68));
        prVar8 = *(runtime__type **)((long)register0x00000020 + -0x150);
        rVar27.array = *(undefined1 **)((long)register0x00000020 + -0x148);
        lVar11 = *(long *)((long)register0x00000020 + -0xb8);
      }
      *(long *)((long)register0x00000020 + -0xa0) = lVar11;
      *(long *)((long)register0x00000020 + -0x1e0) = lVar11;
      *(runtime__type **)((long)register0x00000020 + -0x1d8) = prVar8;
      *(undefined1 **)((long)register0x00000020 + -0x1d0) = rVar27.array;
      *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f0e65;
      val.len = 0;
      val.array = (uint8 *)prVar8;
      val.cap = (int)rVar27.array;
      runtime_convTslice(val);
      *(undefined1 **)((long)register0x00000020 + -0x1e0) = go_itab_sort_StringSlice_sort_Interface;
      *(ulong *)((long)register0x00000020 + -0x1d8) = *(ulong *)((long)register0x00000020 + -0x1c8);
      *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f0e7f;
      data.data = (void *)0x0;
      data.tab = (runtime_itab *)*(ulong *)((long)register0x00000020 + -0x1c8);
      sort_Sort(data);
                    /* Unresolved local var: string attribute@[???] */
      e_16.data = (undefined1 *)0x0;
      if (*(long *)((long)register0x00000020 + -0x150) < 1) {
LAB_006f0e98:
        *(uint8 **)((long)register0x00000020 + 0x20) = *(uint8 **)((long)register0x00000020 + -0x80)
        ;
        *(undefined8 *)((long)register0x00000020 + 0x28) =
             *(undefined8 *)((long)register0x00000020 + -0x78);
        sVar25.len = (int)e_16.data;
        sVar25.str = *(uint8 **)((long)register0x00000020 + -0x80);
        return sVar25;
      }
      puVar10 = *(uint8 **)((long)register0x00000020 + -0xa0);
      lVar11 = 0;
      do {
        *(long *)((long)register0x00000020 + -0x110) = lVar11;
        *(uint8 **)((long)register0x00000020 + -0xa0) = puVar10;
        prVar7 = *(runtime_maptype **)(puVar10 + 8);
        *(runtime_maptype **)((long)register0x00000020 + -0x140) = prVar7;
        h = *(runtime_hmap **)puVar10;
        *(runtime_hmap **)((long)register0x00000020 + -0xb0) = h;
                    /* Unresolved local var: int offset@[???]
                       Unresolved local var: bool needEnc@[???]
                       Unresolved local var: string value@[???] */
        *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00236500;
        *(int *)((long)register0x00000020 + -0x1d8) = *(int *)((long)register0x00000020 + 0x18);
        *(runtime_hmap **)((long)register0x00000020 + -0x1d0) = h;
        *(runtime_maptype **)((long)register0x00000020 + -0x1c8) = prVar7;
        *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f0f28;
        ky.len = *(int *)((long)register0x00000020 + 0x18);
        ky.str = puVar10;
        runtime_mapaccess1_faststr(prVar7,h,ky);
        iVar14 = (*(int **)((long)register0x00000020 + -0x1c0))[1];
        puVar10 = (uint8 *)**(int **)((long)register0x00000020 + -0x1c0);
        if (*(undefined1 **)((long)register0x00000020 + -0x88) == (undefined1 *)0x0) {
          *(undefined1 **)((long)register0x00000020 + -0x88) =
               (undefined1 *)((long)register0x00000020 + -0x88);
        }
        else if (*(undefined1 **)((long)register0x00000020 + -0x88) !=
                 (undefined1 *)((long)register0x00000020 + -0x88)) goto LAB_006f2225;
        old_03.array = (undefined1 *)((long)register0x00000020 + -0x88);
        *(int *)((long)register0x00000020 + -400) = iVar14;
        *(uint8 **)((long)register0x00000020 + -0x108) = puVar10;
        lVar11 = *(long *)((long)register0x00000020 + -0x78);
        uVar18 = lVar11 + 1;
        lVar9 = *(long *)((long)register0x00000020 + -0x80);
        if (*(ulong *)((long)register0x00000020 + -0x70) < uVar18) {
          *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225720;
          *(long *)((long)register0x00000020 + -0x1d8) = lVar9;
          *(long *)((long)register0x00000020 + -0x1d0) = lVar11;
          *(ulong *)((long)register0x00000020 + -0x1c8) =
               *(ulong *)((long)register0x00000020 + -0x70);
          *(ulong *)((long)register0x00000020 + -0x1c0) = uVar18;
          *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f0fc5;
          old_03.len = iVar14;
          old_03.cap = lVar9;
          runtime_growslice((runtime__type *)&DAT_00225720,old_03,uVar18);
          lVar9 = *(long *)((long)register0x00000020 + -0x1b8);
          lVar11 = *(long *)((long)register0x00000020 + -0x1b0);
          *(undefined8 *)((long)register0x00000020 + -0x70) =
               *(undefined8 *)((long)register0x00000020 + -0x1a8);
          *(long *)((long)register0x00000020 + -0x80) = lVar9;
          puVar10 = *(uint8 **)((long)register0x00000020 + -0x108);
          iVar14 = *(int *)((long)register0x00000020 + -400);
        }
        old_04.array = (undefined1 *)((long)register0x00000020 + -0x88);
        *(long *)((long)register0x00000020 + -0x78) = lVar11 + 1;
        *(undefined1 *)(lVar9 + lVar11) = 0x3b;
        if (*(undefined1 **)((long)register0x00000020 + -0x88) != (undefined1 *)0x0) {
          if (*(undefined1 **)((long)register0x00000020 + -0x88) == old_04.array) goto LAB_006f102d;
LAB_006f2205:
          e_14.data = (undefined1 *)((long)register0x00000020 + -0x88);
          *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225520;
          *(undefined8 **)((long)register0x00000020 + -0x1d8) = &net_http__stmp_78;
          *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f2225;
          e_14._type = (runtime__type *)&net_http__stmp_78;
          runtime_gopanic(e_14);
LAB_006f2225:
          e_15.data = (undefined1 *)((long)register0x00000020 + -0x88);
          *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225520;
          *(undefined8 **)((long)register0x00000020 + -0x1d8) = &net_http__stmp_78;
          *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f2245;
          e_15._type = (runtime__type *)&net_http__stmp_78;
          runtime_gopanic(e_15);
LAB_006f2245:
          e_16.data = (undefined1 *)((long)register0x00000020 + -0x88);
          *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225520;
          *(undefined8 **)((long)register0x00000020 + -0x1d8) = &net_http__stmp_78;
          *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f2265;
          e_16._type = (runtime__type *)&net_http__stmp_78;
          runtime_gopanic(e_16);
LAB_006f2265:
          *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225520;
          *(undefined8 **)((long)register0x00000020 + -0x1d8) = &net_http__stmp_78;
          *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f2285;
          e_17.data = e_16.data;
          e_17._type = (runtime__type *)&net_http__stmp_78;
          runtime_gopanic(e_17);
LAB_006f2285:
          *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225520;
          *(undefined8 **)((long)register0x00000020 + -0x1d8) = &net_http__stmp_78;
          *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f22a5;
          e_18.data = e_16.data;
          e_18._type = (runtime__type *)&net_http__stmp_78;
          runtime_gopanic(e_18);
LAB_006f22a5:
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f22ad;
          runtime_panicSliceB();
        }
        *(undefined1 **)((long)register0x00000020 + -0x88) = old_04.array;
LAB_006f102d:
        lVar11 = *(long *)((long)register0x00000020 + -0x78);
        uVar18 = lVar11 + 1;
        lVar9 = *(long *)((long)register0x00000020 + -0x80);
        if (*(ulong *)((long)register0x00000020 + -0x70) < uVar18) {
          *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225720;
          *(long *)((long)register0x00000020 + -0x1d8) = lVar9;
          *(long *)((long)register0x00000020 + -0x1d0) = lVar11;
          *(ulong *)((long)register0x00000020 + -0x1c8) =
               *(ulong *)((long)register0x00000020 + -0x70);
          *(ulong *)((long)register0x00000020 + -0x1c0) = uVar18;
          *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f1072;
          old_04.len = iVar14;
          old_04.cap = lVar9;
          runtime_growslice((runtime__type *)&DAT_00225720,old_04,uVar18);
          lVar9 = *(long *)((long)register0x00000020 + -0x1b8);
          lVar11 = *(long *)((long)register0x00000020 + -0x1b0);
          *(undefined8 *)((long)register0x00000020 + -0x70) =
               *(undefined8 *)((long)register0x00000020 + -0x1a8);
          *(long *)((long)register0x00000020 + -0x80) = lVar9;
          puVar10 = *(uint8 **)((long)register0x00000020 + -0x108);
        }
        s_05.len = (undefined1 *)((long)register0x00000020 + -0x88);
        *(long *)((long)register0x00000020 + -0x78) = lVar11 + 1;
        *(undefined1 *)(lVar9 + lVar11) = 0x20;
        if (*(long *)((long)register0x00000020 + -0x140) == 0) {
LAB_006f16ce:
          *(undefined8 *)((long)register0x00000020 + 0x20) = 0;
          *(undefined8 *)((long)register0x00000020 + 0x28) = 0;
          sVar26.len = (int)s_05.len;
          sVar26.str = puVar10;
          return sVar26;
        }
        *(uint8 **)((long)register0x00000020 + -0x1e0) =
             *(uint8 **)((long)register0x00000020 + -0xb0);
        *(long *)((long)register0x00000020 + -0x1d8) = *(long *)((long)register0x00000020 + -0x140);
        *(undefined ***)((long)register0x00000020 + -0x1d0) = &PTR_mime_isNotTokenChar_002b33f8;
        *(undefined1 *)((long)register0x00000020 + -0x1c8) = 1;
        *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f10f1;
        s_05.str = *(uint8 **)((long)register0x00000020 + -0xb0);
        puVar10 = (uint8 *)strings_indexFunc(s_05,(func_int32__bool **)
                                                  &PTR_mime_isNotTokenChar_002b33f8,SUB81(lVar9,0));
        if (-1 < *(long *)((long)register0x00000020 + -0x1c0)) goto LAB_006f16ce;
        *(undefined8 *)((long)register0x00000020 + -0x1e0) =
             *(undefined8 *)((long)register0x00000020 + -0xb0);
        *(uint8 **)((long)register0x00000020 + -0x1d8) =
             *(uint8 **)((long)register0x00000020 + -0x140);
        *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f111b;
        s_06.len = (int)s_05.len;
        s_06.str = *(uint8 **)((long)register0x00000020 + -0x140);
        strings_ToLower(s_06);
        lVar11 = *(long *)((long)register0x00000020 + -0x1c8);
        uVar13 = *(undefined8 *)((long)register0x00000020 + -0x1d0);
        if (*(undefined1 **)((long)register0x00000020 + -0x88) != (undefined1 *)0x0) {
          if (*(undefined1 **)((long)register0x00000020 + -0x88) ==
              (undefined1 *)((long)register0x00000020 + -0x88)) goto LAB_006f1162;
LAB_006f21e5:
          e_13.data = (undefined1 *)((long)register0x00000020 + -0x88);
          *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225520;
          *(undefined8 **)((long)register0x00000020 + -0x1d8) = &net_http__stmp_78;
          *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f2205;
          e_13._type = (runtime__type *)&net_http__stmp_78;
          runtime_gopanic(e_13);
          goto LAB_006f2205;
        }
        *(undefined1 **)((long)register0x00000020 + -0x88) =
             (undefined1 *)((long)register0x00000020 + -0x88);
LAB_006f1162:
        old_05.array = (undefined1 *)((long)register0x00000020 + -0x88);
        lVar9 = *(long *)((long)register0x00000020 + -0x78);
        uVar18 = lVar9 + lVar11;
        *(ulong *)((long)register0x00000020 + -0x118) = uVar18;
        uVar15 = *(ulong *)((long)register0x00000020 + -0x70);
        lVar16 = *(long *)((long)register0x00000020 + -0x80);
        if (uVar15 < uVar18) {
          *(long *)((long)register0x00000020 + -0x178) = lVar11;
          *(undefined8 *)((long)register0x00000020 + -0xf0) = uVar13;
          *(long *)((long)register0x00000020 + -0x120) = lVar9;
          *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225720;
          *(long *)((long)register0x00000020 + -0x1d8) = lVar16;
          *(long *)((long)register0x00000020 + -0x1d0) = lVar9;
          *(ulong *)((long)register0x00000020 + -0x1c8) = uVar15;
          *(ulong *)((long)register0x00000020 + -0x1c0) = uVar18;
          *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f11c5;
          old_05.len = uVar13;
          old_05.cap = uVar15;
          rVar27 = runtime_growslice((runtime__type *)&DAT_00225720,old_05,uVar18);
          old_05.array = (undefined1 *)rVar27.len;
          lVar16 = *(long *)((long)register0x00000020 + -0x1b8);
          uVar15 = *(ulong *)((long)register0x00000020 + -0x1a8);
          lVar11 = *(long *)((long)register0x00000020 + -0x178);
          uVar13 = *(undefined8 *)((long)register0x00000020 + -0xf0);
          lVar9 = *(long *)((long)register0x00000020 + -0x120);
        }
        *(ulong *)((long)register0x00000020 + -0x120) = uVar15;
        *(long *)((long)register0x00000020 + -0x90) = lVar16;
        *(long *)((long)register0x00000020 + -0x1e0) = lVar9 + lVar16;
        *(undefined8 *)((long)register0x00000020 + -0x1d8) = uVar13;
        *(long *)((long)register0x00000020 + -0x1d0) = lVar11;
        *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f120a;
        runtime_memmove();
        *(undefined8 *)((long)register0x00000020 + -0x78) =
             *(undefined8 *)((long)register0x00000020 + -0x118);
        *(undefined8 *)((long)register0x00000020 + -0x70) =
             *(undefined8 *)((long)register0x00000020 + -0x120);
        *(undefined8 *)((long)register0x00000020 + -0x80) =
             *(undefined8 *)((long)register0x00000020 + -0x90);
        *(uint8 **)((long)register0x00000020 + -0x1e0) =
             *(uint8 **)((long)register0x00000020 + -0x108);
        iVar14 = *(int *)((long)register0x00000020 + -400);
        *(int *)((long)register0x00000020 + -0x1d8) = iVar14;
        *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f1255;
        s_07.len = (int)old_05.array;
        s_07.str = *(uint8 **)((long)register0x00000020 + -0x108);
        mime_needsEncoding(s_07);
        cVar5 = *(char *)((long)register0x00000020 + -0x1d0);
        *(char *)((long)register0x00000020 + -0x19c) = cVar5;
        if (cVar5 != '\0') {
          if (*(undefined1 **)((long)register0x00000020 + -0x88) == (undefined1 *)0x0) {
            *(undefined1 **)((long)register0x00000020 + -0x88) =
                 (undefined1 *)((long)register0x00000020 + -0x88);
LAB_006f12a2:
            old_06.array = (undefined1 *)((long)register0x00000020 + -0x88);
            lVar11 = *(long *)((long)register0x00000020 + -0x78);
            uVar18 = lVar11 + 1;
            lVar9 = *(long *)((long)register0x00000020 + -0x80);
            if (*(ulong *)((long)register0x00000020 + -0x70) < uVar18) {
              *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225720;
              *(long *)((long)register0x00000020 + -0x1d8) = lVar9;
              *(long *)((long)register0x00000020 + -0x1d0) = lVar11;
              *(ulong *)((long)register0x00000020 + -0x1c8) =
                   *(ulong *)((long)register0x00000020 + -0x70);
              *(ulong *)((long)register0x00000020 + -0x1c0) = uVar18;
              *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f12e9;
              old_06.len = iVar14;
              old_06.cap = lVar9;
              rVar27 = runtime_growslice((runtime__type *)&DAT_00225720,old_06,uVar18);
              iVar14 = rVar27.cap;
              lVar9 = *(long *)((long)register0x00000020 + -0x1b8);
              lVar11 = *(long *)((long)register0x00000020 + -0x1b0);
              *(undefined8 *)((long)register0x00000020 + -0x70) =
                   *(undefined8 *)((long)register0x00000020 + -0x1a8);
              *(long *)((long)register0x00000020 + -0x80) = lVar9;
              cVar5 = *(char *)((long)register0x00000020 + -0x19c);
            }
            *(long *)((long)register0x00000020 + -0x78) = lVar11 + 1;
            *(undefined1 *)(lVar9 + lVar11) = 0x2a;
            goto code_r0x006f1330;
          }
          if (*(undefined1 **)((long)register0x00000020 + -0x88) ==
              (undefined1 *)((long)register0x00000020 + -0x88)) goto LAB_006f12a2;
LAB_006f21c8:
          e_12.data = (undefined1 *)((long)register0x00000020 + -0x88);
          *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225520;
          *(undefined8 **)((long)register0x00000020 + -0x1d8) = &net_http__stmp_78;
          *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f21e5;
          e_12._type = (runtime__type *)&net_http__stmp_78;
          runtime_gopanic(e_12);
          goto LAB_006f21e5;
        }
code_r0x006f1330:
        old_07.array = (undefined1 *)((long)register0x00000020 + -0x88);
        if (*(undefined1 **)((long)register0x00000020 + -0x88) != (undefined1 *)0x0) {
          if (*(undefined1 **)((long)register0x00000020 + -0x88) == old_07.array) goto LAB_006f1352;
LAB_006f21ac:
          e_11.data = (undefined1 *)((long)register0x00000020 + -0x88);
          *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225520;
          *(undefined8 **)((long)register0x00000020 + -0x1d8) = &net_http__stmp_78;
          *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f21c8;
          e_11._type = (runtime__type *)&net_http__stmp_78;
          runtime_gopanic(e_11);
          goto LAB_006f21c8;
        }
        *(undefined1 **)((long)register0x00000020 + -0x88) = old_07.array;
LAB_006f1352:
        lVar11 = *(long *)((long)register0x00000020 + -0x78);
        uVar18 = lVar11 + 1;
        lVar9 = *(long *)((long)register0x00000020 + -0x80);
        if (*(ulong *)((long)register0x00000020 + -0x70) < uVar18) {
          *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225720;
          *(long *)((long)register0x00000020 + -0x1d8) = lVar9;
          *(long *)((long)register0x00000020 + -0x1d0) = lVar11;
          *(ulong *)((long)register0x00000020 + -0x1c8) =
               *(ulong *)((long)register0x00000020 + -0x70);
          *(ulong *)((long)register0x00000020 + -0x1c0) = uVar18;
          *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f1397;
          old_07.len = iVar14;
          old_07.cap = lVar9;
          rVar27 = runtime_growslice((runtime__type *)&DAT_00225720,old_07,uVar18);
          iVar14 = rVar27.cap;
          lVar9 = *(long *)((long)register0x00000020 + -0x1b8);
          lVar11 = *(long *)((long)register0x00000020 + -0x1b0);
          *(undefined8 *)((long)register0x00000020 + -0x70) =
               *(undefined8 *)((long)register0x00000020 + -0x1a8);
          *(long *)((long)register0x00000020 + -0x80) = lVar9;
          cVar5 = *(char *)((long)register0x00000020 + -0x19c);
        }
        old_08.array = (undefined1 *)((long)register0x00000020 + -0x88);
        uVar18 = lVar11 + 1;
        *(ulong *)((long)register0x00000020 + -0x78) = uVar18;
        *(undefined1 *)(lVar9 + lVar11) = 0x3d;
        if (cVar5 == '\0') {
          ppfVar2 = *(func_int32__bool ***)((long)register0x00000020 + -400);
          if (ppfVar2 == (func_int32__bool **)0x0) {
            bVar22 = false;
            uVar15 = 0;
          }
          else {
            *(uint8 **)((long)register0x00000020 + -0x1e0) =
                 *(uint8 **)((long)register0x00000020 + -0x108);
            *(func_int32__bool ***)((long)register0x00000020 + -0x1d8) = ppfVar2;
            *(undefined ***)((long)register0x00000020 + -0x1d0) = &PTR_mime_isNotTokenChar_002b33f8;
            *(undefined1 *)((long)register0x00000020 + -0x1c8) = 1;
            *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f14e6;
            s_08.len = (int)old_08.array;
            s_08.str = *(uint8 **)((long)register0x00000020 + -0x108);
            strings_indexFunc(s_08,ppfVar2,SUB81(lVar9,0));
            bVar22 = *(long *)((long)register0x00000020 + -0x1c0) < 0;
                    /* Unresolved local var: int index@[???] */
            uVar15 = *(ulong *)((long)register0x00000020 + -400);
          }
          old_09.array = (undefined1 *)((long)register0x00000020 + -0x88);
          if (bVar22) {
            if (*(undefined1 **)((long)register0x00000020 + -0x88) == (undefined1 *)0x0) {
              *(undefined1 **)((long)register0x00000020 + -0x88) = old_09.array;
            }
            else if (*(undefined1 **)((long)register0x00000020 + -0x88) != old_09.array) {
              *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225520;
              *(undefined8 **)((long)register0x00000020 + -0x1d8) = &net_http__stmp_78;
              *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f1707;
              e.data = old_09.array;
              e._type = (runtime__type *)&net_http__stmp_78;
              runtime_gopanic(e);
              uVar12 = extraout_RAX;
              lVar11 = extraout_RDX;
              goto LAB_006f1707;
            }
            prVar8 = *(runtime__type **)((long)register0x00000020 + -0x78);
            rVar27.array = (undefined1 *)((long)&prVar8->size + uVar15);
            *(undefined1 **)((long)register0x00000020 + -0x118) = rVar27.array;
            e_16.data = *(undefined1 **)((long)register0x00000020 + -0x70);
            iVar14 = *(int *)((long)register0x00000020 + -0x80);
            if (e_16.data < rVar27.array) {
              *(runtime__type **)((long)register0x00000020 + -0x120) = prVar8;
              *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225720;
              *(int *)((long)register0x00000020 + -0x1d8) = iVar14;
              *(runtime__type **)((long)register0x00000020 + -0x1d0) = prVar8;
              *(undefined1 **)((long)register0x00000020 + -0x1c8) = e_16.data;
              *(undefined1 **)((long)register0x00000020 + -0x1c0) = rVar27.array;
              *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f1635;
              old_10.len = (int)&DAT_00225720;
              old_10.array = e_16.data;
              old_10.cap = lVar9;
              runtime_growslice(prVar8,old_10,iVar14);
              iVar14 = *(long *)((long)register0x00000020 + -0x1b8);
              e_16.data = *(undefined1 **)((long)register0x00000020 + -0x1a8);
              prVar8 = *(runtime__type **)((long)register0x00000020 + -0x120);
              uVar15 = *(ulong *)((long)register0x00000020 + -400);
            }
            *(undefined1 **)((long)register0x00000020 + -0x120) = e_16.data;
            *(int *)((long)register0x00000020 + -0x90) = iVar14;
            *(long *)((long)register0x00000020 + -0x1e0) = (long)&prVar8->size + iVar14;
            *(undefined8 *)((long)register0x00000020 + -0x1d8) =
                 *(undefined8 *)((long)register0x00000020 + -0x108);
            *(ulong *)((long)register0x00000020 + -0x1d0) = uVar15;
            *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f167a;
            runtime_memmove();
            *(undefined8 *)((long)register0x00000020 + -0x78) =
                 *(undefined8 *)((long)register0x00000020 + -0x118);
            *(undefined8 *)((long)register0x00000020 + -0x70) =
                 *(undefined8 *)((long)register0x00000020 + -0x120);
            *(undefined8 *)((long)register0x00000020 + -0x80) =
                 *(undefined8 *)((long)register0x00000020 + -0x90);
          }
          else {
            if (*(undefined1 **)((long)register0x00000020 + -0x88) == (undefined1 *)0x0) {
              *(undefined1 **)((long)register0x00000020 + -0x88) = old_09.array;
            }
            else if (*(undefined1 **)((long)register0x00000020 + -0x88) != old_09.array) {
              *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225520;
              *(undefined8 **)((long)register0x00000020 + -0x1d8) = &net_http__stmp_78;
              *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f1b8c;
              e_04.data = old_09.array;
              e_04._type = (runtime__type *)&net_http__stmp_78;
              runtime_gopanic(e_04);
              uVar12 = extraout_RAX_00;
              lVar11 = extraout_RDX_00;
              goto LAB_006f1b8c;
            }
            lVar11 = *(long *)((long)register0x00000020 + -0x78);
            uVar18 = lVar11 + 1;
            lVar9 = *(long *)((long)register0x00000020 + -0x80);
            if (*(ulong *)((long)register0x00000020 + -0x70) < uVar18) {
              *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225720;
              *(long *)((long)register0x00000020 + -0x1d8) = lVar9;
              *(long *)((long)register0x00000020 + -0x1d0) = lVar11;
              *(ulong *)((long)register0x00000020 + -0x1c8) =
                   *(ulong *)((long)register0x00000020 + -0x70);
              *(ulong *)((long)register0x00000020 + -0x1c0) = uVar18;
              *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f1572;
              old_09.len = uVar15;
              old_09.cap = lVar9;
              runtime_growslice((runtime__type *)&DAT_00225720,old_09,uVar18);
              lVar9 = *(long *)((long)register0x00000020 + -0x1b8);
              lVar11 = *(long *)((long)register0x00000020 + -0x1b0);
              *(undefined8 *)((long)register0x00000020 + -0x70) =
                   *(undefined8 *)((long)register0x00000020 + -0x1a8);
              *(long *)((long)register0x00000020 + -0x80) = lVar9;
              uVar15 = *(ulong *)((long)register0x00000020 + -400);
            }
            *(long *)((long)register0x00000020 + -0x78) = lVar11 + 1;
            *(undefined1 *)(lVar9 + lVar11) = 0x22;
            lVar11 = *(long *)((long)register0x00000020 + -0x108);
            uVar18 = 0;
            for (uVar12 = 0; old_11.array = (undefined1 *)((long)register0x00000020 + -0x88),
                (long)uVar12 < (long)uVar15; uVar12 = uVar12 + 1) {
                    /* Unresolved local var: uint8 character@[???] */
              if ((*(char *)(uVar12 + lVar11) == '\"') || (*(char *)(uVar12 + lVar11) == '\\')) {
                if (uVar12 < uVar18) goto LAB_006f1b65;
                lVar9 = uVar12 - uVar18;
                lVar11 = (uVar18 & -lVar9 >> 0x3f) + lVar11;
                if (*(undefined1 **)((long)register0x00000020 + -0x88) != (undefined1 *)0x0) {
                  if (*(undefined1 **)((long)register0x00000020 + -0x88) == old_11.array)
                  goto LAB_006f1766;
LAB_006f1b49:
                  *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225520;
                  *(undefined8 **)((long)register0x00000020 + -0x1d8) = &net_http__stmp_78;
                  *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f1b65;
                  e_03.data = old_11.array;
                  e_03._type = (runtime__type *)&net_http__stmp_78;
                  runtime_gopanic(e_03);
LAB_006f1b65:
                    /* WARNING: Subroutine does not return */
                  *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f1b70;
                  runtime_panicSliceB();
                }
                *(undefined1 **)((long)register0x00000020 + -0x88) = old_11.array;
LAB_006f1766:
                *(ulong *)((long)register0x00000020 + -0x118) = uVar12;
                lVar20 = *(long *)((long)register0x00000020 + -0x78);
                uVar18 = lVar9 + lVar20;
                *(ulong *)((long)register0x00000020 + -0x120) = uVar18;
                uVar21 = *(ulong *)((long)register0x00000020 + -0x70);
                lVar16 = *(long *)((long)register0x00000020 + -0x80);
                if (uVar21 < uVar18) {
                  *(long *)((long)register0x00000020 + -0x128) = lVar20;
                  *(long *)((long)register0x00000020 + -0x130) = lVar9;
                  *(long *)((long)register0x00000020 + -0xd8) = lVar11;
                  *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225720;
                  *(long *)((long)register0x00000020 + -0x1d8) = lVar16;
                  *(long *)((long)register0x00000020 + -0x1d0) = lVar20;
                  *(ulong *)((long)register0x00000020 + -0x1c8) = uVar21;
                  *(ulong *)((long)register0x00000020 + -0x1c0) = uVar18;
                  *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f17d3;
                  old_11.len = uVar15;
                  old_11.cap = uVar12;
                  rVar27 = runtime_growslice((runtime__type *)&DAT_00225720,old_11,lVar20);
                  old_11.array = (undefined1 *)rVar27.len;
                  lVar16 = *(long *)((long)register0x00000020 + -0x1b8);
                  uVar21 = *(ulong *)((long)register0x00000020 + -0x1a8);
                  lVar11 = *(long *)((long)register0x00000020 + -0xd8);
                  lVar20 = *(long *)((long)register0x00000020 + -0x128);
                  lVar9 = *(long *)((long)register0x00000020 + -0x130);
                }
                *(ulong *)((long)register0x00000020 + -0x128) = uVar21;
                *(long *)((long)register0x00000020 + -0x90) = lVar16;
                lVar16 = lVar16 + lVar20;
                *(long *)((long)register0x00000020 + -0x1e0) = lVar16;
                *(long *)((long)register0x00000020 + -0x1d8) = lVar11;
                *(long *)((long)register0x00000020 + -0x1d0) = lVar9;
                *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f181c;
                runtime_memmove();
                *(undefined8 *)((long)register0x00000020 + -0x78) =
                     *(undefined8 *)((long)register0x00000020 + -0x120);
                *(undefined8 *)((long)register0x00000020 + -0x70) =
                     *(undefined8 *)((long)register0x00000020 + -0x128);
                *(undefined8 *)((long)register0x00000020 + -0x80) =
                     *(undefined8 *)((long)register0x00000020 + -0x90);
                if (*(undefined1 **)((long)register0x00000020 + -0x88) == (undefined1 *)0x0) {
                  *(undefined1 **)((long)register0x00000020 + -0x88) =
                       (undefined1 *)((long)register0x00000020 + -0x88);
                }
                else if (*(undefined1 **)((long)register0x00000020 + -0x88) !=
                         (undefined1 *)((long)register0x00000020 + -0x88)) {
                  *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225520;
                  *(undefined8 **)((long)register0x00000020 + -0x1d8) = &net_http__stmp_78;
                  *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f1b49;
                  e_02.data = old_11.array;
                  e_02._type = (runtime__type *)&net_http__stmp_78;
                  runtime_gopanic(e_02);
                  goto LAB_006f1b49;
                }
                lVar11 = *(long *)((long)register0x00000020 + -0x78);
                uVar18 = lVar11 + 1;
                lVar9 = *(long *)((long)register0x00000020 + -0x80);
                if (*(ulong *)((long)register0x00000020 + -0x70) < uVar18) {
                  *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225720;
                  *(long *)((long)register0x00000020 + -0x1d8) = lVar9;
                  *(long *)((long)register0x00000020 + -0x1d0) = lVar11;
                  *(ulong *)((long)register0x00000020 + -0x1c8) =
                       *(ulong *)((long)register0x00000020 + -0x70);
                  *(ulong *)((long)register0x00000020 + -0x1c0) = uVar18;
                  *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f18c5;
                  old_12.len = lVar16;
                  old_12.array = (void *)lVar11;
                  old_12.cap = lVar9;
                  runtime_growslice((runtime__type *)&DAT_00225720,old_12,uVar18);
                  lVar9 = *(long *)((long)register0x00000020 + -0x1b8);
                  lVar11 = *(long *)((long)register0x00000020 + -0x1b0);
                  *(undefined8 *)((long)register0x00000020 + -0x70) =
                       *(undefined8 *)((long)register0x00000020 + -0x1a8);
                  *(long *)((long)register0x00000020 + -0x80) = lVar9;
                }
                *(long *)((long)register0x00000020 + -0x78) = lVar11 + 1;
                *(undefined1 *)(lVar9 + lVar11) = 0x5c;
                uVar12 = *(ulong *)((long)register0x00000020 + -0x118);
                uVar15 = *(ulong *)((long)register0x00000020 + -400);
                lVar11 = *(long *)((long)register0x00000020 + -0x108);
                uVar18 = uVar12;
              }
LAB_006f1707:
            }
            if (uVar15 < uVar18) goto LAB_006f1b25;
            lVar9 = uVar15 - uVar18;
            lVar11 = (uVar18 & -lVar9 >> 0x3f) + lVar11;
            if (*(undefined1 **)((long)register0x00000020 + -0x88) != (undefined1 *)0x0) {
              if (*(undefined1 **)((long)register0x00000020 + -0x88) == old_11.array)
              goto LAB_006f1962;
LAB_006f1b05:
              *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225520;
              *(undefined8 **)((long)register0x00000020 + -0x1d8) = &net_http__stmp_78;
              *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f1b25;
              e_01.data = old_11.array;
              e_01._type = (runtime__type *)&net_http__stmp_78;
              runtime_gopanic(e_01);
LAB_006f1b25:
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f1b2d;
              runtime_panicSliceB();
            }
            *(undefined1 **)((long)register0x00000020 + -0x88) = old_11.array;
LAB_006f1962:
            lVar16 = *(long *)((long)register0x00000020 + -0x78);
            uVar18 = lVar9 + lVar16;
            *(ulong *)((long)register0x00000020 + -0x118) = uVar18;
            uVar15 = *(ulong *)((long)register0x00000020 + -0x70);
            lVar20 = *(long *)((long)register0x00000020 + -0x80);
            if (uVar15 < uVar18) {
              *(long *)((long)register0x00000020 + -0x120) = lVar16;
              *(long *)((long)register0x00000020 + -0x128) = lVar9;
              *(long *)((long)register0x00000020 + -0xf8) = lVar11;
              *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225720;
              *(long *)((long)register0x00000020 + -0x1d8) = lVar20;
              *(long *)((long)register0x00000020 + -0x1d0) = lVar16;
              *(ulong *)((long)register0x00000020 + -0x1c8) = uVar15;
              *(ulong *)((long)register0x00000020 + -0x1c0) = uVar18;
              *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f19c7;
              old_13.len = lVar11;
              old_13.array = old_11.array;
              old_13.cap = uVar15;
              rVar27 = runtime_growslice((runtime__type *)&DAT_00225720,old_13,uVar18);
              old_11.array = (undefined1 *)rVar27.len;
              lVar20 = *(long *)((long)register0x00000020 + -0x1b8);
              uVar15 = *(ulong *)((long)register0x00000020 + -0x1a8);
              lVar9 = *(long *)((long)register0x00000020 + -0x128);
              lVar11 = *(long *)((long)register0x00000020 + -0xf8);
              lVar16 = *(long *)((long)register0x00000020 + -0x120);
            }
            *(ulong *)((long)register0x00000020 + -0x120) = uVar15;
            *(long *)((long)register0x00000020 + -0x90) = lVar20;
            *(long *)((long)register0x00000020 + -0x1e0) = lVar16 + lVar20;
            *(long *)((long)register0x00000020 + -0x1d8) = lVar11;
            *(long *)((long)register0x00000020 + -0x1d0) = lVar9;
            *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f1a0f;
            runtime_memmove();
            *(undefined8 *)((long)register0x00000020 + -0x78) =
                 *(undefined8 *)((long)register0x00000020 + -0x118);
            *(undefined8 *)((long)register0x00000020 + -0x70) =
                 *(undefined8 *)((long)register0x00000020 + -0x120);
            *(undefined8 *)((long)register0x00000020 + -0x80) =
                 *(undefined8 *)((long)register0x00000020 + -0x90);
            if (*(undefined1 **)((long)register0x00000020 + -0x88) == (undefined1 *)0x0) {
              *(undefined1 **)((long)register0x00000020 + -0x88) =
                   (undefined1 *)((long)register0x00000020 + -0x88);
            }
            else if (*(undefined1 **)((long)register0x00000020 + -0x88) !=
                     (undefined1 *)((long)register0x00000020 + -0x88)) {
              *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225520;
              *(undefined8 **)((long)register0x00000020 + -0x1d8) = &net_http__stmp_78;
              *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f1b05;
              e_00.data = old_11.array;
              e_00._type = (runtime__type *)&net_http__stmp_78;
              runtime_gopanic(e_00);
              goto LAB_006f1b05;
            }
            prVar8 = *(runtime__type **)((long)register0x00000020 + -0x78);
            rVar27.array = (undefined1 *)((long)&prVar8->size + 1);
            lVar11 = *(long *)((long)register0x00000020 + -0x80);
            e_16.data = *(undefined1 **)((long)register0x00000020 + -0x70);
            if (e_16.data < rVar27.array) {
              *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225720;
              *(long *)((long)register0x00000020 + -0x1d8) = lVar11;
              *(runtime__type **)((long)register0x00000020 + -0x1d0) = prVar8;
              *(undefined1 **)((long)register0x00000020 + -0x1c8) = e_16.data;
              *(undefined1 **)((long)register0x00000020 + -0x1c0) = rVar27.array;
              *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f1ab4;
              old_14.len = (int)rVar27.array;
              old_14.array = e_16.data;
              old_14.cap = uVar15;
              rVar27 = runtime_growslice(prVar8,old_14,0x225720);
              e_16.data = (undefined1 *)rVar27.len;
              lVar11 = *(long *)((long)register0x00000020 + -0x1b8);
              prVar8 = *(runtime__type **)((long)register0x00000020 + -0x1b0);
              *(undefined8 *)((long)register0x00000020 + -0x70) =
                   *(undefined8 *)((long)register0x00000020 + -0x1a8);
              *(long *)((long)register0x00000020 + -0x80) = lVar11;
            }
            *(undefined1 **)((long)register0x00000020 + -0x78) =
                 (undefined1 *)((long)&prVar8->size + 1);
            *(undefined1 *)((long)&prVar8->size + lVar11) = 0x22;
          }
        }
        else {
          if (*(undefined1 **)((long)register0x00000020 + -0x88) == (undefined1 *)0x0) {
            *(undefined1 **)((long)register0x00000020 + -0x88) = old_08.array;
          }
          else if (*(undefined1 **)((long)register0x00000020 + -0x88) != old_08.array) {
            *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225520;
            *(undefined8 **)((long)register0x00000020 + -0x1d8) = &net_http__stmp_78;
            *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f21ac;
            e_10.data = old_08.array;
            e_10._type = (runtime__type *)&net_http__stmp_78;
            runtime_gopanic(e_10);
            goto LAB_006f21ac;
          }
          lVar11 = *(long *)((long)register0x00000020 + -0x78);
          uVar18 = lVar11 + 7;
          uVar15 = *(ulong *)((long)register0x00000020 + -0x70);
          lVar9 = *(long *)((long)register0x00000020 + -0x80);
          if (uVar15 < uVar18) {
            *(ulong *)((long)register0x00000020 + -0x118) = uVar18;
            *(long *)((long)register0x00000020 + -0x120) = lVar11;
            *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225720;
            *(long *)((long)register0x00000020 + -0x1d8) = lVar9;
            *(long *)((long)register0x00000020 + -0x1d0) = lVar11;
            *(ulong *)((long)register0x00000020 + -0x1c8) = uVar15;
            *(ulong *)((long)register0x00000020 + -0x1c0) = uVar18;
            *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f1450;
            old_08.len = iVar14;
            old_08.cap = uVar15;
            runtime_growslice((runtime__type *)&DAT_00225720,old_08,uVar18);
            lVar9 = *(long *)((long)register0x00000020 + -0x1b8);
            uVar15 = *(ulong *)((long)register0x00000020 + -0x1a8);
            lVar11 = *(long *)((long)register0x00000020 + -0x120);
            uVar18 = *(ulong *)((long)register0x00000020 + -0x118);
          }
          *(undefined4 *)(lVar9 + lVar11) = 0x2d667475;
          *(undefined4 *)(lVar9 + 3 + lVar11) = 0x2727382d;
          *(ulong *)((long)register0x00000020 + -0x78) = uVar18;
          *(ulong *)((long)register0x00000020 + -0x70) = uVar15;
          *(long *)((long)register0x00000020 + -0x80) = lVar9;
                    /* Unresolved local var: int offset@[???] */
          uVar15 = *(ulong *)((long)register0x00000020 + -400);
          lVar11 = *(long *)((long)register0x00000020 + -0x108);
          uVar18 = 0;
          for (uVar12 = 0; s_09.len = (undefined1 *)((long)register0x00000020 + -0x88),
              (long)uVar12 < (long)uVar15; uVar12 = uVar12 + 1) {
            *(ulong *)((long)register0x00000020 + -0x158) = uVar12;
                    /* Unresolved local var: uint8 ch@[???] */
            bVar17 = *(byte *)(lVar11 + uVar12);
            uVar21 = (ulong)bVar17;
            *(byte *)((long)register0x00000020 + -0x19b) = bVar17;
            if ((byte)(bVar17 - 0x21) < 0x5e) {
              if (bVar17 == 0x2a) {
                bVar22 = true;
              }
              else if (bVar17 == 0x27) {
                bVar22 = true;
              }
              else if (bVar17 == 0x25) {
                bVar22 = true;
              }
              else {
                *(ulong *)((long)register0x00000020 + -0x160) = uVar18;
                *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00298551;
                *(undefined8 *)((long)register0x00000020 + -0x1d8) = 0xf;
                *(uint *)((long)register0x00000020 + -0x1d0) = (uint)bVar17;
                *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f1c15;
                s_09.str = &DAT_00298551;
                strings_IndexRune(s_09,(int32)uVar15);
                bVar22 = -1 < *(long *)((long)register0x00000020 + -0x1c8);
                uVar15 = *(ulong *)((long)register0x00000020 + -400);
                lVar11 = *(long *)((long)register0x00000020 + -0x108);
                uVar18 = *(ulong *)((long)register0x00000020 + -0x160);
                uVar21 = (ulong)*(byte *)((long)register0x00000020 + -0x19b);
                uVar12 = *(ulong *)((long)register0x00000020 + -0x158);
              }
            }
            else {
              bVar22 = true;
            }
            old_15.array = (undefined1 *)((long)register0x00000020 + -0x88);
            if (bVar22) {
              if (uVar12 < uVar18) goto LAB_006f2185;
              lVar9 = uVar12 - uVar18;
              lVar11 = lVar11 + (uVar18 & -lVar9 >> 0x3f);
              old_17.array = old_15.array;
              if (*(undefined1 **)((long)register0x00000020 + -0x88) == (undefined1 *)0x0) {
                *(undefined1 **)((long)register0x00000020 + -0x88) = old_15.array;
LAB_006f1c97:
                lVar20 = *(long *)((long)register0x00000020 + -0x78);
                uVar18 = lVar20 + lVar9;
                *(ulong *)((long)register0x00000020 + -0x118) = uVar18;
                uVar12 = *(ulong *)((long)register0x00000020 + -0x70);
                lVar16 = *(long *)((long)register0x00000020 + -0x80);
                if (uVar12 < uVar18) {
                  *(long *)((long)register0x00000020 + -0x120) = lVar9;
                  *(long *)((long)register0x00000020 + -0xe8) = lVar11;
                  *(long *)((long)register0x00000020 + -0x128) = lVar20;
                  *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225720;
                  *(long *)((long)register0x00000020 + -0x1d8) = lVar16;
                  *(long *)((long)register0x00000020 + -0x1d0) = lVar20;
                  *(ulong *)((long)register0x00000020 + -0x1c8) = uVar12;
                  *(ulong *)((long)register0x00000020 + -0x1c0) = uVar18;
                  *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f1d05;
                  old_15.len = uVar15;
                  old_15.cap = uVar21;
                  rVar27 = runtime_growslice((runtime__type *)&DAT_00225720,old_15,lVar20);
                  old_17.array = (undefined1 *)rVar27.len;
                  lVar16 = *(long *)((long)register0x00000020 + -0x1b8);
                  uVar12 = *(ulong *)((long)register0x00000020 + -0x1a8);
                  lVar11 = *(long *)((long)register0x00000020 + -0xe8);
                  lVar20 = *(long *)((long)register0x00000020 + -0x128);
                  lVar9 = *(long *)((long)register0x00000020 + -0x120);
                }
                *(ulong *)((long)register0x00000020 + -0x120) = uVar12;
                *(long *)((long)register0x00000020 + -0x90) = lVar16;
                lVar16 = lVar16 + lVar20;
                *(long *)((long)register0x00000020 + -0x1e0) = lVar16;
                *(long *)((long)register0x00000020 + -0x1d8) = lVar11;
                *(long *)((long)register0x00000020 + -0x1d0) = lVar9;
                *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f1d4e;
                runtime_memmove();
                *(undefined8 *)((long)register0x00000020 + -0x78) =
                     *(undefined8 *)((long)register0x00000020 + -0x118);
                *(undefined8 *)((long)register0x00000020 + -0x70) =
                     *(undefined8 *)((long)register0x00000020 + -0x120);
                *(undefined8 *)((long)register0x00000020 + -0x80) =
                     *(undefined8 *)((long)register0x00000020 + -0x90);
                if (*(undefined1 **)((long)register0x00000020 + -0x88) == (undefined1 *)0x0) {
                  *(undefined1 **)((long)register0x00000020 + -0x88) =
                       (undefined1 *)((long)register0x00000020 + -0x88);
LAB_006f1daf:
                  lVar11 = *(long *)((long)register0x00000020 + -0x78);
                  uVar18 = lVar11 + 1;
                  lVar9 = *(long *)((long)register0x00000020 + -0x80);
                  if (*(ulong *)((long)register0x00000020 + -0x70) < uVar18) {
                    *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225720;
                    *(long *)((long)register0x00000020 + -0x1d8) = lVar9;
                    *(long *)((long)register0x00000020 + -0x1d0) = lVar11;
                    *(ulong *)((long)register0x00000020 + -0x1c8) =
                         *(ulong *)((long)register0x00000020 + -0x70);
                    *(ulong *)((long)register0x00000020 + -0x1c0) = uVar18;
                    *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f1df4;
                    old_16.len = lVar16;
                    old_16.array = (void *)lVar11;
                    old_16.cap = lVar9;
                    rVar27 = runtime_growslice((runtime__type *)&DAT_00225720,old_16,uVar18);
                    lVar16 = rVar27.cap;
                    lVar9 = *(long *)((long)register0x00000020 + -0x1b8);
                    lVar11 = *(long *)((long)register0x00000020 + -0x1b0);
                    *(undefined8 *)((long)register0x00000020 + -0x70) =
                         *(undefined8 *)((long)register0x00000020 + -0x1a8);
                    *(long *)((long)register0x00000020 + -0x80) = lVar9;
                  }
                  *(long *)((long)register0x00000020 + -0x78) = lVar11 + 1;
                  *(undefined1 *)(lVar9 + lVar11) = 0x25;
                  bVar1 = *(byte *)((long)register0x00000020 + -0x19b);
                  bVar17 = (&DAT_002992a5)[bVar1 >> 4];
                  old_17.array = (undefined1 *)(ulong)bVar17;
                  if (*(undefined1 **)((long)register0x00000020 + -0x88) == (undefined1 *)0x0) {
                    *(undefined1 **)((long)register0x00000020 + -0x88) =
                         (undefined1 *)((long)register0x00000020 + -0x88);
LAB_006f1e63:
                    lVar11 = *(long *)((long)register0x00000020 + -0x78);
                    lVar9 = *(long *)((long)register0x00000020 + -0x80);
                    if (*(ulong *)((long)register0x00000020 + -0x70) < lVar11 + 1U) {
                      *(byte *)((long)register0x00000020 + -0x199) = bVar17;
                      *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225720;
                      *(long *)((long)register0x00000020 + -0x1d8) = lVar9;
                      *(long *)((long)register0x00000020 + -0x1d0) = lVar11;
                      *(ulong *)((long)register0x00000020 + -0x1c8) =
                           *(ulong *)((long)register0x00000020 + -0x70);
                      *(ulong *)((long)register0x00000020 + -0x1c0) = lVar11 + 1U;
                      *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f1ead;
                      old_17.len = lVar16;
                      old_17.cap = (int)&DAT_002992a5;
                      rVar27 = runtime_growslice((runtime__type *)&DAT_00225720,old_17,(ulong)bVar1)
                      ;
                      lVar16 = rVar27.cap;
                      lVar9 = *(long *)((long)register0x00000020 + -0x1b8);
                      lVar11 = *(long *)((long)register0x00000020 + -0x1b0);
                      *(undefined8 *)((long)register0x00000020 + -0x70) =
                           *(undefined8 *)((long)register0x00000020 + -0x1a8);
                      *(long *)((long)register0x00000020 + -0x80) = lVar9;
                      bVar17 = *(byte *)((long)register0x00000020 + -0x199);
                      bVar1 = *(byte *)((long)register0x00000020 + -0x19b);
                    }
                    *(long *)((long)register0x00000020 + -0x78) = lVar11 + 1;
                    *(byte *)(lVar9 + lVar11) = bVar17;
                    bVar17 = (&DAT_002992a5)[bVar1 & 0xf];
                    old_18.array = (ulong)bVar17;
                    if (*(undefined1 **)((long)register0x00000020 + -0x88) == (undefined1 *)0x0) {
                      *(undefined1 **)((long)register0x00000020 + -0x88) =
                           (undefined1 *)((long)register0x00000020 + -0x88);
                    }
                    else if (*(undefined1 **)((long)register0x00000020 + -0x88) !=
                             (undefined1 *)((long)register0x00000020 + -0x88)) {
                      *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225520;
                      *(undefined8 **)((long)register0x00000020 + -0x1d8) = &net_http__stmp_78;
                      *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f2129;
                      e_06.data._0_1_ = bVar17;
                      e_06._type = (runtime__type *)&net_http__stmp_78;
                      e_06.data._1_7_ = 0;
                      old_17.array = (undefined1 *)(ulong)bVar17;
                      runtime_gopanic(e_06);
                      goto LAB_006f2129;
                    }
                    lVar11 = *(long *)((long)register0x00000020 + -0x78);
                    uVar18 = lVar11 + 1;
                    lVar9 = *(long *)((long)register0x00000020 + -0x80);
                    if (*(ulong *)((long)register0x00000020 + -0x70) < uVar18) {
                      *(byte *)((long)register0x00000020 + -0x19a) = bVar17;
                      *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225720;
                      *(long *)((long)register0x00000020 + -0x1d8) = lVar9;
                      *(long *)((long)register0x00000020 + -0x1d0) = lVar11;
                      *(ulong *)((long)register0x00000020 + -0x1c8) =
                           *(ulong *)((long)register0x00000020 + -0x70);
                      *(ulong *)((long)register0x00000020 + -0x1c0) = uVar18;
                      *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f1f65;
                      old_18.len = lVar16;
                      old_18.cap = uVar18;
                      runtime_growslice((runtime__type *)&DAT_00225720,old_18,lVar11);
                      lVar9 = *(long *)((long)register0x00000020 + -0x1b8);
                      lVar11 = *(long *)((long)register0x00000020 + -0x1b0);
                      *(undefined8 *)((long)register0x00000020 + -0x70) =
                           *(undefined8 *)((long)register0x00000020 + -0x1a8);
                      *(long *)((long)register0x00000020 + -0x80) = lVar9;
                      bVar17 = *(byte *)((long)register0x00000020 + -0x19a);
                    }
                    *(long *)((long)register0x00000020 + -0x78) = lVar11 + 1;
                    *(byte *)(lVar9 + lVar11) = bVar17;
                    uVar12 = *(ulong *)((long)register0x00000020 + -0x158);
                    uVar18 = uVar12 + 1;
                    uVar15 = *(ulong *)((long)register0x00000020 + -400);
                    lVar11 = *(long *)((long)register0x00000020 + -0x108);
                    goto LAB_006f1b8c;
                  }
                  if (*(undefined1 **)((long)register0x00000020 + -0x88) ==
                      (undefined1 *)((long)register0x00000020 + -0x88)) goto LAB_006f1e63;
LAB_006f2129:
                  *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225520;
                  *(undefined8 **)((long)register0x00000020 + -0x1d8) = &net_http__stmp_78;
                  *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f2145;
                  e_07.data = old_17.array;
                  e_07._type = (runtime__type *)&net_http__stmp_78;
                  runtime_gopanic(e_07);
                }
                else if (*(undefined1 **)((long)register0x00000020 + -0x88) ==
                         (undefined1 *)((long)register0x00000020 + -0x88)) goto LAB_006f1daf;
                *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225520;
                *(undefined8 **)((long)register0x00000020 + -0x1d8) = &net_http__stmp_78;
                *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f2165;
                e_08.data = old_17.array;
                e_08._type = (runtime__type *)&net_http__stmp_78;
                runtime_gopanic(e_08);
              }
              else if (*(undefined1 **)((long)register0x00000020 + -0x88) == old_15.array)
              goto LAB_006f1c97;
              *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225520;
              *(undefined8 **)((long)register0x00000020 + -0x1d8) = &net_http__stmp_78;
              *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f2185;
              e_09.data = old_17.array;
              e_09._type = (runtime__type *)&net_http__stmp_78;
              runtime_gopanic(e_09);
LAB_006f2185:
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f2190;
              runtime_panicSliceB();
            }
LAB_006f1b8c:
                    /* Unresolved local var: int index@[???] */
          }
          if (uVar15 < uVar18) {
LAB_006f2105:
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f210d;
            runtime_panicSliceB();
          }
          lVar9 = uVar15 - uVar18;
          lVar11 = lVar11 + (uVar18 & -lVar9 >> 0x3f);
          if (*(undefined1 **)((long)register0x00000020 + -0x88) == (undefined1 *)0x0) {
            *(undefined1 **)((long)register0x00000020 + -0x88) = s_09.len;
          }
          else if (*(undefined1 **)((long)register0x00000020 + -0x88) != s_09.len) {
            *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225520;
            *(undefined8 **)((long)register0x00000020 + -0x1d8) = &net_http__stmp_78;
            *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f2105;
            e_05.data = s_09.len;
            e_05._type = (runtime__type *)&net_http__stmp_78;
            runtime_gopanic(e_05);
            goto LAB_006f2105;
          }
          lVar16 = *(long *)((long)register0x00000020 + -0x78);
          e_16.data = (undefined1 *)(lVar9 + lVar16);
          *(undefined1 **)((long)register0x00000020 + -0x118) = e_16.data;
          rVar27.array = *(undefined1 **)((long)register0x00000020 + -0x70);
          lVar20 = *(long *)((long)register0x00000020 + -0x80);
          if (rVar27.array < e_16.data) {
            *(long *)((long)register0x00000020 + -0x120) = lVar16;
            *(long *)((long)register0x00000020 + -0x128) = lVar9;
            *(long *)((long)register0x00000020 + -200) = lVar11;
            *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225720;
            *(long *)((long)register0x00000020 + -0x1d8) = lVar20;
            *(long *)((long)register0x00000020 + -0x1d0) = lVar16;
            *(undefined1 **)((long)register0x00000020 + -0x1c8) = rVar27.array;
            *(undefined1 **)((long)register0x00000020 + -0x1c0) = e_16.data;
            *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f206c;
            old_19.len = lVar11;
            old_19.array = e_16.data;
            old_19.cap = lVar20;
            rVar27 = runtime_growslice((runtime__type *)&DAT_00225720,old_19,(int)rVar27.array);
            e_16.data = (undefined1 *)rVar27.len;
            lVar20 = *(long *)((long)register0x00000020 + -0x1b8);
            rVar27.array = *(undefined1 **)((long)register0x00000020 + -0x1a8);
            lVar9 = *(long *)((long)register0x00000020 + -0x128);
            lVar11 = *(long *)((long)register0x00000020 + -200);
            lVar16 = *(long *)((long)register0x00000020 + -0x120);
          }
          *(undefined1 **)((long)register0x00000020 + -0x120) = rVar27.array;
          *(long *)((long)register0x00000020 + -0x90) = lVar20;
          *(long *)((long)register0x00000020 + -0x1e0) = lVar16 + lVar20;
          *(long *)((long)register0x00000020 + -0x1d8) = lVar11;
          *(long *)((long)register0x00000020 + -0x1d0) = lVar9;
          *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f20b4;
          runtime_memmove();
          *(undefined8 *)((long)register0x00000020 + -0x78) =
               *(undefined8 *)((long)register0x00000020 + -0x118);
          *(undefined8 *)((long)register0x00000020 + -0x70) =
               *(undefined8 *)((long)register0x00000020 + -0x120);
          *(undefined8 *)((long)register0x00000020 + -0x80) =
               *(undefined8 *)((long)register0x00000020 + -0x90);
        }
        lVar11 = *(long *)((long)register0x00000020 + -0x110) + 1;
        if (*(long *)((long)register0x00000020 + -0x150) <= lVar11) goto LAB_006f0e98;
        puVar10 = (uint8 *)(*(long *)((long)register0x00000020 + -0xa0) + 0x10);
      } while( true );
    }
    e_16.data = (undefined1 *)((long)register0x00000020 + -0x88);
    if (*(undefined1 **)((long)register0x00000020 + -0x88) == e_16.data) goto LAB_006f075f;
    *(undefined **)((long)register0x00000020 + -0x1e0) = &DAT_00225520;
    *(undefined8 **)((long)register0x00000020 + -0x1d8) = &net_http__stmp_78;
    *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0x6f22ce;
    e_19.data = e_16.data;
    e_19._type = (runtime__type *)&net_http__stmp_78;
    runtime_gopanic(e_19);
  }
  *(undefined8 *)(rVar27.array + -8) = 0x6f22d4;
  runtime_morestack_noctxt();
  register0x00000020 = (BADSPACEBASE *)rVar27.array;
  goto code_r0x006f0640;
}

