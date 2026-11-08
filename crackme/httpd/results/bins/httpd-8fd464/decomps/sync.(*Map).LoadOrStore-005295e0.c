
/* WARNING: Removing unreachable block (ram,0x00529b65) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void sync.(*Map).LoadOrStore(sync.Map * m, interface_{} key,
   interface_{} value, interface_{} actual, bool loaded) */

multireturn_interface____bool__conflict
sync___Map__LoadOrStore(sync_Map *m,interface___ key,interface___ value)

{
  uint uVar1;
  int iVar2;
  void **ptr;
  sync_Mutex *m_00;
  runtime_maptype *t;
  runtime__type *prVar3;
  undefined1 *key_00;
  bucket<interface___,*sync_entry> *key_01;
  long in_FS_OFFSET;
  interface___ i;
  interface___ i_00;
  interface___ val;
  multireturn_void___bool_ mVar4;
  multireturn_interface____bool__conflict mVar5;
  multireturn_interface____bool__conflict mVar6;
  multireturn_interface____bool_bool_ mVar7;
  sync_Map *m_spill;
  interface___ key_spill;
  interface___ value_spill;
  map_interface_____sync_entry local_a8;
  bool local_98;
  undefined7 uStack_97;
  byte local_90;
  byte local_88;
  char local_87;
  runtime__type *local_48;
  undefined8 *puStack_40;
  runtime__type *local_38;
  undefined8 *puStack_30;
  undefined1 local_28 [16];
  bucket<interface___,*sync_entry> *local_18;
  char local_10;
  
                    /* Unresolved local var: interface_{} * &i@[???] */
  while (&puStack_30 <= *(undefined8 ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: sync/atomic.ifaceWords * vp@[???]
                       Unresolved local var: void * typ@[???]
                       Unresolved local var: void * data@[???] */
  local_48 = (m_spill->read).v._type;
  if ((local_48 == (runtime__type *)0x0) || (local_48 == (runtime__type *)0xffffffffffffffff)) {
    local_48 = (runtime__type *)0x0;
    puStack_40 = (undefined8 *)0x0;
  }
  else {
    puStack_40 = (m_spill->read).v.data;
  }
  if (local_48 == (runtime__type *)&DAT_0024e940) {
    local_18 = (bucket<interface___,*sync_entry> *)*puStack_40;
    local_10 = *(char *)(puStack_40 + 1);
  }
  else {
    local_10 = 0;
    local_18 = (bucket<interface___,*sync_entry> *)0x0;
  }
                    /* Unresolved local var: sync.entry * e@[???] */
  mVar4 = runtime_mapaccess2((runtime_maptype *)local_28,(runtime_hmap *)&DAT_00235a80,
                             key_spill._type);
  i._type._0_1_ = mVar4.~r4;
  i._type._1_7_ = 0x235a;
  if (local_90 != 0) {
                    /* Unresolved local var: bool loaded@[???] */
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    i.data = value_spill.data;
    mVar7 = sync___entry__tryLoadOrStore((sync_entry *)value_spill._type,i);
    mVar6.actual.data = mVar7.actual.data;
    mVar6.actual._type = (runtime__type *)(ulong)local_88;
    if (local_87 != '\0') {
      mVar6.loaded = local_98;
      return mVar6;
    }
  }
  m_00 = (sync_Mutex *)0x0;
  LOCK();
  uVar1 = (m_spill->mu).state;
  if (uVar1 == 0) {
    (m_spill->mu).state = 1;
  }
  else {
    m_00 = (sync_Mutex *)(ulong)uVar1;
  }
  UNLOCK();
  if (uVar1 != 0) {
    sync___Mutex__lockSlow(m_00);
                    /* Unresolved local var: void * typ@[???]
                       Unresolved local var: void * data@[???] */
  }
  local_38 = (m_spill->read).v._type;
  if ((local_38 == (runtime__type *)0x0) || (local_38 == (runtime__type *)0xffffffffffffffff)) {
    local_38 = (runtime__type *)0x0;
    puStack_30 = (undefined8 *)0x0;
  }
  else {
    puStack_30 = (m_spill->read).v.data;
  }
  if (local_38 == (runtime__type *)&DAT_0024e940) {
    key_01 = (bucket<interface___,*sync_entry> *)*puStack_30;
    t = (runtime_maptype *)(ulong)*(byte *)(puStack_30 + 1);
  }
  else {
    t = (runtime_maptype *)0x0;
    key_01 = (bucket<interface___,*sync_entry> *)0x0;
  }
  local_18 = key_01;
  local_10 = (char)t;
                    /* Unresolved local var: sync.entry * e@[???] */
  mVar4 = runtime_mapaccess2(t,key_spill.data,key_01);
  i_00._type = (runtime__type *)CONCAT71((int7)((ulong)key_spill.data >> 8),mVar4.~r4);
  ptr = *(void ***)CONCAT71(uStack_97,local_98);
  if (local_90 == 0) {
                    /* Unresolved local var: sync.entry * e@[???]
                       Unresolved local var: sync.entry * ~R0@[???] */
    local_a8 = m_spill->dirty;
    mVar4 = runtime_mapaccess2((runtime_maptype *)key_spill._type,(runtime_hmap *)local_28,
                               key_spill.data);
    prVar3 = (runtime__type *)CONCAT71((int7)((ulong)local_28 >> 8),mVar4.~r4);
    if ((char)t == '\0') {
      sync___Map__dirtyLocked(m_spill);
      local_10 = '\x01';
      local_18 = key_01;
      runtime_convT2E((runtime__type *)&stack0xffffffffffffffe8,prVar3);
      prVar3 = (runtime__type *)CONCAT71(uStack_97,local_98);
      val.data = &m_spill->read;
      val._type = prVar3;
      sync_atomic___Value__Store((sync_atomic_Value *)m_spill,val);
      local_a8 = (map_interface_____sync_entry)local_28;
    }
    runtime_newobject((runtime__type *)&DAT_0022dfe0);
    local_a8->count = (int)value_spill._type;
    if (runtime_writeBarrier._0_4_ == 0) {
      *(void **)&local_a8->flags = value_spill.data;
    }
    else {
      runtime_gcWriteBarrierCX();
    }
    runtime_newobject((runtime__type *)&DAT_00244720);
    if (runtime_writeBarrier._0_4_ == 0) {
      local_a8->count = (int)local_a8;
    }
    else {
      runtime_gcWriteBarrier();
    }
    runtime_mapassign((runtime_maptype *)m_spill,(runtime_hmap *)prVar3,local_28);
    if (runtime_writeBarrier._0_4_ == 0) {
      *(map_interface_____sync_entry *)CONCAT71(uStack_97,local_98) = local_a8;
    }
    else {
      runtime_gcWriteBarrier();
    }
    prVar3 = (runtime__type *)0x0;
  }
  else {
    key_00 = sync_expunged;
    sync_atomic_CompareAndSwapPointer(ptr,i_00._type,sync_expunged);
    if (local_98 != false) {
      key_00 = local_28;
      runtime_mapassign((runtime_maptype *)m_spill,(runtime_hmap *)i_00._type,key_00);
      if (runtime_writeBarrier._0_4_ == 0) {
        *(void ***)CONCAT71(uStack_97,local_98) = ptr;
      }
      else {
        runtime_gcWriteBarrier();
      }
    }
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    i_00.data = key_00;
    sync___entry__tryLoadOrStore(value_spill.data,i_00);
    prVar3 = (runtime__type *)(ulong)local_88;
    value_spill.data = (void *)(ulong)local_90;
    value_spill._type = (runtime__type *)CONCAT71(uStack_97,local_98);
  }
                    /* Unresolved local var: int32 new@[???] */
  LOCK();
  iVar2 = (m_spill->mu).state;
  (m_spill->mu).state = (m_spill->mu).state + -1;
  UNLOCK();
  if (iVar2 != 1) {
    sync___Mutex__unlockSlow((sync_Mutex *)prVar3,(int32)value_spill._type);
  }
  mVar5.actual.data = value_spill._type;
  mVar5.actual._type = prVar3;
  mVar5.loaded = SUB81(value_spill.data,0);
  return mVar5;
}

