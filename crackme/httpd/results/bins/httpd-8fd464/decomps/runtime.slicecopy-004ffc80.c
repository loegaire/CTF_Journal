
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.slicecopy(void * toPtr, int toLen, void * fromPtr, int
   fromLen, uintptr width, int ~r5) */

int runtime_slicecopy(void *toPtr,int toLen,void *fromPtr,int fromLen,uintptr width)

{
  long in_FS_OFFSET;
  void *toPtr_spill;
  int toLen_spill;
  void *fromPtr_spill;
  int n;
  uintptr width_spill;
  
                    /* Unresolved local var: uintptr size@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((n == 0) || (toLen_spill == 0)) {
    return n;
  }
  if (toLen_spill < n) {
    n = toLen_spill;
  }
  if (width_spill != 0) {
    if (width_spill * n == 1) {
      *(undefined1 *)toPtr_spill = *(undefined1 *)fromPtr_spill;
    }
    else {
      runtime_memmove();
    }
    return n;
  }
  return n;
}

