
/* WARNING: Unknown calling convention */

void runtime_debugCallWrap_func2(runtime_g *gp)

{
  runtime_g *gp_00;
  long lVar1;
  runtime_g *prVar2;
  uint32 unaff_EBX;
  undefined4 unaff_0000001c;
  long in_FS_OFFSET;
  runtime_g *gp_spill;
  
                    /* Unresolved local var: runtime.g * newg@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  gp_00 = (runtime_g *)gp_spill->schedlink;
  gp_spill->schedlink = 0;
  gp_spill->waitreason = 0x1a;
  prVar2 = gp_00;
  if (runtime_trace.enabled != false) {
    runtime_traceGoPark((uint8)gp_spill,CONCAT44(unaff_0000001c,unaff_EBX));
  }
  runtime_casgstatus((runtime_g *)0x400000002,unaff_EBX,(uint32)prVar2);
                    /* Unresolved local var: runtime.g * _g_@[???] */
  lVar1 = *(long *)(in_FS_OFFSET + -8);
  *(undefined8 *)(*(long *)(*(long *)(lVar1 + 0x30) + 200) + 0x30) = 0;
  *(undefined8 *)(*(long *)(lVar1 + 0x30) + 200) = 0;
  runtime_execute(gp_00,SUB41(unaff_EBX,0));
  return;
}

