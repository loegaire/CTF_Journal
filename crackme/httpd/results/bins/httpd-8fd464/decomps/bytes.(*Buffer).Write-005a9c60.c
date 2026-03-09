
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bytes.(*Buffer).Write(bytes.Buffer * b, []uint8 p, int n, error
   err) */

multireturn_int_error_ bytes___Buffer__Write(bytes_Buffer *b,__uint8 p)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  uint8 *puVar4;
  uint8 *extraout_RAX;
  bytes_Buffer *extraout_RAX_00;
  void *pvVar5;
  long in_FS_OFFSET;
  multireturn_int_error_ mVar6;
  bytes_Buffer *b_spill;
  __uint8 p_spill;
  ulong local_18;
  
                    /* Unresolved local var: int m@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    b = extraout_RAX_00;
  }
  b_spill->lastRead = 0;
  uVar1 = (b_spill->buf).len;
  uVar2 = (b_spill->buf).cap;
  if ((long)(uVar2 - uVar1) < p_spill.len) {
    bytes___Buffer__grow(b,(int)b_spill);
  }
  else {
    if (uVar2 < uVar1 + p_spill.len) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAcap();
    }
    (b_spill->buf).len = uVar1 + p_spill.len;
    local_18 = uVar1;
  }
  uVar1 = (b_spill->buf).len;
  lVar3 = (b_spill->buf).cap;
  if (local_18 <= uVar1) {
    pvVar5 = (void *)(uVar1 - local_18);
    if (p_spill.len < (long)pvVar5) {
      pvVar5 = (void *)p_spill.len;
    }
    puVar4 = (b_spill->buf).array + (local_18 & (long)(local_18 - lVar3) >> 0x3f);
    if (p_spill.array != puVar4) {
      runtime_memmove();
      puVar4 = extraout_RAX;
    }
    mVar6.err.tab = (runtime_itab *)lVar3;
    mVar6.n = (int)puVar4;
    mVar6.err.data = pvVar5;
    return mVar6;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceB();
}

