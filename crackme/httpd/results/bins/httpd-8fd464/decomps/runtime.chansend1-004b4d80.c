
/* WARNING: Unknown calling convention */

void runtime_chansend1(runtime_hchan *c,void *elem)

{
  bool in_CL;
  uintptr in_RDI;
  runtime_hchan *unaff_retaddr;
  runtime_hchan *c_spill;
  void *elem_spill;
  
  runtime_chansend(unaff_retaddr,elem,in_CL,in_RDI);
  return;
}

