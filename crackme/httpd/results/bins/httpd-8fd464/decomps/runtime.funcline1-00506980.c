
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.funcline1(runtime.funcInfo f, uintptr targetpc, bool
   strict, string file, int32 line) */

multireturn_string_int32_ runtime_funcline1(runtime_funcInfo f,uintptr targetpc,bool strict)

{
  runtime_moduledata *prVar1;
  runtime_pcvalueCache *in_RSI;
  undefined7 in_register_00000039;
  undefined1 in_R8B;
  long in_FS_OFFSET;
  runtime_funcInfo f_00;
  runtime_funcInfo f_01;
  runtime_funcInfo f_02;
  multireturn_string_int32_ mVar3;
  multireturn_string_int32_ mVar4;
  multireturn_string_int32_ mVar5;
  multireturn_int32_uintptr_ mVar6;
  runtime__func *in_stack_00000008;
  runtime_moduledata *datap;
  uintptr targetpc_spill;
  bool strict_spill;
  uint local_20;
  string sVar2;
  
  mVar5.file.len = f.datap;
                    /* Unresolved local var: int32 fileno@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (in_stack_00000008 != (runtime__func *)0x0) {
    f_00.datap._0_1_ = strict_spill;
    f_00._func = in_stack_00000008;
    f_00.datap._1_7_ = 0;
    runtime_pcvalue(f_00,(uint32)targetpc_spill,CONCAT71(in_register_00000039,strict),in_RSI,
                    (bool)in_R8B);
    f_01._func = (runtime__func *)(ulong)local_20;
    f_01.datap = datap;
    mVar6 = runtime_pcvalue(f_01,(uint32)in_stack_00000008,CONCAT71(in_register_00000039,strict),
                            in_RSI,(bool)in_R8B);
    prVar1 = (runtime_moduledata *)mVar6.~r6;
    if (((local_20 != 0xffffffff) && (local_20 != 0xffffffff)) &&
       (prVar1 = datap, (long)(int)local_20 < (datap->filetab).len)) {
      f_02.datap = datap;
      f_02._func = in_stack_00000008;
      sVar2 = runtime_funcfile(f_02,local_20);
      mVar4.file.len = sVar2.len;
      mVar4.file.str = (ulong)local_20;
      mVar4.line = 0;
      return mVar4;
    }
    mVar3.file.len = (int)prVar1;
    mVar3.file.str = (uint8 *)((long)&DAT_0028774c + 1);
    mVar3.line = local_20;
    return mVar3;
  }
  mVar5.file.str = (uint8 *)((long)&DAT_0028774c + 1);
  mVar5.line = (int32)targetpc;
  return mVar5;
}

