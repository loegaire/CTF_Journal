
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.selectgo(runtime.scase * cas0, uint16 * order0, uintptr *
   pc0, int nsends, int nrecvs, bool block, int ~r6, bool ~r7) */

multireturn_int_bool_
runtime_selectgo(runtime_scase *cas0,uint16 *order0,uintptr *pc0,int nsends,int nrecvs,bool block)

{
  runtime_waitReason reason;
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  uintptr uVar5;
  runtime_guintptr rVar6;
  runtime__type *typ;
  runtime__panic *prVar7;
  undefined8 extraout_RAX;
  long extraout_RAX_00;
  undefined8 *extraout_RAX_01;
  undefined8 *extraout_RAX_02;
  undefined8 *extraout_RAX_03;
  undefined8 *extraout_RAX_04;
  undefined8 *extraout_RAX_05;
  undefined8 *extraout_RAX_06;
  undefined8 *extraout_RAX_07;
  undefined8 *extraout_RAX_08;
  long extraout_RAX_09;
  long extraout_RAX_10;
  runtime_sudog *prVar8;
  runtime_sudog *extraout_RAX_11;
  runtime_sudog *extraout_RAX_12;
  runtime_sudog *extraout_RAX_13;
  runtime_sudog *extraout_RAX_14;
  runtime_sudog *extraout_RAX_15;
  runtime_sudog *extraout_RAX_16;
  runtime_sudog *extraout_RAX_17;
  runtime_sudog *extraout_RAX_18;
  runtime_sudog *extraout_RAX_19;
  runtime_sudog *extraout_RAX_20;
  runtime_sudog *extraout_RAX_21;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  runtime_sudog *prVar12;
  undefined1 uVar13;
  ulong uVar14;
  ulong extraout_RDX;
  runtime_sudog *extraout_RDX_00;
  runtime_g **pprVar15;
  runtime_g **extraout_RDX_01;
  runtime_g **extraout_RDX_02;
  runtime_g **extraout_RDX_03;
  runtime_g **extraout_RDX_04;
  runtime_g **extraout_RDX_05;
  runtime_g **extraout_RDX_06;
  runtime_g **extraout_RDX_07;
  runtime_g **extraout_RDX_08;
  ulong extraout_RDX_09;
  ulong extraout_RDX_10;
  ulong extraout_RDX_11;
  ulong extraout_RDX_12;
  ulong uVar16;
  runtime_sudog *sg;
  ulong uVar17;
  undefined1 *puVar18;
  undefined1 *unaff_RBP;
  runtime_sudog *prVar19;
  func__ **unlockf;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined8 *puVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  runtime_sudog *prVar27;
  runtime_g *prVar28;
  ulong uVar29;
  long lVar30;
  long *plVar31;
  char cVar32;
  uint uVar33;
  ulong uVar34;
  ulong uVar35;
  long in_FS_OFFSET;
  bool bVar36;
  interface___ e;
  string s;
  string s_00;
  __uint16 lockorder;
  __uint16 lockorder_00;
  __uint16 lockorder_01;
  __uint16 lockorder_02;
  __uint16 lockorder_03;
  __uint16 lockorder_04;
  __uint16 lockorder_05;
  __uint16 lockorder_06;
  multireturn_int_bool_ mVar37;
  __runtime_scase scases;
  __runtime_scase scases_00;
  __runtime_scase scases_01;
  __runtime_scase scases_02;
  __runtime_scase scases_03;
  __runtime_scase scases_04;
  __runtime_scase scases_05;
  __runtime_scase scases_06;
  runtime_scase (*cas1) [65536];
  uint16 (*order1) [131072];
  uintptr *pc0_spill;
  int nsends_spill;
  int nrecvs_spill;
  bool block_spill;
  
  do {
                    /* Unresolved local var: int ncases@[???]
                       Unresolved local var: int64 t0@[???]
                       Unresolved local var: int norder@[???]
                       Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: runtime.sudog * sg@[???]
                       Unresolved local var: runtime.hchan * c@[???]
                       Unresolved local var: runtime.scase * k@[???]
                       Unresolved local var: runtime.sudog * sglist@[???]
                       Unresolved local var: runtime.sudog * sgnext@[???]
                       Unresolved local var: void * qp@[???]
                       Unresolved local var: runtime.sudog * * nextp@[???]
                       Unresolved local var: int casi@[???]
                       Unresolved local var: runtime.scase * cas@[???]
                       Unresolved local var: bool caseSuccess@[???]
                       Unresolved local var: int64 caseReleaseTime@[???]
                       Unresolved local var: bool recvOK@[???]
                       Unresolved local var: []runtime.scase scases@[???]
                       Unresolved local var: []uint16 pollorder@[???]
                       Unresolved local var: []uint16 lockorder@[???]
                       Unresolved local var: []uintptr pcs@[???] */
    puVar18 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) <
        (undefined1 *)((long)register0x00000020 + -0x98)) {
      puVar18 = (undefined1 *)((long)register0x00000020 + -0x118);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      lVar9 = *(long *)((long)register0x00000020 + 8);
      lVar22 = *(long *)((long)register0x00000020 + 0x20);
      uVar10 = *(long *)((long)register0x00000020 + 0x28) + lVar22;
      if (uVar10 < 0x10001) {
        lVar26 = *(long *)((long)register0x00000020 + 0x10);
        lVar24 = *(long *)((long)register0x00000020 + 0x28) + lVar22 + -0x20000;
        uVar14 = uVar10 * 2 & lVar24 >> 0x3f;
        lVar30 = lVar26 + uVar14;
        if (uVar10 <= (ulong)-lVar24) break;
        *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fb650;
        runtime_panicSlice3Acap();
      }
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fb65a;
      runtime_panicSlice3Alen();
    }
    *(undefined8 *)(puVar18 + -8) = 0x4fb665;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar18;
  } while( true );
  *(ulong *)((long)register0x00000020 + -0xa0) = uVar10;
  *(ulong *)((long)register0x00000020 + -0xa8) = uVar14;
  *(long *)((long)register0x00000020 + -0x80) = lVar30;
  if (runtime_blockprofilerate == 0) {
    uVar11 = 0;
  }
  else {
    *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fa158;
    runtime_cputicks();
    uVar11 = *(undefined8 *)((long)register0x00000020 + -0x118);
                    /* Unresolved local var: int i@[???] */
    uVar10 = *(ulong *)((long)register0x00000020 + -0xa0);
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: uint16 o@[???]
                       Unresolved local var: runtime.hchan * c@[???]
                       Unresolved local var: int j@[???] */
    uVar14 = *(ulong *)((long)register0x00000020 + -0xa8);
    lVar9 = *(long *)((long)register0x00000020 + 8);
    lVar22 = *(long *)((long)register0x00000020 + 0x20);
    lVar26 = *(long *)((long)register0x00000020 + 0x10);
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int j@[???]
                       Unresolved local var: runtime.hchan * c@[???] */
    lVar30 = *(long *)((long)register0x00000020 + -0x80);
  }
  uVar16 = 0;
  for (lVar24 = 0; lVar24 < (long)uVar10; lVar24 = lVar24 + 1) {
    if (*(long *)(lVar9 + lVar24 * 0x10) == 0) {
      if (runtime_writeBarrier._0_4_ == 0) {
        *(undefined8 *)(lVar9 + 8 + lVar24 * 0x10) = 0;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fa266;
        runtime_gcWriteBarrierR8();
        uVar11 = extraout_RAX;
        uVar14 = extraout_RDX;
      }
    }
    else {
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: uint32 s1@[???]
                       Unresolved local var: uint32 s0@[???] */
      lVar4 = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30);
      uVar33 = *(uint *)(lVar4 + 0x128);
      uVar3 = *(uint *)(lVar4 + 300);
      *(uint *)(lVar4 + 0x128) = uVar3;
      uVar33 = uVar33 << 0x11 ^ uVar33;
      uVar33 = uVar3 >> 0x10 ^ uVar33 >> 7 ^ uVar3 ^ uVar33;
      *(uint *)(lVar4 + 300) = uVar33;
      uVar34 = (ulong)(uVar3 + uVar33) * (uVar16 + 1 & 0xffffffff) >> 0x20;
      if (uVar10 <= uVar34) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fb645;
        runtime_panicIndex();
      }
      if (uVar10 <= uVar16) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fb638;
        runtime_panicIndex();
      }
      *(undefined2 *)(lVar26 + uVar16 * 2) = *(undefined2 *)(lVar26 + uVar34 * 2);
      *(short *)(lVar26 + uVar34 * 2) = (short)lVar24;
      uVar16 = uVar16 + 1;
    }
  }
  if (uVar10 < uVar16) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fb630;
    runtime_panicSliceAcap();
  }
  for (uVar34 = 0; uVar25 = uVar16, (long)uVar34 < (long)uVar16; uVar34 = uVar34 + 1) {
    uVar25 = (ulong)*(ushort *)(lVar26 + uVar34 * 2);
    if (uVar10 <= uVar25) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fb625;
      runtime_panicIndex();
    }
    uVar25 = *(ulong *)(lVar9 + uVar25 * 0x10);
    *(ulong *)((long)register0x00000020 + -0x68) = uVar25;
    uVar17 = uVar34;
    while (0 < (long)uVar17) {
      uVar35 = (long)((uVar17 - ((long)(uVar17 - 1) >> 0x3f)) + -1) >> 1;
      if (uVar16 <= uVar35) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fb619;
        runtime_panicIndex();
      }
      uVar2 = *(ushort *)(lVar30 + uVar35 * 2);
      if (uVar10 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fb60e;
        runtime_panicIndex();
      }
      *(ushort *)((long)register0x00000020 + -0xe2) = uVar2;
      if (uVar25 <= *(ulong *)(lVar9 + (ulong)uVar2 * 0x10)) break;
      if (uVar16 <= uVar17) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fb606;
        runtime_panicIndex();
      }
      *(undefined2 *)(lVar30 + uVar17 * 2) = *(undefined2 *)((long)register0x00000020 + -0xe2);
      uVar25 = *(ulong *)((long)register0x00000020 + -0x68);
      uVar17 = uVar35;
    }
    if (uVar16 <= uVar17) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fb5fb;
      runtime_panicIndex();
    }
    *(undefined2 *)(lVar30 + uVar17 * 2) = *(undefined2 *)(lVar26 + uVar34 * 2);
  }
  while (scases.len = uVar25 - 1, -1 < (long)scases.len) {
    uVar2 = *(ushort *)(lVar30 + scases.len * 2);
    if (uVar10 <= uVar2) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fb585;
      runtime_panicIndex();
    }
    uVar34 = *(ulong *)(lVar9 + (ulong)uVar2 * 0x10);
    *(undefined2 *)(lVar30 + scases.len * 2) = *(undefined2 *)(lVar26 + uVar14);
    uVar25 = 0;
    while (uVar17 = uVar25 * 2 + 1, (long)uVar17 < (long)scases.len) {
      uVar14 = uVar25 * 2 + 2;
      if ((long)uVar14 < (long)scases.len) {
        if (uVar16 <= uVar17) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fb57d;
          runtime_panicIndex();
        }
        uVar35 = (ulong)*(ushort *)(lVar30 + uVar25 * 4 + 2);
        if (uVar10 <= uVar35) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fb572;
          runtime_panicIndex();
        }
        if (uVar16 <= uVar14) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fb56a;
          runtime_panicIndex();
        }
        uVar29 = (ulong)*(ushort *)(lVar30 + uVar25 * 4 + 4);
        if (uVar10 <= uVar29) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fb55f;
          runtime_panicIndex();
        }
        if (*(ulong *)(uVar35 * 0x10 + lVar9) < *(ulong *)(uVar29 * 0x10 + lVar9)) {
          lVar26 = *(long *)((long)register0x00000020 + 0x10);
          uVar17 = uVar14;
        }
        else {
          lVar26 = *(long *)((long)register0x00000020 + 0x10);
        }
      }
      if (uVar16 <= uVar17) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fb557;
        runtime_panicIndex();
      }
      uVar1 = *(ushort *)(lVar30 + uVar17 * 2);
      if (uVar10 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fb54c;
        runtime_panicIndex();
      }
      *(ushort *)((long)register0x00000020 + -0xe2) = uVar1;
      if (*(ulong *)(lVar9 + (ulong)uVar1 * 0x10) <= uVar34) {
        uVar14 = *(ulong *)((long)register0x00000020 + -0xa8);
        lVar22 = *(long *)((long)register0x00000020 + 0x20);
        break;
      }
      if (uVar16 <= uVar25) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fb545;
        runtime_panicIndex();
      }
                    /* Unresolved local var: int k@[???] */
      *(undefined2 *)(lVar30 + uVar25 * 2) = *(undefined2 *)((long)register0x00000020 + -0xe2);
      uVar14 = *(ulong *)((long)register0x00000020 + -0xa8);
      lVar22 = *(long *)((long)register0x00000020 + 0x20);
      uVar25 = uVar17;
    }
    if (uVar16 <= uVar25) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fb536;
      runtime_panicIndex();
    }
    *(ushort *)(lVar30 + uVar25 * 2) = uVar2;
    uVar25 = scases.len;
  }
  *(undefined8 *)((long)register0x00000020 + -0xe0) = uVar11;
  *(ulong *)((long)register0x00000020 + -0xd8) = uVar16;
  *(long *)((long)register0x00000020 + -0x118) = lVar9;
  *(ulong *)((long)register0x00000020 + -0x110) = uVar10;
  *(ulong *)((long)register0x00000020 + -0x108) = uVar10;
  *(long *)((long)register0x00000020 + -0x100) = lVar30;
  *(ulong *)((long)register0x00000020 + -0xf8) = uVar16;
  *(ulong *)((long)register0x00000020 + -0xf0) = uVar10;
  *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fa34b;
  lockorder.len = lVar9;
  lockorder.array = (uint16 *)uVar16;
  lockorder.cap = lVar22;
  scases.array = (runtime_scase *)uVar11;
  scases.cap = uVar10;
  runtime_sellock(scases,lockorder);
  prVar8 = *(runtime_sudog **)((long)register0x00000020 + 0x20);
  prVar12 = *(runtime_sudog **)((long)register0x00000020 + 8);
  uVar10 = *(ulong *)((long)register0x00000020 + -0xa0);
  sg = *(runtime_sudog **)((long)register0x00000020 + -0xd8);
  lVar9 = *(long *)((long)register0x00000020 + 0x10);
  for (unlockf = (func__ **)0x0; (long)unlockf < (long)sg; unlockf = (func__ **)((long)unlockf + 1))
  {
    uVar14 = (ulong)*(ushort *)(lVar9 + (long)unlockf * 2);
    if (uVar10 <= uVar14) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fb43d;
      runtime_panicIndex();
    }
    *(func__ ***)((long)register0x00000020 + -0xa8) = unlockf;
    *(ulong *)((long)register0x00000020 + -0xb0) = uVar14;
    lVar22 = uVar14 * 0x10;
    prVar28 = (&prVar12->g)[uVar14 * 2];
    *(runtime_g **)((long)register0x00000020 + -0x60) = prVar28;
    if ((long)uVar14 < (long)prVar8) {
      if (*(int *)((long)&prVar28->stackguard1 + 4) != 0) {
        lVar9 = *(long *)((long)register0x00000020 + -0x80);
        prVar19 = prVar12;
        prVar27 = sg;
        goto LAB_004fae25;
      }
      do {
        plVar31 = (long *)(prVar28->sched).sp;
        if (plVar31 == (long *)0x0) {
          plVar31 = (long *)0x0;
          break;
        }
        uVar5 = plVar31[1];
        if (uVar5 == 0) {
          if (runtime_writeBarrier._0_4_ == 0) {
            (prVar28->sched).sp = 0;
            (prVar28->sched).pc = 0;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4faf45;
            runtime_gcWriteBarrierR9();
            *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4faf4e;
            runtime_gcWriteBarrierR9();
            prVar8 = extraout_RAX_19;
            uVar10 = extraout_RDX_10;
          }
        }
        else if (runtime_writeBarrier._0_4_ == 0) {
          *(undefined8 *)(uVar5 + 0x10) = 0;
          (prVar28->sched).sp = uVar5;
          plVar31[1] = 0;
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4faef8;
          runtime_gcWriteBarrierR9();
          *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4faf06;
          runtime_gcWriteBarrierR8();
          *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4faf0f;
          runtime_gcWriteBarrierR9();
          unlockf = *(func__ ***)((long)register0x00000020 + -0xa8);
          prVar8 = extraout_RAX_18;
          uVar10 = extraout_RDX_09;
        }
        if (*(char *)((long)plVar31 + 0x34) == '\0') {
          bVar36 = false;
        }
        else {
          LOCK();
          bVar36 = *(int *)(*plVar31 + 0x178) == 0;
          if (bVar36) {
            *(int *)(*plVar31 + 0x178) = 1;
          }
          UNLOCK();
          bVar36 = !bVar36;
        }
      } while (bVar36);
      if (plVar31 != (long *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x28) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x18) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x10) = 0;
        *(code **)((long)register0x00000020 + -0x40) = runtime_selectgo_func3;
        *(runtime_sudog **)((long)register0x00000020 + -0x38) = prVar12;
        *(ulong *)((long)register0x00000020 + -0x30) = uVar10;
        *(ulong *)((long)register0x00000020 + -0x28) = uVar10;
        *(undefined8 *)((long)register0x00000020 + -0x20) =
             *(undefined8 *)((long)register0x00000020 + -0x80);
        *(runtime_sudog **)((long)register0x00000020 + -0x18) = sg;
        *(ulong *)((long)register0x00000020 + -0x10) = uVar10;
        uVar11 = *(undefined8 *)((long)&prVar12->next + lVar22);
        *(runtime_g **)((long)register0x00000020 + -0x118) = prVar28;
        *(long **)((long)register0x00000020 + -0x110) = plVar31;
        *(undefined8 *)((long)register0x00000020 + -0x108) = uVar11;
        *(runtime_hchan **)((long)register0x00000020 + -0x100) =
             (runtime_hchan *)((long)register0x00000020 + -0x40);
        *(undefined8 *)((long)register0x00000020 + -0xf8) = 2;
        *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fb0e9;
        runtime_send((runtime_hchan *)((long)register0x00000020 + -0x40),sg,prVar12,unlockf,lVar9);
        lVar9 = -1;
        uVar11 = *(undefined8 *)((long)register0x00000020 + -0xb0);
        uVar13 = 0;
        goto LAB_004fa475;
      }
      if ((prVar28->stack).lo < (prVar28->stack).hi) {
        prVar7 = prVar28->_panic;
        sg = *(runtime_sudog **)((long)&prVar12->next + lVar22);
        lVar24 = (ulong)(ushort)prVar28->stackguard1 * (long)prVar28->_defer + prVar28->stackguard0;
        *(runtime__panic **)((long)register0x00000020 + -0x118) = prVar7;
        *(long *)((long)register0x00000020 + -0x110) = lVar24;
        *(runtime_sudog **)((long)register0x00000020 + -0x108) = sg;
        *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fafc5;
        runtime_typedmemmove((runtime__type *)prVar7,sg,prVar12);
        plVar31 = *(long **)((long)register0x00000020 + -0x60);
        lVar9 = plVar31[5];
        plVar31[5] = lVar9 + 1;
        if (plVar31[1] == lVar9 + 1) {
          plVar31[5] = 0;
        }
        *plVar31 = *plVar31 + 1;
        *(undefined8 *)((long)register0x00000020 + -0x118) =
             *(undefined8 *)((long)register0x00000020 + 8);
        uVar11 = *(undefined8 *)((long)register0x00000020 + -0xa0);
        *(undefined8 *)((long)register0x00000020 + -0x110) = uVar11;
        *(undefined8 *)((long)register0x00000020 + -0x108) = uVar11;
        *(undefined8 *)((long)register0x00000020 + -0x100) =
             *(undefined8 *)((long)register0x00000020 + -0x80);
        *(int *)((long)register0x00000020 + -0xf8) = *(int *)((long)register0x00000020 + -0xd8);
        *(undefined8 *)((long)register0x00000020 + -0xf0) = uVar11;
        *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fb025;
        lockorder_04.len = lVar24;
        lockorder_04.array = (uint16 *)unlockf;
        lockorder_04.cap = lVar22;
        scases_04.len = (int)sg;
        scases_04.array = (runtime_scase *)uVar11;
        scases_04.cap = *(int *)((long)register0x00000020 + -0xd8);
        runtime_selunlock(scases_04,lockorder_04);
        lVar9 = -1;
        uVar11 = *(undefined8 *)((long)register0x00000020 + -0xb0);
        uVar13 = 0;
        goto LAB_004fa475;
      }
    }
    else {
      do {
        plVar31 = (long *)(prVar28->sched).g;
        if (plVar31 == (long *)0x0) {
          plVar31 = (long *)0x0;
          break;
        }
        rVar6 = plVar31[1];
        if (rVar6 == 0) {
          if (runtime_writeBarrier._0_4_ == 0) {
            (prVar28->sched).g = 0;
            (prVar28->sched).ctxt = (void *)0x0;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fb1b0;
            runtime_gcWriteBarrierR9();
            *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fb1b9;
            runtime_gcWriteBarrierR9();
            prVar8 = extraout_RAX_21;
            uVar10 = extraout_RDX_12;
          }
        }
        else if (runtime_writeBarrier._0_4_ == 0) {
          *(undefined8 *)(rVar6 + 0x10) = 0;
          (prVar28->sched).g = rVar6;
          plVar31[1] = 0;
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fb165;
          runtime_gcWriteBarrierR9();
          *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fb173;
          runtime_gcWriteBarrierR8();
          *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fb17c;
          runtime_gcWriteBarrierR9();
          unlockf = *(func__ ***)((long)register0x00000020 + -0xa8);
          prVar8 = extraout_RAX_20;
          uVar10 = extraout_RDX_11;
        }
        if (*(char *)((long)plVar31 + 0x34) == '\0') {
          bVar36 = false;
        }
        else {
          LOCK();
          bVar36 = *(int *)(*plVar31 + 0x178) == 0;
          if (bVar36) {
            *(int *)(*plVar31 + 0x178) = 1;
          }
          UNLOCK();
          bVar36 = !bVar36;
        }
      } while (bVar36);
      if (plVar31 != (long *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x28) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x18) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x10) = 0;
        *(code **)((long)register0x00000020 + -0x40) = runtime_selectgo_func2;
        *(runtime_sudog **)((long)register0x00000020 + -0x38) = prVar12;
        *(ulong *)((long)register0x00000020 + -0x30) = uVar10;
        *(ulong *)((long)register0x00000020 + -0x28) = uVar10;
        *(undefined8 *)((long)register0x00000020 + -0x20) =
             *(undefined8 *)((long)register0x00000020 + -0x80);
        *(runtime_sudog **)((long)register0x00000020 + -0x18) = sg;
        *(ulong *)((long)register0x00000020 + -0x10) = uVar10;
        uVar11 = *(undefined8 *)((long)&prVar12->next + lVar22);
        *(runtime_g **)((long)register0x00000020 + -0x118) = prVar28;
        *(long **)((long)register0x00000020 + -0x110) = plVar31;
        *(undefined8 *)((long)register0x00000020 + -0x108) = uVar11;
        *(runtime_hchan **)((long)register0x00000020 + -0x100) =
             (runtime_hchan *)((long)register0x00000020 + -0x40);
        *(undefined8 *)((long)register0x00000020 + -0xf8) = 2;
        *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fb41c;
        runtime_recv((runtime_hchan *)((long)register0x00000020 + -0x40),sg,prVar12,unlockf,lVar9);
        lVar9 = -1;
        uVar11 = *(undefined8 *)((long)register0x00000020 + -0xb0);
        uVar13 = 1;
        goto LAB_004fa475;
      }
      if ((prVar28->stack).lo != 0) {
        lVar9 = *(long *)((long)&prVar12->next + lVar22);
        lVar24 = (ulong)(ushort)prVar28->stackguard1 * (long)prVar28->m + prVar28->stackguard0;
        if (lVar9 != 0) {
          *(long *)((long)register0x00000020 + -0x90) = lVar24;
          prVar7 = prVar28->_panic;
          *(runtime__panic **)((long)register0x00000020 + -0x118) = prVar7;
          *(long *)((long)register0x00000020 + -0x110) = lVar9;
          *(long *)((long)register0x00000020 + -0x108) = lVar24;
          *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fb2d3;
          runtime_typedmemmove((runtime__type *)prVar7,sg,prVar12);
          lVar24 = *(long *)((long)register0x00000020 + -0x90);
          prVar28 = *(runtime_g **)((long)register0x00000020 + -0x60);
        }
        prVar7 = prVar28->_panic;
        *(runtime__panic **)((long)register0x00000020 + -0x118) = prVar7;
        *(long *)((long)register0x00000020 + -0x110) = lVar24;
        *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fb2f5;
        runtime_typedmemclr((runtime__type *)prVar7,sg);
        plVar31 = *(long **)((long)register0x00000020 + -0x60);
        lVar30 = plVar31[6];
        plVar31[6] = lVar30 + 1;
        if (plVar31[1] == lVar30 + 1) {
          plVar31[6] = 0;
        }
        *plVar31 = *plVar31 + -1;
        *(undefined8 *)((long)register0x00000020 + -0x118) =
             *(undefined8 *)((long)register0x00000020 + 8);
        uVar11 = *(undefined8 *)((long)register0x00000020 + -0xa0);
        *(undefined8 *)((long)register0x00000020 + -0x110) = uVar11;
        *(undefined8 *)((long)register0x00000020 + -0x108) = uVar11;
        *(undefined8 *)((long)register0x00000020 + -0x100) =
             *(undefined8 *)((long)register0x00000020 + -0x80);
        *(int *)((long)register0x00000020 + -0xf8) = *(int *)((long)register0x00000020 + -0xd8);
        *(undefined8 *)((long)register0x00000020 + -0xf0) = uVar11;
        *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fb355;
        lockorder_06.len = lVar9;
        lockorder_06.array = (uint16 *)lVar24;
        lockorder_06.cap = lVar22;
        scases_06.len = (int)sg;
        scases_06.array = (runtime_scase *)uVar11;
        scases_06.cap = *(int *)((long)register0x00000020 + -0xd8);
        runtime_selunlock(scases_06,lockorder_06);
        lVar9 = -1;
        uVar11 = *(undefined8 *)((long)register0x00000020 + -0xb0);
        uVar13 = 1;
        goto LAB_004fa475;
      }
      if (*(int *)((long)&prVar28->stackguard1 + 4) != 0) {
        *(long *)((long)register0x00000020 + -0xa0) = lVar22;
        *(runtime_sudog **)((long)register0x00000020 + -0x118) = prVar12;
        *(ulong *)((long)register0x00000020 + -0x110) = uVar10;
        *(ulong *)((long)register0x00000020 + -0x108) = uVar10;
        *(undefined8 *)((long)register0x00000020 + -0x100) =
             *(undefined8 *)((long)register0x00000020 + -0x80);
        *(runtime_sudog **)((long)register0x00000020 + -0xf8) = sg;
        *(ulong *)((long)register0x00000020 + -0xf0) = uVar10;
        *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fb255;
        lockorder_05.len = lVar9;
        lockorder_05.array = (uint16 *)unlockf;
        lockorder_05.cap = lVar22;
        scases_05.len = (int)sg;
        scases_05.array = (runtime_scase *)*(undefined8 *)((long)register0x00000020 + -0x80);
        scases_05.cap = (int)prVar12;
        runtime_selunlock(scases_05,lockorder_05);
        typ = *(runtime__type **)
               (*(long *)((long)register0x00000020 + 8) + 8 +
               *(long *)((long)register0x00000020 + -0xa0));
        if (typ != (runtime__type *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x118) =
               *(undefined8 *)(*(long *)((long)register0x00000020 + -0x60) + 0x20);
          *(runtime__type **)((long)register0x00000020 + -0x110) = typ;
          *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fb286;
          runtime_typedmemclr(typ,sg);
        }
        lVar9 = -1;
        uVar11 = *(undefined8 *)((long)register0x00000020 + -0xb0);
        uVar13 = 0;
        goto LAB_004fa475;
      }
    }
  }
  if (*(char *)((long)register0x00000020 + 0x30) == '\0') {
    *(runtime_sudog **)((long)register0x00000020 + -0x118) = prVar12;
    *(ulong *)((long)register0x00000020 + -0x110) = uVar10;
    *(ulong *)((long)register0x00000020 + -0x108) = uVar10;
    *(undefined8 *)((long)register0x00000020 + -0x100) =
         *(undefined8 *)((long)register0x00000020 + -0x80);
    *(runtime_sudog **)((long)register0x00000020 + -0xf8) = sg;
    *(ulong *)((long)register0x00000020 + -0xf0) = uVar10;
    *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fa465;
    lockorder_00.len = 0;
    lockorder_00.array = (uint16 *)unlockf;
    lockorder_00.cap = lVar22;
    scases_00.len = (int)sg;
    scases_00.array = (runtime_scase *)*(undefined8 *)((long)register0x00000020 + -0x80);
    scases_00.cap = (int)prVar12;
    runtime_selunlock(scases_00,lockorder_00);
    lVar9 = -1;
    uVar11 = 0xffffffffffffffff;
    uVar13 = 0;
  }
  else {
    lVar9 = *(long *)(in_FS_OFFSET + -8);
    if (*(long *)(lVar9 + 0x148) != 0) {
      *(undefined **)((long)register0x00000020 + -0x118) = &DAT_0029a15d;
      *(undefined8 *)((long)register0x00000020 + -0x110) = 0x11;
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4faead;
      s_00.len = (int)sg;
      s_00.str = &DAT_0029a15d;
      runtime_throw(s_00);
    }
    *(long *)((long)register0x00000020 + -0x78) = lVar9;
    puVar21 = (undefined8 *)(lVar9 + 0x148);
    *(undefined8 **)((long)register0x00000020 + -0x48) = puVar21;
    lVar24 = *(long *)((long)register0x00000020 + -0x80);
    lVar22 = 0;
    puVar20 = puVar21;
    while (lVar22 < (long)sg) {
      uVar14 = (ulong)*(ushort *)(lVar24 + lVar22 * 2);
      if (uVar10 <= uVar14) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fae94;
        runtime_panicIndex();
      }
      *(long *)((long)register0x00000020 + -0xa8) = lVar22;
      *(ulong *)((long)register0x00000020 + -0xb0) = uVar14;
      *(undefined8 **)((long)register0x00000020 + -0x88) = puVar20;
      *(ulong *)((long)register0x00000020 + -0xb8) = uVar14 * 0x10;
      *(runtime_g **)((long)register0x00000020 + -0x60) = (&prVar12->g)[uVar14 * 2];
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fa549;
      runtime_acquireSudog();
      puVar20 = *(undefined8 **)((long)register0x00000020 + -0x118);
      if (runtime_writeBarrier._0_4_ == 0) {
        *puVar20 = *(undefined8 *)((long)register0x00000020 + -0x78);
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fa572;
        runtime_gcWriteBarrierDX();
      }
      *(undefined1 *)((long)puVar20 + 0x34) = 1;
      prVar12 = *(runtime_sudog **)((long)register0x00000020 + 8);
      if (runtime_writeBarrier._0_4_ == 0) {
        puVar20[3] = *(undefined8 *)
                      ((long)&prVar12->next + *(long *)((long)register0x00000020 + -0xb8));
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fa5a6;
        runtime_gcWriteBarrierBX();
        puVar20 = extraout_RAX_01;
      }
      puVar20[5] = 0;
      if (*(long *)((long)register0x00000020 + -0xe0) != 0) {
        puVar20[5] = 0xffffffffffffffff;
      }
      if (runtime_writeBarrier._0_4_ == 0) {
        lVar9 = *(long *)((long)register0x00000020 + -0x60);
        puVar20[10] = lVar9;
        **(undefined8 **)((long)register0x00000020 + -0x88) = puVar20;
      }
      else {
        lVar9 = *(long *)((long)register0x00000020 + -0x60);
        *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fa5fc;
        runtime_gcWriteBarrierR9();
        *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fa609;
        runtime_gcWriteBarrier();
                    /* Unresolved local var: runtime.sudog * x@[???] */
        puVar20 = extraout_RAX_02;
      }
      if (*(long *)((long)register0x00000020 + -0xb0) < *(long *)((long)register0x00000020 + 0x20))
      {
        if (runtime_writeBarrier._0_4_ == 0) {
          puVar20[1] = 0;
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fa654;
          runtime_gcWriteBarrierR9();
          puVar20 = extraout_RAX_03;
        }
        lVar22 = *(long *)(lVar9 + 0x50);
        if (lVar22 == 0) {
          if (runtime_writeBarrier._0_4_ == 0) {
            puVar20[2] = 0;
            *(undefined8 **)(lVar9 + 0x48) = puVar20;
            *(undefined8 **)(lVar9 + 0x50) = puVar20;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fa6ec;
            runtime_gcWriteBarrierR9();
            *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fa6f5;
            runtime_gcWriteBarrier();
            *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fa6fd;
            runtime_gcWriteBarrier();
            puVar20 = extraout_RAX_05;
          }
        }
        else if (runtime_writeBarrier._0_4_ == 0) {
          puVar20[2] = lVar22;
          *(undefined8 **)(lVar22 + 8) = puVar20;
          *(undefined8 **)(lVar9 + 0x50) = puVar20;
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fa69a;
          runtime_gcWriteBarrierR9();
          *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fa6a5;
          runtime_gcWriteBarrier();
          *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fa6ad;
          runtime_gcWriteBarrier();
          puVar20 = extraout_RAX_04;
        }
      }
      else {
                    /* Unresolved local var: runtime.sudog * x@[???] */
        if (runtime_writeBarrier._0_4_ == 0) {
          puVar20[1] = 0;
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fa733;
          runtime_gcWriteBarrierR9();
          puVar20 = extraout_RAX_06;
        }
        lVar22 = *(long *)(lVar9 + 0x40);
        if (lVar22 == 0) {
          if (runtime_writeBarrier._0_4_ == 0) {
            puVar20[2] = 0;
            *(undefined8 **)(lVar9 + 0x38) = puVar20;
            *(undefined8 **)(lVar9 + 0x40) = puVar20;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fa7cc;
            runtime_gcWriteBarrierR9();
            *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fa7d5;
            runtime_gcWriteBarrier();
            *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fa7dd;
            runtime_gcWriteBarrier();
            puVar20 = extraout_RAX_08;
          }
        }
        else if (runtime_writeBarrier._0_4_ == 0) {
          puVar20[2] = lVar22;
          *(undefined8 **)(lVar22 + 8) = puVar20;
          *(undefined8 **)(lVar9 + 0x40) = puVar20;
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fa77a;
          runtime_gcWriteBarrierR9();
          *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fa785;
          runtime_gcWriteBarrier();
          *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fa78d;
          runtime_gcWriteBarrier();
          puVar20 = extraout_RAX_07;
        }
      }
                    /* Unresolved local var: runtime.sudog * sg@[???] */
      puVar20 = puVar20 + 8;
      sg = *(runtime_sudog **)((long)register0x00000020 + -0xd8);
      lVar24 = *(long *)((long)register0x00000020 + -0x80);
      uVar10 = *(ulong *)((long)register0x00000020 + -0xa0);
      lVar9 = *(long *)((long)register0x00000020 + -0x78);
      puVar21 = *(undefined8 **)((long)register0x00000020 + -0x48);
      lVar22 = *(long *)((long)register0x00000020 + -0xa8) + 1;
    }
    puVar20 = (undefined8 *)(lVar9 + 0x88);
    *(undefined8 **)((long)register0x00000020 + -0x50) = puVar20;
    puVar23 = puVar20;
    if (runtime_writeBarrier._0_4_ == 0) {
      *(undefined8 *)(lVar9 + 0x88) = 0;
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fa819;
      runtime_gcWriteBarrier();
      puVar21 = puVar20;
    }
    LOCK();
    reason = *(runtime_waitReason *)(lVar9 + 0xb9);
    *(runtime_waitReason *)(lVar9 + 0xb9) = 1;
    UNLOCK();
    *(undefined ***)((long)register0x00000020 + -0x118) = &PTR_runtime_selparkcommit_002b39f8;
    *(undefined8 *)((long)register0x00000020 + -0x110) = 0;
    *(undefined2 *)((long)register0x00000020 + -0x108) = 0x1809;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 1;
    *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fa850;
    runtime_gopark((func__runtime_g__unsafe_Pointer__bool **)&PTR_runtime_selparkcommit_002b39f8,sg,
                   reason,(uint8)puVar21,lVar9);
    lVar9 = *(long *)((long)register0x00000020 + -0x78);
    *(undefined1 *)(lVar9 + 0xb8) = 0;
    *(int *)((long)register0x00000020 + -0x118) = *(int *)((long)register0x00000020 + 8);
    uVar11 = *(undefined8 *)((long)register0x00000020 + -0xa0);
    *(undefined8 *)((long)register0x00000020 + -0x110) = uVar11;
    *(undefined8 *)((long)register0x00000020 + -0x108) = uVar11;
    *(undefined8 *)((long)register0x00000020 + -0x100) =
         *(undefined8 *)((long)register0x00000020 + -0x80);
    *(undefined8 *)((long)register0x00000020 + -0xf8) =
         *(undefined8 *)((long)register0x00000020 + -0xd8);
    *(undefined8 *)((long)register0x00000020 + -0xf0) = uVar11;
    *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fa89b;
    lockorder_01.len = *(undefined8 *)((long)register0x00000020 + -0xd8);
    lockorder_01.array = (uint16 *)puVar21;
    lockorder_01.cap = (int)puVar23;
    scases_01.len = *(undefined8 *)((long)register0x00000020 + -0x80);
    scases_01.array = (runtime_scase *)lVar9;
    scases_01.cap = *(int *)((long)register0x00000020 + 8);
    runtime_sellock(scases_01,lockorder_01);
    lVar9 = *(long *)((long)register0x00000020 + -0x78);
    *(undefined4 *)(lVar9 + 0x178) = 0;
    prVar12 = *(runtime_sudog **)(lVar9 + 0x88);
    if (runtime_writeBarrier._0_4_ == 0) {
      *(undefined8 *)(lVar9 + 0x88) = 0;
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fa8d9;
      runtime_gcWriteBarrierDX();
      lVar9 = extraout_RAX_09;
    }
    sg = *(runtime_sudog **)(lVar9 + 0x148);
                    /* Unresolved local var: runtime.sudog * sg1@[???] */
    for (prVar8 = sg; prVar8 != (runtime_sudog *)0x0; prVar8 = prVar8->waitlink) {
      prVar8->isSelect = false;
      if (runtime_writeBarrier._0_4_ == 0) {
        prVar8->elem = (void *)0x0;
        prVar8->c = (runtime_hchan *)0x0;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fa918;
        runtime_gcWriteBarrierSI();
        *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fa925;
        runtime_gcWriteBarrierR8();
        lVar9 = extraout_RAX_10;
        prVar8 = extraout_RDX_00;
      }
    }
    if (runtime_writeBarrier._0_4_ == 0) {
      *(undefined8 *)(lVar9 + 0x148) = 0;
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fa94c;
      runtime_gcWriteBarrierDX();
    }
    *(runtime_sudog **)((long)register0x00000020 + -0x58) = prVar12;
    prVar19 = *(runtime_sudog **)((long)register0x00000020 + 8);
    lVar22 = *(long *)((long)register0x00000020 + 0x20);
    uVar10 = *(ulong *)((long)register0x00000020 + -0xa0);
    prVar27 = *(runtime_sudog **)((long)register0x00000020 + -0xd8);
    lVar9 = *(long *)((long)register0x00000020 + -0x80);
    pprVar15 = (runtime_g **)0x0;
    unlockf = (func__ **)0xffffffffffffffff;
    cVar32 = '\0';
    lVar24 = -1;
    prVar8 = (runtime_sudog *)0x0;
    while (*(func__ ***)((long)register0x00000020 + -0xd0) = unlockf, (long)prVar8 < (long)prVar27)
    {
      uVar14 = (ulong)*(ushort *)(lVar9 + (long)prVar8 * 2);
      if (uVar10 <= uVar14) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fae89;
        runtime_panicIndex();
      }
      *(runtime_sudog **)((long)register0x00000020 + -0xa8) = prVar8;
      *(ulong *)((long)register0x00000020 + -0xb0) = uVar14;
      if (sg == prVar12) {
        if (0 < sg->releasetime) {
          lVar24 = sg->releasetime;
        }
        cVar32 = sg->success;
        unlockf = *(func__ ***)((long)register0x00000020 + -0xb0);
        pprVar15 = &prVar19->g + uVar14 * 2;
      }
      else {
        prVar28 = (&prVar19->g)[uVar14 * 2];
        if (*(long *)((long)register0x00000020 + -0xb0) < lVar22) {
                    /* Unresolved local var: runtime.sudog * x@[???]
                       Unresolved local var: runtime.sudog * y@[???] */
          prVar12 = sg->prev;
          prVar19 = sg->next;
          if (prVar12 == (runtime_sudog *)0x0) {
            if (prVar19 == (runtime_sudog *)0x0) {
              if ((runtime_sudog *)(prVar28->sched).g == sg) {
                if (runtime_writeBarrier._0_4_ == 0) {
                  (prVar28->sched).g = 0;
                  (prVar28->sched).ctxt = (void *)0x0;
                }
                else {
                  *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fabe5;
                  runtime_gcWriteBarrierSI();
                  *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fabee;
                  runtime_gcWriteBarrierSI();
                  prVar8 = extraout_RAX_13;
                  pprVar15 = extraout_RDX_04;
                }
              }
            }
            else if (runtime_writeBarrier._0_4_ == 0) {
              prVar19->prev = (runtime_sudog *)0x0;
              (prVar28->sched).g = (runtime_guintptr)prVar19;
              sg->next = (runtime_sudog *)0x0;
            }
            else {
              *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fab89;
              runtime_gcWriteBarrierSI();
              *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fab92;
              runtime_gcWriteBarrierCX();
              *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fab9a;
              runtime_gcWriteBarrierSI();
              unlockf = *(func__ ***)((long)register0x00000020 + -0xd0);
              prVar8 = extraout_RAX_12;
              pprVar15 = extraout_RDX_03;
            }
          }
          else if (prVar19 == (runtime_sudog *)0x0) {
            if (runtime_writeBarrier._0_4_ == 0) {
              prVar12->next = (runtime_sudog *)0x0;
              (prVar28->sched).ctxt = prVar12;
              sg->prev = (runtime_sudog *)0x0;
            }
            else {
              *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fab29;
              runtime_gcWriteBarrier();
              *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fab35;
              runtime_gcWriteBarrierCX();
              *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fab3d;
              runtime_gcWriteBarrier();
              prVar8 = *(runtime_sudog **)((long)register0x00000020 + -0xa8);
              pprVar15 = extraout_RDX_02;
            }
          }
          else if (runtime_writeBarrier._0_4_ == 0) {
            prVar12->next = prVar19;
            prVar19->prev = prVar12;
            sg->next = (runtime_sudog *)0x0;
            sg->prev = (runtime_sudog *)0x0;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4faac5;
            runtime_gcWriteBarrierCX();
            *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4faad1;
            runtime_gcWriteBarrierCX();
            *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4faadb;
            runtime_gcWriteBarrierCX();
            *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4faae5;
            runtime_gcWriteBarrierCX();
            unlockf = *(func__ ***)((long)register0x00000020 + -0xd0);
            prVar8 = extraout_RAX_11;
            pprVar15 = extraout_RDX_01;
          }
        }
        else {
                    /* Unresolved local var: runtime.sudog * x@[???]
                       Unresolved local var: runtime.sudog * y@[???] */
          prVar12 = sg->prev;
          prVar19 = sg->next;
          if (prVar12 == (runtime_sudog *)0x0) {
            if (prVar19 == (runtime_sudog *)0x0) {
              if ((runtime_sudog *)(prVar28->sched).sp == sg) {
                if (runtime_writeBarrier._0_4_ == 0) {
                  (prVar28->sched).sp = 0;
                  (prVar28->sched).pc = 0;
                }
                else {
                  *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fad56;
                  runtime_gcWriteBarrierSI();
                  *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fad5f;
                  runtime_gcWriteBarrierSI();
                  prVar8 = extraout_RAX_16;
                  pprVar15 = extraout_RDX_08;
                }
              }
            }
            else if (runtime_writeBarrier._0_4_ == 0) {
              prVar19->prev = (runtime_sudog *)0x0;
              (prVar28->sched).sp = (uintptr)prVar19;
              sg->next = (runtime_sudog *)0x0;
            }
            else {
              *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fad06;
              runtime_gcWriteBarrierSI();
              *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fad0f;
              runtime_gcWriteBarrierCX();
              *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fad17;
              runtime_gcWriteBarrierSI();
              unlockf = *(func__ ***)((long)register0x00000020 + -0xd0);
              prVar8 = extraout_RAX_15;
              pprVar15 = extraout_RDX_07;
            }
          }
          else if (prVar19 == (runtime_sudog *)0x0) {
            if (runtime_writeBarrier._0_4_ == 0) {
              prVar12->next = (runtime_sudog *)0x0;
              (prVar28->sched).pc = (uintptr)prVar12;
              sg->prev = (runtime_sudog *)0x0;
            }
            else {
              *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4faca9;
              runtime_gcWriteBarrier();
              *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4facb5;
              runtime_gcWriteBarrierCX();
              *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4facbd;
              runtime_gcWriteBarrier();
              prVar8 = *(runtime_sudog **)((long)register0x00000020 + -0xa8);
              pprVar15 = extraout_RDX_06;
            }
          }
          else if (runtime_writeBarrier._0_4_ == 0) {
            prVar12->next = prVar19;
            prVar19->prev = prVar12;
            sg->next = (runtime_sudog *)0x0;
            sg->prev = (runtime_sudog *)0x0;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fac45;
            runtime_gcWriteBarrierCX();
            *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fac51;
            runtime_gcWriteBarrierCX();
            *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fac5b;
            runtime_gcWriteBarrierCX();
            *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fac65;
            runtime_gcWriteBarrierCX();
            unlockf = *(func__ ***)((long)register0x00000020 + -0xd0);
            prVar8 = extraout_RAX_14;
            pprVar15 = extraout_RDX_05;
          }
        }
      }
      *(char *)((long)register0x00000020 + -0xe3) = cVar32;
      *(func__ ***)((long)register0x00000020 + -0xd0) = unlockf;
      *(runtime_g ***)((long)register0x00000020 + -0x70) = pprVar15;
      *(long *)((long)register0x00000020 + -200) = lVar24;
      *(runtime_sudog **)((long)register0x00000020 + -0x98) = sg->waitlink;
      if (runtime_writeBarrier._0_4_ == 0) {
        sg->waitlink = (runtime_sudog *)0x0;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fadc5;
        runtime_gcWriteBarrierR8();
        prVar8 = extraout_RAX_17;
      }
      *(runtime_sudog **)((long)register0x00000020 + -0x118) = sg;
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fa999;
      runtime_releaseSudog(prVar8);
      lVar22 = *(long *)((long)register0x00000020 + 0x20);
      uVar10 = *(ulong *)((long)register0x00000020 + -0xa0);
      prVar12 = *(runtime_sudog **)((long)register0x00000020 + -0x58);
      prVar27 = *(runtime_sudog **)((long)register0x00000020 + -0xd8);
      pprVar15 = *(runtime_g ***)((long)register0x00000020 + -0x70);
      sg = *(runtime_sudog **)((long)register0x00000020 + -0x98);
      prVar19 = *(runtime_sudog **)((long)register0x00000020 + 8);
      lVar9 = *(long *)((long)register0x00000020 + -0x80);
      unlockf = *(func__ ***)((long)register0x00000020 + -0xd0);
      cVar32 = *(char *)((long)register0x00000020 + -0xe3);
      lVar24 = *(long *)((long)register0x00000020 + -200);
      prVar8 = (runtime_sudog *)(*(long *)((long)register0x00000020 + -0xa8) + 1);
    }
    if (pprVar15 == (runtime_g **)0x0) {
LAB_004fae65:
      *(undefined **)((long)register0x00000020 + -0x118) = &DAT_0029c176;
      *(undefined8 *)((long)register0x00000020 + -0x110) = 0x14;
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fae7e;
      s.len = (int)sg;
      s.str = &DAT_0029c176;
      runtime_throw(s);
    }
    *(long *)((long)register0x00000020 + -0xc0) = lVar24;
    if ((long)unlockf < lVar22) {
      if (cVar32 == '\0') {
LAB_004fae25:
        *(runtime_sudog **)((long)register0x00000020 + -0x118) = prVar19;
        *(ulong *)((long)register0x00000020 + -0x110) = uVar10;
        *(ulong *)((long)register0x00000020 + -0x108) = uVar10;
        *(long *)((long)register0x00000020 + -0x100) = lVar9;
        *(runtime_sudog **)((long)register0x00000020 + -0xf8) = prVar27;
        *(ulong *)((long)register0x00000020 + -0xf0) = uVar10;
        *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fae47;
        lockorder_03.len = (int)prVar19;
        lockorder_03.array = (uint16 *)unlockf;
        lockorder_03.cap = lVar22;
        scases_03.len = (int)sg;
        scases_03.array = (runtime_scase *)prVar8;
        scases_03.cap = (int)prVar12;
        runtime_selunlock(scases_03,lockorder_03);
        *(undefined **)((long)register0x00000020 + -0x118) = &DAT_00237ca0;
        *(undefined ***)((long)register0x00000020 + -0x110) = &runtime__stmp_70;
        *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fae65;
        e.data = sg;
        e._type = (runtime__type *)&runtime__stmp_70;
        runtime_gopanic(e);
        goto LAB_004fae65;
      }
      cVar32 = '\0';
    }
    *(char *)((long)register0x00000020 + -0xe4) = cVar32;
    *(runtime_sudog **)((long)register0x00000020 + -0x118) = prVar19;
    *(ulong *)((long)register0x00000020 + -0x110) = uVar10;
    *(ulong *)((long)register0x00000020 + -0x108) = uVar10;
    *(long *)((long)register0x00000020 + -0x100) = lVar9;
    *(runtime_sudog **)((long)register0x00000020 + -0xf8) = prVar27;
    *(ulong *)((long)register0x00000020 + -0xf0) = uVar10;
    *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fae0f;
    lockorder_02.len = (int)prVar19;
    lockorder_02.array = (uint16 *)unlockf;
    lockorder_02.cap = lVar22;
    scases_02.len = (int)sg;
    scases_02.array = (runtime_scase *)prVar8;
    scases_02.cap = (int)prVar12;
    runtime_selunlock(scases_02,lockorder_02);
    lVar9 = *(long *)((long)register0x00000020 + -0xc0);
    uVar11 = *(undefined8 *)((long)register0x00000020 + -0xd0);
    uVar13 = *(undefined1 *)((long)register0x00000020 + -0xe4);
  }
LAB_004fa475:
  if (0 < lVar9) {
    *(undefined1 *)((long)register0x00000020 + -0xe4) = uVar13;
    *(undefined8 *)((long)register0x00000020 + -0xd0) = uVar11;
    *(long *)((long)register0x00000020 + -0x118) =
         lVar9 - *(long *)((long)register0x00000020 + -0xe0);
    *(undefined8 *)((long)register0x00000020 + -0x110) = 1;
    *(undefined8 *)((long)register0x00000020 + -0x120) = 0x4fa49d;
    runtime_blockevent(lVar9 - *(long *)((long)register0x00000020 + -0xe0),(int)sg);
    uVar11 = *(undefined8 *)((long)register0x00000020 + -0xd0);
    uVar13 = *(undefined1 *)((long)register0x00000020 + -0xe4);
    lVar9 = extraout_RAX_00;
  }
  *(undefined8 *)((long)register0x00000020 + 0x38) = uVar11;
  *(undefined1 *)((long)register0x00000020 + 0x40) = uVar13;
  mVar37.~r7 = SUB81(sg,0);
  mVar37.~r6 = lVar9;
  return mVar37;
}

