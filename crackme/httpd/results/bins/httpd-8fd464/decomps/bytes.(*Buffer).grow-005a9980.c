
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bytes.(*Buffer).grow(bytes.Buffer * b, int n, int ~r1) */

int bytes___Buffer__grow(bytes_Buffer *b,int n)

{
  ulong uVar1;
  ulong uVar2;
  uint8 *puVar3;
  uint8 *extraout_RAX;
  uint8 *extraout_RAX_00;
  uint8 *extraout_RAX_01;
  runtime__type *prVar4;
  long lVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  interface___ e;
  bytes_Buffer *b_spill;
  int n_spill;
  uint8 *local_40;
  int local_38;
  uint8 *local_30;
  
                    /* Unresolved local var: int m@[???]
                       Unresolved local var: int ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  lVar5 = (b_spill->buf).len - b_spill->off;
  if ((lVar5 == 0) && (b_spill->off != 0)) {
    (b_spill->buf).len = 0;
    b_spill->off = 0;
    b_spill->lastRead = 0;
  }
  uVar1 = (b_spill->buf).len;
  uVar2 = (b_spill->buf).cap;
  puVar3 = (b_spill->buf).array;
  if (n_spill <= (long)(uVar2 - uVar1)) {
    uVar1 = n_spill + uVar1;
    if (uVar1 <= uVar2) {
      (b_spill->buf).len = uVar1;
      return uVar1;
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceAcap();
  }
  if ((puVar3 == (uint8 *)0x0) && (n_spill < 0x41)) {
    runtime_makeslice((runtime__type *)&DAT_00225720,(int)b_spill,uVar1);
    (b_spill->buf).len = n_spill;
    (b_spill->buf).cap = 0x40;
    if (runtime_writeBarrier._0_4_ == 0) {
      (b_spill->buf).array = local_30;
    }
    else {
      runtime_gcWriteBarrier();
      local_30 = extraout_RAX_01;
    }
    return (int)local_30;
  }
  if ((long)((uVar2 >> 1) - lVar5) < n_spill) {
    if ((long)(0x7fffffffffffffff - (n_spill + uVar2)) < (long)uVar2) {
      prVar4 = (runtime__type *)0x0;
      if (bytes_ErrTooLarge.tab != (runtime_itab *)0x0) {
        prVar4 = (bytes_ErrTooLarge.tab)->_type;
      }
      e.data = b_spill;
      e._type = prVar4;
      runtime_gopanic(e);
      goto LAB_005a9c2a;
    }
                    /* Unresolved local var: []uint8 buf@[???] */
    bytes_makeSlice(n_spill + uVar2 * 2);
    uVar1 = b_spill->off;
    if ((ulong)(b_spill->buf).len < uVar1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    if (local_40 != (b_spill->buf).array + (uVar1 & (long)(uVar1 - (b_spill->buf).cap) >> 0x3f)) {
      runtime_memmove();
    }
    (b_spill->buf).len = local_38;
    (b_spill->buf).cap = (int)local_30;
    if (runtime_writeBarrier._0_4_ == 0) {
      (b_spill->buf).array = local_40;
    }
    else {
      runtime_gcWriteBarrier();
      local_40 = extraout_RAX_00;
    }
  }
  else {
    uVar6 = b_spill->off;
    if (uVar1 < uVar6) {
LAB_005a9c2a:
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    uVar6 = uVar6 & (long)(uVar6 - uVar2) >> 0x3f;
    local_40 = puVar3 + uVar6;
    if (uVar6 != 0) {
      runtime_memmove();
      local_40 = extraout_RAX;
    }
  }
  b_spill->off = 0;
  if ((ulong)(n_spill + lVar5) <= (ulong)(b_spill->buf).cap) {
    (b_spill->buf).len = n_spill + lVar5;
    return (int)local_40;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceAcap();
}

