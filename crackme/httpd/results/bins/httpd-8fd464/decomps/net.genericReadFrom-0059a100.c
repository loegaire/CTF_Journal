
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.genericReadFrom(io.Writer w, io.Reader r, int64 n, error err)
    */

multireturn_int64_error__conflict net_genericReadFrom(io_Writer w,io_Reader r)

{
  undefined8 in_RSI;
  void *pvVar1;
  undefined8 in_R8;
  int in_R9;
  long in_FS_OFFSET;
  runtime_iface rVar2;
  io_Writer dst;
  multireturn_int64_error__conflict3 mVar3;
  multireturn_int64_error__conflict mVar4;
  io_Reader src;
  __uint8 buf;
  io_Writer w_spill;
  io_Reader r_spill;
  runtime_itab *local_50;
  undefined8 local_28;
  void *local_20;
  
  pvVar1 = r.data;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  rVar2 = runtime_convT2I((runtime_itab *)&stack0xffffffffffffffe8,w.data);
  dst.data = rVar2.data;
  dst.tab = r_spill.data;
  src.data = pvVar1;
  src.tab = local_50;
  buf.len = in_R8;
  buf.array = (uint8 *)in_RSI;
  buf.cap = in_R9;
  mVar3 = io_copyBuffer(dst,src,buf);
  mVar4.err.tab = mVar3.err.tab;
  mVar4.n = local_28;
  mVar4.err.data = local_20;
  return mVar4;
}

