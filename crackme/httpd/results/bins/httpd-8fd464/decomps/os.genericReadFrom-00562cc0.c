
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.genericReadFrom(os.File * f, io.Reader r, int64 ~r2, error ~r3)
    */

multireturn_int64_error__conflict5 os_genericReadFrom(os_File *f,io_Reader r)

{
  undefined8 in_RSI;
  void *in_RDI;
  undefined8 in_R8;
  int in_R9;
  long in_FS_OFFSET;
  runtime_iface rVar1;
  io_Writer dst;
  io_Reader src;
  multireturn_int64_error__conflict3 mVar2;
  multireturn_int64_error__conflict5 mVar3;
  __uint8 buf;
  os_File *f_spill;
  io_Reader r_spill;
  runtime_itab *local_50;
  undefined8 local_28;
  void *local_20;
  undefined1 *local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_18 = go_itab__os_File_io_Writer;
  rVar1 = runtime_convT2I((runtime_itab *)&stack0xffffffffffffffe8,r.tab);
  dst.data = rVar1.data;
  dst.tab = r_spill.data;
  src.data = in_RDI;
  src.tab = local_50;
  buf.len = in_R8;
  buf.array = (uint8 *)in_RSI;
  buf.cap = in_R9;
  mVar2 = io_copyBuffer(dst,src,buf);
  mVar3.~r3.tab = mVar2.err.tab;
  mVar3.~r2 = local_28;
  mVar3.~r3.data = local_20;
  return mVar3;
}

