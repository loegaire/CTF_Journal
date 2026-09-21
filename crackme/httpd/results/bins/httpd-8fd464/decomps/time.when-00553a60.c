
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.when(time.Duration d, int64 ~r1) */

int64 time_when(time_Duration d)

{
  int64 iVar1;
  long in_FS_OFFSET;
  time_Duration d_spill;
  undefined8 local_10;
  
                    /* Unresolved local var: int64 t@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (d_spill < 1) {
    runtime_nanotime();
    return local_10;
  }
  runtime_nanotime();
  iVar1 = local_10 + d_spill;
  if (iVar1 < 0) {
    iVar1 = 0x7fffffffffffffff;
  }
  return iVar1;
}

