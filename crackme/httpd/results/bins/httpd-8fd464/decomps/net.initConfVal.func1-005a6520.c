
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void net_initConfVal_func1(void)

{
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (net_confVal->netGo == false) {
    if (net_confVal->forceCgoLookupHost == false) {
      runtime_printlock();
      s_02.len = unaff_RBX;
      s_02.str = &DAT_002a9643;
      runtime_printstring(s_02);
      runtime_printunlock();
    }
    else {
      runtime_printlock();
      s_01.len = unaff_RBX;
      s_01.str = &DAT_002a5ee4;
      runtime_printstring(s_01);
      runtime_printunlock();
    }
  }
  else if (net_netGo == false) {
    runtime_printlock();
    s_00.len = unaff_RBX;
    s_00.str = &DAT_002ab38b;
    runtime_printstring(s_00);
    runtime_printunlock();
  }
  else {
    runtime_printlock();
    s.len = unaff_RBX;
    s.str = &DAT_002abe89;
    runtime_printstring(s);
    runtime_printunlock();
  }
  return;
}

