
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bufio.(*Reader).Read(bufio.Reader * b, []uint8 p, int n, error
   err) */

multireturn_int_error_ bufio___Reader__Read(bufio_Reader *b,__uint8 p)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong extraout_RAX;
  ulong uVar5;
  long extraout_RAX_00;
  long extraout_RAX_01;
  long extraout_RAX_02;
  long lVar6;
  long extraout_RAX_03;
  undefined8 extraout_RAX_04;
  undefined8 uVar7;
  runtime__type *prVar8;
  void *pvVar9;
  void *pvVar10;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined1 *puVar11;
  undefined1 *unaff_RBP;
  long *plVar12;
  long in_FS_OFFSET;
  interface___ e;
  interface___ e_00;
  multireturn_int_error_ mVar13;
  multireturn_int_error_ mVar14;
  multireturn_int_error_ mVar15;
  multireturn_int_error_ mVar16;
  multireturn_int_error_ mVar17;
  multireturn_int_error_ mVar18;
  bufio_Reader *b_spill;
  __uint8 p_spill;
  
  do {
    puVar11 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar11 = (undefined1 *)((long)register0x00000020 + -0x48);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      pvVar10 = *(void **)((long)register0x00000020 + 0x18);
      if (pvVar10 == (void *)0x0) {
        uVar5 = *(ulong *)((long)register0x00000020 + 8);
        mVar14.err.data = (void *)(*(long *)(uVar5 + 0x30) - *(long *)(uVar5 + 0x28));
        if ((long)mVar14.err.data < 1) {
                    /* Unresolved local var: error err@[???] */
          pvVar10 = *(void **)(uVar5 + 0x38);
          uVar7 = *(undefined8 *)(uVar5 + 0x40);
          *(undefined8 *)(uVar5 + 0x38) = 0;
          if (runtime_writeBarrier._0_4_ == 0) {
            *(undefined8 *)(uVar5 + 0x40) = 0;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -0x50) = 0x6743ed;
            runtime_gcWriteBarrier();
            uVar5 = extraout_RAX;
            uVar7 = extraout_RDX;
          }
          *(undefined8 *)((long)register0x00000020 + 0x28) = 0;
          *(void **)((long)register0x00000020 + 0x30) = pvVar10;
          *(undefined8 *)((long)register0x00000020 + 0x38) = uVar7;
          mVar13.err.tab = (runtime_itab *)0x0;
          mVar13.n = uVar5;
          mVar13.err.data = pvVar10;
          return mVar13;
        }
        *(undefined8 *)((long)register0x00000020 + 0x28) = 0;
        *(undefined8 *)((long)register0x00000020 + 0x30) = 0;
        *(undefined8 *)((long)register0x00000020 + 0x38) = 0;
        mVar14.err.tab = (runtime_itab *)0x0;
        mVar14.n = uVar5;
        return mVar14;
      }
      plVar12 = *(long **)((long)register0x00000020 + 8);
      if (plVar12[6] != plVar12[5]) {
LAB_00674637:
        uVar5 = plVar12[5];
        uVar4 = plVar12[6];
        if ((ulong)plVar12[2] < uVar4) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x674705;
          runtime_panicSliceAcap();
        }
        if (uVar5 <= uVar4) {
          lVar6 = *plVar12 + (uVar5 & (long)(uVar5 - plVar12[2]) >> 0x3f);
          pvVar9 = (void *)(uVar4 - uVar5);
          if ((long)pvVar10 <= (long)(uVar4 - uVar5)) {
            pvVar9 = pvVar10;
          }
          if (*(long *)((long)register0x00000020 + 0x10) != lVar6) {
            *(void **)((long)register0x00000020 + -0x10) = pvVar9;
            *(long *)((long)register0x00000020 + -0x48) = *(long *)((long)register0x00000020 + 0x10)
            ;
            *(long *)((long)register0x00000020 + -0x40) = lVar6;
            *(void **)((long)register0x00000020 + -0x38) = pvVar9;
            *(undefined8 *)((long)register0x00000020 + -0x50) = 0x674696;
            runtime_memmove();
            pvVar9 = *(void **)((long)register0x00000020 + -0x10);
            plVar12 = *(long **)((long)register0x00000020 + 8);
          }
          lVar2 = plVar12[5];
          lVar6 = (long)pvVar9 + lVar2;
          plVar12[5] = lVar6;
          if ((ulong)((long)pvVar9 + lVar2 + -1) < (ulong)plVar12[1]) {
            mVar18.n = (ulong)*(byte *)(lVar6 + -1 + *plVar12);
            plVar12[9] = mVar18.n;
            plVar12[10] = -1;
            *(void **)((long)register0x00000020 + 0x28) = pvVar9;
            *(undefined8 *)((long)register0x00000020 + 0x30) = 0;
            *(undefined8 *)((long)register0x00000020 + 0x38) = 0;
            mVar18.err.tab = (runtime_itab *)lVar6;
            mVar18.err.data = pvVar9;
            return mVar18;
          }
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x6746f8;
          runtime_panicIndex();
        }
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x6746fd;
        runtime_panicSliceB();
      }
      lVar6 = plVar12[7];
      pvVar9 = (void *)plVar12[8];
      if (lVar6 != 0) {
        plVar12[7] = 0;
        if (runtime_writeBarrier._0_4_ == 0) {
          plVar12[8] = 0;
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x674470;
          runtime_gcWriteBarrierDX();
          lVar6 = extraout_RAX_00;
        }
        *(undefined8 *)((long)register0x00000020 + 0x28) = 0;
        *(long *)((long)register0x00000020 + 0x30) = lVar6;
        *(void **)((long)register0x00000020 + 0x38) = pvVar9;
        mVar15.err.tab = pvVar10;
        mVar15.n = lVar6;
        mVar15.err.data = pvVar9;
        return mVar15;
      }
      if ((long)pvVar10 < plVar12[1]) {
        plVar12[5] = 0;
        plVar12[6] = 0;
        pcVar1 = *(code **)(plVar12[3] + 0x18);
        lVar6 = *plVar12;
        lVar2 = plVar12[1];
        lVar3 = plVar12[2];
        *(long *)((long)register0x00000020 + -0x48) = plVar12[4];
        *(long *)((long)register0x00000020 + -0x40) = lVar6;
        *(long *)((long)register0x00000020 + -0x38) = lVar2;
        *(long *)((long)register0x00000020 + -0x30) = lVar3;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x6745a5;
        (*pcVar1)();
        lVar6 = *(long *)((long)register0x00000020 + -0x28);
        pvVar10 = *(void **)((long)register0x00000020 + -0x18);
        pvVar9 = *(void **)((long)register0x00000020 + 8);
        *(undefined8 *)((long)pvVar9 + 0x38) = *(undefined8 *)((long)register0x00000020 + -0x20);
        if (runtime_writeBarrier._0_4_ == 0) {
          *(void **)((long)pvVar9 + 0x40) = pvVar10;
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x6745d5;
          runtime_gcWriteBarrierCX();
          lVar6 = extraout_RAX_03;
        }
        if (-1 < lVar6) {
          if (lVar6 == 0) {
                    /* Unresolved local var: error err@[???] */
            uVar7 = *(undefined8 *)((long)pvVar9 + 0x38);
            *(undefined8 *)((long)pvVar9 + 0x38) = 0;
            if (runtime_writeBarrier._0_4_ == 0) {
              *(undefined8 *)((long)pvVar9 + 0x40) = 0;
            }
            else {
              *(undefined8 *)((long)register0x00000020 + -0x50) = 0x674609;
              runtime_gcWriteBarrierDX();
              uVar7 = extraout_RAX_04;
            }
            *(undefined8 *)((long)register0x00000020 + 0x28) = 0;
            *(undefined8 *)((long)register0x00000020 + 0x30) = uVar7;
            *(void **)((long)register0x00000020 + 0x38) = pvVar10;
            mVar17.err.tab = pvVar9;
            mVar17.n = uVar7;
            mVar17.err.data = pvVar10;
            return mVar17;
          }
          *(long *)((long)pvVar9 + 0x30) = *(long *)((long)pvVar9 + 0x30) + lVar6;
          pvVar10 = *(void **)((long)register0x00000020 + 0x18);
          plVar12 = *(long **)((long)register0x00000020 + 8);
          goto LAB_00674637;
        }
        prVar8 = (runtime__type *)0x0;
        if (bufio_errNegativeRead.tab != (runtime_itab *)0x0) {
          prVar8 = (bufio_errNegativeRead.tab)->_type;
        }
        *(runtime__type **)((long)register0x00000020 + -0x48) = prVar8;
        *(void **)((long)register0x00000020 + -0x40) = bufio_errNegativeRead.data;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x67472a;
        e.data = pvVar9;
        e._type = prVar8;
        runtime_gopanic(e);
        goto LAB_0067472a;
      }
      pcVar1 = *(code **)(plVar12[3] + 0x18);
      *(long *)((long)register0x00000020 + -0x48) = plVar12[4];
      *(undefined8 *)((long)register0x00000020 + -0x40) =
           *(undefined8 *)((long)register0x00000020 + 0x10);
      *(void **)((long)register0x00000020 + -0x38) = pvVar10;
      *(undefined8 *)((long)register0x00000020 + -0x30) =
           *(undefined8 *)((long)register0x00000020 + 0x20);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x6744c5;
      (*pcVar1)();
      lVar6 = *(long *)((long)register0x00000020 + -0x28);
      uVar7 = *(undefined8 *)((long)register0x00000020 + -0x18);
      pvVar10 = *(void **)((long)register0x00000020 + 8);
      *(undefined8 *)((long)pvVar10 + 0x38) = *(undefined8 *)((long)register0x00000020 + -0x20);
      if (runtime_writeBarrier._0_4_ == 0) {
        *(undefined8 *)((long)pvVar10 + 0x40) = uVar7;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x6744f5;
        runtime_gcWriteBarrierCX();
        lVar6 = extraout_RAX_01;
      }
      if (-1 < lVar6) {
        if (0 < lVar6) {
          if (*(ulong *)((long)register0x00000020 + 0x18) <= lVar6 - 1U) {
LAB_0067472a:
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((long)register0x00000020 + -0x50) = 0x674732;
            runtime_panicIndex();
          }
          *(ulong *)((long)pvVar10 + 0x48) =
               (ulong)*(byte *)(lVar6 + -1 + *(long *)((long)register0x00000020 + 0x10));
          *(undefined8 *)((long)pvVar10 + 0x50) = 0xffffffffffffffff;
        }
                    /* Unresolved local var: error err@[???] */
        pvVar9 = *(void **)((long)pvVar10 + 0x38);
        uVar7 = *(undefined8 *)((long)pvVar10 + 0x40);
        *(undefined8 *)((long)pvVar10 + 0x38) = 0;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(undefined8 *)((long)pvVar10 + 0x40) = 0;
        }
        else {
          pvVar10 = (void *)0x0;
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x674554;
          runtime_gcWriteBarrierBX();
          lVar6 = extraout_RAX_02;
          uVar7 = extraout_RDX_00;
        }
        *(long *)((long)register0x00000020 + 0x28) = lVar6;
        *(void **)((long)register0x00000020 + 0x30) = pvVar9;
        *(undefined8 *)((long)register0x00000020 + 0x38) = uVar7;
        mVar16.err.tab = pvVar10;
        mVar16.n = lVar6;
        mVar16.err.data = pvVar9;
        return mVar16;
      }
      prVar8 = (runtime__type *)0x0;
      if (bufio_errNegativeRead.tab != (runtime_itab *)0x0) {
        prVar8 = (bufio_errNegativeRead.tab)->_type;
      }
      *(runtime__type **)((long)register0x00000020 + -0x48) = prVar8;
      *(void **)((long)register0x00000020 + -0x40) = bufio_errNegativeRead.data;
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x674757;
      e_00.data = pvVar10;
      e_00._type = prVar8;
      runtime_gopanic(e_00);
    }
    *(undefined8 *)(puVar11 + -8) = 0x67475d;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar11;
  } while( true );
}

