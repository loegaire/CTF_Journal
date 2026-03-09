
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void
   runtime.(*gcControllerState).setGCPercent(runtime.gcControllerState * c, int32 in, int32 ~r1) */

int32 runtime___gcControllerState__setGCPercent(runtime_gcControllerState *c,int32 in)

{
  undefined1 auVar1 [16];
  int32 extraout_EAX;
  ulong uVar2;
  long in_FS_OFFSET;
  runtime_gcControllerState *c_spill;
  int32 in_spill;
  
                    /* Unresolved local var: int32 out@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (in_spill < 0) {
    in_spill = -1;
  }
  c_spill->gcPercent = in_spill;
  uVar2 = (ulong)((long)in_spill << 0x16) >> 1;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  c_spill->heapMinimum = uVar2 / 0x32;
  runtime___gcControllerState__commit
            (SUB168(ZEXT816(0xa3d70a3d70a3d70b) * auVar1,0),c_spill->triggerRatio);
  return extraout_EAX;
}

