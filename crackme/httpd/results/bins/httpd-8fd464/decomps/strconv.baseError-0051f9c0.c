
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strconv.baseError(string fn, string str, int base,
   strconv.NumError * ~r3) */

strconv_NumError * strconv_baseError(string fn,string str,int base)

{
  strconv_NumError *extraout_RAX;
  strconv_NumError *psVar1;
  undefined8 *puVar2;
  uint8 *puVar3;
  long in_FS_OFFSET;
  string sVar4;
  string a1;
  string fn_spill;
  string str_spill;
  int base_spill;
  runtime_tmpBuf *local_48;
  int local_40;
  runtime__type *local_30;
  undefined8 local_28;
  
  puVar3 = (uint8 *)str.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  sVar4 = strconv_FormatInt(base_spill,fn.len);
  sVar4.str = (uint8 *)sVar4.len;
  sVar4.len = local_40;
  a1.len = base;
  a1.str = puVar3;
  runtime_concatstring2(local_48,sVar4,a1);
  runtime_newobject(local_30);
  DAT_00295565 = local_28;
  if (runtime_writeBarrier._0_4_ == 0) {
    DAT_0029555d = local_30;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00258d20);
  puVar2 = &DAT_0029555d;
  DAT_00295565 = fn_spill.len;
  if (runtime_writeBarrier._0_4_ == 0) {
    DAT_0029555d = (runtime__type *)fn_spill.str;
  }
  else {
    runtime_gcWriteBarrier();
  }
  puVar2[3] = str_spill.len;
  if (runtime_writeBarrier._0_4_ == 0) {
    puVar2[2] = str_spill.str;
  }
  else {
    runtime_gcWriteBarrierDX();
  }
  puVar2[4] = &go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    psVar1 = (strconv_NumError *)&DAT_0029555d;
    puVar2[5] = &DAT_0029555d;
  }
  else {
    runtime_gcWriteBarrierDX();
    psVar1 = extraout_RAX;
  }
  return psVar1;
}

