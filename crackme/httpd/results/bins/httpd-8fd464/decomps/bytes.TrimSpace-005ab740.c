
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bytes.TrimSpace([]uint8 s, []uint8 ~r1) */

__uint8 bytes_TrimSpace(__uint8 s)

{
  func_int32__bool **f;
  byte bVar1;
  func_int32__bool **ppfVar2;
  func_int32__bool **ppfVar3;
  long in_FS_OFFSET;
  __uint8 _Var4;
  __uint8 _Var5;
  __uint8 _Var6;
  __uint8 _Var7;
  __uint8 _Var8;
  __uint8 s_spill;
  undefined8 local_20;
  int local_18;
  __uint8 s_00;
  
                    /* Unresolved local var: int start@[???]
                       Unresolved local var: int stop@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  for (ppfVar2 = (func_int32__bool **)0x0; f = (func_int32__bool **)s_spill.len,
      (long)ppfVar2 < s_spill.len; ppfVar2 = (func_int32__bool **)((long)ppfVar2 + 1)) {
                    /* Unresolved local var: uint8 c@[???] */
    bVar1 = s_spill.array[(long)ppfVar2];
    if (0x7f < bVar1) {
      _Var5.cap = s_spill.array + (-(s_spill.cap - (long)ppfVar2) >> 0x3f & (ulong)ppfVar2);
      _Var5.len = (int)s_spill.array;
      _Var5.array = (uint8 *)&PTR_unicode_IsSpace_002b3b68;
      _Var5 = bytes_TrimFunc(_Var5,(func_int32__bool **)(ulong)bVar1);
      _Var4.len = _Var5.len;
      _Var4.array = (uint8 *)local_20;
      _Var4.cap = local_18;
      return _Var4;
    }
    if (*(char *)((func_int32__bool **)(ulong)bVar1 + 0xebd04) == '\0') break;
  }
  do {
    ppfVar3 = f;
    if ((long)ppfVar3 <= (long)ppfVar2) break;
                    /* Unresolved local var: uint8 c@[???] */
    f = (func_int32__bool **)((long)ppfVar3 + -1);
    if ((ulong)s_spill.len <= f) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if (0x7f < s_spill.array[(long)ppfVar3 + -1]) {
      if (ppfVar3 < ppfVar2) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceB();
      }
      s_00.cap = s_spill.array + (-(s_spill.cap - (long)ppfVar2) >> 0x3f & (ulong)ppfVar2);
      s_00.len = (int)s_spill.array;
      s_00.array = (uint8 *)&PTR_unicode_IsSpace_002b3b68;
      _Var5 = bytes_TrimFunc(s_00,f);
      _Var6.len = _Var5.len;
      _Var6.array = (uint8 *)local_20;
      _Var6.cap = local_18;
      return _Var6;
    }
  } while (bytes_asciiSpace[s_spill.array[(long)ppfVar3 + -1]] != 0);
  if (ppfVar3 == ppfVar2) {
    _Var8.len = (int)s_spill.array;
    _Var8.array = (uint8 *)ppfVar2;
    _Var8.cap = s_spill.len;
    return _Var8;
  }
  if ((ulong)s_spill.cap < ppfVar3) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceAcap();
  }
  if (ppfVar3 < ppfVar2) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceB();
  }
  _Var7.len = (int)s_spill.array;
  _Var7.array = (uint8 *)ppfVar2;
  _Var7.cap = s_spill.cap - (long)ppfVar2;
  return _Var7;
}

