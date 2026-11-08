
/* WARNING: Unknown calling convention */

void runtime_mapdelete(runtime_maptype *t,runtime_hmap *h,void *key)

{
  uint uVar1;
  func_unsafe_Pointer__unsafe_Pointer__bool **ppfVar2;
  runtime__type *n;
  long lVar3;
  runtime_maptype *prVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  runtime_maptype *prVar8;
  runtime_maptype *prVar9;
  runtime_maptype *extraout_RDX;
  runtime_maptype *prVar10;
  runtime_maptype *extraout_RDX_00;
  runtime_maptype *prVar11;
  uint uVar12;
  uintptr in_RSI;
  void *in_RDI;
  undefined1 *puVar13;
  long in_FS_OFFSET;
  string s;
  string s_00;
  runtime_maptype *t_spill;
  runtime_hmap *h_spill;
  void *key_spill;
  ulong local_48;
  
  uVar6 = local_48;
                    /* Unresolved local var: uintptr hash@[???]
                       Unresolved local var: uintptr bucket@[???]
                       Unresolved local var: runtime.bmap * b@[???]
                       Unresolved local var: runtime.bmap * bOrig@[???]
                       Unresolved local var: uint8 top@[???]
                       Unresolved local var: void * ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((h_spill == (runtime_hmap *)0x0) || (h_spill->count == 0)) {
    if ((t_spill->flags >> 4 & 1) != 0) {
      (**t_spill->hasher)(in_RDI,in_RSI,(uintptr *)t_spill->hasher);
    }
    return;
  }
  if ((h_spill->flags & 4) != 0) {
    s_00.len = (int)h;
    s_00.str = &DAT_0029c838;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_00);
  }
  (**t_spill->hasher)(key_spill,(ulong)h_spill->hash0,(uintptr *)t_spill->hasher);
  h_spill->flags = h_spill->flags ^ 4;
  uVar7 = (1L << (h_spill->B & 0x3f)) - 1U & local_48;
  if (h_spill->oldbuckets != (void *)0x0) {
    runtime_growWork(t_spill,(runtime_hmap *)(ulong)h_spill->B,uVar7);
                    /* Unresolved local var: uint8 top@[???] */
    local_48 = uVar7;
  }
  prVar8 = (runtime_maptype *)(uVar7 * t_spill->bucketsize + (long)h_spill->buckets);
  uVar7 = uVar6 >> 0x38;
  bVar5 = (byte)(uVar6 >> 0x38);
  prVar9 = prVar8;
  uVar6 = uVar7;
  if (bVar5 < 5) {
    uVar7 = (ulong)(bVar5 + 5);
    uVar6 = uVar7;
  }
  for (; prVar9 != (runtime_maptype *)0x0;
      prVar9 = *(runtime_maptype **)((long)prVar9 + ((ulong)t_spill->bucketsize - 8))) {
                    /* Unresolved local var: uintptr i@[???] */
    for (puVar13 = (undefined1 *)0x0; puVar13 < &DAT_00000008; puVar13 = puVar13 + 1) {
                    /* Unresolved local var: void * k@[???]
                       Unresolved local var: void * k2@[???]
                       Unresolved local var: void * e@[???]
                       Unresolved local var: void * ~R0@[???] */
      if ((char)uVar7 == puVar13[(long)prVar9]) {
        bVar5 = t_spill->keysize;
        ppfVar2 = t_spill->key->equal;
        (**ppfVar2)(puVar13,prVar8,(bool *)ppfVar2);
        if ((char)local_48 != '\0') {
          prVar10 = t_spill;
          if ((t_spill->flags & 1) == 0) {
            n = t_spill->key;
            if (n->ptrdata != 0) {
              runtime_memclrHasPointers((void *)n->size,(uintptr)n);
            }
          }
          else if (runtime_writeBarrier._0_4_ == 0) {
            *(uintptr *)((long)&(prVar9->typ).ptrdata + (ulong)bVar5 * (long)puVar13) = 0;
          }
          else {
            runtime_gcWriteBarrierBX();
            prVar10 = extraout_RDX;
          }
          if ((prVar10->flags >> 1 & 1) == 0) {
            if (prVar10->elem->ptrdata == 0) {
              runtime_memclrNoHeapPointers();
            }
            else {
              runtime_memclrHasPointers((void *)prVar10->elem->size,(ulong)prVar10->flags);
            }
          }
          else if (runtime_writeBarrier._0_4_ == 0) {
            *(undefined8 *)
             ((long)&(prVar9->typ).ptrdata +
             (ulong)prVar10->elemsize * (long)puVar13 + (ulong)prVar10->keysize * 8) = 0;
            t_spill = prVar10;
          }
          else {
            runtime_gcWriteBarrierBX();
            t_spill = extraout_RDX_00;
          }
          puVar13[(long)&(prVar9->typ).size] = 1;
          if (puVar13 != &DAT_00000007) {
            prVar10 = (runtime_maptype *)(ulong)(byte)puVar13[(long)((long)&(prVar9->typ).size + 1)]
            ;
            if (puVar13[(long)((long)&(prVar9->typ).size + 1)] != 0) goto LAB_004bfa28;
            goto LAB_004bfa8a;
          }
          prVar10 = *(runtime_maptype **)((long)prVar9 + ((ulong)t_spill->bucketsize - 8));
          if ((prVar10 == (runtime_maptype *)0x0) || ((char)(prVar10->typ).size == '\0'))
          goto LAB_004bfa8a;
          goto LAB_004bfa28;
        }
        uVar7 = uVar6 & 0xff;
                    /* Unresolved local var: runtime.bmap * c@[???] */
      }
      else if (puVar13[(long)prVar9] == '\0') goto LAB_004bf846;
    }
  }
  goto LAB_004bf846;
LAB_004bfa8a:
  do {
    if (&DAT_00000007 < puVar13) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
    puVar13[(long)&(prVar9->typ).size] = 0;
    prVar10 = prVar8;
    if (puVar13 == (undefined1 *)0x0) {
      prVar4 = prVar8;
      if (prVar9 == prVar8) break;
      do {
        prVar11 = prVar4;
        prVar4 = *(runtime_maptype **)((long)prVar11 + ((ulong)t_spill->bucketsize - 8));
      } while (prVar9 != prVar4);
      puVar13 = &DAT_00000007;
      prVar9 = prVar11;
    }
    else {
      puVar13 = puVar13 + -1;
    }
    if (&DAT_00000007 < puVar13) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
  } while (puVar13[(long)prVar9] == '\x01');
LAB_004bfa28:
  lVar3 = h_spill->count;
  h_spill->count = lVar3 + -1;
  t_spill = prVar10;
  if (lVar3 == 1) {
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: uint32 s1@[???]
                       Unresolved local var: uint32 s0@[???] */
    lVar3 = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30);
    uVar12 = *(uint *)(lVar3 + 0x128);
    uVar1 = *(uint *)(lVar3 + 300);
    *(uint *)(lVar3 + 0x128) = uVar1;
    uVar12 = uVar12 ^ uVar12 << 0x11;
    t_spill = (runtime_maptype *)(ulong)uVar1;
    uVar12 = uVar1 >> 0x10 ^ uVar12 >> 7 ^ uVar1 ^ uVar12;
    *(uint *)(lVar3 + 300) = uVar12;
    h_spill->hash0 = uVar1 + uVar12;
  }
LAB_004bf846:
  if ((h_spill->flags & 4) != 0) {
    h_spill->flags = h_spill->flags & 0xfb;
    return;
  }
  s.len = (int)t_spill;
  s.str = &DAT_0029c838;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}

