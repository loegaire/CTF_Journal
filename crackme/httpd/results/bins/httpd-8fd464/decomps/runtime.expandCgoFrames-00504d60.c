
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.expandCgoFrames(uintptr pc, []runtime.Frame ~r1) */

__runtime_Frame runtime_expandCgoFrames(uintptr pc)

{
  uint8 *puVar1;
  undefined8 extraout_RAX;
  runtime__type *et;
  runtime__type *src;
  runtime_cgoSymbolizerArg *prVar2;
  runtime__type *dst;
  runtime__type *prVar3;
  uint8 *cap;
  undefined8 unaff_RBX;
  uint8 **ppuVar4;
  long in_FS_OFFSET;
  __runtime_Frame _Var5;
  __runtime_Frame _Var6;
  runtime_slice old;
  uintptr pc_spill;
  uint8 *local_f0;
  runtime__type *local_e8;
  uint8 *local_d0;
  long local_c8;
  runtime__type *local_c0;
  runtime_cgoSymbolizerArg arg;
  undefined1 local_58 [24];
  runtime__type *local_40;
  uint8 *local_38;
  runtime__type *local_30;
  uintptr local_28;
  uintptr local_20;
  
                    /* Unresolved local var: []runtime.Frame frames@[???] */
  while (&arg.funcName <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  arg.file = (uint8 *)0x0;
  arg.lineno = 0;
  arg.funcName = (uint8 *)0x0;
  arg.entry = 0;
  arg.more = 0;
  arg.data = 0;
  prVar2 = &arg;
  runtime_callCgoSymbolizer((runtime_cgoSymbolizerArg *)pc_spill);
  if ((arg.file == (uint8 *)0x0) && (arg.funcName == (uint8 *)0x0)) {
    _Var5.len = unaff_RBX;
    _Var5.array = (runtime_Frame *)extraout_RAX;
    _Var5.cap = (int)prVar2;
    return _Var5;
  }
  dst = (runtime__type *)0x0;
  cap = (uint8 *)0x0;
  et = (runtime__type *)0x0;
  while( true ) {
    runtime_gostring((uint8 *)et);
    runtime_gostring(local_f0);
    ppuVar4 = &arg.file;
    prVar3 = local_e8;
    local_38 = (uint8 *)FUN_0051a190();
    local_58._16_8_ = local_f0;
    local_40 = local_e8;
    local_28 = arg.lineno;
    local_20 = arg.entry;
    src = (runtime__type *)((long)&et->size + 1);
    puVar1 = cap;
    local_30 = prVar3;
    if (dst < src) {
      old.len = (int)src;
      old.array = dst;
      old.cap = (int)ppuVar4;
      runtime_growslice(et,old,(int)cap);
      src = (runtime__type *)(local_c8 + 1);
      dst = local_c0;
      puVar1 = local_d0;
      local_f0 = cap;
      local_e8 = et;
    }
    cap = puVar1;
    prVar3 = src;
    if (runtime_writeBarrier._0_4_ == 0) {
      FUN_0051a4fa(cap + (long)et * 0x50,local_58,pc_spill);
    }
    else {
      local_e8 = (runtime__type *)local_58;
      runtime_typedmemmove(local_e8,dst,src);
      local_f0 = cap + (long)et * 0x50;
    }
    if (arg.more == 0) break;
    runtime_callCgoSymbolizer(&arg);
    et = src;
  }
  arg.pc = 0;
  runtime_callCgoSymbolizer(&arg);
  _Var6.len = (int)dst;
  _Var6.array = (runtime_Frame *)dst;
  _Var6.cap = (int)prVar3;
  return _Var6;
}

