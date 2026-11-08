
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*TCPConn).readFrom(net.TCPConn * c, io.Reader r, int64 ~r1,
   error ~r2) */

multireturn_int64_error_ net___TCPConn__readFrom(net_TCPConn *c,io_Reader r)

{
  undefined8 in_RDI;
  long in_FS_OFFSET;
  io_Writer w;
  io_Reader r_00;
  multireturn_int64_error_ mVar1;
  multireturn_int64_error__conflict mVar2;
  multireturn_int64_error_ mVar3;
  io_Reader r_01;
  multireturn_int64_error_bool_ mVar4;
  net_TCPConn *c_spill;
  io_Reader r_spill;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  r_00.tab = r.tab;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  r_00.data = r_spill.tab;
                    /* Unresolved local var: int64 n@[???]
                       Unresolved local var: error err@[???] */
  mVar4 = net_sendFile((net_netFD *)c_spill,r_00);
  r_01.data._1_7_ = (undefined7)((ulong)in_RDI >> 8);
  r_01.data._0_1_ = mVar4.handled;
  mVar1.~r2.tab = mVar4.err.tab;
  if (local_10 != '\0') {
    mVar1.~r1 = local_28;
    mVar1.~r2.data = local_20;
    return mVar1;
  }
  w.data = mVar1.~r2.tab;
  w.tab = r_spill.data;
  r_01.tab = local_20;
  mVar2 = net_genericReadFrom(w,r_01);
  mVar3.~r2.tab = mVar2.err.tab;
  mVar3.~r1 = (int64)local_20;
  mVar3.~r2.data = local_18;
  return mVar3;
}

