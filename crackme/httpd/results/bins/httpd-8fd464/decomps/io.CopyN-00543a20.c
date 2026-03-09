
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void io.CopyN(io.Writer dst, io.Reader src, int64 n, int64 written,
   error err) */

multireturn_int64_error__conflict3 io_CopyN(io_Writer dst,io_Reader src,int64 n)

{
  runtime_itab *extraout_RAX;
  runtime__type **pprVar1;
  undefined8 in_R8;
  int in_R9;
  long in_FS_OFFSET;
  multireturn_int64_error__conflict3 mVar2;
  multireturn_int64_error__conflict3 mVar3;
  io_Writer dst_00;
  io_Reader src_00;
  __uint8 buf;
  io_Writer dst_spill;
  io_Reader src_spill;
  int64 n_spill;
  runtime_itab *local_50;
  long local_20;
  runtime_itab *local_18;
  void *local_10;
  
  pprVar1 = src.data;
  dst_00.data = dst.data;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_newobject((runtime__type *)&DAT_0024c460);
  local_50->inter = (runtime_interfacetype *)src_spill.tab;
  if (runtime_writeBarrier._0_4_ == 0) {
    local_50->_type = src_spill.data;
  }
  else {
    pprVar1 = &local_50->_type;
    runtime_gcWriteBarrierCX();
    local_50 = extraout_RAX;
  }
  local_50->hash = (undefined4)n_spill;
  local_50->_[0] = n_spill._4_1_;
  local_50->_[1] = n_spill._5_1_;
  local_50->_[2] = n_spill._6_1_;
  local_50->_[3] = n_spill._7_1_;
  dst_00.tab = local_50;
  src_00.data = pprVar1;
  src_00.tab = (runtime_itab *)n_spill;
  buf.len = in_R8;
  buf.array = (uint8 *)n;
  buf.cap = in_R9;
  io_copyBuffer(dst_00,src_00,buf);
  if (n_spill != local_20) {
    if ((local_20 < n_spill) && (local_18 == (runtime_itab *)0x0)) {
      local_18 = io_EOF.tab;
      local_10 = io_EOF.data;
    }
    mVar2.err.tab = (runtime_itab *)n_spill;
    mVar2.written = (int64)local_18;
    mVar2.err.data = local_10;
    return mVar2;
  }
  mVar3.err.tab = (runtime_itab *)n_spill;
  mVar3.written = (int64)local_18;
  mVar3.err.data = local_10;
  return mVar3;
}

