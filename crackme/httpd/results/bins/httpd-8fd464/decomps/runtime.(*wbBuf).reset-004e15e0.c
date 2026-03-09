
/* WARNING: Unknown calling convention */

void runtime___wbBuf__reset(runtime_wbBuf *b)

{
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  runtime_wbBuf *b_spill;
  
                    /* Unresolved local var: uintptr start@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  b_spill->next = (uintptr)b_spill->buf;
  if (runtime_writeBarrier.cgo == false) {
    b_spill->end = (uintptr)(b_spill + 1);
  }
  else {
    b_spill->end = (uintptr)(b_spill->buf + 2);
  }
  if ((b_spill->end - b_spill->next & 0xf) == 0) {
    return;
  }
  s.len = unaff_RBX;
  s.str = (uint8 *)0x2a1e31;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}

