
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.waitReason.String(runtime.waitReason w, string ~r0) */

string runtime_waitReason_String(runtime_waitReason w)

{
  int unaff_RBX;
  string sVar1;
  string sVar2;
  runtime_waitReason w_spill;
  
  if (0x1a < w_spill) {
    sVar1.len = unaff_RBX;
    sVar1.str = &DAT_0029b8a8;
    return sVar1;
  }
  sVar2.len = unaff_RBX;
  sVar2.str = (uint8 *)runtime_waitReasonStrings[w_spill].len;
  return sVar2;
}

