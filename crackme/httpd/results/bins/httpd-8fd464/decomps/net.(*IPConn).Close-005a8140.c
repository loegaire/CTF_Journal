
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*IPConn).Close(error ~r0) */

error net___IPConn__Close(void)

{
  error eVar1;
  net_conn *in_stack_00000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  eVar1 = net___conn__Close(in_stack_00000008);
  return eVar1;
}

