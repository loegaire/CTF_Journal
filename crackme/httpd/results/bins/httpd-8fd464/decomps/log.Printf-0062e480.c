
/* WARNING: Unknown calling convention */

void log_Printf(string format,__interface___ v)

{
  interface___ *piVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  string sVar4;
  string s;
  __interface___ a;
  string format_spill;
  __interface___ v_spill;
  undefined8 local_18;
  
  iVar2 = v.cap;
  iVar3 = v.len;
  piVar1 = v.array;
  sVar4.len = format.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  sVar4.str = (uint8 *)v_spill.cap;
  a.len = iVar3;
  a.array = piVar1;
  a.cap = iVar2;
  sVar4 = fmt_Sprintf(sVar4,a);
  s.len = iVar3;
  s.str = local_18;
  log___Logger__Output(log_std,sVar4.len,s);
  return;
}

