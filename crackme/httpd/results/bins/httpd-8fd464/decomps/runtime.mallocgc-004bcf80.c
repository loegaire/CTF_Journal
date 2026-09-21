
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.mallocgc(uintptr size, runtime._type * typ, bool needzero,
   void * ~r3) */

void * runtime_mallocgc(uintptr size,runtime__type *typ,bool needzero)

{
  runtime_mspan *prVar1;
  int *piVar2;
  runtime_mspan *prVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  runtime_m *mp;
  uintptr uVar7;
  runtime_mspan *prVar8;
  uintptr uVar9;
  ulong uVar10;
  runtime_g *extraout_RAX;
  undefined7 in_register_00000009;
  runtime_sysMemStat *sysStat;
  long lVar11;
  runtime_mcache *size_00;
  runtime_mcache *prVar12;
  long lVar13;
  runtime_m *scanSize;
  char cVar14;
  runtime_mcache *prVar15;
  runtime_mspan *prVar16;
  long in_FS_OFFSET;
  bool bVar17;
  string s;
  string s_00;
  string s_01;
  uintptr dataSize;
  runtime__type *typ_spill;
  bool needzero_spill;
  runtime_mcache *local_68;
  runtime_mcache *local_60;
  char local_58;
  
  sysStat = (runtime_sysMemStat *)CONCAT71(in_register_00000009,needzero);
                    /* Unresolved local var: runtime.g * assistG@[???]
                       Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: bool shouldhelpgc@[???]
                       Unresolved local var: runtime.mcache * c@[???]
                       Unresolved local var: runtime.mspan * span@[???]
                       Unresolved local var: void * x@[???]
                       Unresolved local var: bool noscan@[???]
                       Unresolved local var: bool isZeroed@[???]
                       Unresolved local var: uintptr scanSize@[???]
                       Unresolved local var: runtime.m * ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    size = (uintptr)extraout_RAX;
  }
  if (runtime_gcphase == 2) {
    s_01.len = (int)typ;
    s_01.str = &DAT_002a970b;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_01);
  }
  if (dataSize == 0) {
    return &runtime_zerobase;
  }
  if (runtime_debug.malloc != false) {
    if (runtime_debug.sbrk != 0) {
                    /* Unresolved local var: uintptr align@[???] */
      if (((typ_spill != (runtime__type *)0x0) && ((dataSize & 7) != 0)) && ((dataSize & 3) != 0)) {
        sysStat = (runtime_sysMemStat *)0x2;
      }
      runtime_persistentalloc(0xd025c0,(uintptr)typ,sysStat);
      return local_60;
    }
    if ((runtime_inittrace.active != false) &&
       (*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x98) == runtime_inittrace.id)) {
      runtime_inittrace.allocs = runtime_inittrace.allocs + 1;
    }
  }
  if (runtime_gcBlackenEnabled == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = *(long *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 200);
    if (lVar13 == 0) {
      lVar13 = *(long *)(in_FS_OFFSET + -8);
    }
    lVar11 = *(long *)(lVar13 + 0x180) - dataSize;
    *(long *)(lVar13 + 0x180) = lVar11;
    if (lVar11 < 0) {
      runtime_gcAssistAlloc((runtime_g *)size);
    }
  }
                    /* Unresolved local var: runtime.g * _g_@[???] */
  lVar11 = *(long *)(in_FS_OFFSET + -8);
  piVar2 = (int *)(*(long *)(lVar11 + 0x30) + 0x110);
  *piVar2 = *piVar2 + 1;
  mp = *(runtime_m **)(lVar11 + 0x30);
  if (mp->mallocing != 0) {
    s_00.len = lVar11;
    s_00.str = &DAT_00298d94;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_00);
  }
  if (mp->gsignal == *(runtime_g **)(in_FS_OFFSET + -8)) {
    s.len = (int)*(runtime_g **)(in_FS_OFFSET + -8);
    s.str = &DAT_0029c072;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  mp->mallocing = 1;
                    /* Unresolved local var: runtime.p * pp@[???]
                       Unresolved local var: runtime.mcache * c@[???] */
  lVar11 = *(long *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8);
  size_00 = runtime_mcache0;
  if (lVar11 != 0) {
    size_00 = *(runtime_mcache **)(lVar11 + 0x40);
  }
  if (size_00 == (runtime_mcache *)0x0) {
                    /* WARNING: Subroutine does not return */
    runtime_throw((string)ZEXT816(0x2a9c03));
  }
  if (typ_spill == (runtime__type *)0x0) {
    bVar17 = true;
  }
  else {
    bVar17 = typ_spill->ptrdata == 0;
  }
  if (0x8000 < dataSize) {
    runtime___mcache__allocLarge
              ((runtime_mcache *)(ulong)needzero_spill,(uintptr)size_00,bVar17,SUB81(mp,0));
    local_60->alloc[1] = (runtime_mspan *)0x1;
    *(undefined2 *)(local_60->alloc + 7) = 1;
    local_68 = (runtime_mcache *)local_60->tinyoffset;
    prVar16 = local_60->alloc[8];
    cVar14 = '\x01';
    goto LAB_004bd5fa;
  }
  cVar14 = local_58;
  if ((bVar17 == false) || (0xf < dataSize)) {
                    /* Unresolved local var: uint8 sizeclass@[???]
                       Unresolved local var: runtime.spanClass spc@[???]
                       Unresolved local var: runtime.gclinkptr v@[???] */
    if (dataSize < 0x3f9) {
      uVar10 = dataSize + 7 >> 3;
      if (0x80 < uVar10) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndexU();
      }
      bVar4 = runtime_size_to_class8[uVar10];
    }
    else {
      uVar10 = dataSize - 0x381 >> 7;
      if (0xf8 < uVar10) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndexU();
      }
      bVar4 = runtime_size_to_class128[uVar10];
    }
    if (0x43 < (ulong)bVar4) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    prVar16 = (runtime_mspan *)(ulong)runtime_class_to_size[bVar4];
    uVar10 = (ulong)(byte)(bVar4 << 1 | bVar17);
    if (0x87 < uVar10) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    prVar12 = (runtime_mcache *)size_00->alloc[uVar10];
                    /* Unresolved local var: int theBit@[???]
                       Unresolved local var: uintptr result@[???]
                       Unresolved local var: uintptr freeidx@[???] */
    prVar8 = prVar12->alloc[3];
    lVar11 = 0;
    if (prVar8 != (runtime_mspan *)0x0) {
      for (; ((ulong)prVar8 >> lVar11 & 1) == 0; lVar11 = lVar11 + 1) {
      }
    }
    if (prVar8 == (runtime_mspan *)0x0) {
      lVar11 = 0x40;
    }
    if (lVar11 < 0x40) {
      prVar3 = (runtime_mspan *)((long)&prVar12->alloc[1]->next + lVar11);
      if (prVar12->alloc[2] <= prVar3) goto LAB_004bd491;
      prVar1 = (runtime_mspan *)((long)&prVar12->alloc[1]->next + lVar11 + 1);
      if ((((ulong)prVar1 & 0x3f) == 0) && (prVar12->alloc[2] != prVar1)) {
        prVar15 = (runtime_mcache *)0x0;
      }
      else {
        prVar12->alloc[3] =
             (runtime_mspan *)
             ((ulong)prVar8 >> ((byte)(lVar11 + 1U) & 0x3f) & -(ulong)(lVar11 + 1U < 0x40));
        prVar12->alloc[1] = prVar1;
        *(short *)(prVar12->alloc + 7) = *(short *)(prVar12->alloc + 7) + 1;
        prVar15 = (runtime_mcache *)((long)prVar12->alloc[8] * (long)prVar3 + prVar12->tinyoffset);
      }
    }
    else {
LAB_004bd491:
      prVar15 = (runtime_mcache *)0x0;
    }
    if (prVar15 == (runtime_mcache *)0x0) {
      runtime___mcache__nextFree(prVar12,(runtime_spanClass)size_00);
                    /* Unresolved local var: int rate@[???] */
    }
    else {
      local_60 = prVar12;
      local_68 = prVar15;
      cVar14 = '\0';
    }
    if ((needzero_spill) && (*(char *)((long)local_60->alloc + 0x3c) != '\0')) {
      runtime_memclrNoHeapPointers();
    }
  }
  else {
                    /* Unresolved local var: uintptr off@[???]
                       Unresolved local var: runtime.gclinkptr v@[???] */
    uVar9 = size_00->tinyoffset;
    if ((dataSize & 7) == 0) {
      uVar9 = uVar9 + 7 & 0xfffffffffffffff8;
    }
    else if ((dataSize & 3) == 0) {
      uVar9 = uVar9 + 3 & 0xfffffffffffffffc;
    }
    else if ((dataSize & 1) == 0) {
      uVar9 = uVar9 + 1 & 0xfffffffffffffffe;
    }
    if ((uVar9 + dataSize < 0x11) && (uVar7 = size_00->tiny, uVar7 != 0)) {
      size_00->tinyoffset = uVar9 + dataSize;
      size_00->tinyAllocs = size_00->tinyAllocs + 1;
      mp->mallocing = 0;
                    /* Unresolved local var: runtime.g * _g_@[???] */
      lVar13 = *(long *)(in_FS_OFFSET + -8);
      iVar5 = mp->locks;
      mp->locks = iVar5 + -1;
      if ((iVar5 == 1) && (*(char *)(lVar13 + 0xb1) != '\0')) {
        *(undefined8 *)(lVar13 + 0x10) = 0xfffffffffffffade;
      }
      return (void *)(uVar9 + uVar7);
    }
    prVar12 = (runtime_mcache *)size_00->alloc[5];
                    /* Unresolved local var: int theBit@[???]
                       Unresolved local var: uintptr result@[???]
                       Unresolved local var: uintptr freeidx@[???] */
    prVar16 = prVar12->alloc[3];
    lVar11 = 0;
    if (prVar16 != (runtime_mspan *)0x0) {
      for (; ((ulong)prVar16 >> lVar11 & 1) == 0; lVar11 = lVar11 + 1) {
      }
    }
    if (prVar16 == (runtime_mspan *)0x0) {
      lVar11 = 0x40;
    }
    if (lVar11 < 0x40) {
      prVar8 = (runtime_mspan *)((long)&prVar12->alloc[1]->next + lVar11);
      if (prVar12->alloc[2] <= prVar8) goto LAB_004bd2c9;
      prVar3 = (runtime_mspan *)((long)&prVar12->alloc[1]->next + lVar11 + 1);
      if ((((ulong)prVar3 & 0x3f) == 0) && (prVar12->alloc[2] != prVar3)) {
        prVar15 = (runtime_mcache *)0x0;
      }
      else {
        prVar12->alloc[3] =
             (runtime_mspan *)
             ((ulong)prVar16 >> ((byte)(lVar11 + 1U) & 0x3f) & -(ulong)(lVar11 + 1U < 0x40));
        prVar12->alloc[1] = prVar3;
        *(short *)(prVar12->alloc + 7) = *(short *)(prVar12->alloc + 7) + 1;
        prVar15 = (runtime_mcache *)((long)prVar12->alloc[8] * (long)prVar8 + prVar12->tinyoffset);
      }
    }
    else {
LAB_004bd2c9:
      prVar15 = (runtime_mcache *)0x0;
    }
    if (prVar15 == (runtime_mcache *)0x0) {
      runtime___mcache__nextFree(prVar12,(runtime_spanClass)size_00);
    }
    else {
      local_60 = prVar12;
      local_68 = prVar15;
      cVar14 = '\0';
    }
    local_68->nextSample = 0;
    local_68->scanAlloc = 0;
    if ((dataSize < size_00->tinyoffset) || (size_00->tiny == 0)) {
      size_00->tiny = (uintptr)local_68;
      size_00->tinyoffset = dataSize;
    }
    prVar16 = (runtime_mspan *)&DAT_00000010;
  }
  local_58 = '\x01';
