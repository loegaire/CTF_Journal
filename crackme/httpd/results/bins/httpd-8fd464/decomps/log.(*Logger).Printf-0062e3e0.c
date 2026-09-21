
/* WARNING: Unknown calling convention */

void log___Logger__Printf(log_Logger *l,string format,__interface___ v)

{
  int iVar1;
  int iVar2;
  interface___ *piVar3;
  long in_FS_OFFSET;
  string sVar4;
  string s;
  __interface___ a;
  log_Logger *l_spill;
  string format_spill;
  __interface___ v_spill;
  undefined8 local_18;
  undefined8 local_10;
  
  iVar1 = format.len;
  sVar4.len = format.str;
  iVar2 = v.len;
  piVar3 = v.array;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  sVar4.str = (uint8 *)v_spill.cap;
  a.len = (int)piVar3;
  a.array = (interface___ *)iVar1;
  a.cap = iVar2;
  sVar4 = fmt_Sprintf(sVar4,a);
  s.len = (int)piVar3;
  s.str = local_10;
  log___Logger__Output(local_18,sVar4.len,s);
  return;
}

