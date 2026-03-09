
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*Func).Name(runtime.Func * f, string ~r0) */

string runtime___Func__Name(runtime_Func *f)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  runtime_moduledata *prVar3;
  runtime_moduledata *unaff_RBX;
  long in_FS_OFFSET;
  string sVar4;
  string sVar5;
  runtime__func *fn;
  uint8 *local_18;
  runtime_funcInfo f_00;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (fn != (runtime__func *)0x0) {
    uVar1 = fn->entry;
    if (uVar1 != 0) {
                    /* Unresolved local var: runtime.moduledata * datap@[???] */
      for (prVar3 = &runtime_firstmoduledata;
          (prVar3 != (runtime_moduledata *)0x0 &&
          ((uVar1 < prVar3->minpc || (prVar3->maxpc <= uVar1)))); prVar3 = prVar3->next) {
      }
      f_00.datap = unaff_RBX;
      f_00._func = fn;
      sVar4 = runtime_funcname(f_00);
      sVar5.len = sVar4.len;
      sVar5.str = local_18;
      return sVar5;
    }
    sVar4.len = (int)unaff_RBX;
    sVar4.str = *(uint8 **)&fn->pcfile;
    return sVar4;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = unaff_RBX;
  return (string)(auVar2 << 0x40);
}

