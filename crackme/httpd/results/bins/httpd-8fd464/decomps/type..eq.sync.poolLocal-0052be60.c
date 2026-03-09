
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.sync.poolLocal(sync.poolLocal * p, sync.poolLocal * q,
   bool r) */

bool type__eq_sync_poolLocal(sync_poolLocal *p,sync_poolLocal *q)

{
  runtime__type *y;
  long in_FS_OFFSET;
  sync_poolLocal *p_spill;
  sync_poolLocal *q_spill;
  char local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  y = (p_spill->poolLocalInternal).private._type;
  if (((((q_spill->poolLocalInternal).private._type == y) &&
       (runtime_efaceeq((runtime__type *)p_spill,q_spill,y), local_10 != '\0')) &&
      ((q_spill->poolLocalInternal).shared.head == (p_spill->poolLocalInternal).shared.head)) &&
     ((q_spill->poolLocalInternal).shared.tail == (p_spill->poolLocalInternal).shared.tail)) {
    runtime_memequal();
    return (bool)local_10;
  }
  return false;
}

