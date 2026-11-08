
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*UDPConn).RemoteAddr(net.Addr ~r0) */

net_Addr net___UDPConn__RemoteAddr(void)

{
  net_Addr nVar1;
  net_conn *in_stack_00000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  nVar1 = net___conn__RemoteAddr(in_stack_00000008);
  return nVar1;
}

