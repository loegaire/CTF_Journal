
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strconv.formatDigits([]uint8 dst, bool shortest, bool neg,
   strconv.decimalSlice digs, int prec, uint8 fmt, []uint8 ~r6) */

__uint8 strconv_formatDigits
                  (__uint8 dst,bool shortest,bool neg,strconv_decimalSlice digs,int prec,uint8 fmt)

{
  long lVar1;
  strconv_decimalSlice d;
  strconv_decimalSlice d_00;
  strconv_decimalSlice d_01;
  strconv_decimalSlice d_02;
  long lVar2;
  int iVar3;
  undefined7 in_register_00000031;
  int prec_00;
  undefined7 in_register_00000039;
  int iVar4;
  uint8 fmt_00;
  long in_FS_OFFSET;
  runtime_slice old;
  __uint8 _Var5;
  __uint8 _Var6;
  __uint8 _Var7;
  __uint8 dst_01;
  __uint8 _Var8;
  __uint8 _Var9;
  __uint8 _Var10;
  __uint8 _Var11;
  __uint8 dst_spill;
  bool shortest_spill;
  bool neg_spill;
  int eprec;
  uint8 fmt_spill;
  undefined7 in_stack_ffffffffffffff99;
  uint8 *in_stack_ffffffffffffffa8;
  int iStack_48;
  undefined1 local_28;
  undefined7 uStack_27;
  int local_20;
  int local_18;
  __uint8 dst_00;
  
  fmt_00 = (uint8)prec;
  iVar4 = CONCAT71(in_register_00000039,shortest);
  prec_00 = CONCAT71(in_register_00000031,neg);
  iVar3 = dst.cap;
  _Var6.len = dst.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  _Var6.array = (ulong)fmt_spill;
                    /* Unresolved local var: int exp@[???] */
  _Var10 = digs.d;
  if (fmt_spill < 0x48) {
    if (fmt_spill == 0x45) {
LAB_005221a8:
      d.nd._0_1_ = digs.nd._1_1_;
      d.d = _Var10;
      d.nd._1_7_ = in_stack_ffffffffffffff99;
      d.dp = digs.dp;
      d.neg = digs.neg;
      d._41_7_ = digs._41_7_;
      _Var6.cap = eprec;
      _Var6 = strconv_fmtE(_Var6,SUB81(iVar4,0),d,prec_00,fmt_00);
      _Var5.len = _Var6.len;
      _Var5.array = (uint8 *)local_20;
      _Var5.cap = local_18;
      return _Var5;
    }
    if (fmt_spill == 0x47) {
LAB_00522258:
      iVar3 = eprec;
      if ((dst_spill.len < eprec) && (dst_spill.cap <= dst_spill.len)) {
        iVar3 = dst_spill.len;
      }
      if ((char)digs.nd != '\0') {
        iVar3 = 6;
      }
      lVar1 = dst_spill.cap + -1;
      if ((-5 < lVar1) && (lVar1 < iVar3)) {
        if (dst_spill.cap < eprec) {
          eprec = dst_spill.len;
        }
        dst_01.len = eprec - dst_spill.cap;
        lVar2 = 0;
        if (0 < dst_01.len) {
          lVar2 = dst_01.len;
        }
        d_01.nd._0_1_ = digs.nd._1_1_;
        d_01.d = _Var10;
        d_01.nd._1_7_ = in_stack_ffffffffffffff99;
        d_01.dp = digs.dp;
        d_01.neg = digs.neg;
        d_01._41_7_ = digs._41_7_;
        dst_01.array = (uint8 *)lVar2;
        dst_01.cap = dst_spill.len;
        _Var6 = strconv_fmtF(dst_01,SUB81(lVar1,0),d_01,dst_spill.cap);
        _Var8.len = _Var6.len;
        _Var8.array._1_7_ = uStack_27;
        _Var8.array._0_1_ = local_28;
        _Var8.cap = local_20;
        return _Var8;
      }
      if (dst_spill.len < eprec) {
        eprec = dst_spill.len;
      }
      dst_00.array = (ulong)(fmt_spill - 2);
      d_00.nd._0_1_ = digs.nd._1_1_;
      d_00.d = _Var10;
      d_00.nd._1_7_ = in_stack_ffffffffffffff99;
      d_00.dp = digs.dp;
      d_00.neg = digs.neg;
      d_00._41_7_ = digs._41_7_;
      dst_00.len = eprec;
      dst_00.cap = eprec + -1;
      _Var6 = strconv_fmtE(dst_00,SUB81(lVar1,0),d_00,dst_spill.cap,fmt_00);
      _Var7.len = _Var6.len;
      _Var7.array = (uint8 *)local_20;
      _Var7.cap = local_18;
      return _Var7;
    }
  }
  else {
    if (fmt_spill == 0x65) goto LAB_005221a8;
    if (fmt_spill == 0x66) {
      d_02.nd._0_1_ = digs.nd._1_1_;
      d_02.d = _Var10;
      d_02.nd._1_7_ = in_stack_ffffffffffffff99;
      d_02.dp = digs.dp;
      d_02.neg = digs.neg;
      d_02._41_7_ = digs._41_7_;
      _Var10.len = _Var6.len;
      _Var10.array = (uint8 *)eprec;
      _Var10.cap = iVar3;
      _Var6 = strconv_fmtF(_Var10,SUB81(iVar4,0),d_02,prec_00);
      _Var11.len = _Var6.len;
      _Var11.array._1_7_ = uStack_27;
      _Var11.array._0_1_ = local_28;
      _Var11.cap = local_20;
      return _Var11;
    }
    if (fmt_spill == 0x67) goto LAB_00522258;
  }
  if ((ulong)digs.d.cap < digs.d.len + 2U) {
    old.len = digs.d.len;
    old.array = (void *)digs.d.cap;
    old.cap = iVar4;
    runtime_growslice((runtime__type *)digs.d.array,old,prec_00);
    digs.d.array = in_stack_ffffffffffffffa8;
    digs.d.cap = iStack_48;
  }
  _Var9.array = (ulong)fmt_spill;
  digs.d.array[digs.d.len] = 0x25;
  digs.d.array[digs.d.len + 1] = fmt_spill;
  _Var9.len = digs.d.cap;
  _Var9.cap = digs.d.len;
  return _Var9;
}

