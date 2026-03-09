
/* WARNING: Removing unreachable block (ram,0x00675007) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bufio.(*Reader).WriteTo(bufio.Reader * b, io.Writer w, int64 n,
   error err) */

multireturn_int64_error__conflict bufio___Reader__WriteTo(bufio_Reader *b,io_Writer w)

{
  void *pvVar1;
  void *y;
  bufio_Reader *extraout_RAX;
  bufio_Reader *extraout_RAX_00;
  long in_FS_OFFSET;
  multireturn_int64_error_ mVar3;
  multireturn_int64_error__conflict mVar4;
  multireturn_int64_error__conflict mVar5;
  multireturn_int64_error__conflict mVar6;
  multireturn_int64_error__conflict mVar7;
  runtime_iface rVar8;
  io_Writer w_00;
  runtime_iface i;
  io_Writer w_01;
  bufio_Reader *b_spill;
  io_Writer w_spill;
  char local_28;
  undefined7 uStack_27;
  void *local_20;
  runtime_itab *prVar2;
  
  w_00.tab = w.tab;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  w_00.data = w_spill.tab;
  mVar3 = bufio___Reader__writeBuf(b_spill,w_00);
  mVar6.err.tab = mVar3.~r2.tab;
  y = (void *)CONCAT71(uStack_27,local_28);
  if (local_20 != (void *)0x0) {
    mVar6.n = (int64)y;
    mVar6.err.data = local_20;
    return mVar6;
  }
                    /* Unresolved local var: io.WriterTo r@[???] */
  rVar8.data = (b_spill->rd).tab;
  rVar8.tab = (runtime_itab *)&DAT_0023d040;
  rVar8 = runtime_assertI2I2((runtime_interfacetype *)b_spill,rVar8);
  i.tab = rVar8.data;
                    /* Unresolved local var: int64 m@[???]
                       Unresolved local var: error err@[???] */
  if (CONCAT71(uStack_27,local_28) != 0) {
    (**(code **)(CONCAT71(uStack_27,local_28) + 0x18))();
    mVar5.n = CONCAT71(uStack_27,local_28) + (long)y;
    mVar5.err.tab = y;
    mVar5.err.data = (void *)0x0;
    return mVar5;
  }
  i.data = w_spill.data;
                    /* Unresolved local var: io.ReaderFrom w@[???] */
  rVar8 = runtime_assertI2I2((runtime_interfacetype *)w_spill.tab,i);
  prVar2 = rVar8.data;
                    /* Unresolved local var: int64 m@[???]
                       Unresolved local var: error err@[???] */
  if (CONCAT71(uStack_27,local_28) == 0) {
    if (b_spill->w - b_spill->r < (b_spill->buf).len) {
      bufio___Reader__fill(b_spill);
    }
    while (b_spill->r < b_spill->w) {
      w_01.data = w_spill.tab;
      w_01.tab = prVar2;
      mVar3 = bufio___Reader__writeBuf(b_spill,w_01);
      prVar2 = mVar3.~r2.tab;
      y = (void *)(CONCAT71(uStack_27,local_28) + (long)y);
                    /* Unresolved local var: int64 m@[???]
                       Unresolved local var: error err@[???] */
      bufio___Reader__fill(b_spill);
    }
    if ((io_EOF.tab == (b_spill->err).tab) &&
       (runtime_ifaceeq((runtime_itab *)b_spill,(b_spill->err).data,y), local_28 != '\0')) {
      (b_spill->err).tab = (runtime_itab *)0x0;
      if (runtime_writeBarrier._0_4_ == 0) {
        (b_spill->err).data = (void *)0x0;
      }
      else {
        runtime_gcWriteBarrierCX();
        b_spill = extraout_RAX;
      }
    }
    pvVar1 = (b_spill->err).data;
    (b_spill->err).tab = (runtime_itab *)0x0;
    if (runtime_writeBarrier._0_4_ == 0) {
      (b_spill->err).data = (void *)0x0;
    }
    else {
      runtime_gcWriteBarrier();
      b_spill = extraout_RAX_00;
    }
    mVar7.err.tab = pvVar1;
    mVar7.n = (int64)b_spill;
    mVar7.err.data = y;
    return mVar7;
  }
  (**(code **)(CONCAT71(uStack_27,local_28) + 0x18))();
  mVar4.n = CONCAT71(uStack_27,local_28) + (long)y;
  mVar4.err.tab = y;
  mVar4.err.data = (void *)0x0;
  return mVar4;
}

