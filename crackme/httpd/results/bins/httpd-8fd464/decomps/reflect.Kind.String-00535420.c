
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.Kind.String(reflect.Kind k, string ~r0) */

string reflect_Kind_String(reflect_Kind k)

{
  int unaff_RBX;
  int in_RSI;
  uint8 *in_RDI;
  long in_FS_OFFSET;
  string sVar1;
  string sVar2;
  string a1;
  string a0;
  reflect_Kind k_spill;
  runtime_tmpBuf *local_30;
  int local_28;
  uint8 *local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((long)k_spill < reflect_kindNames.len) {
    if (k_spill < (ulong)reflect_kindNames.len) {
      sVar1.len = unaff_RBX;
      sVar1.str = (uint8 *)reflect_kindNames.array[k_spill].len;
      return sVar1;
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicIndexU();
  }
  sVar2 = strconv_FormatInt(k_spill,unaff_RBX);
  a0.str = (uint8 *)sVar2.len;
  a1.len = in_RSI;
  a1.str = in_RDI;
  a0.len = local_28;
  sVar2 = runtime_concatstring2(local_30,a0,a1);
  sVar2.str = local_18;
  return sVar2;
}

