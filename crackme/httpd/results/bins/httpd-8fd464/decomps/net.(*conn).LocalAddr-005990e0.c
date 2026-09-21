
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*conn).LocalAddr(net.conn * c, net.Addr ~r0) */

net_Addr net___conn__LocalAddr(net_conn *c)

{
  undefined1 auVar1 [16];
  void *unaff_RBX;
  net_Addr nVar2;
  net_conn *c_spill;
  
  if ((c_spill != (net_conn *)0x0) && (c_spill->fd != (net_netFD *)0x0)) {
    nVar2.data = unaff_RBX;
    nVar2.tab = (c_spill->fd->laddr).data;
    return nVar2;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = unaff_RBX;
  return (net_Addr)(auVar1 << 0x40);
}

