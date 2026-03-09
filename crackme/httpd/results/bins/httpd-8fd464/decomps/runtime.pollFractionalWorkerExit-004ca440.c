
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.pollFractionalWorkerExit(bool ~r0) */

bool runtime_pollFractionalWorkerExit(void)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined8 local_10;
  
                    /* Unresolved local var: int64 now@[???]
                       Unresolved local var: int64 delta@[???]
                       Unresolved local var: runtime.p * p@[???]
                       Unresolved local var: int64 selfTime@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_nanotime1();
  if (local_10 - runtime_gcController.markStartTime < 1) {
    return SUB81(runtime_gcController.markStartTime,0);
  }
  lVar1 = *(long *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8);
  return (double)runtime_gcController.fractionalUtilizationGoal * 1.2 <
         (double)((local_10 - *(long *)(lVar1 + 0x1690)) + *(long *)(lVar1 + 0x1680)) /
         (double)(local_10 - runtime_gcController.markStartTime);
}

