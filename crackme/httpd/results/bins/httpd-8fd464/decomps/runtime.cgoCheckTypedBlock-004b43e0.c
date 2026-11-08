
/* WARNING: Unknown calling convention */

void runtime_cgoCheckTypedBlock(runtime__type *typ,void *src,uintptr off,uintptr size)

{
  runtime_moduledata *prVar1;
  runtime_heapArena *prVar2;
  long lVar3;
  uint8 *puVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  runtime_moduledata **pprVar9;
  uint8 *puVar10;
  ulong uVar11;
  string s;
  runtime_heapBits h;
  runtime__type *typ_spill;
  void *src_spill;
  uintptr off_spill;
  uintptr size_spill;
  ulong local_80;
  uint8 *local_70;
  uint local_68;
  uint local_64;
  uint8 *local_60;
  
                    /* Unresolved local var: runtime.mspan * s@[???]
                       Unresolved local var: runtime.heapBits hbits@[???] */
  if (typ_spill->ptrdata <= off_spill) {
    return;
  }
                    /* Unresolved local var: uintptr ptrdataSize@[???] */
  uVar8 = typ_spill->ptrdata - off_spill;
                    /* Unresolved local var: uintptr i@[???] */
  if (uVar8 < size_spill) {
    size_spill = uVar8;
  }
  if ((typ_spill->kind & 0x40) == 0) {
    runtime_cgoCheckBits
              (typ_spill->gcdata,(uint8 *)(ulong)typ_spill->kind,(uintptr)src_spill,size_spill);
    return;
  }
                    /* Unresolved local var: []*runtime.moduledata * p@[???] */
  if (runtime_modulesSlice == (___runtime_moduledata *)0x0) {
    puVar4 = (uint8 *)0x0;
    pprVar9 = (runtime_moduledata **)0x0;
  }
  else {
    pprVar9 = runtime_modulesSlice->array;
    puVar4 = (uint8 *)runtime_modulesSlice->len;
                    /* Unresolved local var: runtime.moduledata * datap@[???] */
  }
  lVar3 = 0;
  while( true ) {
    if ((long)puVar4 <= lVar3) {
      uVar8 = (long)src_spill + 0x800000000000U >> 0x1a;
      if (0x3fffff < uVar8) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndexU();
      }
      if (((*runtime_mheap_.arenas[0])[uVar8]->spans[(ulong)src_spill >> 0xd & 0x1fff]->state).s !=
          2) {
                    /* Unresolved local var: runtime.heapArena * ha@[???] */
        uVar8 = (long)src_spill + 0x800000000000U >> 0x1a;
        if (0x3fffff < uVar8) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndexU();
        }
        prVar2 = (*runtime_mheap_.arenas[0])[uVar8];
        if (prVar2 == (runtime_heapArena *)0x0) {
          uVar8 = 0;
          uVar6 = 0;
          puVar4 = (uint8 *)0x0;
          puVar10 = (uint8 *)0x0;
        }
        else {
          puVar10 = prVar2->bitmap + ((ulong)src_spill >> 5 & 0x1fffff);
          uVar6 = (ulong)src_spill >> 3 & 3;
          puVar4 = prVar2->bitmap + 0x1fffff;
        }
        uVar11 = 0;
        do {
          uVar5 = (uint)uVar6;
          if (size_spill + off_spill <= uVar11) {
            return;
          }
          if ((off_spill <= uVar11) && ((*puVar10 >> (uVar5 & 0x1f) & 1) != 0)) {
                    /* Unresolved local var: void * v@[???] */
            runtime_cgoIsGoPointer(*(void **)((long)src_spill + uVar11));
            if ((char)local_80 != '\0') {
              s.len = (int)src_spill;
              s.str = &DAT_002a49b1;
                    /* WARNING: Subroutine does not return */
              runtime_throw(s);
            }
            uVar8 = uVar8 & 0xffffffff;
          }
          if (uVar5 < 3) {
            uVar7 = (ulong)(uVar5 + 1);
          }
          else if (puVar4 == puVar10) {
            h.shift = SUB84(src_spill,0);
            h.bitp = (uint8 *)uVar8;
            h.arena = SUB84(puVar4,0);
            h.last = (uint8 *)size_spill;
            runtime_heapBits_nextArena(h);
            uVar7 = (ulong)local_68;
            uVar8 = (ulong)local_64;
            puVar4 = local_60;
            puVar10 = local_70;
            local_80 = uVar6;
          }
          else {
            uVar7 = 0;
            puVar10 = puVar10 + 1;
          }
          uVar11 = uVar11 + 8;
          uVar6 = uVar7;
        } while( true );
      }
      runtime_systemstack();
      return;
    }
    prVar1 = pprVar9[lVar3];
    if (((void *)prVar1->data <= src_spill) && (src_spill < (void *)prVar1->edata)) {
                    /* Unresolved local var: uintptr doff@[???] */
      runtime_cgoCheckBits
                ((void *)((long)src_spill + (off_spill - (long)prVar1->data)),puVar4,
                 (uintptr)(prVar1->gcdatamask).bytedata,size_spill);
      return;
    }
    if (((void *)prVar1->bss <= src_spill) && (src_spill < (void *)prVar1->ebss)) break;
    lVar3 = lVar3 + 1;
  }
                    /* Unresolved local var: uintptr boff@[???] */
  runtime_cgoCheckBits
            ((void *)((long)src_spill + (off_spill - (long)prVar1->bss)),puVar4,
             (uintptr)(prVar1->gcbssmask).bytedata,size_spill);
  return;
}

