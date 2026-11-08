
/* WARNING: Unknown calling convention */

void runtime___itabTableType__add_fm(runtime_itab *m)

{
  long *plVar1;
  long in_RDX;
  long extraout_RDX;
  runtime_itab *unaff_RBX;
  long in_FS_OFFSET;
  runtime_itab *m_spill;
  undefined8 local_18;
  runtime_itab *local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
  if ((plVar1 != (long *)0x0) && ((runtime_itab **)*plVar1 == &m_spill)) {
    *plVar1 = (long)&local_18;
  }
  local_18 = *(undefined8 *)(in_RDX + 8);
  local_10 = m_spill;
  runtime___itabTableType__add((runtime_itabTableType *)m_spill,unaff_RBX);
  return;
}

