
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.showframe(runtime.funcInfo f, runtime.g * gp, bool
   firstFrame, runtime.funcID funcID, runtime.funcID childID, bool ~r5) */

bool runtime_showframe(runtime_funcInfo f,runtime_g *gp,bool firstFrame,runtime_funcID funcID,
                      runtime_funcID childID)

{
  runtime_g *prVar1;
  long in_FS_OFFSET;
  runtime_funcInfo f_00;
  runtime_funcInfo f_spill;
  runtime_g *gp_spill;
  bool firstFrame_spill;
  runtime_funcID funcID_spill;
  runtime_funcID childID_spill;
  undefined1 local_10;
  
  f_00.datap = f.datap;
                    /* Unresolved local var: runtime.g * g@[DW_OP_reg0(RAX)] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  prVar1 = *(runtime_g **)(*(long *)(in_FS_OFFSET + -8) + 0x30);
  if (((0 < *(int *)((long)&(prVar1->writebuf).array + 4)) &&
      (gp = gp_spill, gp_spill != (runtime_g *)0x0)) &&
     (((runtime_g *)prVar1->runnableTime == gp_spill ||
      (prVar1 = (runtime_g *)prVar1->sysexitticks, gp_spill == prVar1)))) {
    return SUB81(prVar1,0);
  }
  f_00._func = (runtime__func *)(ulong)childID_spill;
  runtime_showfuncinfo(f_00,SUB81(gp,0),firstFrame,funcID);
  return (bool)local_10;
}

