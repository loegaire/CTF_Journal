
/* WARNING: Unknown calling convention */

void runtime_panicCheck1(uintptr pc,string msg)

{
  long lVar1;
  long in_FS_OFFSET;
  runtime_funcInfo rVar2;
  string sVar3;
  string s;
  uintptr pc_spill;
  string msg_spill;
  undefined8 local_20;
  undefined1 local_10;
  undefined7 uStack_f;
  
                    /* Unresolved local var: runtime.g * gp@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  rVar2 = runtime_findfunc(pc_spill);
  rVar2._func = local_20;
  sVar3 = runtime_funcname(rVar2);
  if (7 < CONCAT71(uStack_f,local_10)) {
    runtime_memequal();
    if (local_10 != '\0') {
      s.len = sVar3.len;
      s.str = (uint8 *)msg_spill.len;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s);
    }
  }
  if (((*(long *)(in_FS_OFFSET + -8) != 0) &&
      (lVar1 = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30), lVar1 != 0)) &&
     (*(int *)(lVar1 + 0xf8) != 0)) {
    sVar3.str = (uint8 *)msg_spill.len;
                    /* WARNING: Subroutine does not return */
    runtime_throw(sVar3);
  }
  return;
}

