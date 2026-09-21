
/* WARNING: Unknown calling convention */

void sync_throw(string s)

{
  long in_FS_OFFSET;
  string s_00;
  string s_spill;
  
  s_00.len = s.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  s_00.str = (uint8 *)s_spill.len;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_00);
}

