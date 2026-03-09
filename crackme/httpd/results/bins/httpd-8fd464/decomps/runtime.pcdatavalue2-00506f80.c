
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.pcdatavalue2(runtime.funcInfo f, uint32 table, uintptr
   targetpc, int32 ~r3, uintptr ~r4) */

multireturn_int32_uintptr__conflict
runtime_pcdatavalue2(runtime_funcInfo f,uint32 table,uintptr targetpc)

{
  runtime_pcvalueCache *in_RSI;
  undefined1 in_R8B;
  long in_FS_OFFSET;
  runtime_funcInfo f_00;
  multireturn_int32_uintptr__conflict mVar1;
  multireturn_int32_uintptr_ mVar2;
  multireturn_int32_uintptr__conflict mVar3;
  runtime_funcInfo f_spill;
  uint32 table_spill;
  uintptr targetpc_spill;
  int32 local_18;
  
  mVar1.~r4 = f.datap;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((f_spill._func)->npcdata <= table_spill) {
    mVar1.~r3 = table_spill;
    return mVar1;
  }
  f_00.datap = mVar1.~r4;
  f_00._func = (runtime__func *)targetpc_spill;
  mVar2 = runtime_pcvalue(f_00,(uint32)f_spill.datap,targetpc,in_RSI,(bool)in_R8B);
  mVar3.~r4 = mVar2.~r6;
  mVar3.~r3 = local_18;
  return mVar3;
}

