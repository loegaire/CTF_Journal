
/* WARNING: Unknown calling convention */

void runtime___sigctxt__preparePanic(runtime_sigctxt *c,uint32 sig,runtime_g *gp)

{
  uintptr lr;
  uintptr *puVar1;
  long in_FS_OFFSET;
  runtime_sigctxt *c_spill;
  uint32 sig_spill;
  runtime_g *gp_spill;
  char local_18;
  
                    /* Unresolved local var: uintptr pc@[???]
                       Unresolved local var: uintptr sp@[???]
                       Unresolved local var: uint64 ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  lr = *(uintptr *)((long)c_spill->ctxt + 0xb0);
  runtime_shouldPushSigpanic((runtime_g *)c_spill,(uintptr)gp_spill,lr);
  if (local_18 == '\0') {
    *(code **)((long)c_spill->ctxt + 0xb0) = runtime_sigpanic0;
  }
  else {
                    /* Unresolved local var: uintptr sp@[???] */
    puVar1 = (uintptr *)(*(long *)((long)c_spill->ctxt + 200) + -8);
    *puVar1 = lr;
    *(uintptr **)((long)c_spill->ctxt + 200) = puVar1;
    *(code **)((long)c_spill->ctxt + 0xb0) = runtime_sigpanic0;
  }
  return;
}

