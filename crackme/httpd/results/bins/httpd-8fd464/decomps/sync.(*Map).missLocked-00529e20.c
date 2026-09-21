
/* WARNING: Unknown calling convention */

void sync___Map__missLocked(sync_Map *m)

{
  sync_Map *extraout_RAX;
  long lVar1;
  long lVar2;
  void *unaff_RBX;
  long in_FS_OFFSET;
  interface___ val;
  sync_Map *m_spill;
  runtime__type *local_20;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  lVar1 = m_spill->misses + 1;
  m_spill->misses = lVar1;
  if (m_spill->dirty == (map_interface_____sync_entry)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = m_spill->dirty->count;
  }
  if (lVar2 <= lVar1) {
    runtime_convT2E((runtime__type *)m_spill,unaff_RBX);
    val.data = &m_spill->read;
    val._type = local_20;
    sync_atomic___Value__Store((sync_atomic_Value *)m_spill,val);
    if (runtime_writeBarrier._0_4_ == 0) {
      m_spill->dirty = (map_interface_____sync_entry)0x0;
    }
    else {
      runtime_gcWriteBarrierCX();
      m_spill = extraout_RAX;
    }
    m_spill->misses = 0;
    return;
  }
  return;
}

