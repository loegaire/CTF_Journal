
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.runtime_envs([]string ~r0) */

__string syscall_runtime_envs(void)

{
  string *psVar1;
  int typ;
  undefined8 unaff_RBX;
  int in_RSI;
  int in_RDI;
  long in_FS_OFFSET;
  __string _Var2;
  runtime_slice old;
  uintptr *local_38;
  undefined8 local_28;
  
  while (typ = runtime_envs.len,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (runtime_envs.len == 0) {
    local_38 = &runtime_zerobase;
    local_28 = 0;
  }
  else {
    old.len = (int)&DAT_00225520;
    old.array = (void *)unaff_RBX;
    old.cap = in_RDI;
    runtime_growslice((runtime__type *)runtime_envs.len,old,in_RSI);
  }
  psVar1 = runtime_envs.array;
  runtime_typedslicecopy
            ((runtime__type *)typ,runtime_envs.array,(int)local_38,&DAT_00225520,runtime_envs.len);
  _Var2.len = (int)psVar1;
  _Var2.array = (string *)local_28;
  _Var2.cap = (int)local_38;
  return _Var2;
}

