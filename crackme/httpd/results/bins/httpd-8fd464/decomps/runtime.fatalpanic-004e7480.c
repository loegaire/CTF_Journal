
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void runtime_fatalpanic(runtime__panic *msgs)

{
  uint32 sig;
  long in_FS_OFFSET;
  runtime__panic *msgs_spill;
  char local_39;
  code *local_38;
  undefined8 local_28;
  runtime__panic **local_18;
  char *pcStack_10;
  
                    /* Unresolved local var: uintptr pc@[???]
                       Unresolved local var: uintptr sp@[???]
                       Unresolved local var: runtime.g * gp@[DW_OP_reg0(RAX)]
                       Unresolved local var: bool docrash@[???] */
  local_28 = *(undefined8 *)(in_FS_OFFSET + -8);
  local_39 = '\0';
  local_38 = runtime_fatalpanic_func1;
  local_18 = &msgs_spill;
  pcStack_10 = &local_39;
  sig = runtime_systemstack();
  if (local_39 != '\0') {
    runtime_dieFromSignal(sig);
  }
  runtime_systemstack();
  _DAT_00000000 = 0;
  return;
}

