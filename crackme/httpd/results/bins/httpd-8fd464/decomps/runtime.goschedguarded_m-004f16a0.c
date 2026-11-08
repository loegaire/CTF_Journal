
/* WARNING: Unknown calling convention */

void runtime_goschedguarded_m(runtime_g *gp)

{
  runtime_m *prVar1;
  long lVar2;
  undefined8 uVar3;
  int unaff_RBX;
  int in_RSI;
  undefined8 in_RDI;
  long in_FS_OFFSET;
  __uint64 args;
  runtime_g *gp_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  prVar1 = gp_spill->m;
  if ((((prVar1->locks != 0) || (prVar1->mallocing != 0)) || ((prVar1->preemptoff).len != 0)) ||
     (*(int *)(prVar1->p + 4) != 1)) {
    runtime_gogo();
  }
  if (runtime_trace.enabled != false) {
                    /* Unresolved local var: runtime.g * _g_@[???] */
    lVar2 = *(long *)(in_FS_OFFSET + -8);
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x30) + 0xd8);
    *(undefined8 *)(lVar2 + 0xe0) = uVar3;
    args.len = in_RDI;
    args.array = (uint64 *)uVar3;
    args.cap = in_RSI;
    runtime_traceEvent((uint8)lVar2,unaff_RBX,args);
  }
  runtime_goschedImpl(gp_spill);
  return;
}

