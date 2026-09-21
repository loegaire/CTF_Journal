
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void fmt.(*pp).argNumber(fmt.pp * p, int argNum, string format, int i,
   int numArgs, int newArgNum, int newi, bool found) */

multireturn_int_int_bool__conflict1
fmt___pp__argNumber(fmt_pp *p,int argNum,string format,int i,int numArgs)

{
  int iVar1;
  long in_FS_OFFSET;
  string format_00;
  multireturn_int_int_bool__conflict1 mVar2;
  multireturn_int_int_bool__conflict mVar3;
  multireturn_int_int_bool__conflict1 mVar4;
  multireturn_int_int_bool__conflict1 mVar5;
  fmt_pp *p_spill;
  int argNum_spill;
  string format_spill;
  int i_spill;
  int numArgs_spill;
  long local_20;
  long local_18;
  bool local_10;
  
                    /* Unresolved local var: int index@[???]
                       Unresolved local var: int wid@[???]
                       Unresolved local var: bool ok@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (i_spill < format_spill.len) {
    if ((ulong)format_spill.len <= (ulong)i_spill) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    argNum = (int)format_spill.str[i_spill];
    if (format_spill.str[i_spill] == 0x5b) {
      p_spill->reordered = true;
      format_00.len = (int)p_spill;
      format_00.str = (uint8 *)i_spill;
      mVar3 = fmt_parseArgNumber(format_00);
      iVar1 = mVar3.wid;
      if (((local_10 != false) && (-1 < local_20)) &&
         (iVar1 = numArgs_spill, local_20 < numArgs_spill)) {
        mVar4.newArgNum = i_spill + local_18;
        mVar4.newi = numArgs_spill;
        mVar4.found = local_10;
        return mVar4;
      }
      p_spill->goodArgNum = false;
      mVar5.newArgNum = i_spill + local_18;
      mVar5.newi = iVar1;
      mVar5.found = local_10;
      return mVar5;
    }
  }
  mVar2.newi = argNum;
  mVar2.newArgNum = i_spill;
  mVar2.found = SUB81(argNum_spill,0);
  return mVar2;
}

