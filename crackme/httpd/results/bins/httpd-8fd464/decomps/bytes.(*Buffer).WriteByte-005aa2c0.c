
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bytes.(*Buffer).WriteByte(bytes.Buffer * b, uint8 c, error ~r1) */

error bytes___Buffer__WriteByte(bytes_Buffer *b,uint8 c)

{
  ulong uVar1;
  ulong uVar2;
  bytes_Buffer *extraout_RAX;
  long in_FS_OFFSET;
  error eVar3;
  bytes_Buffer *b_spill;
  uint8 c_spill;
  ulong local_10;
  
                    /* Unresolved local var: int m@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    b = extraout_RAX;
  }
  b_spill->lastRead = 0;
  uVar1 = (b_spill->buf).len;
  uVar2 = (b_spill->buf).cap;
  if ((long)(uVar2 - uVar1) < 1) {
    bytes___Buffer__grow(b,(int)b_spill);
  }
  else {
    if (uVar2 < uVar1 + 1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAcap();
    }
    (b_spill->buf).len = uVar1 + 1;
    local_10 = uVar1;
  }
  if (local_10 < (ulong)(b_spill->buf).len) {
    eVar3.tab = (runtime_itab *)(ulong)c_spill;
    (b_spill->buf).array[local_10] = c_spill;
    eVar3.data = b_spill;
    return eVar3;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

