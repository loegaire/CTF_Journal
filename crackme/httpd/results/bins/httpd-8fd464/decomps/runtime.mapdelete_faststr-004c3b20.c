
/* WARNING: Unknown calling convention */

void runtime_mapdelete_faststr(runtime_maptype *t,runtime_hmap *h,string ky)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  runtime_maptype *prVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  runtime_maptype *prVar9;
  runtime_maptype *prVar10;
  uint uVar11;
  runtime_maptype *prVar12;
  runtime_maptype *prVar13;
  func_unsafe_Pointer__unsafe_Pointer__bool ***pppfVar14;
  long in_FS_OFFSET;
  string s;
  string s_00;
  runtime_maptype *t_spill;
  runtime_hmap *h_spill;
  string ky_spill;
  ulong local_50;
  byte local_48;
  
                    /* Unresolved local var: runtime.stringStruct * key@[???]
                       Unresolved local var: uintptr hash@[???]
                       Unresolved local var: uintptr bucket@[???]
                       Unresolved local var: runtime.bmap * b@[???]
                       Unresolved local var: runtime.bmap * bOrig@[???]
                       Unresolved local var: uint8 top@[???]
                       Unresolved local var: void * ~R0@[???] */
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
  (**t_spill->hasher)(&ky_spill,(ulong)h_spill->hash0,(uintptr *)t_spill->hasher);
  h_spill->flags = h_spill->flags ^ 4;
  uVar7 = (1L << (h_spill->B & 0x3f)) - 1U & local_50;
  if (h_spill->oldbuckets != (void *)0x0) {
    runtime_growWork_faststr(t_spill,(runtime_hmap *)(ulong)h_spill->B,uVar7);
                    /* Unresolved local var: uint8 top@[???] */
  }
  prVar12 = (runtime_maptype *)(t_spill->bucketsize * uVar7 + (long)h_spill->buckets);
  uVar6 = local_50 >> 0x38;
  bVar5 = (byte)(local_50 >> 0x38);
  prVar13 = prVar12;
  uVar7 = uVar6;
  if (bVar5 < 5) {
    uVar6 = (ulong)(bVar5 + 5);
    uVar7 = uVar6;
  }
  for (; prVar9 = t_spill, prVar13 != (runtime_maptype *)0x0;
      prVar13 = *(runtime_maptype **)((long)prVar13 + ((ulong)t_spill->bucketsize - 8))) {
    pppfVar14 = (func_unsafe_Pointer__unsafe_Pointer__bool ***)&(prVar13->typ).ptrdata;
                    /* Unresolved local var: uintptr i@[???]
                       Unresolved local var: void * kptr@[???] */
    for (uVar8 = 0; uVar8 < 8; uVar8 = uVar8 + 1) {
                    /* Unresolved local var: runtime.stringStruct * k@[???]
                       Unresolved local var: void * e@[???] */
      if ((pppfVar14[1] == (func_unsafe_Pointer__unsafe_Pointer__bool **)ky_spill.len) &&
         (*(char *)((long)&(prVar13->typ).size + uVar8) == (char)uVar6)) {
        if ((func_unsafe_Pointer__unsafe_Pointer__bool **)ky_spill.str == *pppfVar14) {
          bVar5 = 0;
        }
        else {
          runtime_memequal();
          bVar5 = local_48 ^ 1;
                    /* Unresolved local var: runtime.bmap * c@[???] */
          uVar6 = uVar7 & 0xff;
        }
        if (bVar5 == 0) {
          if (runtime_writeBarrier._0_4_ == 0) {
            *pppfVar14 = (func_unsafe_Pointer__unsafe_Pointer__bool **)0x0;
          }
          else {
            runtime_gcWriteBarrierR9();
          }
          if (t_spill->elem->ptrdata == 0) {
            runtime_memclrNoHeapPointers();
          }
          else {
            runtime_memclrHasPointers((void *)t_spill->elem->size,(uintptr)t_spill);
          }
          *(undefined1 *)((long)&(prVar13->typ).size + uVar8) = 1;
          if (uVar8 == 7) {
            prVar9 = *(runtime_maptype **)((long)prVar13 + ((ulong)t_spill->bucketsize - 8));
            if (prVar9 == (runtime_maptype *)0x0) goto LAB_004c3e25;
            cVar1 = (char)(prVar9->typ).size;
          }
          else {
            cVar1 = *(char *)((long)&(prVar13->typ).size + uVar8 + 1);
            prVar9 = prVar13;
          }
          if (cVar1 != '\0') goto LAB_004c3dc5;
          goto LAB_004c3e25;
        }
      }
      pppfVar14 = pppfVar14 + 2;
    }
  }
  goto LAB_004c3c44;
LAB_004c3e25:
  do {
    if (7 < uVar8) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
    *(undefined1 *)((long)&(prVar13->typ).size + uVar8) = 0;
    prVar9 = prVar12;
    if (uVar8 == 0) {
      prVar4 = prVar12;
      if (prVar13 == prVar12) break;
      do {
        prVar10 = prVar4;
        prVar4 = *(runtime_maptype **)((long)prVar10 + ((ulong)t_spill->bucketsize - 8));
      } while (prVar13 != prVar4);
      uVar8 = 7;
      prVar13 = prVar10;
    }
    else {
      uVar8 = uVar8 - 1;
    }
    if (7 < uVar8) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
  } while (*(char *)((long)&(prVar13->typ).size + uVar8) == '\x01');
LAB_004c3dc5:
  lVar3 = h_spill->count;
  h_spill->count = lVar3 + -1;
  if (lVar3 == 1) {
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: uint32 s1@[???]
                       Unresolved local var: uint32 s0@[???] */
    lVar3 = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30);
    uVar11 = *(uint *)(lVar3 + 0x128);
    uVar2 = *(uint *)(lVar3 + 300);
    *(uint *)(lVar3 + 0x128) = uVar2;
    uVar11 = uVar11 ^ uVar11 << 0x11;
    prVar9 = (runtime_maptype *)(ulong)uVar2;
    uVar11 = uVar2 >> 0x10 ^ uVar11 >> 7 ^ uVar2 ^ uVar11;
    *(uint *)(lVar3 + 300) = uVar11;
    h_spill->hash0 = uVar2 + uVar11;
  }
LAB_004c3c44:
  if ((h_spill->flags & 4) != 0) {
    h_spill->flags = h_spill->flags & 0xfb;
    return;
  }
  s.len = (int)prVar9;
  s.str = &DAT_0029c838;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}

