
/* WARNING: Unknown calling convention */

void runtime_mapdelete_fast32(runtime_maptype *t,runtime_hmap *h,uint32 key)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  runtime_maptype *t_00;
  char *pcVar5;
  char *pcVar6;
  ulong uVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  uint32 *puVar11;
  long in_FS_OFFSET;
  string s;
  string s_00;
  runtime_maptype *t_spill;
  runtime_hmap *h_spill;
  uint32 key_spill;
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
  t_00 = (runtime_maptype *)(local_30 & (1L << (h_spill->B & 0x3f)) - 1U);
  if (h_spill->oldbuckets != (void *)0x0) {
    runtime_growWork_fast32(t_00,(runtime_hmap *)(ulong)h_spill->B,(uintptr)t_spill);
  }
  pcVar8 = (char *)(ulong)t_spill->bucketsize;
  pcVar5 = (char *)((long)t_00 * (long)pcVar8 + (long)h_spill->buckets);
  for (pcVar6 = pcVar5; pcVar6 != (char *)0x0; pcVar6 = *(char **)(pcVar8 + (long)pcVar6 + -8)) {
    puVar11 = (uint32 *)(pcVar6 + 8);
                    /* Unresolved local var: uintptr i@[???]
                       Unresolved local var: void * k@[???] */
    for (uVar7 = 0; uVar7 < 8; uVar7 = uVar7 + 1) {
                    /* Unresolved local var: void * e@[???] */
      if ((*puVar11 == key_spill) && (1 < (byte)pcVar6[uVar7])) {
        if (t_spill->elem->ptrdata == 0) {
          runtime_memclrNoHeapPointers();
        }
        else {
          runtime_memclrHasPointers
                    (pcVar6 + t_spill->elemsize * uVar7 + 0x28,(uintptr)t_spill->elem);
        }
        pcVar6[uVar7] = '\x01';
        if (uVar7 == 7) {
          pcVar8 = *(char **)(pcVar6 + ((ulong)t_spill->bucketsize - 8));
          if (pcVar8 == (char *)0x0) goto LAB_004c15f0;
          cVar1 = *pcVar8;
        }
        else {
          cVar1 = pcVar6[uVar7 + 1];
          pcVar8 = pcVar6;
        }
        if (cVar1 != '\0') goto LAB_004c158e;
        goto LAB_004c15f0;
      }
      puVar11 = puVar11 + 1;
    }
  }
  goto LAB_004c149c;
LAB_004c15f0:
  do {
    if (7 < uVar7) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
    pcVar6[uVar7] = '\0';
    pcVar8 = pcVar5;
    if (uVar7 == 0) {
                    /* Unresolved local var: runtime.bmap * c@[???] */
      pcVar4 = pcVar5;
      if (pcVar6 == pcVar5) break;
      do {
        pcVar9 = pcVar4;
        pcVar4 = *(char **)(pcVar9 + ((ulong)t_spill->bucketsize - 8));
      } while (pcVar6 != pcVar4);
      uVar7 = 7;
      pcVar6 = pcVar9;
    }
    else {
      uVar7 = uVar7 - 1;
    }
    if (7 < uVar7) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
  } while (pcVar6[uVar7] == '\x01');
LAB_004c158e:
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
    pcVar8 = (char *)(ulong)uVar2;
    uVar10 = uVar2 >> 0x10 ^ uVar10 >> 7 ^ uVar2 ^ uVar10;
    *(uint *)(lVar3 + 300) = uVar10;
    h_spill->hash0 = uVar2 + uVar10;
  }
LAB_004c149c:
  if ((h_spill->flags & 4) != 0) {
    h_spill->flags = h_spill->flags & 0xfb;
    return;
  }
  s.len = (int)pcVar8;
  s.str = &DAT_0029c838;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}

