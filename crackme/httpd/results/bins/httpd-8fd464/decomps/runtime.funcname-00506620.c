
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.funcname(runtime.funcInfo f, string ~r1) */

string runtime_funcname(runtime_funcInfo f)

{
  int iVar1;
  uint8 *s;
  runtime_moduledata *prVar2;
  long in_FS_OFFSET;
  string sVar3;
  runtime_funcInfo f_spill;
  uint8 *local_28;
  
  prVar2 = f.datap;
                    /* Unresolved local var: uint8 * ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((f_spill._func == (runtime__func *)0x0) || (iVar1 = (f_spill._func)->nameoff, iVar1 == 0)) {
    s = (uint8 *)0x0;
  }
  else {
    prVar2 = (runtime_moduledata *)((f_spill.datap)->funcnametab).array;
    if ((ulong)((f_spill.datap)->funcnametab).len <= (ulong)(long)iVar1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    s = (uint8 *)((long)&prVar2->pcHeader + (long)iVar1);
  }
                    /* Unresolved local var: runtime.stringStruct ss@[???]
                       Unresolved local var: string s@[???] */
  runtime_findnull(s);
  sVar3.len = (int)prVar2;
  sVar3.str = local_28;
  return sVar3;
}

