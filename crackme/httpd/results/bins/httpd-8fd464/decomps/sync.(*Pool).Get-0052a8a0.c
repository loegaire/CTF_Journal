
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void sync.(*Pool).Get(sync.Pool * p, interface_{} ~r0) */

interface___ sync___Pool__Get(sync_Pool *p)

{
  runtime__type *extraout_RAX;
  runtime__type *prVar1;
  runtime__type *prVar2;
  runtime__type *prVar3;
  runtime__type *extraout_RDX;
  runtime__type *prVar4;
  interface___ *in_RDI;
  long in_FS_OFFSET;
  interface___ iVar5;
  multireturn_interface____bool__conflict1 mVar6;
  sync_Pool *p_spill;
  runtime__type *local_38;
  runtime__type *local_30;
  runtime__type *local_28;
  
                    /* Unresolved local var: sync.poolLocal * l@[???]
                       Unresolved local var: int pid@[???]
                       Unresolved local var: interface_{} x@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  sync___Pool__pin(p_spill);
  prVar2 = (runtime__type *)local_38->size;
  prVar4 = (runtime__type *)local_38->ptrdata;
  local_38->size = 0;
  prVar3 = local_30;
  if (runtime_writeBarrier._0_4_ == 0) {
    local_38->ptrdata = 0;
    prVar1 = local_38;
  }
  else {
    in_RDI = (interface___ *)&local_38->ptrdata;
    runtime_gcWriteBarrierSI();
    prVar1 = extraout_RAX;
    prVar2 = extraout_RDX;
  }
  if (prVar2 == (runtime__type *)0x0) {
    mVar6 = sync___poolChain__popHead((sync_poolChain *)&prVar1->hash);
    prVar2 = local_38;
    prVar4 = local_30;
    if (local_38 == (runtime__type *)0x0) {
      sync___Pool__getSlow(p_spill,(int)mVar6.~r0.data);
      prVar2 = local_30;
      prVar4 = local_28;
      local_38 = prVar3;
    }
  }
  sync_runtime_procUnpin();
  if ((prVar2 == (runtime__type *)0x0) && (p_spill->New != (func___interface___ **)0x0)) {
    prVar2 = (runtime__type *)(**p_spill->New)(in_RDI);
    prVar4 = local_38;
  }
  iVar5.data = prVar4;
  iVar5._type = prVar2;
  return iVar5;
}

