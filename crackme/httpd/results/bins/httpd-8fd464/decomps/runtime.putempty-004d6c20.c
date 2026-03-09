
/* WARNING: Unknown calling convention */

void runtime_putempty(runtime_workbuf *b)

{
  runtime_lfnode *unaff_RBX;
  long in_FS_OFFSET;
  runtime_workbuf *b_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime___workbuf__checkempty(b_spill);
  runtime___lfstack__push((runtime_lfstack *)b_spill,unaff_RBX);
  return;
}

