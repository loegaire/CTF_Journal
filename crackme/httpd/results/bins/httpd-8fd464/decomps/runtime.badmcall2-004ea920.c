
/* WARNING: Unknown calling convention */

void runtime_badmcall2(func__runtime_g_ **fn)

{
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  func__runtime_g_ **fn_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  s.len = unaff_RBX;
  s.str = (uint8 *)0x2a2930;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}

