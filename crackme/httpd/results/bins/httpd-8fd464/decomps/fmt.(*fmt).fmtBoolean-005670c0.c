
/* WARNING: Unknown calling convention */

void fmt___fmt__fmtBoolean(fmt_fmt *f,bool v)

{
  int in_RCX;
  undefined7 unaff_00000019;
  long in_FS_OFFSET;
  string s;
  string s_00;
  fmt_fmt *f_spill;
  bool v_spill;
  
  s.str = (uint8 *)CONCAT71(unaff_00000019,v);
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (v_spill) {
    s.len = in_RCX;
    fmt___fmt__padString((fmt_fmt *)&DAT_002887cd,s);
  }
  else {
    s_00.len = in_RCX;
    s_00.str = s.str;
    fmt___fmt__padString((fmt_fmt *)&DAT_00288d45,s_00);
  }
  return;
}

