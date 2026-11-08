
/* WARNING: Removing unreachable block (ram,0x00543db2) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void io.copyBuffer(io.Writer dst, io.Reader src, []uint8 buf, int64
   written, error err) */

multireturn_int64_error__conflict3 io_copyBuffer(io_Writer dst,io_Reader src,__uint8 buf)

{
  bool bVar1;
  undefined7 extraout_var;
  runtime__type *prVar3;
  void *y;
  long in_FS_OFFSET;
  runtime_iface rVar4;
  runtime_iface i;
  multireturn_int64_error__conflict3 mVar5;
  multireturn_int64_error__conflict3 mVar6;
  io_Writer dst_spill;
  io_Reader src_spill;
  __uint8 buf_spill;
  long local_80;
  runtime__type *local_78;
  runtime__type *local_70;
  runtime__type *local_18;
  uint8 *local_10;
  runtime__type *prVar2;
  
  rVar4.tab = dst.data;
  while (&local_18 <= *(runtime__type ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  rVar4.data = src_spill.data;
                    /* Unresolved local var: io.WriterTo wt@[???] */
  rVar4 = runtime_assertI2I2((runtime_interfacetype *)src_spill.tab,rVar4);
  i.tab = rVar4.data;
  if (local_80 != 0) {
    (**(code **)(local_80 + 0x18))();
    mVar5.err.tab = i.tab;
    mVar5.written = local_80;
    mVar5.err.data = local_78;
    return mVar5;
  }
  i.data = dst_spill.data;
                    /* Unresolved local var: io.ReaderFrom rt@[???] */
  rVar4 = runtime_assertI2I2((runtime_interfacetype *)dst_spill.tab,i);
  if (buf_spill.array == (uint8 *)0x0) {
                    /* Unresolved local var: int size@[???]
                       Unresolved local var: io.LimitedReader * l@[???] */
    if ((src_spill.tab == (runtime_itab *)go_itab__io_LimitedReader_io_Reader) &&
       (buf_spill.cap = *(long *)((long)src_spill.data + 0x10), buf_spill.cap < 0x8000)) {
      if (buf_spill.cap < 1) {
        buf_spill.cap = 1;
      }
    }
    else {
      buf_spill.cap = 0x8000;
    }
    runtime_makeslice((runtime__type *)buf_spill.cap,(int)rVar4.data,0x225720);
    buf_spill.array = (uint8 *)0x0;
  }
  y = (void *)0x0;
  local_10 = buf_spill.array;
  do {
    (*(code *)(src_spill.tab)->fun[0])();
    local_18 = local_70;
    prVar3 = local_70;
    if (0 < (long)local_78) {
      if ((ulong)buf_spill.cap < local_78) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAcap();
      }
      (*(code *)(dst_spill.tab)->fun[0])();
      prVar2 = local_78;
      if ((long)local_78 < 0) {
        if (local_70 == (runtime__type *)0x0) {
          prVar3 = (runtime__type *)io_errInvalidWrite.tab;
        }
        prVar2 = (runtime__type *)0x0;
      }
      y = (void *)((long)y + (long)prVar2);
      if ((prVar3 != (runtime__type *)0x0) ||
         (prVar3 = (runtime__type *)io_ErrShortWrite.tab, prVar2 != local_78)) goto LAB_00544016;
    }
  } while (local_70 == (runtime__type *)0x0);
  prVar2 = local_18;
  prVar3 = local_70;
  if ((runtime__type *)io_EOF.tab == local_18) {
    bVar1 = runtime_ifaceeq((runtime_itab *)local_18,local_70,y);
    prVar2 = (runtime__type *)CONCAT71(extraout_var,bVar1);
    local_80._0_1_ = (char)buf_spill.cap;
    if ((char)local_80 != '\0') {
      prVar3 = (runtime__type *)0x0;
    }
  }
LAB_00544016:
  mVar6.err.tab = (runtime_itab *)prVar3;
  mVar6.written = (int64)prVar2;
  mVar6.err.data = y;
  return mVar6;
}

