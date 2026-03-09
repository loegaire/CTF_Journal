
/* WARNING: Unknown calling convention */

void runtime_signalDuringFork(uint32 sig)

{
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  uint32 sig_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_printlock();
  s.len = unaff_RBX;
  s.str = &DAT_0028b502;
  runtime_printstring(s);
  runtime_printuint((ulong)sig_spill);
  s_00.len = unaff_RBX;
  s_00.str = &DAT_0029cbe9;
  runtime_printstring(s_00);
  runtime_printunlock();
  s_01.len = unaff_RBX;
  s_01.str = (uint8 *)0x29ff48;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_01);
}

