
/* WARNING: Unknown calling convention */

void fmt___pp__fmtInteger(fmt_pp *p,uint64 v,bool isSigned,int32 verb)

{
  int32 in_ESI;
  bool isSigned_00;
  uint8 *in_R8;
  int in_R9;
  long in_FS_OFFSET;
  string digits;
  string digits_00;
  string digits_01;
  string digits_02;
  string digits_03;
  string digits_04;
  fmt_pp *p_spill;
  uint64 v_spill;
  bool isSigned_spill;
  int32 verb_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  isSigned_00 = SUB41(verb,0);
  if (verb_spill < 100) {
    if (verb_spill < 0x56) {
      if (verb_spill == 0x4f) {
LAB_0056a8a9:
        digits_01.len = in_R9;
        digits_01.str = in_R8;
        fmt___fmt__fmtInteger
                  ((fmt_fmt *)&DAT_00299beb,v,(ulong)isSigned_spill,isSigned_00,in_ESI,digits_01);
        return;
      }
      if (verb_spill == 0x55) {
        fmt___fmt__fmtUnicode((fmt_fmt *)v_spill,v);
        return;
      }
    }
    else {
      if (verb_spill == 0x58) {
        digits_00.len = in_R9;
        digits_00.str = in_R8;
        fmt___fmt__fmtInteger
                  ((fmt_fmt *)&DAT_00299bda,v,(ulong)isSigned_spill,isSigned_00,in_ESI,digits_00);
        return;
      }
      if (verb_spill == 0x62) {
        digits.len = in_R9;
        digits.str = in_R8;
        fmt___fmt__fmtInteger
                  ((fmt_fmt *)&DAT_00299beb,v,(ulong)isSigned_spill,isSigned_00,in_ESI,digits);
        return;
      }
      if (verb_spill == 99) {
        fmt___fmt__fmtC((fmt_fmt *)v_spill,v);
        return;
      }
    }
  }
  else if (verb_spill < 0x70) {
    if (verb_spill == 100) {
      digits_02.len = in_R9;
      digits_02.str = in_R8;
      fmt___fmt__fmtInteger
                ((fmt_fmt *)&DAT_00299beb,v,(ulong)isSigned_spill,isSigned_00,in_ESI,digits_02);
      return;
    }
    if (verb_spill == 0x6f) goto LAB_0056a8a9;
  }
  else {
    if (verb_spill == 0x71) {
      fmt___fmt__fmtQc((fmt_fmt *)v_spill,v);
      return;
    }
    if (verb_spill == 0x76) {
      if (((p_spill->fmt).fmtFlags.sharpV != false) && (!isSigned_spill)) {
        fmt___pp__fmt0x64((fmt_pp *)v_spill,v,SUB81(p_spill,0));
        return;
      }
      digits_03.len = in_R9;
      digits_03.str = in_R8;
      fmt___fmt__fmtInteger((fmt_fmt *)&DAT_00299beb,v,v_spill,isSigned_00,in_ESI,digits_03);
      return;
    }
    if (verb_spill == 0x78) {
      digits_04.len = in_R9;
      digits_04.str = in_R8;
      fmt___fmt__fmtInteger
                ((fmt_fmt *)&DAT_00299beb,v,(ulong)isSigned_spill,isSigned_00,in_ESI,digits_04);
      return;
    }
  }
  fmt___pp__badVerb((fmt_pp *)(ulong)(uint)verb_spill,(int32)v);
  return;
}

