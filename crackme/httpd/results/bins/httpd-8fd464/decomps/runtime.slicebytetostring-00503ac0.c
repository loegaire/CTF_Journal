
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.slicebytetostring(runtime.tmpBuf * buf, uint8 * ptr, int
   n, string str) */

string runtime_slicebytetostring(runtime_tmpBuf *buf,uint8 *ptr,int n)

{
  undefined1 auVar1 [16];
  uint8 *extraout_RAX;
  long in_FS_OFFSET;
  string sVar2;
  string sVar3;
  void *p;
  uint8 *ptr_spill;
  int n_spill;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  if (n_spill != 0) {
    if (n_spill != 1) {
      if ((p == (void *)0x0) || (0x20 < n_spill)) {
        runtime_mallocgc(n_spill,(runtime__type *)ptr,SUB81(p,0));
      }
      runtime_memmove();
      sVar2.len = (int)ptr;
      sVar2.str = extraout_RAX;
      return sVar2;
    }
                    /* Unresolved local var: void * p@[???] */
    sVar3.len = (int)ptr;
    sVar3.str = (uint8 *)(runtime_staticuint64s + *ptr_spill);
    return sVar3;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = ptr;
  return (string)(auVar1 << 0x40);
}

