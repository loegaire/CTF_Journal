
/* WARNING: Unknown calling convention */

void fmt___pp__fmtString(fmt_pp *p,string v,int32 verb)

{
  int iVar1;
  undefined8 in_RSI;
  undefined4 in_register_0000003c;
  undefined8 uVar2;
  int in_R8;
  uint8 *in_R9;
  int in_R10;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  __uint8 b;
  __uint8 b_00;
  string digits;
  string digits_00;
  fmt_pp *p_spill;
  string v_spill;
  int32 verb_spill;
  
  uVar2 = CONCAT44(in_register_0000003c,verb);
  iVar1 = v.len;
  s.str = v.str;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (verb_spill < 0x72) {
    if (verb_spill == 0x58) {
      s_00.len = iVar1;
      s_00.str = s.str;
      b.len = in_RSI;
      b.array = (uint8 *)uVar2;
      b.cap = in_R8;
      digits.len = in_R10;
      digits.str = in_R9;
      fmt___fmt__fmtSbx((fmt_fmt *)&DAT_00299bda,s_00,b,digits);
      return;
    }
    if (verb_spill == 0x71) {
      s.len = iVar1;
      fmt___fmt__fmtQ((fmt_fmt *)v_spill.len,s);
      return;
    }
  }
  else {
    if (verb_spill == 0x73) {
      s_04.len = iVar1;
      s_04.str = s.str;
      fmt___fmt__fmtS((fmt_fmt *)v_spill.len,s_04);
      return;
    }
    if (verb_spill == 0x76) {
      if ((p_spill->fmt).fmtFlags.sharpV != false) {
        s_01.len = iVar1;
        s_01.str = s.str;
        fmt___fmt__fmtQ((fmt_fmt *)v_spill.len,s_01);
        return;
      }
      s_02.len = iVar1;
      s_02.str = s.str;
      fmt___fmt__fmtS((fmt_fmt *)v_spill.len,s_02);
      return;
    }
    if (verb_spill == 0x78) {
      s_03.len = iVar1;
      s_03.str = s.str;
      b_00.len = in_RSI;
      b_00.array = (uint8 *)uVar2;
      b_00.cap = in_R8;
      digits_00.len = in_R10;
      digits_00.str = in_R9;
      fmt___fmt__fmtSbx((fmt_fmt *)&DAT_00299beb,s_03,b_00,digits_00);
      return;
    }
  }
  fmt___pp__badVerb((fmt_pp *)(ulong)(uint)verb_spill,(int32)v.str);
  return;
}

