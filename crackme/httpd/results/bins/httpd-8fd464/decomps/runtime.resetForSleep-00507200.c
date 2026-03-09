
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.resetForSleep(runtime.g * gp, void * ut, bool ~r2) */

bool runtime_resetForSleep(runtime_g *gp,void *ut)

{
  bool bVar1;
  uintptr in_R9;
  long in_FS_OFFSET;
  interface___ arg;
  runtime_g *gp_spill;
  runtime_timer *t;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  arg.data = (void *)t->seq;
  arg._type = (t->arg)._type;
  bVar1 = runtime_modtimer(t,(int64)t->f,t->nextwhen,(t->arg).data,arg,in_R9);
  return bVar1;
}

