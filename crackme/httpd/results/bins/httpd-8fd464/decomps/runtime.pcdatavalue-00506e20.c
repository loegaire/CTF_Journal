
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.pcdatavalue(runtime.funcInfo f, uint32 table, uintptr
   targetpc, runtime.pcvalueCache * cache, int32 ~r4) */

int32 runtime_pcdatavalue(runtime_funcInfo f,uint32 table,uintptr targetpc,
                         runtime_pcvalueCache *cache)

{
  undefined1 in_R8B;
  long in_FS_OFFSET;
  runtime_funcInfo f_00;
  runtime_funcInfo f_spill;
  uint32 table_spill;
  uintptr targetpc_spill;
  runtime_pcvalueCache *cache_spill;
  int32 local_18;
  
  f_00.datap = f.datap;
                    /* Unresolved local var: int32 r@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((f_spill._func)->npcdata <= table_spill) {
    return table_spill;
  }
  f_00._func = (runtime__func *)cache_spill;
  runtime_pcvalue(f_00,(uint32)f_spill.datap,targetpc,cache,(bool)in_R8B);
  return local_18;
}

