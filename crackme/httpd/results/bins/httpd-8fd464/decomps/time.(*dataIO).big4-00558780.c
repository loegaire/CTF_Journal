
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.(*dataIO).big4(time.dataIO * d, uint32 n, bool ok) */

multireturn_uint32_bool__conflict1 time___dataIO__big4(time_dataIO *d)

{
  long lVar1;
  uint uVar2;
  uint *extraout_RAX;
  uint *puVar3;
  bool unaff_BL;
  long in_FS_OFFSET;
  multireturn_uint32_bool__conflict1 mVar4;
  multireturn_uint32_bool__conflict1 mVar5;
  time_dataIO *d_spill;
  
                    /* Unresolved local var: []uint8 p@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: []uint8 p@[???] */
  puVar3 = (uint *)(d_spill->p).array;
  lVar1 = (d_spill->p).len;
  if (lVar1 < 4) {
    (d_spill->p).len = 0;
    (d_spill->p).cap = 0;
    if (runtime_writeBarrier._0_4_ == 0) {
      (d_spill->p).array = (uint8 *)0x0;
    }
    else {
      runtime_gcWriteBarrier();
    }
    d_spill->error = true;
    uVar2 = 0;
    puVar3 = (uint *)0x0;
  }
  else {
    (d_spill->p).len = lVar1 + -4;
    lVar1 = (d_spill->p).cap + -4;
    (d_spill->p).cap = lVar1;
    if (runtime_writeBarrier._0_4_ == 0) {
      (d_spill->p).array = (uint8 *)((-lVar1 >> 0x3f & 4U) + (long)puVar3);
    }
    else {
      runtime_gcWriteBarrierCX();
      puVar3 = extraout_RAX;
    }
    uVar2 = 4;
  }
  if (uVar2 < 4) {
    d_spill->error = true;
    mVar4.ok = unaff_BL;
    mVar4.n = uVar2;
    return mVar4;
  }
  uVar2 = *puVar3;
  mVar5.n = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  mVar5.ok = unaff_BL;
  return mVar5;
}

