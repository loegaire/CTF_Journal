
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void sync.(*entry).tryLoadOrStore(sync.entry * e, interface_{} i,
   interface_{} actual, bool loaded, bool ok) */

multireturn_interface____bool_bool_ sync___entry__tryLoadOrStore(sync_entry *e,interface___ i)

{
  undefined8 *puVar1;
  void **extraout_RAX;
  sync_entry *psVar2;
  void **in_RDI;
  long in_FS_OFFSET;
  multireturn_interface____bool_bool_ mVar3;
  multireturn_interface____bool_bool_ mVar4;
  multireturn_interface____bool_bool_ mVar5;
  multireturn_interface____bool_bool_ mVar6;
  multireturn_interface____bool_bool_ mVar7;
  sync_entry *e_spill;
  interface___ i_spill;
  void **local_28;
  char local_18;
  
  mVar3.actual.data = i._type;
                    /* Unresolved local var: void * p@[???]
                       Unresolved local var: interface_{} * &ic@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  puVar1 = e_spill->p;
  mVar3.ok = SUB81(in_RDI,0);
  if (puVar1 == sync_expunged) {
    mVar4.actual.data = mVar3.actual.data;
    mVar4.actual._type = (runtime__type *)e_spill;
    mVar4.loaded = SUB81(puVar1,0);
    mVar4.ok = (bool)mVar3.ok;
    return mVar4;
  }
  if (puVar1 != (undefined8 *)0x0) {
    mVar3.actual._type = (runtime__type *)*puVar1;
    mVar3.loaded = (undefined1)puVar1[1];
    return mVar3;
  }
  runtime_newobject((runtime__type *)&DAT_0022dfe0);
  *local_28 = i_spill._type;
  if (runtime_writeBarrier._0_4_ == 0) {
    local_28[1] = i_spill.data;
  }
  else {
    in_RDI = local_28 + 1;
    runtime_gcWriteBarrierCX();
    local_28 = extraout_RAX;
  }
  while( true ) {
    psVar2 = e_spill;
    sync_atomic_CompareAndSwapPointer(local_28,mVar3.actual.data,e_spill);
    mVar5.ok = SUB81(in_RDI,0);
    if (local_18 != '\0') {
      mVar7.actual.data = mVar3.actual.data;
      mVar7.actual._type = i_spill.data;
      mVar7.loaded = SUB81(psVar2,0);
      mVar7.ok = (bool)mVar5.ok;
      return mVar7;
    }
    puVar1 = e_spill->p;
    if (puVar1 == sync_expunged) break;
    if (puVar1 != (undefined8 *)0x0) {
      mVar5.actual.data = mVar3.actual.data;
      mVar5.actual._type = (runtime__type *)*puVar1;
      mVar5.loaded = (undefined1)puVar1[1];
      return mVar5;
    }
  }
  mVar6.actual.data = mVar3.actual.data;
  mVar6.actual._type = (runtime__type *)e_spill;
  mVar6.loaded = SUB81(puVar1,0);
  mVar6.ok = (bool)mVar5.ok;
  return mVar6;
}

