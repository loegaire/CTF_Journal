
/* WARNING: Unknown calling convention */

void log_Fatal(__interface___ v)

{
  int iVar1;
  int in_RDI;
  long in_FS_OFFSET;
  string sVar2;
  error eVar3;
  __interface___ a;
  string s;
  __interface___ v_spill;
  undefined8 local_20;
  
  iVar1 = v.cap;
  a.len = v.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  a.array = (interface___ *)v_spill.cap;
  a.cap = iVar1;
  sVar2 = fmt_Sprint(a);
  s.len = in_RDI;
  s.str = local_20;
  eVar3 = log___Logger__Output(log_std,sVar2.len,s);
  os_Exit((int)eVar3.tab);
  return;
}

