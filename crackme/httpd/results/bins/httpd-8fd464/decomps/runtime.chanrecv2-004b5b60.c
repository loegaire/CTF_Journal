
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.chanrecv2(runtime.hchan * c, void * elem, bool received)
    */

bool runtime_chanrecv2(runtime_hchan *c,void *elem)

{
  bool in_CL;
  runtime_hchan *c_spill;
  void *elem_spill;
  undefined1 local_f;
  
  runtime_chanrecv(elem_spill,elem,in_CL);
  return (bool)local_f;
}

