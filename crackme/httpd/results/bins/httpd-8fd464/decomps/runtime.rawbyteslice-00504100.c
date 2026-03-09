
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.rawbyteslice(int size, []uint8 b) */

__uint8 runtime_rawbyteslice(int size)

{
  ulong uVar1;
  undefined1 needzero;
  undefined8 in_RCX;
  uint8 *unaff_RBX;
  long in_FS_OFFSET;
  __uint8 _Var2;
  int size_spill;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  long local_20;
  
                    /* Unresolved local var: uintptr cap@[???]
                       Unresolved local var: void * p@[???]
                       Unresolved local var: uintptr ~R0@[???] */
  while (needzero = (undefined1)in_RCX,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  uStack0000000000000020 = 0;
  if ((ulong)size_spill < 0x8000) {
    if ((ulong)size_spill < 0x3f9) {
      uVar1 = size_spill + 7U >> 3;
      if (0x80 < uVar1) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndexU();
      }
      unaff_RBX = runtime_size_to_class8;
      if (0x43 < (ulong)runtime_size_to_class8[uVar1]) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      needzero = 0x80;
      uVar1 = (ulong)runtime_class_to_size[runtime_size_to_class8[uVar1]];
    }
    else {
      uVar1 = size_spill - 0x381U >> 7;
      if (0xf8 < uVar1) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndexU();
      }
      unaff_RBX = runtime_size_to_class128;
      if (0x43 < (ulong)runtime_size_to_class128[uVar1]) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      needzero = 0x80;
      uVar1 = (ulong)runtime_class_to_size[runtime_size_to_class128[uVar1]];
    }
  }
  else {
    uVar1 = size_spill;
    if ((ulong)size_spill <= size_spill + 0x2000U) {
      uVar1 = size_spill + 0x1fffU & 0xffffffffffffe000;
    }
  }
  runtime_mallocgc(uVar1,(runtime__type *)unaff_RBX,(bool)needzero);
  if (size_spill != uVar1) {
    unaff_RBX = (uint8 *)(local_20 + size_spill);
    runtime_memclrNoHeapPointers();
  }
  _Var2.len = (int)unaff_RBX;
  _Var2.array = (uint8 *)local_20;
  _Var2.cap = size_spill;
  return _Var2;
}

