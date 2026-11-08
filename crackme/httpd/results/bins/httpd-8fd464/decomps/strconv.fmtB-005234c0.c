
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strconv.fmtB([]uint8 dst, bool neg, uint64 mant, int exp,
   strconv.floatInfo * flt, []uint8 ~r5) */

__uint8 strconv_fmtB(__uint8 dst,bool neg,uint64 mant,int exp,strconv_floatInfo *flt)

{
  ulong uVar1;
  runtime__type *base;
  long lVar2;
  runtime__type *cap;
  undefined7 in_register_00000039;
  uint64 u;
  undefined1 neg_00;
  undefined1 append_;
  long in_FS_OFFSET;
  __uint8 dst_00;
  __uint8 dst_01;
  __uint8 _Var3;
  runtime_slice old;
  runtime_slice old_00;
  runtime_slice old_01;
  multireturn___uint8_string_ mVar4;
  __uint8 dst_spill;
  bool neg_spill;
  uint64 mant_spill;
  int exp_spill;
  strconv_floatInfo *flt_spill;
  undefined1 local_48;
  undefined1 uStack_47;
  undefined6 uStack_46;
  long local_40;
  runtime__type *local_38;
  runtime__type *local_30;
  
  append_ = SUB81(flt,0);
  neg_00 = (undefined1)exp;
  u = CONCAT71(in_register_00000039,neg);
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (neg_spill) {
    uVar1 = dst_spill.len + 1;
    if ((ulong)dst_spill.cap < uVar1) {
      old.len = uVar1;
      old.array = &DAT_00225720;
      old.cap = u;
      mant = (uint64)dst_spill.array;
      runtime_growslice((runtime__type *)dst_spill.len,old,(int)dst_spill.array);
      dst_spill.array = (uint8 *)CONCAT62(uStack_46,CONCAT11(uStack_47,local_48));
      uVar1 = local_40 + 1;
    }
    dst_spill.array[dst_spill.len] = 0x2d;
    dst_spill.len = uVar1;
  }
  dst_00.len = (int)dst_spill.array;
  dst_00.array = (uint8 *)mant_spill;
  dst_00.cap = dst_spill.len;
  mVar4 = strconv_formatBits(dst_00,u,mant,(bool)neg_00,(bool)append_);
  old_00.cap = mVar4.s.str;
  base = (runtime__type *)((long)&local_38->size + 1);
  lVar2 = local_40;
  if (local_30 < base) {
    old_00.len = (int)local_30;
    old_00.array = (void *)local_40;
    runtime_growslice(local_38,old_00,0x225720);
    lVar2 = CONCAT62(uStack_46,0x100);
    base = (runtime__type *)(local_40 + 1);
    local_30 = local_38;
  }
  *(undefined1 *)((long)&local_38->size + lVar2) = 0x70;
  dst_01.array = exp_spill - flt_spill->mantbits;
  if (-1 < dst_01.array) {
    cap = (runtime__type *)((long)&base->size + 1);
    if (local_30 < cap) {
      old_01.len = (int)local_30;
      old_01.array = (void *)lVar2;
      old_01.cap = (int)old_00.cap;
      runtime_growslice((runtime__type *)&DAT_00225720,old_01,(int)cap);
      lVar2 = CONCAT62(uStack_46,0x100);
      cap = (runtime__type *)(local_40 + 1);
      local_30 = local_38;
    }
    *(undefined1 *)((long)&base->size + lVar2) = 0x2b;
    base = cap;
  }
  dst_01.len = lVar2;
  dst_01.cap = (int)local_30;
  mVar4 = strconv_formatBits(dst_01,(uint64)old_00.cap,(int)base,(bool)neg_00,(bool)append_);
  _Var3.len = mVar4.d.len;
  _Var3.array = (uint8 *)local_40;
  _Var3.cap = (int)local_38;
  return _Var3;
}

