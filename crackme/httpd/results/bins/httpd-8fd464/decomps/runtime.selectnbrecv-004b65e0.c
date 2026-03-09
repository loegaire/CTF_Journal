
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.selectnbrecv(void * elem, runtime.hchan * c, bool
   selected, bool received) */

multireturn_bool_bool_ runtime_selectnbrecv(void *elem,runtime_hchan *c)

{
  undefined8 in_RCX;
  long in_FS_OFFSET;
  multireturn_bool_bool_ mVar1;
  void *elem_spill;
  runtime_hchan *c_spill;
  undefined1 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  mVar1 = runtime_chanrecv(elem_spill,c,SUB81(in_RCX,0));
  mVar1.selected = local_10;
  return mVar1;
}

