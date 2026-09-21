
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.makeBucketArray(runtime.maptype * t, uint8 b, void *
   dirtyalloc, void * buckets, runtime.bmap * nextOverflow) */

multireturn_void___runtime_bmap___
runtime_makeBucketArray(runtime_maptype *t,uint8 b,void *dirtyalloc)

{
  ulong uVar1;
  runtime__type *typ;
  void *extraout_RAX;
  runtime__type *prVar2;
  ulong uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  multireturn_void___runtime_bmap___ mVar5;
  runtime_maptype *t_spill;
  uint8 b_spill;
  void *dirtyalloc_spill;
  void *local_20;
  
                    /* Unresolved local var: uintptr nbuckets@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  prVar2 = (runtime__type *)(1L << (b_spill & 0x3f));
  typ = prVar2;
  if (3 < b_spill) {
                    /* Unresolved local var: uintptr sz@[???]
                       Unresolved local var: uintptr up@[???] */
    typ = (runtime__type *)((long)&prVar2->size + (1L << (b_spill - 4 & 0x3f)));
    uVar3 = t_spill->bucket->size;
    uVar4 = (long)typ * uVar3;
    if (uVar4 < 0x8000) {
      if (uVar4 < 0x3f9) {
        uVar1 = uVar4 + 7 >> 3;
        if (0x80 < uVar1) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndexU();
        }
        if (0x43 < (ulong)runtime_size_to_class8[uVar1]) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        uVar1 = (ulong)runtime_class_to_size[runtime_size_to_class8[uVar1]];
      }
      else {
        uVar1 = uVar4 - 0x381 >> 7;
        if (0xf8 < uVar1) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndexU();
        }
        if (0x43 < (ulong)runtime_size_to_class128[uVar1]) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        uVar1 = (ulong)runtime_class_to_size[runtime_size_to_class128[uVar1]];
      }
    }
    else {
      uVar1 = uVar4;
      if (uVar4 < uVar4 + 0x2000 || uVar4 - (uVar4 + 0x2000) == 0) {
        uVar1 = uVar4 + 0x1fff & 0xffffffffffffe000;
      }
    }
    if (uVar1 != uVar4) {
      if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        runtime_panicdivide();
      }
      typ = (runtime__type *)(uVar1 / uVar3);
    }
  }
  if (dirtyalloc_spill == (void *)0x0) {
    runtime_newarray(typ,(int)t_spill);
  }
  else {
    local_20 = dirtyalloc_spill;
    if (t_spill->bucket->ptrdata == 0) {
      runtime_memclrNoHeapPointers();
    }
    else {
      runtime_memclrHasPointers(typ,(uintptr)t_spill);
    }
  }
  if (typ != prVar2) {
    uVar3 = (ulong)t_spill->bucketsize;
    t_spill = (runtime_maptype *)(uVar3 * (long)prVar2);
    if (runtime_writeBarrier._0_4_ == 0) {
      *(void **)((long)local_20 + uVar3 + (long)((long)&typ[-1].ptrToThis + 3) * uVar3 + -8) =
           local_20;
    }
    else {
      runtime_gcWriteBarrier();
      local_20 = extraout_RAX;
    }
  }
  mVar5.nextOverflow = (runtime_bmap *)t_spill;
  mVar5.buckets = local_20;
  return mVar5;
}

