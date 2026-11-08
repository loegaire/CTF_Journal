
/* WARNING: Unknown calling convention */

void runtime_printcreatedby1(runtime_funcInfo f,uintptr pc)

{
  ulong uVar1;
  undefined1 in_DIL;
  long in_FS_OFFSET;
  runtime_funcInfo f_00;
  string s;
  runtime_funcInfo f_01;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  multireturn_string_int32_ mVar3;
  runtime_funcInfo f_spill;
  uintptr tracepc;
  undefined1 local_58;
  undefined7 uStack_57;
  uint8 *local_48;
  int local_40;
  string sVar2;
  
  f_00.datap = f.datap;
                    /* Unresolved local var: string file@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  f_00._func = f_spill._func;
  sVar2 = runtime_funcname(f_00);
  s.str._1_7_ = uStack_57;
  s.str._0_1_ = local_58;
  runtime_printlock();
  sVar2.str = &DAT_002912fe;
  runtime_printstring(sVar2);
  s.len = sVar2.len;
  runtime_printstring(s);
  runtime_printnl();
  runtime_printunlock();
  f_01.datap = (runtime_moduledata *)(tracepc - 1);
  f_01._func = f_spill._func;
  mVar3 = runtime_funcline1(f_01,(f_spill._func)->entry,(bool)in_DIL);
  s_00.len = mVar3.file.len;
  runtime_printlock();
  s_00.str = &DAT_002b2e50;
  runtime_printstring(s_00);
  s_01.len = s_00.len;
  s_01.str = local_48;
  runtime_printstring(s_01);
  s_02.len = s_00.len;
  s_02.str = &DAT_00287748;
  runtime_printstring(s_02);
  runtime_printint((long)local_40);
  runtime_printunlock();
  uVar1 = (f_spill._func)->entry;
  if (uVar1 < tracepc) {
    runtime_printlock();
    s_03.len = s_00.len;
    s_03.str = (uint8 *)((long)&DAT_0028776c + 1);
    runtime_printstring(s_03);
    runtime_printhex(tracepc - uVar1);
    runtime_printunlock();
  }
  runtime_printlock();
  runtime_printnl();
  runtime_printunlock();
  return;
}

