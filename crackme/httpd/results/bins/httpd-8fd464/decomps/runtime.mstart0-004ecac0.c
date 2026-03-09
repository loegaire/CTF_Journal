
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_mstart0(void)

{
  long *plVar1;
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
                    /* Unresolved local var: runtime.g * _g_@[???] */
  plVar1 = *(long **)(in_FS_OFFSET + -8);
  local_10 = *plVar1;
  if (local_10 == 0) {
                    /* Unresolved local var: uintptr size@[???] */
    local_18 = plVar1[1];
    if (local_18 == 0) {
      local_18 = 0x2000;
    }
    plVar1[1] = (long)&local_18;
    *plVar1 = (long)(&stack0x000003e8 + -local_18);
  }
  plVar1[2] = *plVar1 + 0x3a0;
  plVar1[3] = *plVar1 + 0x3a0;
  runtime_mstart1();
  runtime_mexit(SUB81(local_10,0));
  return;
}

