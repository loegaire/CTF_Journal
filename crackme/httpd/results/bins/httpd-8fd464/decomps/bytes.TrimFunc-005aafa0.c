
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bytes.TrimFunc([]uint8 s, func(int32)_bool * * f, []uint8 ~r2) */

__uint8 bytes_TrimFunc(__uint8 s,func_int32__bool **f)

{
  undefined1 auVar1 [24];
  long lVar2;
  long lVar3;
  undefined1 in_SIL;
  long in_FS_OFFSET;
  __uint8 _Var4;
  __uint8 s_spill;
  func_int32__bool **f_spill;
  undefined7 uStack_1f;
  undefined8 local_18;
  __uint8 s_00;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  _Var4.len = (int)f_spill;
  _Var4.array = s_spill.array;
  _Var4.cap = s_spill.len;
                    /* Unresolved local var: int i@[???] */
  bytes_indexFunc(_Var4,f,(bool)in_SIL);
  if (local_18 == 0xffffffffffffffff) {
    lVar2 = 0;
    lVar3 = 0;
  }
  else {
    if ((ulong)s_spill.len < local_18) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    lVar3 = s_spill.cap - local_18;
    lVar2 = s_spill.len - local_18;
  }
  s_00.len = lVar3;
  s_00.array = (uint8 *)f_spill;
  s_00.cap = lVar2;
  _Var4 = bytes_TrimRightFunc(s_00,f);
  auVar1._7_8_ = _Var4.len;
  auVar1._0_7_ = uStack_1f;
  auVar1._15_8_ = local_18;
  auVar1[0x17] = 0;
  return (__uint8)(auVar1 << 8);
}

