
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void context.(*emptyCtx).String(context.emptyCtx * e, string ~r0) */

string context___emptyCtx__String(context_emptyCtx *e)

{
  int unaff_RBX;
  string sVar1;
  string sVar2;
  string sVar3;
  context_emptyCtx *e_spill;
  
  if (context_background == e_spill) {
    sVar3.len = unaff_RBX;
    sVar3.str = &DAT_0029ab06;
    return sVar3;
  }
  if (context_todo == e_spill) {
    sVar1.len = unaff_RBX;
    sVar1.str = &DAT_00293202;
    return sVar1;
  }
  sVar2.len = unaff_RBX;
  sVar2.str = &DAT_0029cb80;
  return sVar2;
}

