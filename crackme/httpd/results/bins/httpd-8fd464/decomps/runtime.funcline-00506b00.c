
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.funcline(runtime.funcInfo f, uintptr targetpc, string
   file, int32 line) */

multireturn_string_int32_ runtime_funcline(runtime_funcInfo f,uintptr targetpc)

{
  undefined1 in_DIL;
  long in_FS_OFFSET;
  runtime_funcInfo f_00;
  multireturn_string_int32_ mVar1;
  runtime_funcInfo f_spill;
  uintptr targetpc_spill;
  undefined8 local_20;
  undefined4 local_10;
  
  f_00.datap = f.datap;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  f_00._func = (runtime__func *)targetpc_spill;
  mVar1 = runtime_funcline1(f_00,targetpc,(bool)in_DIL);
  mVar1.file.str = local_20;
  mVar1.line = local_10;
  return mVar1;
}

