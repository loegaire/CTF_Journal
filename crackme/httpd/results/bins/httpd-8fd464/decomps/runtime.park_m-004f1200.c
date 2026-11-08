
/* WARNING: Unknown calling convention */

void runtime_park_m(runtime_g *gp)

{
  long lVar1;
  undefined8 *puVar2;
  long extraout_RAX;
  long lVar3;
  int unaff_RBX;
  long in_FS_OFFSET;
  runtime_g *gp_spill;
  undefined1 local_18;
  
                    /* Unresolved local var: runtime.g * _g_@[DW_OP_reg0(RAX)] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  lVar3 = *(long *)(in_FS_OFFSET + -8);
  if (runtime_trace.enabled != false) {
    runtime_traceGoPark((uint8)lVar3,unaff_RBX);
  }
  runtime_casgstatus(gp_spill,(uint32)unaff_RBX,2);
                    /* Unresolved local var: runtime.g * _g_@[???] */
  lVar1 = *(long *)(in_FS_OFFSET + -8);
  *(undefined8 *)(*(long *)(*(long *)(lVar1 + 0x30) + 200) + 0x30) = 0;
  *(undefined8 *)(*(long *)(lVar1 + 0x30) + 200) = 0;
                    /* Unresolved local var: func(*runtime.g,_unsafe.Pointer)_bool * * fn@[???] */
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x30) + 0x288);
  if (puVar2 != (undefined8 *)0x0) {
    (*(code *)*puVar2)();
    if (runtime_writeBarrier._0_4_ == 0) {
      *(undefined8 *)(*(long *)(lVar3 + 0x30) + 0x288) = 0;
    }
    else {
      runtime_gcWriteBarrierCX();
      lVar3 = extraout_RAX;
    }
    if (runtime_writeBarrier._0_4_ == 0) {
      *(undefined8 *)(*(long *)(lVar3 + 0x30) + 0x290) = 0;
    }
    else {
      runtime_gcWriteBarrier();
    }
    if (local_18 == '\0') {
      if (runtime_trace.enabled != false) {
        runtime_traceGoUnpark(gp_spill,0);
      }
      runtime_casgstatus(gp_spill,0,4);
      runtime_execute(gp_spill,false);
    }
  }
  runtime_schedule();
  return;
}

