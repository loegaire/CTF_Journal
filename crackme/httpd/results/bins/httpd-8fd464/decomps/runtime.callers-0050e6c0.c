
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.callers(int skip, []uintptr pcbuf, int ~r2) */

int runtime_callers(int skip,__uintptr pcbuf)

{
  long in_FS_OFFSET;
  int skip_spill;
  __uintptr pcbuf_spill;
  int local_58;
  code *local_50;
  int *piStack_40;
  undefined8 local_38;
  int iStack_30;
  uintptr *local_28;
  int iStack_20;
  int local_18;
  int *piStack_10;
  
                    /* Unresolved local var: uintptr sp@[???]
                       Unresolved local var: uintptr pc@[???]
                       Unresolved local var: runtime.g * gp@[DW_OP_reg0(RAX)]
                       Unresolved local var: int n@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_38 = *(undefined8 *)(in_FS_OFFSET + -8);
  local_58 = 0;
  local_50 = runtime_callers_func1;
  piStack_40 = &skip_spill;
  iStack_30 = skip_spill;
  local_28 = pcbuf_spill.array;
  iStack_20 = pcbuf_spill.len;
  local_18 = pcbuf_spill.cap;
  piStack_10 = &local_58;
  runtime_systemstack();
  return local_58;
}

