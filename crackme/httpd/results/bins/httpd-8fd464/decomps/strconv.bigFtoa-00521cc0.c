
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strconv.bigFtoa([]uint8 dst, int prec, uint8 fmt, bool neg, uint64
   mant, int exp, strconv.floatInfo * flt, []uint8 ~r7) */

__uint8 strconv_bigFtoa(__uint8 dst,int prec,uint8 fmt,bool neg,uint64 mant,int exp,
                       strconv_floatInfo *flt)

{
  strconv_decimalSlice digs;
  undefined8 *puVar1;
  undefined1 shortest;
  strconv_floatInfo *flt_00;
  undefined7 in_register_00000081;
  uint8 fmt_00;
  long in_FS_OFFSET;
  __uint8 _Var2;
  __uint8 _Var3;
  __uint8 dst_spill;
  int prec_spill;
  uint8 fmt_spill;
  bool neg_spill;
  uint64 mant_spill;
  int exp_spill;
  strconv_floatInfo *flt_spill;
  undefined6 in_stack_fffffffffffffc2a;
  undefined8 local_390;
  int local_388;
  undefined1 local_378 [808];
  undefined8 *local_50;
  undefined8 *local_48;
  undefined1 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 *puStack_20;
  undefined8 *local_18;
  undefined8 uStack_10;
  
  fmt_00 = (uint8)mant;
                    /* Unresolved local var: strconv.decimal * d@[???]
                       Unresolved local var: strconv.decimalSlice digs@[???] */
  while (local_378 + 8 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_378._8_8_ = 0;
  flt_00 = (strconv_floatInfo *)local_378;
  FUN_0051a089();
  strconv___decimal__Assign((strconv_decimal *)(local_378 + 8),dst.len);
  strconv___decimal__Shift((strconv_decimal *)flt_spill,exp_spill - flt_spill->mantbits);
  local_38 = (undefined1 *)0x0;
  uStack_30 = 0;
  local_28 = 0;
  puStack_20 = (undefined8 *)0x0;
  local_18 = (undefined8 *)0x0;
  uStack_10 = 0;
  puVar1 = (undefined8 *)prec_spill;
  if (prec_spill < 0) {
    in_stack_fffffffffffffc2a = (undefined6)((ulong)flt_spill >> 0x10);
    strconv_roundShortest((strconv_decimal *)flt_spill,prec_spill,(int)&local_28,flt_00);
    shortest = SUB81(flt_00,0);
    puStack_20 = local_50;
    local_18 = local_48;
    if (fmt_spill < 0x48) {
      if (fmt_spill != 0x45) {
        if (fmt_spill == 0x47) {
          local_48 = (undefined8 *)prec_spill;
          puVar1 = local_50;
        }
        goto LAB_0052209b;
      }
    }
    else if (fmt_spill != 0x65) {
      if (fmt_spill == 0x66) {
        local_50 = (undefined8 *)((long)local_50 - (long)local_48);
        local_48 = (undefined8 *)0x0;
        puVar1 = (undefined8 *)0x0;
        if (0 < (long)local_50) {
          local_48 = local_50;
          puVar1 = local_50;
        }
      }
      else {
        local_48 = local_48;
        puVar1 = (undefined8 *)prec_spill;
        if (fmt_spill == 0x67) {
          local_48 = (undefined8 *)prec_spill;
          puVar1 = local_50;
        }
      }
      goto LAB_0052209b;
    }
    local_48 = (undefined8 *)prec_spill;
    puVar1 = (undefined8 *)((long)local_50 + -1);
    goto LAB_0052209b;
  }
  if (fmt_spill < 0x48) {
    if (fmt_spill == 0x45) {
LAB_00521deb:
      strconv___decimal__Round((strconv_decimal *)(prec_spill + 1),prec_spill);
    }
    else if (fmt_spill == 0x47) {
LAB_00521e4f:
      local_378._0_8_ = prec_spill;
      if (prec_spill == 0) {
        local_378._0_8_ = (undefined8 *)0x1;
      }
      strconv___decimal__Round((strconv_decimal *)0x1,local_378._0_8_);
      puVar1 = (undefined8 *)local_378._0_8_;
    }
  }
  else {
    if (fmt_spill == 0x65) goto LAB_00521deb;
    if (fmt_spill == 0x66) {
      strconv___decimal__Round((strconv_decimal *)((long)local_48 + prec_spill),prec_spill);
    }
    else if (fmt_spill == 0x67) goto LAB_00521e4f;
  }
  shortest = SUB81(flt_00,0);
  puStack_20 = local_50;
  local_18 = local_48;
  local_48 = &local_28;
LAB_0052209b:
  local_38 = local_378 + 8;
  uStack_10 = 0;
  local_28 = 800;
  uStack_30 = 800;
  _Var2.array = (ulong)neg_spill;
  digs.d.len = dst_spill.len;
  digs.d.array = dst_spill.array;
  digs.d.cap = dst_spill.cap;
  digs.nd._0_1_ = prec_spill < 0;
  digs.nd._1_1_ = neg_spill;
  digs.nd._2_6_ = in_stack_fffffffffffffc2a;
  digs.dp = (int)local_38;
  digs._40_8_ = 800;
  _Var2.len = (int)puVar1;
  _Var2.cap = (int)local_48;
  _Var2 = strconv_formatDigits
                    (_Var2,(bool)shortest,(bool)fmt_spill,digs,CONCAT71(in_register_00000081,neg),
                     fmt_00);
  _Var3.len = _Var2.len;
  _Var3.array = (uint8 *)local_390;
  _Var3.cap = local_388;
  return _Var3;
}

