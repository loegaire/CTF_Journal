
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.convT2Inoptr(runtime.itab * tab, void * elem,
   runtime.iface i) */

runtime_iface runtime_convT2Inoptr(runtime_itab *tab,void *elem)

{
  long in_FS_OFFSET;
  runtime_iface rVar1;
  runtime_itab *tab_spill;
  void *elem_spill;
  runtime_itab *local_20;
  
                    /* Unresolved local var: runtime._type * t@[???]
                       Unresolved local var: void * x@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_mallocgc((uintptr)tab_spill,elem,SUB81(tab_spill->_type,0));
  runtime_memmove();
  rVar1.data = elem;
  rVar1.tab = local_20;
  return rVar1;
}

