
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.Copy(reflect.Value dst, reflect.Value src, int ~r2) */

int reflect_Copy(reflect_Value dst,reflect_Value src)

{
  uint8 *puVar1;
  runtime_itab *prVar2;
  undefined8 *puVar3;
  runtime__type *prVar4;
  reflect_flag f;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined1 *unaff_RBP;
  runtime_itab *prVar12;
  undefined8 uVar13;
  reflect_rtype *prVar14;
  long lVar15;
  int iVar16;
  void *pvVar17;
  int iVar18;
  long in_FS_OFFSET;
  reflect_Type rVar19;
  string what;
  interface___ e;
  interface___ e_00;
  reflect_Value v;
  reflect_Value v_00;
  runtime_slice dst_00;
  runtime_slice src_00;
  reflect_Type t2;
  reflect_Value dst_spill;
  reflect_Value src_spill;
  
  pvVar17 = (void *)src.flag;
  prVar14 = src.typ;
  what.len = dst.ptr;
  do {
                    /* Unresolved local var: reflect.Kind dk@[???]
                       Unresolved local var: reflect.Kind sk@[???]
                       Unresolved local var: bool stringCopy@[???]
                       Unresolved local var: internal/unsafeheader.Slice ds@[???]
                       Unresolved local var: internal/unsafeheader.Slice ss@[???]
                       Unresolved local var: reflect.Type de@[???] */
    puVar11 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) <
        (undefined1 *)((long)register0x00000020 + -0x28)) {
      puVar11 = (undefined1 *)((long)register0x00000020 + -0xa8);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      uVar8 = *(ulong *)((long)register0x00000020 + 0x18);
      f = uVar8 & 0x1f;
      *(reflect_flag *)((long)register0x00000020 + -0x30) = f;
      if ((f == 0x11) || (f == 0x17)) {
        if ((f == 0x11) && (((uVar8 & 0x60) != 0 || (((uint)uVar8 >> 8 & 1) == 0)))) {
          *(ulong *)((long)register0x00000020 + -0xa8) = uVar8;
          *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x53d4b8;
          reflect_flag_mustBeAssignableSlow(0x11);
          f = *(reflect_flag *)((long)register0x00000020 + -0x30);
          uVar8 = *(ulong *)((long)register0x00000020 + 0x18);
        }
        if ((uVar8 == 0) || ((uVar8 & 0x60) != 0)) {
          *(ulong *)((long)register0x00000020 + -0xa8) = uVar8;
          *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x53d4dd;
          reflect_flag_mustBeExportedSlow(f);
          f = *(reflect_flag *)((long)register0x00000020 + -0x30);
        }
        what.len = *(void **)((long)register0x00000020 + 0x30);
        uVar8 = (ulong)what.len & 0x1f;
        *(ulong *)((long)register0x00000020 + -0x38) = uVar8;
        if ((uVar8 == 0x11) || (uVar8 == 0x17)) {
          prVar12 = (runtime_itab *)0x0;
LAB_0053d56f:
          *(char *)((long)register0x00000020 + -0x61) = (char)prVar12;
          if ((what.len == (void *)0x0) || (((ulong)what.len & 0x60) != 0)) {
            *(void **)((long)register0x00000020 + -0xa8) = what.len;
            *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x53d592;
            reflect_flag_mustBeExportedSlow(f);
          }
          *(reflect_rtype **)((long)register0x00000020 + -0xa8) =
               *(reflect_rtype **)((long)register0x00000020 + 8);
          *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x53d5a5;
          reflect___rtype__Elem(*(reflect_rtype **)((long)register0x00000020 + 8));
                    /* Unresolved local var: reflect.Type se@[???] */
          uVar5 = *(undefined8 *)((long)register0x00000020 + -0x98);
          *(undefined8 *)((long)register0x00000020 + -0x18) = uVar5;
          lVar9 = *(long *)((long)register0x00000020 + -0xa0);
          *(long *)((long)register0x00000020 + -0x40) = lVar9;
          what.len = (void *)(ulong)*(byte *)((long)register0x00000020 + -0x61);
          if (*(byte *)((long)register0x00000020 + -0x61) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x10) =
                 *(undefined8 *)((long)register0x00000020 + -0xa0);
            *(reflect_rtype **)((long)register0x00000020 + -0xa8) =
                 *(reflect_rtype **)((long)register0x00000020 + 0x20);
            *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x53d5ee;
            rVar19 = reflect___rtype__Elem(*(reflect_rtype **)((long)register0x00000020 + 0x20));
            what.len = rVar19.data;
            puVar1 = *(uint8 **)((long)register0x00000020 + -0xa0);
            prVar2 = *(runtime_itab **)((long)register0x00000020 + -0x98);
            *(undefined **)((long)register0x00000020 + -0xa8) = &DAT_00293e86;
            *(undefined8 *)((long)register0x00000020 + -0xa0) = 0xc;
            *(undefined8 *)((long)register0x00000020 + -0x98) =
                 *(undefined8 *)((long)register0x00000020 + -0x10);
            *(undefined8 *)((long)register0x00000020 + -0x90) =
                 *(undefined8 *)((long)register0x00000020 + -0x18);
            *(uint8 **)((long)register0x00000020 + -0x88) = puVar1;
            *(runtime_itab **)((long)register0x00000020 + -0x80) = prVar2;
            *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x53d635;
            what.str = puVar1;
            rVar19.data = prVar14;
            rVar19.tab = prVar2;
            t2.data = pvVar17;
            t2.tab = prVar12;
            reflect_typesMustMatch(what,rVar19,t2);
            lVar15 = *(long *)((long)register0x00000020 + -0x30);
            uVar5 = *(undefined8 *)((long)register0x00000020 + -0x18);
            lVar9 = *(long *)((long)register0x00000020 + -0x40);
          }
          else {
            lVar15 = *(long *)((long)register0x00000020 + -0x30);
          }
          if (lVar15 == 0x11) {
            *(undefined8 *)((long)register0x00000020 + -0xa8) =
                 *(undefined8 *)((long)register0x00000020 + 8);
            *(undefined8 *)((long)register0x00000020 + -0xa0) =
                 *(undefined8 *)((long)register0x00000020 + 0x10);
            *(reflect_flag *)((long)register0x00000020 + -0x98) =
                 *(reflect_flag *)((long)register0x00000020 + 0x18);
            *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x53d696;
            v.ptr = what.len;
            v.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + 0x10);
            v.flag = *(reflect_flag *)((long)register0x00000020 + 0x18);
            reflect_Value_Len(v);
            uVar6 = *(undefined8 *)((long)register0x00000020 + -0x90);
            lVar15 = *(long *)((long)register0x00000020 + -0x38);
            lVar9 = *(long *)((long)register0x00000020 + -0x40);
            uVar10 = *(undefined8 *)((long)register0x00000020 + 0x10);
            uVar5 = *(undefined8 *)((long)register0x00000020 + -0x18);
            uVar13 = uVar6;
          }
          else {
            puVar3 = *(undefined8 **)((long)register0x00000020 + 0x10);
            uVar10 = *puVar3;
            uVar6 = puVar3[2];
            lVar15 = *(long *)((long)register0x00000020 + -0x38);
            uVar13 = puVar3[1];
          }
          *(undefined8 *)((long)register0x00000020 + -0x48) = uVar6;
          *(undefined8 *)((long)register0x00000020 + -0x50) = uVar13;
          *(undefined8 *)((long)register0x00000020 + -0x20) = uVar10;
          if (lVar15 == 0x11) {
            *(undefined8 *)((long)register0x00000020 + -0xa8) =
                 *(undefined8 *)((long)register0x00000020 + 0x20);
            *(undefined8 *)((long)register0x00000020 + -0xa0) =
                 *(undefined8 *)((long)register0x00000020 + 0x28);
            *(reflect_flag *)((long)register0x00000020 + -0x98) =
                 *(reflect_flag *)((long)register0x00000020 + 0x30);
            *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x53d72d;
            v_00.ptr = (void *)uVar10;
            v_00.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + 0x28);
            v_00.flag = *(reflect_flag *)((long)register0x00000020 + 0x30);
            reflect_Value_Len(v_00);
            iVar16 = *(int *)((long)register0x00000020 + -0x90);
            uVar5 = *(undefined8 *)((long)register0x00000020 + -0x18);
            lVar9 = *(long *)((long)register0x00000020 + -0x40);
            uVar6 = *(undefined8 *)((long)register0x00000020 + 0x28);
            iVar18 = iVar16;
          }
          else if (lVar15 == 0x17) {
            puVar3 = *(undefined8 **)((long)register0x00000020 + 0x28);
            uVar6 = *puVar3;
            iVar16 = puVar3[2];
            iVar18 = puVar3[1];
          }
          else {
            iVar16 = (*(undefined8 **)((long)register0x00000020 + 0x28))[1];
            uVar6 = **(undefined8 **)((long)register0x00000020 + 0x28);
            iVar18 = iVar16;
          }
          *(int *)((long)register0x00000020 + -0x58) = iVar16;
          *(int *)((long)register0x00000020 + -0x60) = iVar18;
          *(undefined8 *)((long)register0x00000020 + -0x28) = uVar6;
          pcVar7 = *(code **)(lVar9 + 0x100);
          *(undefined8 *)((long)register0x00000020 + -0xa8) = uVar5;
          *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x53d769;
          (*pcVar7)();
          *(undefined8 *)((long)register0x00000020 + -0xa8) =
               *(undefined8 *)((long)register0x00000020 + -0xa0);
          *(undefined8 *)((long)register0x00000020 + -0xa0) =
               *(undefined8 *)((long)register0x00000020 + -0x20);
          *(undefined8 *)((long)register0x00000020 + -0x98) =
               *(undefined8 *)((long)register0x00000020 + -0x50);
          *(undefined8 *)((long)register0x00000020 + -0x90) =
               *(undefined8 *)((long)register0x00000020 + -0x48);
          *(undefined8 *)((long)register0x00000020 + -0x88) =
               *(undefined8 *)((long)register0x00000020 + -0x28);
          *(undefined8 *)((long)register0x00000020 + -0x80) =
               *(undefined8 *)((long)register0x00000020 + -0x60);
          *(runtime__type **)((long)register0x00000020 + -0x78) =
               *(runtime__type **)((long)register0x00000020 + -0x58);
          *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x53d7b9;
          dst_00.len = (int)pcVar7;
          dst_00.array = (void *)uVar10;
          dst_00.cap = iVar16;
          src_00.len = uVar6;
          src_00.array = (void *)uVar13;
          src_00.cap = iVar18;
          reflect_typedslicecopy
                    (*(runtime__type **)((long)register0x00000020 + -0x58),dst_00,src_00);
          *(int *)((long)register0x00000020 + 0x38) = *(int *)((long)register0x00000020 + -0x70);
          return *(int *)((long)register0x00000020 + -0x70);
        }
        if (uVar8 == 0x18) {
          *(reflect_rtype **)((long)register0x00000020 + -0xa8) =
               *(reflect_rtype **)((long)register0x00000020 + 8);
          *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x53d527;
          reflect___rtype__Elem(*(reflect_rtype **)((long)register0x00000020 + 8));
          pcVar7 = *(code **)(*(long *)((long)register0x00000020 + -0xa0) + 0x98);
          *(undefined8 *)((long)register0x00000020 + -0xa8) =
               *(undefined8 *)((long)register0x00000020 + -0x98);
          *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x53d53e;
          uVar5 = (*pcVar7)();
          what.len = *(void **)((long)register0x00000020 + 0x30);
          prVar12 = (runtime_itab *)
                    (CONCAT71((int7)((ulong)uVar5 >> 8),
                              *(long *)((long)register0x00000020 + -0xa0) == 8) & 0xffffffff);
          f = *(reflect_flag *)((long)register0x00000020 + -0x30);
        }
        else {
          prVar12 = (runtime_itab *)0x0;
        }
        if ((char)prVar12 != '\0') goto LAB_0053d56f;
        *(undefined **)((long)register0x00000020 + -0xa8) = &DAT_0024d5e0;
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x53d7e6;
        runtime_newobject((runtime__type *)&DAT_0024d5e0);
        prVar4 = *(runtime__type **)((long)register0x00000020 + -0xa0);
        prVar4->ptrdata = 0xc;
        prVar4->size = (uintptr)&DAT_00293e86;
        uVar5 = *(undefined8 *)((long)register0x00000020 + -0x38);
        prVar4->hash = (int)uVar5;
        prVar4->tflag = (char)((ulong)uVar5 >> 0x20);
        prVar4->align = (char)((ulong)uVar5 >> 0x28);
        prVar4->fieldAlign = (char)((ulong)uVar5 >> 0x30);
        prVar4->kind = (char)((ulong)uVar5 >> 0x38);
        *(undefined **)((long)register0x00000020 + -0xa8) = &DAT_00233920;
        *(runtime__type **)((long)register0x00000020 + -0xa0) = prVar4;
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x53d81b;
        e.data = what.len;
        e._type = prVar4;
        runtime_gopanic(e);
      }
      *(undefined **)((long)register0x00000020 + -0xa8) = &DAT_0024d5e0;
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x53d82b;
      runtime_newobject((runtime__type *)&DAT_0024d5e0);
      prVar4 = *(runtime__type **)((long)register0x00000020 + -0xa0);
      prVar4->ptrdata = 0xc;
      prVar4->size = (uintptr)&DAT_00293e86;
      uVar5 = *(undefined8 *)((long)register0x00000020 + -0x30);
      prVar4->hash = (int)uVar5;
      prVar4->tflag = (char)((ulong)uVar5 >> 0x20);
      prVar4->align = (char)((ulong)uVar5 >> 0x28);
      prVar4->fieldAlign = (char)((ulong)uVar5 >> 0x30);
      prVar4->kind = (char)((ulong)uVar5 >> 0x38);
      *(undefined **)((long)register0x00000020 + -0xa8) = &DAT_00233920;
      *(runtime__type **)((long)register0x00000020 + -0xa0) = prVar4;
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x53d865;
      e_00.data = what.len;
      e_00._type = prVar4;
      runtime_gopanic(e_00);
    }
    *(undefined8 *)(puVar11 + -8) = 0x53d86b;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar11;
  } while( true );
}

