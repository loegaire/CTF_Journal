
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*vdsoTimehands).getHPETTimecounter(runtime.vdsoTimehands
   * th, uint32 ~r0, bool ~r1) */

multireturn_uint32_bool__conflict
runtime___vdsoTimehands__getHPETTimecounter(runtime_vdsoTimehands *th)

{
  uintptr *puVar1;
  uintptr uVar2;
  uintptr uVar3;
  uintptr unaff_RBX;
  long in_FS_OFFSET;
  multireturn_uint32_bool__conflict mVar4;
  multireturn_uint32_bool__conflict mVar5;
  multireturn_uint32_bool__conflict mVar6;
  multireturn_uint32_bool__conflict mVar7;
  runtime_vdsoTimehands *th_spill;
  int local_58;
  uintptr local_48;
  long local_40;
  
                    /* Unresolved local var: uintptr p@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x18)) {
    runtime_morestackc();
  }
  uVar2 = (uintptr)th_spill->x86_hpet_idx;
  mVar6.~r1 = SUB81(unaff_RBX,0);
  if (9 < uVar2) {
    mVar7.~r1 = mVar6.~r1;
    mVar7.~r0 = th_spill->x86_hpet_idx;
    return mVar7;
  }
  puVar1 = runtime_hpetDevMap + uVar2;
  uVar3 = *puVar1;
  if (*puVar1 == 0) {
                    /* Unresolved local var: int32 fd@[???]
                       Unresolved local var: void * addr@[???]
                       Unresolved local var: int mmapErr@[???]
                       Unresolved local var: uintptr newP@[???]
                       Unresolved local var: uint8[11] devPath@[???] */
    runtime_open();
    if (local_58 < 0) {
      LOCK();
      uVar2 = *puVar1;
      if (uVar2 == 0) {
        *puVar1 = 0xffffffffffffffff;
        uVar2 = 0;
      }
      UNLOCK();
      mVar6.~r0 = (uint32)uVar2;
      return mVar6;
    }
    runtime_mmap();
    runtime_closefd();
    if (local_40 != 0) {
      local_48 = 0xffffffffffffffff;
    }
    LOCK();
    uVar2 = *puVar1;
    if (uVar2 == 0) {
      *puVar1 = local_48;
    }
    UNLOCK();
    if ((uVar2 != 0) && (local_40 == 0)) {
      runtime_munmap();
    }
    uVar2 = *puVar1;
    uVar3 = uVar2;
    unaff_RBX = local_48;
  }
  mVar4.~r1 = SUB81(unaff_RBX,0);
  if (uVar3 != 0xffffffffffffffff) {
    mVar5.~r1 = mVar4.~r1;
    mVar5.~r0 = *(uint32 *)(uVar3 + 0xf0);
    return mVar5;
  }
  mVar4.~r0 = (uint32)uVar2;
  return mVar4;
}

