
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bytes.(*Buffer).UnreadByte(bytes.Buffer * b, error ~r0) */

error bytes___Buffer__UnreadByte(bytes_Buffer *b)

{
  void *unaff_RBX;
  error eVar1;
  error eVar2;
  bytes_Buffer *b_spill;
  
  if (b_spill->lastRead != 0) {
    b_spill->lastRead = 0;
    if (0 < b_spill->off) {
      b_spill->off = b_spill->off + -1;
    }
    eVar1.data = unaff_RBX;
    eVar1.tab = (runtime_itab *)b_spill;
    return eVar1;
  }
  eVar2.data = unaff_RBX;
  eVar2.tab = bytes_errUnreadByte.tab;
  return eVar2;
}

