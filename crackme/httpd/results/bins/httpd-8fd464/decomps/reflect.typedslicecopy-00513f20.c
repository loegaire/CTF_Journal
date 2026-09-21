
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.typedslicecopy(runtime._type * elemType, runtime.slice
   dst, runtime.slice src, int ~r3) */

int reflect_typedslicecopy(runtime__type *elemType,runtime_slice dst,runtime_slice src)

{
  int dstLen;
  void *width;
  void *srcPtr;
  long in_FS_OFFSET;
  runtime__type *elemType_spill;
  runtime_slice dst_spill;
  runtime_slice src_spill;
  int local_10;
  
  width = src.array;
  srcPtr = (void *)dst.cap;
  dstLen = dst.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (elemType_spill->ptrdata == 0) {
    runtime_slicecopy((void *)elemType_spill->size,(int)dst.array,(void *)src_spill.len,(int)srcPtr,
                      (uintptr)width);
    return local_10;
  }
  runtime_typedslicecopy((runtime__type *)src_spill.len,dst.array,dstLen,srcPtr,(int)width);
  return local_10;
}

