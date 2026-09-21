
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*UDPConn).SetReadDeadline(time.Time t, error ~r1) */

error net___UDPConn__SetReadDeadline(time_Time t)

{
  time_Location *in_RDI;
  time_Time t_00;
  error eVar1;
  time_Time t_spill;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  
  uStack0000000000000028 = 0;
  uStack0000000000000030 = 0;
  t_00.loc = in_RDI;
  t_00.wall = SUB168(t._8_16_,0);
  t_00.ext = SUB168(t._8_16_,8);
  eVar1 = net___conn__SetReadDeadline((net_conn *)t_spill.wall,t_00);
  return eVar1;
}

