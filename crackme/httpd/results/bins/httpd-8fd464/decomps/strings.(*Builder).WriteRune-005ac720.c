
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strings.(*Builder).WriteRune(strings.Builder * b, int32 r, int
   ~r1, error ~r2) */

multireturn_int_error__conflict strings___Builder__WriteRune(strings_Builder *b,int32 r)

{
  long *plVar1;
  undefined1 *puVar2;
  long lVar3;
  void *extraout_RAX;
  void *pvVar4;
  runtime__type *prVar5;
  long lVar6;
  runtime__type *prVar7;
  long lVar8;
  ulong len;
  undefined1 *puVar9;
  undefined1 *unaff_RBP;
  long *plVar10;
  long in_FS_OFFSET;
  interface___ e;
  multireturn_int_error__conflict mVar11;
  __uint8 p;
  multireturn_int_error__conflict mVar12;
  runtime_slice old;
  strings_Builder *b_spill;
  int32 r_spill;
  
  do {
                    /* Unresolved local var: int n@[???] */
    puVar9 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar9 = (undefined1 *)((long)register0x00000020 + -0x60);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      plVar10 = *(long **)((long)register0x00000020 + 8);
      plVar1 = (long *)*plVar10;
      if (plVar1 == (long *)0x0) {
        if (runtime_writeBarrier._0_4_ == 0) {
          *plVar10 = (long)plVar10;
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -0x68) = 0x5ac76f;
          runtime_gcWriteBarrierBX();
        }
LAB_005ac76f:
        len = (ulong)*(uint *)((long)register0x00000020 + 0x10);
        if (*(uint *)((long)register0x00000020 + 0x10) < 0x80) {
          prVar5 = (runtime__type *)plVar10[2];
          pvVar4 = (void *)plVar10[1];
          puVar2 = (undefined1 *)plVar10[3];
          puVar9 = (undefined1 *)((long)&prVar5->size + 1);
          if (puVar2 < puVar9) {
            *(undefined **)((long)register0x00000020 + -0x60) = &DAT_00225720;
            *(void **)((long)register0x00000020 + -0x58) = pvVar4;
            *(runtime__type **)((long)register0x00000020 + -0x50) = prVar5;
            *(undefined1 **)((long)register0x00000020 + -0x48) = puVar2;
            *(undefined1 **)((long)register0x00000020 + -0x40) = puVar9;
            *(undefined8 *)((long)register0x00000020 + -0x68) = 0x5ac7b8;
            old.len = (int)pvVar4;
            old.array = &DAT_00225720;
            old.cap = (int)plVar10;
            runtime_growslice(prVar5,old,(int)puVar9);
            pvVar4 = *(void **)((long)register0x00000020 + -0x38);
            prVar5 = *(runtime__type **)((long)register0x00000020 + -0x30);
            plVar10 = *(long **)((long)register0x00000020 + 8);
            plVar10[3] = *(long *)((long)register0x00000020 + -0x28);
            if (runtime_writeBarrier._0_4_ == 0) {
              plVar10[1] = (long)pvVar4;
            }
            else {
              *(undefined8 *)((long)register0x00000020 + -0x68) = 0x5ac7e8;
              runtime_gcWriteBarrier();
              pvVar4 = extraout_RAX;
            }
            len = (ulong)*(uint *)((long)register0x00000020 + 0x10);
          }
          plVar10[2] = (long)((long)&prVar5->size + 1);
          *(char *)((long)pvVar4 + (long)prVar5) = (char)len;
          *(undefined8 *)((long)register0x00000020 + 0x18) = 1;
          *(undefined8 *)((long)register0x00000020 + 0x20) = 0;
          *(undefined8 *)((long)register0x00000020 + 0x28) = 0;
          mVar11.~r2.tab = (runtime_itab *)len;
          mVar11.~r1 = (int)prVar5;
          mVar11.~r2.data = pvVar4;
          return mVar11;
        }
        prVar5 = (runtime__type *)plVar10[2];
        *(runtime__type **)((long)register0x00000020 + -0x20) = prVar5;
        lVar8 = plVar10[3];
        if (lVar8 - (long)prVar5 < 4) {
                    /* Unresolved local var: []uint8 buf@[???] */
          *(undefined **)((long)register0x00000020 + -0x60) = &DAT_00225720;
          *(runtime__type **)((long)register0x00000020 + -0x58) = prVar5;
          lVar8 = lVar8 * 2 + 4;
          *(long *)((long)register0x00000020 + -0x18) = lVar8;
          *(long *)((long)register0x00000020 + -0x50) = lVar8;
          *(undefined8 *)((long)register0x00000020 + -0x68) = 0x5ac872;
          runtime_makeslice(prVar5,len,lVar8);
          lVar8 = *(long *)((long)register0x00000020 + 8);
          prVar5 = *(runtime__type **)((long)register0x00000020 + -0x20);
          prVar7 = prVar5;
          if ((long)*(runtime__type **)(lVar8 + 0x10) < (long)prVar5) {
            prVar7 = *(runtime__type **)(lVar8 + 0x10);
          }
          lVar6 = *(long *)((long)register0x00000020 + -0x48);
          lVar3 = *(long *)(lVar8 + 8);
          if (lVar3 != lVar6) {
            *(long *)((long)register0x00000020 + -0x10) = lVar6;
            *(long *)((long)register0x00000020 + -0x60) = lVar6;
            *(long *)((long)register0x00000020 + -0x58) = lVar3;
            *(runtime__type **)((long)register0x00000020 + -0x50) = prVar7;
            *(undefined8 *)((long)register0x00000020 + -0x68) = 0x5ac8b0;
            runtime_memmove();
            lVar8 = *(long *)((long)register0x00000020 + 8);
            lVar6 = *(long *)((long)register0x00000020 + -0x10);
            prVar5 = *(runtime__type **)((long)register0x00000020 + -0x20);
          }
          *(runtime__type **)(lVar8 + 0x10) = prVar5;
          *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)((long)register0x00000020 + -0x18);
          if (runtime_writeBarrier._0_4_ == 0) {
            *(long *)(lVar8 + 8) = lVar6;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -0x68) = 0x5ac8e5;
            runtime_gcWriteBarrierCX();
          }
          len = (ulong)*(uint *)((long)register0x00000020 + 0x10);
          plVar10 = *(long **)((long)register0x00000020 + 8);
        }
        prVar7 = (runtime__type *)((long)&prVar5->size + 4);
        if ((runtime__type *)plVar10[3] < prVar7) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)register0x00000020 + -0x68) = 0x5ac98a;
          runtime_panicSliceAcap();
        }
        if (prVar7 < prVar5) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)register0x00000020 + -0x68) = 0x5ac985;
          runtime_panicSliceB();
        }
        lVar8 = plVar10[3] - (long)prVar5;
        *(ulong *)((long)register0x00000020 + -0x60) = (-lVar8 >> 0x3f & (ulong)prVar5) + plVar10[1]
        ;
        *(undefined8 *)((long)register0x00000020 + -0x58) = 4;
        *(long *)((long)register0x00000020 + -0x50) = lVar8;
        *(int *)((long)register0x00000020 + -0x48) = (int)len;
        *(undefined8 *)((long)register0x00000020 + -0x68) = 0x5ac93c;
        p.len = len;
        p.array = (uint8 *)prVar5;
        p.cap = lVar8;
        unicode_utf8_EncodeRune(p,(int32)plVar10);
        lVar8 = *(long *)((long)register0x00000020 + -0x40);
        pvVar4 = *(void **)((long)register0x00000020 + 8);
        mVar12.~r2.tab = *(long *)((long)register0x00000020 + -0x20) + lVar8;
        if (mVar12.~r2.tab <= *(ulong *)((long)pvVar4 + 0x18)) {
          *(ulong *)((long)pvVar4 + 0x10) = mVar12.~r2.tab;
          *(long *)((long)register0x00000020 + 0x18) = lVar8;
          *(undefined8 *)((long)register0x00000020 + 0x20) = 0;
          *(undefined8 *)((long)register0x00000020 + 0x28) = 0;
          mVar12.~r1 = lVar8;
          mVar12.~r2.data = pvVar4;
          return mVar12;
        }
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((long)register0x00000020 + -0x68) = 0x5ac97f;
        runtime_panicSliceAcap();
      }
      if (plVar10 == plVar1) goto LAB_005ac76f;
      *(undefined **)((long)register0x00000020 + -0x60) = &DAT_00225520;
      *(undefined8 **)((long)register0x00000020 + -0x58) = &net_http__stmp_78;
      *(undefined8 *)((long)register0x00000020 + -0x68) = 0x5ac9a6;
      e.data = plVar1;
      e._type = (runtime__type *)&net_http__stmp_78;
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar9 + -8) = 0x5ac9ac;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar9;
  } while( true );
}

