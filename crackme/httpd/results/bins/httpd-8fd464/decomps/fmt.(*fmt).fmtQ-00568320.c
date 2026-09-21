
/* WARNING: Unknown calling convention */

void fmt___fmt__fmtQ(fmt_fmt *f,string s)

{
  int in_RSI;
  uint8 *in_RDI;
  uint8 *in_R8;
  int in_R9;
  undefined1 in_R10B;
  long in_FS_OFFSET;
  string sVar1;
  string s_00;
  string s_01;
  string s_02;
  string a1;
  __uint8 buf;
  __uint8 buf_00;
  string a0;
  string s_03;
  __uint8 b;
  __uint8 b_00;
  string a2;
  fmt_fmt *f_spill;
  string s_spill;
  char local_70;
  uint8 *local_68;
  int local_60;
  fmt_fmt *local_50;
  fmt_fmt *local_48;
  int local_40;
  
  sVar1.str = s.str;
                    /* Unresolved local var: []uint8 buf@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  sVar1.len = s_spill.len;
  sVar1 = fmt___fmt__truncateString(f_spill,sVar1);
  s_00.len = (uint8 *)sVar1.len;
  if ((f_spill->fmtFlags).sharp != false) {
    s_00.str = local_68;
    strconv_CanBackquote(s_00);
    local_70 = (char)s_spill.len;
    if (local_70 != '\0') {
      a1.len = in_RSI;
      a1.str = in_RDI;
      a0.len = local_60;
      a0.str = s_00.len;
      a2.len = in_R9;
      a2.str = in_R8;
      sVar1 = runtime_concatstring3((runtime_tmpBuf *)((long)&DAT_00287754 + 4),a0,a1,a2);
      s_03.str = (uint8 *)sVar1.len;
      s_03.len = local_40;
      fmt___fmt__padString(local_48,s_03);
      return;
    }
  }
  if ((f_spill->fmtFlags).plus == false) {
    s_02.len = in_RSI;
    s_02.str = in_RDI;
    buf_00.len = (int)f_spill->intbuf;
    buf_00.array = local_68;
    buf_00.cap = local_60;
    strconv_appendQuotedWith(buf_00,s_02,(uint8)in_R8,SUB81(in_R9,0),(bool)in_R10B);
    b_00.len = (int)local_48;
    b_00.array = (uint8 *)f_spill;
    b_00.cap = (int)in_RDI;
    fmt___fmt__pad(local_50,b_00);
  }
  else {
    s_01.len = in_RSI;
    s_01.str = in_RDI;
    buf.len = (int)f_spill->intbuf;
    buf.array = local_68;
    buf.cap = local_60;
    strconv_appendQuotedWith(buf,s_01,(uint8)in_R8,SUB81(in_R9,0),(bool)in_R10B);
    b.len = (int)local_48;
    b.array = (uint8 *)f_spill;
    b.cap = (int)in_RDI;
    fmt___fmt__pad(local_50,b);
  }
  return;
}

