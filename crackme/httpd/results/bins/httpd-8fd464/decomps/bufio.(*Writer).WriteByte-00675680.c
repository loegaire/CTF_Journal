
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bufio.(*Writer).WriteByte(bufio.Writer * b, uint8 c, error ~r1) */

error bufio___Writer__WriteByte(bufio_Writer *b,uint8 c)

{
  runtime_itab *prVar1;
  long lVar2;
  uint8 *puVar3;
  bufio_Writer *extraout_RAX;
  long in_FS_OFFSET;
  error eVar4;
  error eVar5;
  error eVar6;
  bufio_Writer *b_spill;
  uint8 c_spill;
  long local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    b = extraout_RAX;
  }
  prVar1 = (b_spill->err).tab;
  if (prVar1 != (runtime_itab *)0x0) {
    eVar4.data = prVar1;
    eVar4.tab = (runtime_itab *)b;
    return eVar4;
  }
  lVar2 = (b_spill->buf).len;
  if (lVar2 == b_spill->n || lVar2 - b_spill->n < 0) {
    eVar4 = bufio___Writer__Flush(b);
    eVar6.data = eVar4.data;
    if (local_18 != 0) {
      eVar6.tab = (b_spill->err).data;
      return eVar6;
    }
  }
  puVar3 = (b_spill->buf).array;
  prVar1 = (runtime_itab *)b_spill->n;
  if ((runtime_itab *)(b_spill->buf).len <= prVar1) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  puVar3[(long)prVar1] = c_spill;
  b_spill->n = b_spill->n + 1;
  eVar5.data = puVar3;
  eVar5.tab = prVar1;
  return eVar5;
}

