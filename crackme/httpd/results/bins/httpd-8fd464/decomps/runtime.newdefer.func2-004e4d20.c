
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_newdefer_func2(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined1 needzero;
  undefined8 in_RCX;
  long in_RDX;
  long extraout_RDX;
  runtime__type *typ;
  long in_FS_OFFSET;
  undefined8 local_18;
  
                    /* Unresolved local var: runtime._defer * * &d@[???]
                       Unresolved local var: uintptr total@[???] */
  while (needzero = (undefined1)in_RCX,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  puVar1 = *(undefined8 **)(in_RDX + 0x10);
  if ((ulong)(long)*(int *)(in_RDX + 8) < 9) {
    typ = (runtime__type *)&DAT_00000050;
  }
  else {
    typ = (runtime__type *)((long)*(int *)(in_RDX + 8) + 0x48);
  }
  if (typ < (runtime__type *)0x8000) {
    if (typ < (runtime__type *)0x3f9) {
      uVar2 = (ulong)((long)&typ->size + 7) >> 3;
      if (0x80 < uVar2) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndexU();
      }
      if (0x43 < (ulong)runtime_size_to_class8[uVar2]) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      needzero = 0x80;
      typ = (runtime__type *)(ulong)runtime_class_to_size[runtime_size_to_class8[uVar2]];
    }
    else {
      uVar2 = (ulong)((long)&typ[-0x13].ptrdata + 7U) >> 7;
      if (0xf8 < uVar2) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndexU();
      }
      if (0x43 < (ulong)runtime_size_to_class128[uVar2]) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      needzero = 0x80;
      typ = (runtime__type *)(ulong)runtime_class_to_size[runtime_size_to_class128[uVar2]];
    }
  }
  else if (typ <= &typ[0xaa].gcdata) {
    typ = (runtime__type *)((ulong)((long)&typ[0xaa].equal + 7U) & 0xffffffffffffe000);
  }
  runtime_mallocgc((uintptr)runtime_deferType,typ,(bool)needzero);
  if (runtime_writeBarrier._0_4_ == 0) {
    *puVar1 = local_18;
  }
  else {
    runtime_gcWriteBarrier();
  }
  return;
}

