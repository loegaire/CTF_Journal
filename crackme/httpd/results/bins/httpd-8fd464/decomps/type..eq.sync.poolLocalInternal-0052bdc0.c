
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.sync.poolLocalInternal(sync.poolLocalInternal * p,
   sync.poolLocalInternal * q, bool r) */

bool type__eq_sync_poolLocalInternal(sync_poolLocalInternal *p,sync_poolLocalInternal *q)

{
  runtime__type *y;
  long in_FS_OFFSET;
  sync_poolLocalInternal *p_spill;
  sync_poolLocalInternal *q_spill;
  char local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  y = (p_spill->private)._type;
  if (((q_spill->private)._type == y) &&
     (runtime_efaceeq((runtime__type *)p_spill,(q_spill->private).data,y), local_10 != '\0')) {
    if ((q_spill->shared).head == (p_spill->shared).head) {
      return (q_spill->shared).tail == (p_spill->shared).tail;
    }
    return false;
  }
  return false;
}

