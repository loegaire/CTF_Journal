
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.methodNameSkip(string ~r0) */

string reflect_methodNameSkip(void)

{
  int in_RAX;
  int extraout_RAX;
  long in_FS_OFFSET;
  string sVar1;
  string sVar2;
  multireturn_uintptr_string_int_bool_ mVar3;
  runtime_Func *local_30;
  
                    /* Unresolved local var: uintptr pc@[???]
                       Unresolved local var: runtime.Func * f@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    in_RAX = extraout_RAX;
  }
  mVar3 = runtime_Caller(in_RAX);
  sVar1.len = mVar3.file.str;
  runtime_FuncForPC((uintptr)local_30);
  if (local_30 != (runtime_Func *)0x0) {
    sVar1 = runtime___Func__Name(local_30);
    sVar2.len = sVar1.len;
    sVar2.str = (uint8 *)local_30;
    return sVar2;
  }
  sVar1.str = &DAT_002982af;
  return sVar1;
}

