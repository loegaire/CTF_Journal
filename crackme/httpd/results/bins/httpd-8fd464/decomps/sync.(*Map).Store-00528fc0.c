
/* WARNING: Removing unreachable block (ram,0x005294de) */
/* WARNING: Unknown calling convention */

void sync___Map__Store(sync_Map *m,interface___ key,interface___ value)

{
  int iVar1;
  void **ptr;
  uintptr uVar2;
  runtime__type *prVar3;
  uint uVar4;
  sync_Mutex *m_00;
  runtime_maptype *t;
  bucket<interface___,*sync_entry> *key_00;
  runtime__type *h;
  long in_FS_OFFSET;
  interface___ val;
  multireturn_void___bool_ mVar5;
  sync_Map *m_spill;
  interface___ key_spill;
  interface___ value_spill;
  runtime__type *local_98;
  char local_90;
  char local_88;
  undefined7 uStack_87;
  char local_80;
  runtime__type *local_48;
  undefined8 *puStack_40;
  runtime__type *local_38;
  undefined8 *puStack_30;
  undefined1 local_28 [16];
  bucket<interface___,*sync_entry> *local_18;
  char local_10;
  
  prVar3 = local_98;
                    /* Unresolved local var: interface_{} * &value@[???]
                       Unresolved local var: interface_{} * &i@[???] */
  while (local_28 + 8 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_newobject((runtime__type *)&DAT_0022dfe0);
  if (runtime_writeBarrier._0_4_ == 0) {
    local_98->size = (uintptr)value_spill._type;
    local_98->ptrdata = (uintptr)value_spill.data;
  }
  else {
    runtime_typedmemmove(local_98,key._type,&value_spill);
                    /* Unresolved local var: sync.entry * e@[???] */
  }
                    /* Unresolved local var: sync/atomic.ifaceWords * vp@[???]
                       Unresolved local var: void * typ@[???]
                       Unresolved local var: void * data@[???] */
  local_38 = (m_spill->read).v._type;
  if ((local_38 == (runtime__type *)0x0) || (local_38 == (runtime__type *)0xffffffffffffffff)) {
    local_38 = (runtime__type *)0x0;
    puStack_30 = (undefined8 *)0x0;
  }
  else {
    puStack_30 = (m_spill->read).v.data;
  }
  if (local_38 == (runtime__type *)&DAT_0024e940) {
    local_18 = (bucket<interface___,*sync_entry> *)*puStack_30;
    local_10 = *(char *)(puStack_30 + 1);
  }
  else {
    local_10 = 0;
    local_18 = (bucket<interface___,*sync_entry> *)0x0;
  }
  mVar5 = runtime_mapaccess2((runtime_maptype *)local_28,(runtime_hmap *)&DAT_00235a80,
                             key_spill._type);
  if (local_80 != '\0') {
    sync___entry__tryStore((sync_entry *)local_98,(interface___ *)CONCAT71(0x235a,mVar5.~r4));
    local_90 = (char)(runtime_maptype *)local_28;
    if (local_90 != '\0') {
      return;
    }
  }
  m_00 = (sync_Mutex *)0x0;
  LOCK();
  uVar4 = (m_spill->mu).state;
  if (uVar4 == 0) {
    (m_spill->mu).state = 1;
  }
  else {
    m_00 = (sync_Mutex *)(ulong)uVar4;
  }
  UNLOCK();
  if (uVar4 != 0) {
    sync___Mutex__lockSlow(m_00);
                    /* Unresolved local var: void * typ@[???]
                       Unresolved local var: void * data@[???] */
  }
  local_48 = (m_spill->read).v._type;
  if ((local_48 == (runtime__type *)0x0) || (local_48 == (runtime__type *)0xffffffffffffffff)) {
    local_48 = (runtime__type *)0x0;
    puStack_40 = (undefined8 *)0x0;
  }
  else {
    puStack_40 = (m_spill->read).v.data;
  }
  if (local_48 == (runtime__type *)&DAT_0024e940) {
    key_00 = (bucket<interface___,*sync_entry> *)*puStack_40;
    t = (runtime_maptype *)(ulong)*(byte *)(puStack_40 + 1);
  }
  else {
    t = (runtime_maptype *)0x0;
    key_00 = (bucket<interface___,*sync_entry> *)0x0;
  }
  local_18 = key_00;
  local_10 = (char)t;
                    /* Unresolved local var: sync.entry * e@[???] */
  mVar5 = runtime_mapaccess2(t,key_spill.data,key_00);
  h = (runtime__type *)CONCAT71((int7)((ulong)key_spill.data >> 8),mVar5.~r4);
  ptr = *(void ***)CONCAT71(uStack_87,local_88);
  if (local_80 == '\0') {
                    /* Unresolved local var: sync.entry * e@[???]
                       Unresolved local var: sync.entry * ~R0@[???] */
    local_98 = (runtime__type *)m_spill->dirty;
    mVar5 = runtime_mapaccess2((runtime_maptype *)key_spill._type,(runtime_hmap *)local_28,
                               key_spill.data);
    h = (runtime__type *)CONCAT71((int7)((ulong)local_28 >> 8),mVar5.~r4);
    if ((char)t == '\0') {
      sync___Map__dirtyLocked(m_spill);
      local_10 = '\x01';
      local_18 = key_00;
      runtime_convT2E((runtime__type *)&stack0xffffffffffffffe8,h);
      h = (runtime__type *)CONCAT71(uStack_87,local_88);
      val.data = &m_spill->read;
      val._type = h;
      sync_atomic___Value__Store((sync_atomic_Value *)m_spill,val);
      local_98 = (runtime__type *)local_28;
    }
    runtime_newobject((runtime__type *)&DAT_0022dfe0);
    uVar2 = prVar3->ptrdata;
    local_98->size = prVar3->size;
    if (runtime_writeBarrier._0_4_ == 0) {
      local_98->ptrdata = uVar2;
    }
    else {
      runtime_gcWriteBarrierDX();
    }
    runtime_newobject((runtime__type *)&DAT_00244720);
    if (runtime_writeBarrier._0_4_ == 0) {
      local_98->size = (uintptr)local_98;
    }
    else {
      runtime_gcWriteBarrier();
    }
    runtime_mapassign((runtime_maptype *)m_spill,(runtime_hmap *)h,local_28);
    if (runtime_writeBarrier._0_4_ == 0) {
      *(runtime__type **)CONCAT71(uStack_87,local_88) = local_98;
    }
    else {
      runtime_gcWriteBarrier();
    }
  }
  else {
    sync_atomic_CompareAndSwapPointer(ptr,h,sync_expunged);
    if (local_88 != '\0') {
      runtime_mapassign((runtime_maptype *)m_spill,(runtime_hmap *)h,local_28);
      if (runtime_writeBarrier._0_4_ == 0) {
        *(void ***)CONCAT71(uStack_87,local_88) = ptr;
      }
      else {
        runtime_gcWriteBarrier();
      }
    }
    sync_atomic_StorePointer((void **)local_98,h);
  }
                    /* Unresolved local var: int32 new@[???] */
  LOCK();
  iVar1 = (m_spill->mu).state;
  (m_spill->mu).state = (m_spill->mu).state + -1;
  UNLOCK();
  uVar4 = iVar1 - 1;
  if (uVar4 != 0) {
    sync___Mutex__unlockSlow((sync_Mutex *)(ulong)uVar4,(int32)h);
  }
  return;
}

