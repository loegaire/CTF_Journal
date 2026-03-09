
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.makemap(runtime.maptype * t, int hint, runtime.hmap * h,
   runtime.hmap * ~r3) */

runtime_hmap * runtime_makemap(runtime_maptype *t,int hint,runtime_hmap *h)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  runtime_bmap *extraout_RAX;
  runtime_hmap *prVar5;
  byte bVar6;
  void *dirtyalloc;
  runtime_hmap *extraout_RDX;
  uint uVar7;
  long in_FS_OFFSET;
  runtime_maptype *t_spill;
  int hint_spill;
  runtime_hmap *h_spill;
  undefined1 local_40;
  undefined7 uStack_3f;
  void *local_30;
  runtime_bmap *local_28;
  
                    /* Unresolved local var: uintptr mem@[???]
                       Unresolved local var: uint8 B@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = t_spill->bucket->size;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = hint_spill;
  if ((SUB168(auVar3 * auVar4,8) != 0) || (0x1000000000000 < SUB168(auVar3 * auVar4,0))) {
    hint_spill = 0;
  }
  if (h_spill == (runtime_hmap *)0x0) {
    runtime_newobject((runtime__type *)&DAT_002753c0);
    h_spill = (runtime_hmap *)CONCAT71(uStack_3f,local_40);
  }
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: uint32 s1@[???]
                       Unresolved local var: uint32 s0@[???] */
  lVar2 = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30);
  uVar7 = *(uint *)(lVar2 + 0x128);
  uVar1 = *(uint *)(lVar2 + 300);
  *(uint *)(lVar2 + 0x128) = uVar1;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uVar7 = uVar1 >> 0x10 ^ uVar7 >> 7 ^ uVar1 ^ uVar7;
  *(uint *)(lVar2 + 300) = uVar7;
  h_spill->hash0 = uVar1 + uVar7;
  dirtyalloc = (void *)0x0;
  while ((bVar6 = (byte)dirtyalloc, 8 < hint_spill &&
         (((ulong)(1L << (bVar6 & 0x3f)) >> 1) * 0xd < (ulong)hint_spill))) {
    dirtyalloc = (void *)(ulong)((int)dirtyalloc + 1);
  }
  h_spill->B = bVar6;
  prVar5 = h_spill;
  if (bVar6 != 0) {
                    /* Unresolved local var: runtime.bmap * nextOverflow@[???] */
    runtime_makeBucketArray(t_spill,(uint8)hint_spill,dirtyalloc);
    if (runtime_writeBarrier._0_4_ == 0) {
      h_spill->buckets = local_30;
    }
    else {
      runtime_gcWriteBarrierCX();
      local_28 = extraout_RAX;
      prVar5 = extraout_RDX;
    }
    if (local_28 != (runtime_bmap *)0x0) {
      runtime_newobject((runtime__type *)&DAT_002587e0);
      if (runtime_writeBarrier._0_4_ == 0) {
        h_spill->extra = (runtime_mapextra *)CONCAT71(uStack_3f,bVar6);
        ((runtime_mapextra *)CONCAT71(uStack_3f,bVar6))->nextOverflow = local_28;
        prVar5 = h_spill;
      }
      else {
        runtime_gcWriteBarrier();
        prVar5 = h_spill;
        runtime_gcWriteBarrier();
      }
    }
  }
  return prVar5;
}

