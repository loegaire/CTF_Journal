
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bytes.TrimRightFunc([]uint8 s, func(int32)_bool * * f, []uint8
   ~r2) */

__uint8 bytes_TrimRightFunc(__uint8 s,func_int32__bool **f)

{
  ulong uVar1;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  __uint8 s_00;
  __uint8 p;
  __uint8 _Var3;
  __uint8 s_spill;
  func_int32__bool **f_spill;
  uint7 uStack_1f;
  ulong local_18;
  ulong uVar2;
  
                    /* Unresolved local var: int i@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  s_00.len = (int)f_spill;
  s_00.array = s_spill.array;
  s_00.cap = s_spill.len;
  uVar2 = s_spill.len;
  bytes_lastIndexFunc(s_00,f,SUB81(in_RSI,0));
  if (-1 < (long)local_18) {
    if ((ulong)s_spill.len <= local_18) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    uVar2 = s_spill.len;
    if (0x7f < s_spill.array[local_18]) {
                    /* Unresolved local var: int wid@[???] */
      p.cap = s_spill.len - local_18;
      p.len = (int)s_spill.array;
      p.array = (uint8 *)local_18;
      unicode_utf8_DecodeRune(p);
      uVar1 = (ulong)uStack_1f * 0x100 + local_18;
      uVar2 = local_18;
      goto LAB_005aaf4a;
    }
  }
  uVar1 = local_18 + 1;
LAB_005aaf4a:
  if ((ulong)s_spill.cap < uVar1) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceAcap();
  }
  _Var3.len = (int)s_spill.array;
  _Var3.array = (uint8 *)uVar1;
  _Var3.cap = uVar2;
  return _Var3;
}

