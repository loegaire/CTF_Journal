
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.Value.Slice(reflect.Value v, int i, int j, reflect.Value
   ~r2) */

reflect_Value reflect_Value_Slice(reflect_Value v,int i,int j)

{
  runtime__type *prVar1;
  ulong uVar2;
  undefined8 uVar3;
  long extraout_RAX;
  long lVar4;
  ulong extraout_RAX_00;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  undefined1 *puVar8;
  undefined1 *unaff_RBP;
  undefined8 uVar9;
  long *plVar10;
  long in_FS_OFFSET;
  interface___ e;
  interface___ e_00;
  interface___ e_01;
  interface___ e_02;
  reflect_Value rVar11;
  reflect_Value rVar12;
  reflect_sliceType *typ;
  void *base;
  int i_spill;
  int j_spill;
  
  pvVar7 = v.ptr;
  do {
                    /* Unresolved local var: int cap@[???]
                       Unresolved local var: []unsafe.Pointer * &x@[???]
                       Unresolved local var: internal/unsafeheader.Slice * s@[???]
                       Unresolved local var: reflect.flag fl@[???] */
    puVar8 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar8 = (undefined1 *)((long)register0x00000020 + -0x38);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
                    /* Unresolved local var: reflect.Kind kind@[???] */
      uVar2 = *(ulong *)((long)register0x00000020 + 0x18) & 0x1f;
      if (uVar2 == 0x11) {
        if (((uint)*(ulong *)((long)register0x00000020 + 0x18) >> 8 & 1) != 0) {
          lVar6 = *(long *)(*(long *)((long)register0x00000020 + 8) + 0x40);
          uVar3 = *(undefined8 *)(*(long *)((long)register0x00000020 + 8) + 0x38);
          uVar9 = *(undefined8 *)((long)register0x00000020 + 0x10);
LAB_0053cd8c:
          pvVar7 = *(void **)((long)register0x00000020 + 0x20);
          if (((-1 < (long)pvVar7) && ((long)pvVar7 <= *(long *)((long)register0x00000020 + 0x28)))
             && (*(long *)((long)register0x00000020 + 0x28) <= lVar6)) {
            *(undefined8 *)((long)register0x00000020 + -0x18) = uVar3;
            *(undefined8 *)((long)register0x00000020 + -0x10) = uVar9;
            *(long *)((long)register0x00000020 + -0x28) = lVar6;
            *(undefined **)((long)register0x00000020 + -0x38) = &DAT_002222a0;
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x53cdd1;
            runtime_newobject((runtime__type *)&DAT_002222a0);
            plVar10 = *(long **)((long)register0x00000020 + -0x30);
            *plVar10 = 0;
            lVar6 = *(long *)((long)register0x00000020 + 0x20);
            plVar10[1] = *(long *)((long)register0x00000020 + 0x28) - lVar6;
            lVar4 = *(long *)((long)register0x00000020 + -0x28);
            plVar10[2] = lVar4 - lVar6;
            if (lVar4 - lVar6 < 1) {
              if (runtime_writeBarrier._0_4_ == 0) {
                *plVar10 = *(long *)((long)register0x00000020 + -0x10);
              }
              else {
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x53ce4c;
                runtime_gcWriteBarrier();
              }
              lVar4 = *(long *)((long)register0x00000020 + -0x18);
            }
            else {
              lVar4 = *(long *)((long)register0x00000020 + -0x18);
              if (runtime_writeBarrier._0_4_ == 0) {
                *plVar10 = lVar6 * **(long **)(lVar4 + 0x30) +
                           *(long *)((long)register0x00000020 + -0x10);
              }
              else {
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x53ce2c;
                runtime_gcWriteBarrierCX();
                lVar4 = extraout_RAX;
              }
            }
            *(long *)((long)register0x00000020 + 0x30) = lVar4;
            *(long **)((long)register0x00000020 + 0x38) = plVar10;
            uVar2 = 0;
            if ((*(ulong *)((long)register0x00000020 + 0x18) & 0x60) != 0) {
              uVar2 = 0x20;
            }
            rVar11.typ = uVar2 | 0x97;
            *(ulong *)((long)register0x00000020 + 0x40) = rVar11.typ;
            rVar11.ptr = pvVar7;
            rVar11.flag = 0x20;
            return rVar11;
          }
          goto LAB_0053cf9a;
        }
      }
      else {
        if (uVar2 == 0x17) {
          uVar9 = **(undefined8 **)((long)register0x00000020 + 0x10);
          lVar6 = (*(undefined8 **)((long)register0x00000020 + 0x10))[2];
          uVar3 = *(undefined8 *)((long)register0x00000020 + 8);
          goto LAB_0053cd8c;
        }
                    /* Unresolved local var: internal/unsafeheader.String * &t@[???] */
        if (uVar2 == 0x18) {
          if (((-1 < *(long *)((long)register0x00000020 + 0x20)) &&
              (*(long *)((long)register0x00000020 + 0x20) <=
               *(long *)((long)register0x00000020 + 0x28))) &&
             (pvVar7 = *(void **)((long)register0x00000020 + 0x10),
             *(long *)((long)register0x00000020 + 0x28) <= *(long *)((long)pvVar7 + 8))) {
            *(undefined **)((long)register0x00000020 + -0x38) = &DAT_0024c3c0;
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x53cece;
            runtime_newobject((runtime__type *)&DAT_0024c3c0);
            plVar10 = *(long **)((long)register0x00000020 + -0x30);
            lVar6 = *(long *)((long)register0x00000020 + 0x20);
            plVar5 = *(long **)((long)register0x00000020 + 0x10);
            if (lVar6 < plVar5[1]) {
              plVar5 = (long *)*plVar5;
              plVar10[1] = *(long *)((long)register0x00000020 + 0x28) - lVar6;
              if (runtime_writeBarrier._0_4_ == 0) {
                *plVar10 = lVar6 + (long)plVar5;
              }
              else {
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x53cf0c;
                runtime_gcWriteBarrier();
              }
            }
            *(undefined8 *)((long)register0x00000020 + 0x30) =
                 *(undefined8 *)((long)register0x00000020 + 8);
            *(long **)((long)register0x00000020 + 0x38) = plVar10;
            *(undefined8 *)((long)register0x00000020 + 0x40) =
                 *(undefined8 *)((long)register0x00000020 + 0x18);
            rVar12.ptr = pvVar7;
            rVar12.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + 0x18);
            rVar12.flag = (reflect_flag)plVar5;
            return rVar12;
          }
          *(undefined **)((long)register0x00000020 + -0x38) = &DAT_00225520;
          *(undefined ***)((long)register0x00000020 + -0x30) = &reflect__stmp_109;
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x53cf4b;
          e.data = pvVar7;
          e._type = (runtime__type *)&reflect__stmp_109;
          runtime_gopanic(e);
          uVar2 = extraout_RAX_00;
        }
        *(ulong *)((long)register0x00000020 + -0x20) = uVar2;
        *(undefined **)((long)register0x00000020 + -0x38) = &DAT_0024d5e0;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x53cf65;
        runtime_newobject((runtime__type *)&DAT_0024d5e0);
        prVar1 = *(runtime__type **)((long)register0x00000020 + -0x30);
        prVar1->ptrdata = 0x13;
        prVar1->size = (uintptr)&DAT_0029b765;
        uVar3 = *(undefined8 *)((long)register0x00000020 + -0x20);
        prVar1->hash = (int)uVar3;
        prVar1->tflag = (char)((ulong)uVar3 >> 0x20);
        prVar1->align = (char)((ulong)uVar3 >> 0x28);
        prVar1->fieldAlign = (char)((ulong)uVar3 >> 0x30);
        prVar1->kind = (char)((ulong)uVar3 >> 0x38);
        *(undefined **)((long)register0x00000020 + -0x38) = &DAT_00233920;
        *(runtime__type **)((long)register0x00000020 + -0x30) = prVar1;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x53cf9a;
        e_00.data = pvVar7;
        e_00._type = prVar1;
        runtime_gopanic(e_00);
LAB_0053cf9a:
        *(undefined **)((long)register0x00000020 + -0x38) = &DAT_00225520;
        *(undefined ***)((long)register0x00000020 + -0x30) = &reflect__stmp_110;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x53cfb6;
        e_01.data = pvVar7;
        e_01._type = (runtime__type *)&reflect__stmp_110;
        runtime_gopanic(e_01);
      }
      *(undefined **)((long)register0x00000020 + -0x38) = &DAT_00225520;
      *(undefined ***)((long)register0x00000020 + -0x30) = &reflect__stmp_108;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x53cfd2;
      e_02.data = pvVar7;
      e_02._type = (runtime__type *)&reflect__stmp_108;
      runtime_gopanic(e_02);
    }
    *(undefined8 *)(puVar8 + -8) = 0x53cfd8;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar8;
  } while( true );
}

