
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void sync.(*Map).Load(sync.Map * m, interface_{} key, interface_{}
   value, bool ok) */

multireturn_interface____bool_ sync___Map__Load(sync_Map *m,interface___ key)

{
  uint uVar1;
  int iVar2;
  sync_Mutex sVar3;
  undefined1 auVar4 [17];
  sync_Mutex *m_00;
  runtime_maptype *t;
  runtime__type *prVar5;
  undefined1 uVar6;
  void *key_00;
  sync_Map *m_01;
  sync_Map *psVar7;
  long in_FS_OFFSET;
  multireturn_void___bool_ mVar8;
  multireturn_interface____bool_ mVar9;
  sync_Map *m_spill;
  interface___ key_spill;
  undefined8 *local_60;
  char local_58;
  runtime__type *local_38;
  void *pvStack_30;
  runtime__type *local_28;
  void *pvStack_20;
  
                    /* Unresolved local var: sync.entry * e@[???]
                       Unresolved local var: sync.readOnly read@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: void * typ@[???]
                       Unresolved local var: void * data@[???] */
  local_28 = (m_spill->read).v._type;
  if ((local_28 == (runtime__type *)0x0) || (local_28 == (runtime__type *)0xffffffffffffffff)) {
    local_28 = (runtime__type *)0x0;
    pvStack_20 = (void *)0x0;
  }
  else {
    pvStack_20 = (m_spill->read).v.data;
  }
  if (local_28 == (runtime__type *)&DAT_0024e940) {
    key_00 = (void *)(ulong)*(byte *)((long)pvStack_20 + 8);
  }
  else {
    key_00 = (void *)0x0;
  }
  mVar8 = runtime_mapaccess2((runtime_maptype *)key_spill._type,
                             (runtime_hmap *)&stack0xffffffffffffffe8,key_00);
  psVar7 = (sync_Map *)CONCAT71((int7)((ulong)&stack0xffffffffffffffe8 >> 8),mVar8.~r4);
  m_01 = (sync_Map *)*local_60;
  if ((local_58 == '\0') && ((char)key_00 != '\0')) {
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
      pvStack_30 = (void *)0x0;
    }
    else {
      pvStack_30 = (m_spill->read).v.data;
    }
    if (local_38 == (runtime__type *)&DAT_0024e940) {
      t = (runtime_maptype *)(ulong)*(byte *)((long)pvStack_30 + 8);
    }
    else {
      t = (runtime_maptype *)0x0;
    }
    mVar8 = runtime_mapaccess2(t,key_spill.data,key_spill._type);
    m_01 = (sync_Map *)*local_60;
    if ((char)t != '\0') {
      runtime_mapaccess2((runtime_maptype *)m_spill,
                         (runtime_hmap *)CONCAT71((int7)((ulong)key_spill.data >> 8),mVar8.~r4),
                         &stack0xffffffffffffffe8);
      m_01 = (sync_Map *)*local_60;
      sync___Map__missLocked(m_01);
    }
                    /* Unresolved local var: int32 new@[???] */
    LOCK();
    iVar2 = (m_spill->mu).state;
    (m_spill->mu).state = (m_spill->mu).state + -1;
    UNLOCK();
    psVar7 = m_spill;
    if (iVar2 != 1) {
      sync___Mutex__unlockSlow((sync_Mutex *)0x0,(int32)m_spill);
    }
  }
  if (local_58 == '\0') {
    auVar4[8] = (char)m_01;
    auVar4._0_8_ = psVar7;
    auVar4._9_8_ = 0;
    return (multireturn_interface____bool_)(auVar4 << 0x40);
  }
                    /* Unresolved local var: void * p@[???] */
  sVar3 = m_01->mu;
  if ((sVar3 == (sync_Mutex)0x0) || ((sync_Mutex)sync_expunged == sVar3)) {
    uVar6 = false;
    prVar5 = (runtime__type *)0x0;
  }
  else {
    uVar6 = (undefined1)*(undefined8 *)sVar3;
    prVar5 = *(runtime__type **)((long)sVar3 + 8);
  }
  mVar9.value.data = psVar7;
  mVar9.value._type = prVar5;
  mVar9.ok = (bool)uVar6;
  return mVar9;
}

