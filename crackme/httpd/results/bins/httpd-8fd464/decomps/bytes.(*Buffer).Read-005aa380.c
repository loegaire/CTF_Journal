
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bytes.(*Buffer).Read(bytes.Buffer * b, []uint8 p, int n, error
   err) */

multireturn_int_error_ bytes___Buffer__Read(bytes_Buffer *b,__uint8 p)

{
  ulong uVar1;
  uint8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [24];
  uint8 *extraout_RAX;
  uint8 *puVar7;
  long in_FS_OFFSET;
  multireturn_int_error_ mVar8;
  multireturn_int_error_ mVar9;
  bytes_Buffer *b_spill;
  __uint8 p_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  b_spill->lastRead = 0;
  uVar1 = (b_spill->buf).len;
  puVar2 = (b_spill->buf).array;
  uVar4 = (b_spill->buf).array;
  uVar5 = (b_spill->buf).len;
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = uVar4;
  uVar3 = b_spill->off;
  if ((long)uVar1 <= (long)uVar3) {
    (b_spill->buf).len = 0;
    b_spill->off = 0;
    b_spill->lastRead = 0;
    if (p_spill.len == 0) {
      auVar6._16_8_ = 0;
      return (multireturn_int_error_)(auVar6 << 0x40);
    }
    mVar8.err.tab = (runtime_itab *)puVar2;
    mVar8.n = (int)io_EOF.tab;
    mVar8.err.data = io_EOF.data;
    return mVar8;
  }
  if (uVar3 <= uVar1) {
    if ((long)(uVar1 - uVar3) < p_spill.len) {
      p_spill.len = uVar1 - uVar3;
    }
    puVar7 = puVar2 + (uVar3 & (long)(uVar3 - (b_spill->buf).cap) >> 0x3f);
    if (p_spill.array != puVar7) {
      runtime_memmove();
      puVar7 = extraout_RAX;
    }
    b_spill->off = b_spill->off + p_spill.len;
    if (0 < p_spill.len) {
      b_spill->lastRead = -1;
    }
    mVar9.err.tab = (runtime_itab *)puVar2;
    mVar9.n = (int)puVar7;
    mVar9.err.data = p_spill.array;
    return mVar9;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceB();
}

