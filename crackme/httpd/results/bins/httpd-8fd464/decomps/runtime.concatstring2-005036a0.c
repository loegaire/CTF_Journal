
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.concatstring2(runtime.tmpBuf * buf, string a0, string a1,
   string ~r3) */

string runtime_concatstring2(runtime_tmpBuf *buf,string a0,string a1)

{
  uint8 *puVar1;
  long in_FS_OFFSET;
  string sVar2;
  __string a;
  runtime_tmpBuf *buf_spill;
  string a0_spill;
  string a1_spill;
  uint8 *local_38;
  uint8 local_28 [32];
  
  puVar1 = a1.str;
  a.array = a0.str;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  a.len = (int)buf_spill;
  a.cap = (int)puVar1;
  sVar2 = runtime_concatstrings(&local_28,a);
  sVar2.str = local_38;
  return sVar2;
}

