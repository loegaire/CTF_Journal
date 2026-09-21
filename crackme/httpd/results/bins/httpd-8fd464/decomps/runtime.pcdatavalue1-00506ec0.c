
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.pcdatavalue1(runtime.funcInfo f, uint32 table, uintptr
   targetpc, runtime.pcvalueCache * cache, bool strict, int32 ~r5) */

int32 runtime_pcdatavalue1
                (runtime_funcInfo f,uint32 table,uintptr targetpc,runtime_pcvalueCache *cache,
                bool strict)

{
  long in_FS_OFFSET;
  runtime_funcInfo f_00;
  runtime_funcInfo f_spill;
  uint32 table_spill;
  uintptr targetpc_spill;
  runtime_pcvalueCache *cache_spill;
  bool strict_spill;
  int32 local_18;
  
  f_00.datap = f.datap;
                    /* Unresolved local var: int32 r@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((f_spill._func)->npcdata <= table_spill) {
    return table_spill;
  }
  f_00._func = (runtime__func *)(ulong)strict_spill;
  runtime_pcvalue(f_00,(uint32)f_spill.datap,targetpc,cache,strict);
  return local_18;
}

