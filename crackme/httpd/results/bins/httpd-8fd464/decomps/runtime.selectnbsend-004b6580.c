
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.selectnbsend(runtime.hchan * c, void * elem, bool
   selected) */

bool runtime_selectnbsend(runtime_hchan *c,void *elem)

{
  undefined1 in_CL;
  uintptr in_RDI;
  long in_FS_OFFSET;
  runtime_hchan *unaff_retaddr;
  runtime_hchan *c_spill;
  void *elem_spill;
  undefined1 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_chansend(unaff_retaddr,elem,(bool)in_CL,in_RDI);
  return (bool)local_10;
}

