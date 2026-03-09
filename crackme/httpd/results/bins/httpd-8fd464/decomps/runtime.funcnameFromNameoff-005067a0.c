
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.funcnameFromNameoff(runtime.funcInfo f, int32 nameoff,
   string ~r2) */

string runtime_funcnameFromNameoff(runtime_funcInfo f,int32 nameoff)

{
  uint8 *s;
  runtime_moduledata *prVar1;
  long in_FS_OFFSET;
  string sVar2;
  runtime_funcInfo f_spill;
  int32 nameoff_spill;
  uint8 *local_28;
  
  prVar1 = f.datap;
                    /* Unresolved local var: uint8 * ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (f_spill._func == (runtime__func *)0x0) {
    s = (uint8 *)0x0;
  }
  else {
    prVar1 = (runtime_moduledata *)(ulong)(uint)nameoff_spill;
    if ((ulong)((f_spill.datap)->funcnametab).len <= (ulong)(long)nameoff_spill) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    s = ((f_spill.datap)->funcnametab).array + nameoff_spill;
  }
                    /* Unresolved local var: runtime.stringStruct ss@[???]
                       Unresolved local var: string s@[???] */
  runtime_findnull(s);
  sVar2.len = (int)prVar1;
  sVar2.str = local_28;
  return sVar2;
}

