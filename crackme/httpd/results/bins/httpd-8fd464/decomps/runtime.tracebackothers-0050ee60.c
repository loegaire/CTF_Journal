
/* WARNING: Unknown calling convention */

void runtime_tracebackothers(runtime_g *me)

{
  byte bVar1;
  runtime_g *gp;
  uint uVar2;
  uintptr lr;
  uintptr unaff_RBX;
  uint in_RSI;
  runtime_g *in_RDI;
  long in_FS_OFFSET;
  runtime_g *me_spill;
  func__runtime_g_ *local_28 [2];
  runtime_g *local_18;
  uint local_10;
  
                    /* Unresolved local var: int32 level@[???]
                       Unresolved local var: runtime.g * curgp@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: runtime.g * _g_@[???]
                       Unresolved local var: uint32 t@[???] */
  bVar1 = *(byte *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0x131);
  uVar2 = runtime_traceback_cache >> 2;
  if (bVar1 != 0) {
    uVar2 = (uint)bVar1;
  }
  lr = (uintptr)uVar2;
  gp = *(runtime_g **)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 200);
  if ((gp != (runtime_g *)0x0) && (me_spill != gp)) {
    runtime_printlock();
    runtime_printnl();
    runtime_printunlock();
    runtime_goroutineheader(gp);
    runtime_traceback1((uintptr)gp,unaff_RBX,lr,in_RDI,in_RSI);
  }
  local_28[0] = runtime_tracebackothers_func1;
  local_18 = gp;
  local_10 = uVar2;
  runtime_forEachGRace(local_28);
  return;
}

