
/* WARNING: Unknown calling convention */

void runtime_goyield_m(runtime_g *gp)

{
  long lVar1;
  undefined8 uVar2;
  uint32 unaff_EBX;
  undefined4 unaff_0000001c;
  int in_RSI;
  undefined8 in_RDI;
  long in_FS_OFFSET;
  __uint64 args;
  runtime_g *gp_spill;
  
                    /* Unresolved local var: runtime.p * pp@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (runtime_trace.enabled != false) {
                    /* Unresolved local var: runtime.g * _g_@[???] */
    lVar1 = *(long *)(in_FS_OFFSET + -8);
    uVar2 = *(undefined8 *)(*(long *)(lVar1 + 0x30) + 0xd8);
    *(undefined8 *)(lVar1 + 0xe0) = uVar2;
    args.len = in_RDI;
    args.array = (uint64 *)uVar2;
    args.cap = in_RSI;
    runtime_traceEvent((uint8)lVar1,CONCAT44(unaff_0000001c,unaff_EBX),args);
  }
  runtime_casgstatus(gp_spill,unaff_EBX,(uint32)gp_spill->m->p);
                    /* Unresolved local var: runtime.g * _g_@[???] */
  lVar1 = *(long *)(in_FS_OFFSET + -8);
  *(undefined8 *)(*(long *)(*(long *)(lVar1 + 0x30) + 200) + 0x30) = 0;
  *(undefined8 *)(*(long *)(lVar1 + 0x30) + 200) = 0;
  runtime_runqput((runtime_p *)gp_spill,(runtime_g *)CONCAT44(unaff_0000001c,unaff_EBX),false);
  runtime_schedule();
  return;
}

