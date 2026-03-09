
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*DNSError).Temporary(net.DNSError * e, bool ~r0) */

bool net___DNSError__Temporary(net_DNSError *e)

{
  undefined1 uVar1;
  net_DNSError *e_spill;
  
  if (e_spill->IsTimeout == false) {
    uVar1 = e_spill->IsTemporary;
  }
  else {
    uVar1 = 1;
  }
  return (bool)uVar1;
}

