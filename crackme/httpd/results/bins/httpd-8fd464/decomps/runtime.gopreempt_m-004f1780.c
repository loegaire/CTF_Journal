
/* WARNING: Unknown calling convention */

void runtime_gopreempt_m(runtime_g *gp)

{
  long lVar1;
  undefined8 uVar2;
  int unaff_RBX;
  int in_RSI;
  undefined8 in_RDI;
  long in_FS_OFFSET;
  __uint64 args;
  runtime_g *gp_spill;
  
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
    runtime_traceEvent((uint8)lVar1,unaff_RBX,args);
  }
  runtime_goschedImpl(gp_spill);
  return;
}

