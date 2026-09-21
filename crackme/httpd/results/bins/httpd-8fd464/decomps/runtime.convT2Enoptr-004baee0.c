
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.convT2Enoptr(runtime._type * t, void * elem, runtime.eface
   e) */

runtime_eface runtime_convT2Enoptr(runtime__type *t,void *elem)

{
  long in_FS_OFFSET;
  runtime_eface rVar1;
  runtime__type *t_spill;
  void *elem_spill;
  runtime__type *local_18;
  
                    /* Unresolved local var: void * x@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_mallocgc((uintptr)t_spill,elem,SUB81(t_spill->size,0));
  runtime_memmove();
  rVar1.data = elem_spill;
  rVar1._type = local_18;
  return rVar1;
}

