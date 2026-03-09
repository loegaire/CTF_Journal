
/* WARNING: Unknown calling convention */

void runtime_debugCallWrap(uintptr dispatch)

{
  long lVar1;
  long in_FS_OFFSET;
  uintptr dispatch_spill;
  bool lockedm;
  undefined4 local_44;
  long local_40;
  code *local_38;
  long lStack_30;
  bool *local_18;
  undefined4 *puStack_10;
  
                    /* Unresolved local var: uintptr callerpc@[???]
                       Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: uint32 lockedExt@[???] */
  lockedm = false;
  local_44 = 0;
  local_40 = *(long *)(in_FS_OFFSET + -8);
  local_38 = runtime_debugCallWrap_func1;
  local_18 = &lockedm;
  puStack_10 = &local_44;
  lStack_30 = local_40;
  runtime_systemstack();
  runtime_mcall();
  if (lockedm != false) {
                    /* Unresolved local var: runtime.m * mp@[???] */
    lVar1 = *(long *)(local_40 + 0x30);
    *(undefined4 *)(lVar1 + 0x278) = local_44;
    *(int *)(lVar1 + 0x27c) = *(int *)(lVar1 + 0x27c) + -1;
    *(long *)(lVar1 + 0x170) = local_40;
    *(long *)(local_40 + 0xe8) = lVar1;
  }
  *(undefined1 *)(local_40 + 0xb4) = 0;
  return;
}

