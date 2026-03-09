
/* WARNING: Unknown calling convention */

void runtime_chanrecv1(runtime_hchan *c,void *elem)

{
  bool in_CL;
  runtime_hchan *c_spill;
  void *elem_spill;
  
  runtime_chanrecv(elem_spill,elem,in_CL);
  return;
}

