
/* WARNING: Unknown calling convention */

void net___sysDialer__dialSingle_func1
               (internal_nettrace_Trace *trace,net_sysDialer *sd,string raStr,error *_err)

{
  runtime_itab *in_R8;
  void *in_R9;
  long in_FS_OFFSET;
  string sVar1;
  error eVar2;
  string sVar3;
  internal_nettrace_Trace *trace_spill;
  net_sysDialer *sd_spill;
  string raStr_spill;
  error *_err_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  sVar1.len = raStr_spill.len;
  sVar1.str = (sd_spill->network).str;
  eVar2.data = in_R9;
  eVar2.tab = in_R8;
  sVar3.len = (int)_err_spill->tab;
  sVar3.str = (uint8 *)trace_spill->ConnectDone;
  (**trace_spill->ConnectDone)(sVar1,sVar3,eVar2);
  return;
}

