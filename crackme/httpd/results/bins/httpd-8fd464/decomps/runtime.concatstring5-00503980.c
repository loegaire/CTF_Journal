
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.concatstring5(runtime.tmpBuf * buf, string a0, string a1,
   string a2, string a3, string a4, string ~r6) */

string runtime_concatstring5(runtime_tmpBuf *buf,string a0,string a1,string a2,string a3,string a4)

{
  int iVar1;
  uint8 **ppuVar2;
  long in_FS_OFFSET;
  string sVar3;
  __string a;
  runtime_tmpBuf *buf_spill;
  string a0_spill;
  string a1_spill;
  string a2_spill;
  string a3_spill;
  uint8 *local_88;
  runtime_tmpBuf *local_80;
  undefined8 local_78;
  undefined8 local_70;
  uint8 *local_68;
  int local_58 [10];
  
  iVar1 = a0.len;
  a.array = a0.str;
  while (&stack0xfffffffffffffff8 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  ppuVar2 = &local_88;
  FUN_0051a190();
  local_58[0] = a4.len;
  local_88 = a4.str;
  local_80 = (runtime_tmpBuf *)local_58;
  local_78 = 5;
  local_70 = 5;
  a.len = iVar1;
  a.cap = (int)ppuVar2;
  sVar3 = runtime_concatstrings(local_80,a);
  sVar3.str = local_68;
  return sVar3;
}

