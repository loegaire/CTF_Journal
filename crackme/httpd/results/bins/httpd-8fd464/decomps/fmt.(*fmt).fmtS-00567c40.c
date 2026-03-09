
/* WARNING: Unknown calling convention */

void fmt___fmt__fmtS(fmt_fmt *f,string s)

{
  long in_FS_OFFSET;
  string sVar1;
  string s_00;
  fmt_fmt *f_spill;
  string s_spill;
  undefined8 local_18;
  undefined8 local_10;
  
  sVar1.str = s.str;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  sVar1.len = s_spill.len;
  sVar1 = fmt___fmt__truncateString(f_spill,sVar1);
  s_00.str = (uint8 *)sVar1.len;
  s_00.len = local_10;
  fmt___fmt__padString(local_18,s_00);
  return;
}

