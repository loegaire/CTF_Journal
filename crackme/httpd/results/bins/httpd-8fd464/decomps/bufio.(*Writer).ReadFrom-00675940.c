
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bufio.(*Writer).ReadFrom(bufio.Writer * b, io.Reader r, int64 n,
   error err) */

multireturn_int64_error__conflict bufio___Writer__ReadFrom(bufio_Writer *b,io_Reader r)

{
  ulong uVar1;
  ulong uVar2;
  void *pvVar3;
  bool bVar4;
  bufio_Writer *b_00;
  long extraout_RAX;
  undefined7 extraout_var;
  void *pvVar5;
  bufio_Writer *extraout_RAX_00;
  void *pvVar6;
  runtime_itab *prVar7;
  runtime_itab *prVar8;
  long lVar9;
  long in_FS_OFFSET;
  error eVar10;
  multireturn_int64_error__conflict mVar11;
  multireturn_int64_error__conflict mVar12;
  multireturn_int64_error__conflict mVar13;
  multireturn_int64_error__conflict mVar14;
  multireturn_int64_error__conflict mVar15;
  runtime_iface i;
  bufio_Writer *b_spill;
  io_Reader r_spill;
  runtime_interfacetype *local_78;
  void *local_70;
  long local_68;
  runtime_itab *local_60;
  runtime_itab *local_58;
  void *local_50;
  
  pvVar6 = r.data;
                    /* Unresolved local var: int m@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    b = extraout_RAX_00;
  }
  prVar7 = (b_spill->err).tab;
  if (prVar7 != (runtime_itab *)0x0) {
    mVar12.err.tab = prVar7;
    mVar12.n = (int64)b;
    mVar12.err.data = pvVar6;
    return mVar12;
  }
  if (b_spill->n == 0) {
                    /* Unresolved local var: io.ReaderFrom w@[???] */
    local_78 = (runtime_interfacetype *)(b_spill->wr).tab;
    local_70 = (b_spill->wr).data;
    i.data = local_70;
    i.tab = (runtime_itab *)&DAT_0023cec0;
    runtime_assertI2I2(local_78,i);
    if (local_68 != 0) {
      (**(code **)(local_68 + 0x18))();
      (b_spill->err).tab = local_60;
      if (runtime_writeBarrier._0_4_ == 0) {
        (b_spill->err).data = local_58;
      }
      else {
        runtime_gcWriteBarrierDX();
        local_68 = extraout_RAX;
      }
      mVar11.err.tab = (runtime_itab *)b_spill;
      mVar11.n = local_68;
      mVar11.err.data = local_60;
      return mVar11;
    }
  }
  b_00 = (bufio_Writer *)0x0;
  prVar7 = (runtime_itab *)0x0;
  prVar8 = (runtime_itab *)0x0;
  pvVar6 = (void *)0x0;
  do {
    if ((b_spill->buf).len == b_spill->n) {
                    /* Unresolved local var: error err1@[???] */
      eVar10 = bufio___Writer__Flush(b_00);
      mVar13.err.tab = eVar10.data;
      if (local_78 != (runtime_interfacetype *)0x0) {
        mVar13.n = (int64)local_78;
        mVar13.err.data = local_70;
        return mVar13;
      }
    }
    for (lVar9 = 0; lVar9 < 100; lVar9 = lVar9 + 1) {
      uVar1 = (b_spill->buf).len;
      uVar2 = b_spill->n;
      if (uVar1 < uVar2) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceB();
      }
      local_68 = (b_spill->buf).cap - uVar2;
      local_78 = (runtime_interfacetype *)((b_spill->buf).array + (-local_68 >> 0x3f & uVar2));
      local_70 = (void *)(uVar1 - uVar2);
      (*(code *)(r_spill.tab)->fun[0])();
      prVar7 = local_60;
      prVar8 = local_58;
      pvVar6 = local_50;
      if ((local_60 != (runtime_itab *)0x0) || (local_58 != (runtime_itab *)0x0)) break;
    }
    if (lVar9 == 100) {
      mVar15.err.tab = r_spill.tab;
      mVar15.n = (int64)b_00;
      mVar15.err.data = io_ErrNoProgress.tab;
      return mVar15;
    }
    b_spill->n = (int)(prVar7->_ + b_spill->n + -0x14);
    pvVar3 = io_EOF.data;
    b_00 = (bufio_Writer *)((long)&(b_00->err).tab + (long)prVar7);
    if (prVar8 != (runtime_itab *)0x0) {
      pvVar5 = io_EOF.data;
      if (io_EOF.tab == prVar8) {
        bVar4 = runtime_ifaceeq(io_EOF.data,r_spill.tab,prVar7);
        pvVar5 = (void *)CONCAT71(extraout_var,bVar4);
        if ((char)local_68 != '\0') {
          if ((b_spill->buf).len == b_spill->n) {
            eVar10 = bufio___Writer__Flush(b_spill);
            r_spill.tab = eVar10.data;
            pvVar5 = pvVar6;
            prVar7 = pvVar3;
          }
          else {
            pvVar5 = (void *)0x0;
            prVar7 = (runtime_itab *)0x0;
          }
        }
      }
      mVar14.err.tab = r_spill.tab;
      mVar14.n = (int64)pvVar5;
      mVar14.err.data = prVar7;
      return mVar14;
    }
  } while( true );
}

