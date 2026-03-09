
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.concatstring3(runtime.tmpBuf * buf, string a0, string a1,
   string a2, string ~r4) */

string runtime_concatstring3(runtime_tmpBuf *buf,string a0,string a1,string a2)

{
  uint8 *puVar1;
  long in_FS_OFFSET;
  string sVar2;
  __string a;
  runtime_tmpBuf *buf_spill;
  string a0_spill;
  string a1_spill;
  string a2_spill;
  uint8 *local_48;
  uint8 local_38 [48];
  
  a.array = a0.str;
  puVar1 = a1.str;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  a.len = (int)buf_spill;
  a.cap = (int)puVar1;
  sVar2 = runtime_concatstrings((runtime_tmpBuf *)local_38,a);
  sVar2.str = local_48;
  return sVar2;
}

