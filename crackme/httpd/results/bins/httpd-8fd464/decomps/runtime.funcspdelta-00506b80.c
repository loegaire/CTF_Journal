
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.funcspdelta(runtime.funcInfo f, uintptr targetpc,
   runtime.pcvalueCache * cache, int32 ~r3) */

int32 runtime_funcspdelta(runtime_funcInfo f,uintptr targetpc,runtime_pcvalueCache *cache)

{
  uint uVar1;
  uint64 v;
  runtime_pcvalueCache *in_RSI;
  undefined1 in_R8B;
  long in_FS_OFFSET;
  runtime_funcInfo f_00;
  runtime_funcInfo f_01;
  string s;
  string s_00;
  multireturn_int32_uintptr_ mVar2;
  runtime_funcInfo f_spill;
  uintptr targetpc_spill;
  runtime_pcvalueCache *cache_spill;
  uint local_40;
  
                    /* Unresolved local var: int32 x@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  f_00.datap = (runtime_moduledata *)cache_spill;
  f_00._func = f_spill._func;
  mVar2 = runtime_pcvalue(f_00,(uint32)targetpc_spill,(uintptr)cache,in_RSI,(bool)in_R8B);
  f_01.datap = (runtime_moduledata *)mVar2.~r6;
  if ((local_40 & 7) != 0) {
    f_01._func = f_spill._func;
    runtime_funcname(f_01);
    v = (f_spill._func)->entry;
    uVar1 = (f_spill._func)->pcsp;
    runtime_printlock();
    s.len = v;
    s.str = &DAT_00299955;
    runtime_printstring(s);
    s_00.len = v;
    s_00.str = (uint8 *)targetpc_spill;
    runtime_printstring(s_00);
    runtime_printsp();
    runtime_printhex(v);
    runtime_printsp();
    runtime_printhex(targetpc_spill);
    runtime_printsp();
    runtime_printhex((ulong)uVar1);
    runtime_printsp();
    runtime_printint((ulong)local_40);
    runtime_printnl();
    runtime_printunlock();
  }
  return local_40;
}

