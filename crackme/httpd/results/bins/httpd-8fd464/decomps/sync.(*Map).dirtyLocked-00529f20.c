
/* WARNING: Unknown calling convention */

void sync___Map__dirtyLocked(sync_Map *m)

{
  int iVar1;
  undefined8 uVar2;
  sync_entry *e;
  runtime_hmap *unaff_RBX;
  long in_FS_OFFSET;
  sync_Map *m_spill;
  map_interface_____sync_entry local_c0;
  map_interface_____sync_entry local_b0;
  runtime__type *local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  sync_entry *local_70;
  runtime_hiter local_68;
  
                    /* Unresolved local var: sync.readOnly read@[???] */
  while (&local_68.buckets <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (m_spill->dirty == (map_interface_____sync_entry)0x0) {
                    /* Unresolved local var: void * typ@[???]
                       Unresolved local var: void * data@[???] */
    local_88 = (m_spill->read).v._type;
    if ((local_88 == (runtime__type *)0x0) || (local_88 == (runtime__type *)0xffffffffffffffff)) {
      local_88 = (runtime__type *)0x0;
      puStack_80 = (undefined8 *)0x0;
    }
    else {
      puStack_80 = (m_spill->read).v.data;
    }
    if (local_88 == (runtime__type *)&DAT_0024e940) {
      local_c0 = (map_interface_____sync_entry)*puStack_80;
    }
    else {
      local_c0 = (map_interface_____sync_entry)0x0;
    }
    runtime_makemap((runtime_maptype *)&DAT_00235a80,(int)unaff_RBX,(runtime_hmap *)local_c0);
    if (runtime_writeBarrier._0_4_ == 0) {
      m_spill->dirty = local_b0;
    }
    else {
      runtime_gcWriteBarrier();
    }
                    /* Unresolved local var: sync.entry * e@[???]
                       Unresolved local var: interface_{} k@[???] */
    FUN_0051a18b(&local_88);
    runtime_mapiterinit((runtime_maptype *)&DAT_00235a80,unaff_RBX,&local_68);
    while (local_68.key != (undefined8 *)0x0) {
      iVar1 = *(int *)local_68.elem;
      uVar2 = *(undefined8 *)local_68.key;
      e = *(sync_entry **)((long)local_68.key + 8);
      sync___entry__tryExpungeLocked(e);
      if ((char)local_c0 == '\0') {
        local_c0 = m_spill->dirty;
        local_78 = uVar2;
        local_70 = e;
        runtime_mapassign((runtime_maptype *)m_spill,unaff_RBX,&local_78);
        if (runtime_writeBarrier._0_4_ == 0) {
          local_b0->count = iVar1;
        }
        else {
          runtime_gcWriteBarrier();
        }
      }
      runtime_mapiternext(&local_68);
    }
    return;
  }
  return;
}

