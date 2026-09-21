
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.Stack([]uint8 buf, bool all, int ~r2) */

int runtime_Stack(__uint8 buf,bool all)

{
  long in_FS_OFFSET;
  string reason;
  __uint8 buf_spill;
  bool all_spill;
  int local_58;
  code *local_50;
  uint8 *local_48;
  int iStack_40;
  int local_38;
  undefined8 uStack_30;
  __uint8 *p_Stack_20;
  ulong local_18;
  int *piStack_10;
  
  reason.len = buf.len;
                    /* Unresolved local var: int n@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (all_spill) {
    reason.str = &DAT_0029235d;
    runtime_stopTheWorld(reason);
  }
  local_58 = 0;
  if (0 < buf_spill.len) {
                    /* Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: uintptr sp@[???]
                       Unresolved local var: uintptr pc@[???] */
    uStack_30 = *(undefined8 *)(in_FS_OFFSET + -8);
    local_50 = runtime_Stack_func1;
    local_48 = buf_spill.array;
    iStack_40 = buf_spill.len;
    local_38 = buf_spill.cap;
    p_Stack_20 = &buf_spill;
    local_18 = (ulong)all_spill;
    piStack_10 = &local_58;
    runtime_systemstack();
  }
  if (all_spill) {
    runtime_startTheWorld();
  }
  return local_58;
}

