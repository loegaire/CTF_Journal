
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*UnixConn).Write([]uint8 b, int ~r1, error ~r2) */

multireturn_int_error__conflict net___UnixConn__Write(__uint8 b)

{
  int in_RDI;
  multireturn_int_error__conflict mVar1;
  __uint8 b_00;
  __uint8 b_spill;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  
  uStack0000000000000028 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000038 = 0;
  b_00.cap = in_RDI;
  b_00.array = (uint8 *)SUB168(b._8_16_,0);
  b_00.len = SUB168(b._8_16_,8);
  mVar1 = net___conn__Write((net_conn *)b_spill.array,b_00);
  return mVar1;
}