LAB_004bd5fa:
  prVar15 = local_68;
  prVar12 = size_00;
  scanSize = mp;
  if (bVar17 == false) {
    if (runtime_deferType == typ_spill) {
      dataSize = 0x48;
    }
    runtime_heapBitsSetType((uintptr)local_60,(uintptr)size_00,0x48,(runtime__type *)mp);
    if (typ_spill->size < dataSize) {
      prVar12 = (runtime_mcache *)typ_spill->ptrdata;
      uVar9 = 0;
      if (prVar12 != (runtime_mcache *)0x0) {
        uVar9 = (dataSize - typ_spill->size) + (long)prVar12;
      }
    }
    else {
      uVar9 = typ_spill->ptrdata;
    }
    size_00->scanAlloc = size_00->scanAlloc + uVar9;
    prVar15 = size_00;
  }
  runtime_publicationBarrier();
  if (runtime_gcphase != 0) {
    runtime_gcmarknewobject(prVar16,(uintptr)prVar12,(uintptr)prVar15,(uintptr)scanSize);
  }
  if (0 < runtime_MemProfileRate) {
    if ((runtime_MemProfileRate == 1) || ((runtime_mspan *)size_00->nextSample <= prVar16)) {
      runtime_profilealloc(mp,prVar12,(uintptr)local_68);
    }
    else {
      size_00->nextSample = (long)size_00->nextSample - (long)prVar16;
    }
  }
  mp->mallocing = 0;
                    /* Unresolved local var: runtime.g * _g_@[???] */
  lVar11 = *(long *)(in_FS_OFFSET + -8);
  uVar6 = mp->locks;
  mp->locks = uVar6 - 1;
  if ((uVar6 == 1) && (*(char *)(lVar11 + 0xb1) != '\0')) {
    *(undefined8 *)(lVar11 + 0x10) = 0xfffffffffffffade;
  }
  if ((local_58 == '\0') && (needzero_spill)) {
    runtime_memclrNoHeapPointersChunked((uintptr)local_68,(void *)(ulong)uVar6);
  }
  if (runtime_debug.malloc != false) {
    if (runtime_debug.allocfreetrace != 0) {
      runtime_tracealloc(local_68,(uintptr)(ulong)uVar6,typ_spill);
    }
    if ((runtime_inittrace.active != false) &&
       (*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x98) == runtime_inittrace.id)) {
      runtime_inittrace.bytes = (long)&prVar16->next + runtime_inittrace.bytes;
    }
  }
  if (lVar13 != 0) {
    *(long *)(lVar13 + 0x180) = *(long *)(lVar13 + 0x180) - ((long)prVar16 - dataSize);
  }
  if (cVar14 != '\0') {
    if (((runtime_memstats.enablegc == false) || (runtime_panicking != 0)) || (runtime_gcphase != 0)
       ) {
      bVar17 = false;
    }
    else {
      bVar17 = runtime_gcController.trigger <= runtime_gcController.heapLive;
    }
    if (bVar17) {
      runtime_gcStart();
    }
  }
  return local_68;
}

