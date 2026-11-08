
/* WARNING: Unknown calling convention */

void runtime_printcreatedby(runtime_g *gp)

{
  runtime__func *prVar1;
  runtime_funcID in_SIL;
  undefined1 in_DIL;
  runtime_funcID in_R8B;
  long in_FS_OFFSET;
  runtime_funcInfo rVar2;
  runtime_funcInfo f;
  runtime_g *gp_spill;
  runtime__func *local_40;
  runtime_g *local_38;
  char local_28;
  
                    /* Unresolved local var: uintptr pc@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  prVar1 = (runtime__func *)gp_spill->gopc;
  rVar2 = runtime_findfunc((uintptr)gp_spill);
  if (local_40 == (runtime__func *)0x0) {
    local_28 = '\0';
  }
  else {
    rVar2._func = local_40;
    runtime_showframe(rVar2,local_38,(bool)in_DIL,in_SIL,in_R8B);
  }
  if ((local_28 != '\0') && (gp_spill->goid != 1)) {
    f.datap = rVar2.datap;
    f._func = prVar1;
    runtime_printcreatedby1(f,(uintptr)local_38);
  }
  return;
}

