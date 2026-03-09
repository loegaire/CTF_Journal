
/* WARNING: Unknown calling convention */

void runtime_mapdelete_fast64(runtime_maptype *t,runtime_hmap *h,uint64 key)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  runtime_maptype *prVar4;
  uint64 *puVar5;
  uint64 *extraout_RAX;
  uint64 *puVar6;
  ulong uVar7;
  uint64 *puVar8;
  uint64 *puVar9;
  uint uVar10;
  uint64 *puVar11;
  long in_FS_OFFSET;
  string s;
  string s_00;
  runtime_maptype *t_spill;
  runtime_hmap *h_spill;
  uint64 key_spill;
  ulong local_30;
  
                    /* Unresolved local var: uintptr hash@[???]
                       Unresolved local var: uintptr bucket@[???]
                       Unresolved local var: runtime.bmap * b@[???]
                       Unresolved local var: runtime.bmap * bOrig@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((h_spill == (runtime_hmap *)0x0) || (h_spill->count == 0)) {
    return;
  }
  if ((h_spill->flags & 4) != 0) {
    s_00.len = (int)h;
    s_00.str = &DAT_0029c838;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_00);
  }
  (**t_spill->hasher)(&key_spill,(ulong)h_spill->hash0,(uintptr *)t_spill->hasher);
  h_spill->flags = h_spill->flags ^ 4;
  prVar4 = (runtime_maptype *)(local_30 & (1L << (h_spill->B & 0x3f)) - 1U);
  if (h_spill->oldbuckets != (void *)0x0) {
    runtime_growWork_fast64(prVar4,(runtime_hmap *)(ulong)h_spill->B,(uintptr)t_spill);
  }
  puVar8 = (uint64 *)(ulong)t_spill->bucketsize;
  puVar5 = (uint64 *)((long)prVar4 * (long)puVar8 + (long)h_spill->buckets);
  for (puVar6 = puVar5; puVar6 != (uint64 *)0x0;
      puVar6 = *(uint64 **)((char *)((long)puVar6 + (long)puVar8) + -8)) {
    puVar11 = puVar6;
                    /* Unresolved local var: uintptr i@[???]
                       Unresolved local var: void * k@[???] */
    for (uVar7 = 0; puVar11 = puVar11 + 1, uVar7 < 8; uVar7 = uVar7 + 1) {
                    /* Unresolved local var: void * e@[???] */
      if ((*puVar11 == key_spill) && (1 < *(byte *)(uVar7 + (long)puVar6))) {
        prVar4 = t_spill;
        if (t_spill->key->ptrdata != 0) {
          if (runtime_writeBarrier._0_4_ == 0) {
            *puVar11 = 0;
          }
          else {
            runtime_gcWriteBarrierR9();
            puVar6 = extraout_RAX;
          }
        }
        if (prVar4->elem->ptrdata == 0) {
          runtime_memclrNoHeapPointers();
        }
        else {
          runtime_memclrHasPointers
                    ((char *)((long)puVar6 + prVar4->elemsize * uVar7 + 0x48),(uintptr)prVar4->elem)
          ;
        }
        *(char *)((long)puVar6 + uVar7) = '\x01';
        if (uVar7 == 7) {
          puVar8 = *(uint64 **)((long)puVar6 + ((ulong)t_spill->bucketsize - 8));
          if (puVar8 == (uint64 *)0x0) goto LAB_004c2805;
          cVar1 = (char)*puVar8;
        }
        else {
          cVar1 = *(char *)(uVar7 + 1 + (long)puVar6);
          puVar8 = puVar6;
        }
        if (cVar1 != '\0') goto LAB_004c27a5;
        goto LAB_004c2805;
      }
    }
  }
  goto LAB_004c267b;
LAB_004c2805:
  do {
    if (7 < uVar7) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
    *(char *)((long)puVar6 + uVar7) = '\0';
    puVar8 = puVar5;
    if (uVar7 == 0) {
                    /* Unresolved local var: runtime.bmap * c@[???] */
      puVar11 = puVar5;
      if (puVar6 == puVar5) break;
      do {
        puVar9 = puVar11;
        puVar11 = *(uint64 **)((long)puVar9 + ((ulong)t_spill->bucketsize - 8));
      } while (puVar6 != puVar11);
      uVar7 = 7;
      puVar6 = puVar9;
    }
    else {
      uVar7 = uVar7 - 1;
    }
    if (7 < uVar7) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
  } while (*(char *)(uVar7 + (long)puVar6) == '\x01');
LAB_004c27a5:
  lVar3 = h_spill->count;
  h_spill->count = lVar3 + -1;
  if (lVar3 == 1) {
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: uint32 s1@[???]
                       Unresolved local var: uint32 s0@[???] */
    lVar3 = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30);
    uVar10 = *(uint *)(lVar3 + 0x128);
    uVar2 = *(uint *)(lVar3 + 300);
    *(uint *)(lVar3 + 0x128) = uVar2;
    uVar10 = uVar10 ^ uVar10 << 0x11;
    puVar8 = (uint64 *)(ulong)uVar2;
    uVar10 = uVar2 >> 0x10 ^ uVar10 >> 7 ^ uVar2 ^ uVar10;
    *(uint *)(lVar3 + 300) = uVar10;
    h_spill->hash0 = uVar2 + uVar10;
  }
LAB_004c267b:
  if ((h_spill->flags & 4) != 0) {
    h_spill->flags = h_spill->flags & 0xfb;
    return;
  }
  s.len = (int)puVar8;
  s.str = &DAT_0029c838;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}

