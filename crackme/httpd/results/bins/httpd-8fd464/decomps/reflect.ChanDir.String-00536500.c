
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.ChanDir.String(reflect.ChanDir d, string ~r0) */

string reflect_ChanDir_String(reflect_ChanDir d)

{
  int unaff_RBX;
  int in_RSI;
  uint8 *in_RDI;
  long in_FS_OFFSET;
  string sVar1;
  string sVar2;
  string sVar3;
  string sVar4;
  string a0;
  string a1;
  reflect_ChanDir d_spill;
  runtime_tmpBuf *local_30;
  int local_28;
  uint8 *local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (d_spill == 1) {
    sVar2.len = unaff_RBX;
    sVar2.str = &DAT_0028948c;
    return sVar2;
  }
  if (d_spill == 2) {
    sVar4.len = unaff_RBX;
    sVar4.str = &DAT_00289894;
    return sVar4;
  }
  if (d_spill == 3) {
    sVar1.len = unaff_RBX;
    sVar1.str = &DAT_0028810d;
    return sVar1;
  }
  sVar2 = strconv_FormatInt(d_spill,unaff_RBX);
  a0.str = (uint8 *)sVar2.len;
  a0.len = local_28;
  a1.len = in_RSI;
  a1.str = in_RDI;
  sVar2 = runtime_concatstring2(local_30,a0,a1);
  sVar3.len = sVar2.len;
  sVar3.str = local_18;
  return sVar3;
}

