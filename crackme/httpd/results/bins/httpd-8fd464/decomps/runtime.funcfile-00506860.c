
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.funcfile(runtime.funcInfo f, int32 fileno, string ~r2) */

string runtime_funcfile(runtime_funcInfo f,int32 fileno)

{
  uint uVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  string sVar3;
  string sVar4;
  string sVar5;
  long in_stack_00000008;
  runtime_moduledata *datap;
  int32 fileno_spill;
  uint8 *local_28;
  
  sVar5.len = f.datap;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (in_stack_00000008 == 0) {
    sVar5.str = (uint8 *)((long)&DAT_0028774c + 1);
    return sVar5;
  }
                    /* Unresolved local var: uint32 fileoff@[???] */
  uVar2 = (ulong)(uint)(fileno_spill + *(int *)(in_stack_00000008 + 0x24));
  if ((ulong)(datap->cutab).len <= uVar2) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  uVar1 = (datap->cutab).array[uVar2];
  if (uVar1 != 0xffffffff) {
    if ((ulong)uVar1 < (ulong)(datap->filetab).len) {
                    /* Unresolved local var: runtime.stringStruct ss@[???]
                       Unresolved local var: string s@[???] */
      runtime_findnull((datap->filetab).array + uVar1);
      sVar3.len = (int)datap;
      sVar3.str = local_28;
      return sVar3;
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  sVar4.len = (int)datap;
  sVar4.str = (uint8 *)((long)&DAT_0028774c + 1);
  return sVar4;
}

