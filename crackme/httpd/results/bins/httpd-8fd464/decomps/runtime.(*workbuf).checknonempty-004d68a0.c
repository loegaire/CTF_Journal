
/* WARNING: Unknown calling convention */

void runtime___workbuf__checknonempty(runtime_workbuf *b)

{
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  runtime_workbuf *b_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((b_spill->workbufhdr).nobj != 0) {
    return;
  }
  s.len = unaff_RBX;
  s.str = &DAT_00299b65;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}

