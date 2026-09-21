
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.fmtNSAsMS([]uint8 buf, uint64 ns, []uint8 ~r2) */

__uint8 runtime_fmtNSAsMS(__uint8 buf,uint64 ns)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  __uint8 _Var7;
  __uint8 _Var8;
  __uint8 _Var9;
  __uint8 buf_spill;
  uint64 ns_spill;
  
                    /* Unresolved local var: uint64 x@[???]
                       Unresolved local var: int dec@[???] */
  if (9999999 < ns_spill) {
    uVar4 = ns_spill / 1000000;
                    /* Unresolved local var: int i@[???] */
    uVar5 = buf_spill.len - 1;
    uVar1 = uVar5;
    while ((uVar6 = uVar1, cVar2 = (char)uVar4, 9 < uVar4 || ((long)uVar5 <= (long)uVar6))) {
      uVar4 = uVar4 / 10;
      if ((ulong)buf_spill.len <= uVar6) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      buf_spill.array[uVar6] = cVar2 + (char)uVar4 * -10 + 0x30;
      uVar1 = uVar6 - 1;
      if (uVar1 == uVar5) {
        if ((ulong)buf_spill.len <= uVar1) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        buf_spill.array[uVar6 - 1] = 0x2e;
        uVar1 = uVar6 - 2;
      }
    }
    if ((ulong)buf_spill.len <= uVar6) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    buf_spill.array[uVar6] = cVar2 + 0x30;
    _Var9.array = buf_spill.array + ((long)-(buf_spill.cap - uVar6) >> 0x3f & uVar6);
    _Var9.cap = buf_spill.len - uVar6;
    _Var9.len = uVar6;
    return _Var9;
  }
  _Var7.len = ns_spill >> 1;
  uVar5 = _Var7.len / 500;
  if (uVar5 == 0) {
    if (buf_spill.len == 0) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    *buf_spill.array = 0x30;
    if (buf_spill.cap == 0) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAcap();
    }
    _Var7.array = buf_spill.array;
    _Var7.cap = buf_spill.len;
    return _Var7;
  }
  lVar3 = 3;
  for (; 99 < uVar5; uVar5 = uVar5 / 10) {
    lVar3 = lVar3 + -1;
  }
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int idec@[???] */
  uVar1 = (buf_spill.len - lVar3) - 1;
  uVar4 = buf_spill.len - 1;
  while ((uVar6 = uVar4, cVar2 = (char)uVar5, 9 < uVar5 || ((long)uVar1 <= (long)uVar6))) {
    uVar5 = uVar5 / 10;
    if ((ulong)buf_spill.len <= uVar6) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    buf_spill.array[uVar6] = cVar2 + (char)uVar5 * -10 + 0x30;
    uVar4 = uVar6 - 1;
    if (uVar4 == uVar1) {
      if ((ulong)buf_spill.len <= uVar4) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      buf_spill.array[uVar6 - 1] = 0x2e;
      uVar4 = uVar6 - 2;
    }
  }
  if ((ulong)buf_spill.len <= uVar6) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  buf_spill.array[uVar6] = cVar2 + 0x30;
  _Var8.array = buf_spill.array + ((long)-(buf_spill.cap - uVar6) >> 0x3f & uVar6);
  _Var8.len = uVar6;
  _Var8.cap = buf_spill.cap - uVar6;
  return _Var8;
}

