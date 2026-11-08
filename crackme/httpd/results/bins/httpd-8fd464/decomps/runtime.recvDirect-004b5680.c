
/* WARNING: Unknown calling convention */

void runtime_recvDirect(runtime__type *t,runtime_sudog *sg,void *dst)

{
  long in_FS_OFFSET;
  runtime__type *t_spill;
  runtime_sudog *sg_spill;
  void *dst_spill;
  
                    /* Unresolved local var: void * src@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_typeBitsBulkBarrier(sg_spill->elem,(uintptr)sg,(uintptr)dst_spill,t_spill->size);
  runtime_memmove();
  return;
}

