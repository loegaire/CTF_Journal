
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strconv.AppendInt([]uint8 dst, int64 i, int base, []uint8 ~r3) */

__uint8 strconv_AppendInt(__uint8 dst,int64 i,int base)

{
  long lVar1;
  undefined1 in_R8B;
  undefined1 in_R9B;
  long in_FS_OFFSET;
  runtime_slice rVar3;
  __uint8 _Var4;
  __uint8 dst_00;
  __uint8 _Var5;
  multireturn___uint8_string_ mVar6;
  __uint8 dst_spill;
  int64 i_spill;
  int base_spill;
  undefined8 local_58;
  int local_50;
  ulong uVar2;
  
                    /* Unresolved local var: uint8 * ~R0.ptr@[???]
                       Unresolved local var: int ~R0.len@[???] */
  while (&stack0xfffffffffffffff8 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((99 < (ulong)i_spill) || (base_spill != 10)) {
    dst_00.len = base_spill;
    dst_00.array = (uint8 *)i_spill;
    dst_00.cap = dst_spill.cap;
    mVar6 = strconv_formatBits(dst_00,i,base,(bool)in_R8B,(bool)in_R9B);
    _Var5.len = mVar6.d.len;
    _Var5.array = (uint8 *)local_58;
    _Var5.cap = local_50;
    return _Var5;
  }
  if (i_spill < 10) {
    if (i_spill + 1U < (ulong)i_spill) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    lVar1 = 1;
  }
  else {
    uVar2 = i_spill * 2 + 2;
    if (200 < uVar2) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAlen();
    }
    if (uVar2 < (ulong)(i_spill << 1)) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    lVar1 = 2;
  }
  uVar2 = dst_spill.len + lVar1;
  if ((ulong)dst_spill.cap < uVar2) {
    rVar3.len = lVar1;
    rVar3.array = (void *)uVar2;
    rVar3.cap = i;
    rVar3 = runtime_growslice((runtime__type *)dst_spill.array,rVar3,dst_spill.cap);
    uVar2 = rVar3.len;
    dst_spill.cap = local_50;
  }
  runtime_memmove();
  _Var4.len = uVar2;
  _Var4.array = (uint8 *)dst_spill.cap;
  _Var4.cap = lVar1;
  return _Var4;
}

