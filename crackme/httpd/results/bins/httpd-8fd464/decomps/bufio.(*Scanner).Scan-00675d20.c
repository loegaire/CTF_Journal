
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bufio.(*Scanner).Scan(bufio.Scanner * s, bool ~r0) */

bool bufio___Scanner__Scan(bufio_Scanner *s)

{
  __uint8 *p_Var1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  runtime__type *et;
  __uint8 _Var6;
  runtime_itab *extraout_RAX;
  runtime_itab *extraout_RAX_00;
  runtime_itab *extraout_RAX_01;
  bufio_Scanner *pbVar7;
  void *extraout_RAX_02;
  void *pvVar8;
  runtime_itab *extraout_RAX_03;
  bufio_Scanner *extraout_RAX_04;
  bufio_Scanner *extraout_RAX_05;
  int iVar9;
  bufio_Scanner *x;
  runtime_itab *prVar10;
  bufio_Scanner *pbVar11;
  long lVar12;
  runtime__type *prVar13;
  uint8 *puVar14;
  runtime_itab *prVar15;
  long in_FS_OFFSET;
  bool bVar16;
  bool bVar17;
  interface___ e;
  bufio_Scanner *s_spill;
  uint8 *local_e0;
  runtime_itab *local_d8;
  runtime_itab *local_d0;
  bufio_Scanner *local_c8;
  int local_c0;
  runtime_itab *local_b8;
  void *local_b0;
  runtime_itab *local_78;
  runtime_itab *local_70;
  runtime_itab *local_68;
  runtime_itab *local_60;
  runtime_itab *local_58;
  void *local_50;
  void *local_48;
  void *local_40;
  void *local_38;
  bufio_Scanner *local_30;
  void *local_28;
  bufio_Scanner *local_20;
  runtime_itab *local_18;
  uint8 *local_10;
  
  while (&local_78 <= *(runtime_itab ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    s = extraout_RAX_05;
  }
  if (s_spill->done != false) {
    return SUB81(s,0);
  }
  s_spill->scanCalled = true;
  x = s_spill;
LAB_00675d7e:
  prVar15 = (runtime_itab *)x->end;
  local_60 = (runtime_itab *)x->start;
  if (((long)local_60 < (long)prVar15) || ((x->err).tab != (runtime_itab *)0x0)) {
                    /* Unresolved local var: int advance@[???]
                       Unresolved local var: []uint8 token@[???]
                       Unresolved local var: error err@[???] */
    prVar10 = (runtime_itab *)(x->buf).cap;
    if (prVar10 < prVar15) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAcap();
    }
    if (prVar15 < local_60) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    p_Var1 = (__uint8 *)x->split;
    lVar12 = (long)prVar10 - (long)local_60;
    puVar14 = (x->buf).array + (-lVar12 >> 0x3f & (ulong)local_60);
    bVar16 = (x->err).tab != (runtime_itab *)0x0;
    local_e0 = (uint8 *)CONCAT71(local_e0._1_7_,bVar16);
    _Var6.len = (int)((long)prVar15 - (long)local_60);
    _Var6.array = puVar14;
    _Var6.cap = lVar12;
    (*(code *)p_Var1->array)
              (_Var6,SUB81(p_Var1,0),(int *)puVar14,p_Var1,(error *)((long)prVar15 - (long)local_60)
              );
    prVar15 = bufio_ErrNegativeAdvance.tab;
    local_58 = local_d0;
    if (local_b8 != (runtime_itab *)0x0) {
      local_28 = local_b0;
      local_18 = local_b8;
      if ((bufio_ErrFinalToken.tab == local_b8) &&
         (runtime_ifaceeq(bufio_ErrFinalToken.data,local_b0,local_b8), bVar16)) {
        (s_spill->token).len = (int)local_c8;
        (s_spill->token).cap = local_c0;
        if (runtime_writeBarrier._0_4_ == 0) {
          (s_spill->token).array = (uint8 *)local_58;
        }
        else {
          runtime_gcWriteBarrier();
          local_58 = extraout_RAX_03;
        }
        s_spill->done = true;
        return SUB81(local_58,0);
      }
      prVar15 = (s_spill->err).tab;
      if (prVar15 != (runtime_itab *)0x0) {
        bVar17 = io_EOF.tab == prVar15;
        if (bVar17) {
          runtime_ifaceeq((runtime_itab *)s_spill,io_EOF.data,prVar15);
        }
        if (!bVar17 || !bVar16) goto LAB_00676665;
      }
      (s_spill->err).tab = local_18;
      if (runtime_writeBarrier._0_4_ == 0) {
        (s_spill->err).data = local_28;
      }
      else {
        runtime_gcWriteBarrierR9();
        s_spill = extraout_RAX_04;
      }
LAB_00676665:
      return SUB81(s_spill,0);
    }
    local_60 = local_d8;
    iVar9 = local_c0;
    pbVar11 = local_c8;
    if ((long)local_d8 < 0) {
      prVar10 = (s_spill->err).tab;
      pbVar7 = bufio_ErrNegativeAdvance.data;
      if (prVar10 == (runtime_itab *)0x0) {
LAB_00675edf:
        (s_spill->err).tab = prVar15;
        if (runtime_writeBarrier._0_4_ == 0) {
          (s_spill->err).data = pbVar7;
          x = s_spill;
        }
        else {
          x = s_spill;
          runtime_gcWriteBarrierBX();
          local_60 = extraout_RAX;
        }
      }
      else {
        bVar17 = io_EOF.tab == prVar10;
        if (bVar17) {
          local_30 = bufio_ErrNegativeAdvance.data;
          runtime_ifaceeq(local_d8,bufio_ErrNegativeAdvance.data,(void *)0x0);
          pbVar7 = local_30;
        }
        x = s_spill;
        if (bVar17 && bVar16) goto LAB_00675edf;
      }
      bVar16 = false;
      prVar15 = local_58;
    }
    else {
      pbVar7 = s_spill;
      if (s_spill->end - s_spill->start < (long)local_d8) {
        prVar15 = (s_spill->err).tab;
        pvVar8 = bufio_ErrAdvanceTooFar.data;
        prVar10 = bufio_ErrAdvanceTooFar.tab;
        if (prVar15 == (runtime_itab *)0x0) {
LAB_00675fba:
          (s_spill->err).tab = prVar10;
          if (runtime_writeBarrier._0_4_ == 0) {
            (s_spill->err).data = pvVar8;
          }
          else {
            runtime_gcWriteBarrierR9();
            local_60 = extraout_RAX_00;
          }
        }
        else {
          bVar17 = io_EOF.tab == prVar15;
          if (bVar17) {
            local_38 = bufio_ErrAdvanceTooFar.data;
            local_78 = bufio_ErrAdvanceTooFar.tab;
            runtime_ifaceeq(local_d8,s_spill,(void *)0x0);
            pvVar8 = local_38;
            prVar10 = local_78;
          }
          if (bVar17 && bVar16) goto LAB_00675fba;
        }
        bVar16 = false;
        prVar15 = local_58;
        x = s_spill;
      }
      else {
        s_spill->start = (int)(local_d8->_ + s_spill->start + -0x14);
        bVar16 = true;
        prVar15 = local_d0;
        x = s_spill;
      }
    }
    if (!bVar16) {
      return SUB81(local_60,0);
    }
    (x->token).len = (int)pbVar11;
    (x->token).cap = iVar9;
    if (runtime_writeBarrier._0_4_ == 0) {
      (x->token).array = (uint8 *)prVar15;
    }
    else {
      runtime_gcWriteBarrierR8();
      local_60 = extraout_RAX_01;
    }
    if (prVar15 == (runtime_itab *)0x0) goto LAB_0067602c;
    if (((x->err).tab == (runtime_itab *)0x0) || (0 < (long)local_60)) {
      x->empties = 0;
LAB_006764ed:
      return SUB81(local_60,0);
    }
    local_60 = (runtime_itab *)(x->empties + 1);
    x->empties = (int)local_60;
    if ((long)local_60 < 0x65) goto LAB_006764ed;
    e.data = pbVar7;
    e._type = (runtime__type *)bufio__stmp_6;
    runtime_gopanic(e);
  }
  else {
LAB_0067602c:
    if ((x->err).tab != (runtime_itab *)0x0) {
      x->start = 0;
      x->end = 0;
      return SUB81(local_60,0);
    }
    uVar2 = x->start;
    if (0 < (long)uVar2) {
      uVar3 = x->end;
      uVar4 = (x->buf).len;
      uVar5 = (x->buf).cap;
      if ((uVar4 == uVar3) || ((long)(uVar4 >> 1) < (long)uVar2)) {
        if (uVar5 < uVar3) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceAcap();
        }
        if (uVar3 < uVar2) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceB();
        }
        if ((uVar2 & (long)(uVar2 - uVar5) >> 0x3f) != 0) {
          runtime_memmove();
          x = s_spill;
        }
        x->end = x->end - x->start;
        x->start = 0;
      }
    }
    lVar12 = (x->buf).len;
    if (x->end == lVar12) {
                    /* Unresolved local var: int newSize@[???]
                       Unresolved local var: []uint8 newBuf@[???] */
      et = (runtime__type *)x->maxTokenSize;
      if (((long)et <= lVar12) || (0x3fffffffffffffff < lVar12)) {
        prVar15 = (x->err).tab;
        pvVar8 = bufio_ErrTooLong.data;
        prVar10 = bufio_ErrTooLong.tab;
        if (prVar15 != (runtime_itab *)0x0) {
          if (io_EOF.tab == prVar15) {
            local_40 = bufio_ErrTooLong.data;
            local_68 = bufio_ErrTooLong.tab;
            runtime_ifaceeq(bufio_ErrTooLong.data,x,bufio_ErrTooLong.tab);
            pvVar8 = local_40;
            prVar10 = local_68;
          }
          else {
            local_e0._0_1_ = '\0';
            s_spill = x;
          }
          x = s_spill;
          if ((char)local_e0 == '\0') goto LAB_00676485;
        }
        (x->err).tab = prVar10;
        if (runtime_writeBarrier._0_4_ == 0) {
          (x->err).data = pvVar8;
        }
        else {
          runtime_gcWriteBarrier();
          pvVar8 = extraout_RAX_02;
        }
LAB_00676485:
        return SUB81(pvVar8,0);
      }
      prVar13 = (runtime__type *)(lVar12 << 1);
      if (prVar13 == (runtime__type *)0x0) {
        prVar13 = (runtime__type *)0x1000;
      }
      if ((long)et < (long)prVar13) {
        prVar13 = et;
      }
      runtime_makeslice(et,0x1000,0x225720);
      uVar2 = (s_spill->buf).cap;
      uVar3 = s_spill->start;
      if (uVar2 < (ulong)s_spill->end) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAcap();
      }
      if ((ulong)s_spill->end < uVar3) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceB();
      }
      if (local_e0 != (s_spill->buf).array + (uVar3 & (long)(uVar3 - uVar2) >> 0x3f)) {
        local_10 = local_e0;
        runtime_memmove();
        local_e0 = local_10;
      }
      (s_spill->buf).len = (int)prVar13;
      (s_spill->buf).cap = (int)prVar13;
      if (runtime_writeBarrier._0_4_ == 0) {
        (s_spill->buf).array = local_e0;
        x = s_spill;
      }
      else {
        x = s_spill;
        runtime_gcWriteBarrier();
      }
      x->end = x->end - x->start;
      x->start = 0;
    }
    pbVar7 = (bufio_Scanner *)0x0;
    pbVar11 = x;
  }
  do {
    if ((ulong)(pbVar11->buf).len < (ulong)pbVar11->end) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    puVar14 = (uint8 *)((pbVar11->buf).cap - pbVar11->end);
    (*(code *)((pbVar11->r).tab)->fun[0])();
    prVar15 = bufio_ErrBadReadCount.tab;
    local_e0._0_1_ = (char)puVar14;
    local_e0 = puVar14;
    if (((long)local_d8 < 0) || ((s_spill->buf).len - s_spill->end < (long)local_d8)) {
      prVar10 = (s_spill->err).tab;
      pvVar8 = bufio_ErrBadReadCount.data;
      if (prVar10 != (runtime_itab *)0x0) {
        if (io_EOF.tab == prVar10) {
          local_48 = bufio_ErrBadReadCount.data;
          runtime_ifaceeq(local_d8,bufio_ErrBadReadCount.data,local_c8);
          pvVar8 = local_48;
        }
        else {
          local_e0._0_1_ = '\0';
        }
        bVar16 = (char)local_e0 == '\0';
        x = s_spill;
        if (bVar16) goto LAB_00675d7e;
      }
      (s_spill->err).tab = prVar15;
      if (runtime_writeBarrier._0_4_ == 0) {
        (s_spill->err).data = pvVar8;
        x = s_spill;
      }
      else {
        x = s_spill;
        runtime_gcWriteBarrierBX();
      }
      goto LAB_00675d7e;
    }
    s_spill->end = (int)(local_d8->_ + s_spill->end + -0x14);
    if (local_d0 != (runtime_itab *)0x0) {
      prVar15 = (s_spill->err).tab;
      local_20 = local_c8;
      local_18 = local_d0;
      if (prVar15 != (runtime_itab *)0x0) {
        if (io_EOF.tab == prVar15) {
          runtime_ifaceeq(local_d8,prVar15,local_c8);
        }
        else {
          local_e0._0_1_ = '\0';
        }
        bVar16 = (char)local_e0 == '\0';
        x = s_spill;
        if (bVar16) goto LAB_00675d7e;
      }
      (s_spill->err).tab = local_18;
      if (runtime_writeBarrier._0_4_ == 0) {
        (s_spill->err).data = local_20;
        x = s_spill;
      }
      else {
        x = s_spill;
        runtime_gcWriteBarrierCX();
      }
      goto LAB_00675d7e;
    }
    if (0 < (long)local_d8) {
      s_spill->empties = 0;
      x = s_spill;
      goto LAB_00675d7e;
    }
    pbVar7 = (bufio_Scanner *)((long)&(pbVar7->r).tab + 1);
    pbVar11 = s_spill;
  } while ((long)pbVar7 < 0x65);
  prVar15 = (s_spill->err).tab;
  pvVar8 = io_ErrNoProgress.data;
  prVar10 = io_ErrNoProgress.tab;
  if (prVar15 != (runtime_itab *)0x0) {
    if (io_EOF.tab == prVar15) {
      local_70 = io_ErrNoProgress.tab;
      local_50 = io_ErrNoProgress.data;
      runtime_ifaceeq(local_d8,io_ErrNoProgress.data,local_c8);
      pvVar8 = local_50;
      prVar10 = local_70;
    }
    else {
      local_e0._0_1_ = '\0';
    }
    bVar16 = (char)local_e0 == '\0';
    x = s_spill;
    if (bVar16) goto LAB_00675d7e;
  }
  (s_spill->err).tab = prVar10;
  if (runtime_writeBarrier._0_4_ == 0) {
    (s_spill->err).data = pvVar8;
    x = s_spill;
  }
  else {
    x = s_spill;
    runtime_gcWriteBarrierBX();
  }
  goto LAB_00675d7e;
}

