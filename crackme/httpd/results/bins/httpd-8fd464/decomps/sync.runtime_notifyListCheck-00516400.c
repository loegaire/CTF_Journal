
/* WARNING: Unknown calling convention */

void sync_runtime_notifyListCheck(uintptr sz)

{
  uint64 v;
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  uintptr sz_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (sz_spill == 0x20) {
    return;
  }
  runtime_printlock();
  s.len = unaff_RBX;
  s.str = &DAT_002a4d59;
  runtime_printstring(s);
  runtime_printuint(sz_spill);
  s_00.len = unaff_RBX;
  s_00.str = &DAT_0028d205;
  runtime_printstring(s_00);
  runtime_printuint(v);
  runtime_printnl();
  runtime_printunlock();
  s_01.len = unaff_RBX;
  s_01.str = &DAT_0029b3fb;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_01);
}

