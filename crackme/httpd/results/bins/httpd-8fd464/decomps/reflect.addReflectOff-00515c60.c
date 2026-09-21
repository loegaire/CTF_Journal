
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.addReflectOff(void * ptr, int32 ~r1) */

int32 reflect_addReflectOff(void *ptr)

{
  uint uVar1;
  int32 iVar2;
  runtime_maptype *t;
  runtime_maptype *extraout_RAX;
  runtime_hmap *h;
  long in_FS_OFFSET;
  multireturn_void___bool_ mVar3;
  void *ptr_spill;
  uint *local_20;
  char local_18;
  
                    /* Unresolved local var: int32 id@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_lock2(&runtime_reflectOffs.lock);
  if (runtime_reflectOffs.m == (map_int32_unsafe_Pointer)0x0) {
    runtime_makemap_small();
    if (runtime_writeBarrier._0_4_ == 0) {
      runtime_reflectOffs.m = (map_int32_unsafe_Pointer)&runtime_reflectOffs;
    }
    else {
      runtime_gcWriteBarrier();
    }
    runtime_makemap_small();
    if (runtime_writeBarrier._0_4_ == 0) {
      runtime_reflectOffs.minv = (map_unsafe_Pointer_int32)&runtime_reflectOffs;
    }
    else {
      runtime_gcWriteBarrier();
    }
    runtime_reflectOffs.next = -1;
  }
  mVar3 = runtime_mapaccess2_fast64
                    ((runtime_maptype *)runtime_reflectOffs.minv,(runtime_hmap *)&DAT_00236920,
                     (uint64)ptr_spill);
  iVar2 = runtime_reflectOffs.next;
  h = (runtime_hmap *)CONCAT71(0x2369,mVar3.~r4);
  uVar1 = *local_20;
  if (local_18 == '\0') {
    t = (runtime_maptype *)(ulong)(uint)runtime_reflectOffs.next;
    runtime_reflectOffs.next = runtime_reflectOffs.next + -1;
    runtime_mapassign_fast32(t,h,(uint32)runtime_reflectOffs.m);
    if (runtime_writeBarrier._0_4_ == 0) {
      *(void **)local_20 = ptr_spill;
    }
    else {
      runtime_gcWriteBarrier();
      ptr_spill = extraout_RAX;
    }
    runtime_mapassign_fast64ptr(ptr_spill,h,runtime_reflectOffs.minv);
    *local_20 = iVar2;
    uVar1 = iVar2;
  }
  runtime_unlock2((runtime_mutex *)(ulong)uVar1);
  return uVar1;
}

