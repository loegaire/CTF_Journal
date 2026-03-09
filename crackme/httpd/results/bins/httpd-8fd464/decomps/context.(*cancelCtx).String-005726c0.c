
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void context.(*cancelCtx).String(context.cancelCtx * c, string ~r0) */

string context___cancelCtx__String(context_cancelCtx *c)

{
  void *unaff_RBX;
  int in_RSI;
  uint8 *in_RDI;
  long in_FS_OFFSET;
  context_Context c_00;
  string a0;
  string a1;
  context_cancelCtx *c_spill;
  int local_28;
  uint8 *local_18;
  string sVar1;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  c_00.data = unaff_RBX;
  c_00.tab = (c_spill->Context).data;
  sVar1 = context_contextName(c_00);
  a0.str = (uint8 *)sVar1.len;
  a0.len = local_28;
  a1.len = in_RSI;
  a1.str = in_RDI;
  sVar1 = runtime_concatstring2((runtime_tmpBuf *)&DAT_002909b6,a0,a1);
  sVar1.str = local_18;
  return sVar1;
}

