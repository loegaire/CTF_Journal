
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bufio.(*Reader).UnreadByte(bufio.Reader * b, error ~r0) */

error bufio___Reader__UnreadByte(bufio_Reader *b)

{
  long lVar1;
  uint8 *puVar2;
  runtime_itab *prVar3;
  void *unaff_RBX;
  error eVar4;
  error eVar5;
  bufio_Reader *b_spill;
  
  if ((b_spill->lastByte < 0) ||
     ((lVar1 = b_spill->r, lVar1 == 0 && (unaff_RBX = (void *)0x0, 0 < b_spill->w)))) {
    eVar4.data = unaff_RBX;
    eVar4.tab = bufio_ErrInvalidUnreadByte.tab;
    return eVar4;
  }
  if (lVar1 < 1) {
    b_spill->w = 1;
  }
  else {
    b_spill->r = lVar1 + -1;
  }
  puVar2 = (b_spill->buf).array;
  prVar3 = (runtime_itab *)b_spill->r;
  if ((runtime_itab *)(b_spill->buf).len <= prVar3) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  puVar2[(long)prVar3] = (uint8)b_spill->lastByte;
  b_spill->lastByte = -1;
  b_spill->lastRuneSize = -1;
  eVar5.data = puVar2;
  eVar5.tab = prVar3;
  return eVar5;
}

