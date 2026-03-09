
/* WARNING: Unknown calling convention */

void sync___poolChain__pushHead(sync_poolChain *c,interface___ val)

{
  long lVar1;
  sync_poolChain *psVar2;
  runtime__type *et;
  runtime__type *extraout_RAX;
  runtime__type *typ;
  long in_FS_OFFSET;
  interface___ val_00;
  interface___ val_01;
  sync_poolChain *c_spill;
  interface___ val_spill;
  runtime__type *local_40;
  char local_30;
  uint7 uStack_2f;
  
  val_00._type = val._type;
                    /* Unresolved local var: sync.poolChainElt * d@[???]
                       Unresolved local var: int newSize@[???]
                       Unresolved local var: sync.poolChainElt * d2@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  typ = (runtime__type *)c_spill->head;
  if ((runtime__type *)c_spill->head == (runtime__type *)0x0) {
    runtime_newobject((runtime__type *)&DAT_002590e0);
    runtime_makeslice(local_40,(int)val_00._type,0x24e620);
    local_40->hash = 8;
    local_40->tflag = 0;
    local_40->align = 0;
    local_40->fieldAlign = 0;
    local_40->kind = 0;
    local_40->equal = (func_unsafe_Pointer__unsafe_Pointer__bool **)&DAT_00000008;
    psVar2 = c_spill;
    if (runtime_writeBarrier._0_4_ == 0) {
      local_40->ptrdata = CONCAT71(uStack_2f,local_30);
      c_spill->head = (sync_poolChainElt *)local_40;
    }
    else {
      runtime_gcWriteBarrier();
      runtime_gcWriteBarrierCX();
    }
    sync_atomic_StorePointer(&psVar2->head,val_00._type);
    typ = local_40;
  }
  val_00.data = typ;
  sync___poolDequeue__pushHead((sync_poolDequeue *)val_spill._type,val_00);
  if (local_30 == '\0') {
    lVar1 = *(long *)&typ->hash;
    runtime_newobject(typ);
    et = (runtime__type *)(lVar1 * 2);
    if (0x3fffffff < (long)et) {
      et = (runtime__type *)0x40000000;
    }
    if (runtime_writeBarrier._0_4_ == 0) {
      *(runtime__type **)&(val_spill._type)->str = typ;
    }
    else {
      runtime_gcWriteBarrierDX();
      et = extraout_RAX;
    }
    runtime_makeslice(et,(int)val_00._type,0x24e620);
    *(runtime__type **)&(val_spill._type)->hash = et;
    (val_spill._type)->equal = (func_unsafe_Pointer__unsafe_Pointer__bool **)et;
    if (runtime_writeBarrier._0_4_ == 0) {
      (val_spill._type)->ptrdata = (ulong)uStack_2f << 8;
      c_spill->head = (sync_poolChainElt *)val_spill._type;
    }
    else {
      runtime_gcWriteBarrier();
      runtime_gcWriteBarrierDX();
    }
    sync_atomic_StorePointer(&typ->gcdata,val_00._type);
    val_01.data = et;
    val_01._type = val_00._type;
    sync___poolDequeue__pushHead(val_spill.data,val_01);
    return;
  }
  return;
}

