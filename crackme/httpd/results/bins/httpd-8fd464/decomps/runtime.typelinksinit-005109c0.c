
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_typelinksinit(void)

{
  long lVar1;
  uintptr uVar2;
  map_runtime_typeOff__runtime__type h;
  runtime_maptype *prVar3;
  map_runtime_typeOff__runtime__type *extraout_RAX;
  runtime_maptype *prVar4;
  int iVar5;
  runtime_moduledata *prVar6;
  runtime_moduledata **pprVar7;
  long lVar8;
  map_runtime_typeOff__runtime__type *pphVar9;
  int unaff_RBX;
  runtime_hmap *prVar10;
  runtime_hmap *h_00;
  int iVar11;
  long lVar12;
  runtime_maptype *cap;
  long lVar13;
  long in_FS_OFFSET;
  runtime_slice old;
  runtime_slice old_00;
  runtime_maptype *local_2b8;
  runtime_maptype *local_2a0;
  map_runtime_typeOff__runtime__type *local_290;
  long local_288;
  runtime_maptype *local_280;
  runtime_maptype *local_238;
  runtime_maptype *local_230;
  runtime_maptype *local_228;
  map_runtime_typeOff__runtime__type local_220;
  runtime_moduledata *local_218;
  map_runtime_typeOff__runtime__type *local_210;
  runtime_maptype *local_208;
  runtime_maptype *local_200;
  runtime_moduledata *local_1f8;
  long local_1f0;
  undefined1 local_1e8 [16];
  undefined8 local_1d8;
  func_unsafe_Pointer__unsafe_Pointer__bool **ppfStack_1d0;
  uint8 *local_1c8;
  undefined8 uStack_1c0;
  runtime_hmap local_1b8;
  undefined1 local_188 [128];
  undefined1 local_108 [16];
  undefined1 local_f8 [240];
  
                    /* Unresolved local var: map[uint32][]*runtime._type typehash@[???]
                       Unresolved local var: runtime.moduledata * prev@[???]
                       Unresolved local var: []*runtime.moduledata modules@[???] */
  while (&local_238 <= *(runtime_maptype ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (runtime_firstmoduledata.next == (runtime_moduledata *)0x0) {
    return;
  }
  prVar10 = &local_1b8;
  local_1b8.count = 0;
  local_1b8.flags = 0;
  local_1b8.B = 0;
  local_1b8.noverflow = 0;
  local_1b8.hash0 = 0;
  local_1b8.buckets = (undefined1 *)0x0;
  local_1b8.oldbuckets = (void *)0x0;
  local_1b8.nevacuate = 0;
  local_1b8.extra = (runtime_mapextra *)0x0;
  prVar3 = (runtime_maptype *)runtime_firstmoduledata.typelinks.len;
  if (runtime_firstmoduledata.typelinks.len < 9) {
    prVar3 = (runtime_maptype *)FUN_0051a158(local_108);
    local_1b8.buckets = local_f8;
  }
  runtime_makemap(prVar3,unaff_RBX,prVar10);
                    /* Unresolved local var: []*runtime.moduledata * p@[???] */
  if (runtime_modulesSlice == (___runtime_moduledata *)0x0) {
    iVar5 = 0;
    pprVar7 = (runtime_moduledata **)0x0;
    iVar11 = 0;
  }
  else {
    pprVar7 = runtime_modulesSlice->array;
    iVar5 = runtime_modulesSlice->len;
    iVar11 = runtime_modulesSlice->cap;
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  local_238 = local_2a0;
  prVar6 = *pprVar7;
                    /* Unresolved local var: runtime.moduledata * md@[???] */
  lVar8 = (long)pprVar7 + (-(iVar11 + -1) >> 0x3f & 8U);
  prVar10 = (runtime_hmap *)(iVar5 + -1);
  lVar12 = 0;
  prVar3 = local_2a0;
  local_1f0 = lVar8;
  do {
    if ((long)prVar10 <= lVar12) {
      return;
    }
    local_1f8 = *(runtime_moduledata **)(lVar8 + lVar12 * 8);
    local_200 = (runtime_maptype *)(prVar6->typelinks).array;
    lVar1 = (prVar6->typelinks).len;
    local_218 = prVar6;
    for (lVar13 = 0; lVar13 < lVar1; lVar13 = lVar13 + 1) {
      prVar6 = local_1f8;
      if (local_218->typemap == (map_runtime_typeOff__runtime__type)0x0) {
        local_220 = (map_runtime_typeOff__runtime__type)
                    ((long)*(int *)((long)local_200 + lVar13 * 4) + local_218->types);
      }
      else {
        runtime_mapaccess1_fast32((runtime_maptype *)&DAT_00235f00,prVar10,(uint32)local_218);
        local_220 = (map_runtime_typeOff__runtime__type)(local_2a0->typ).size;
        prVar3 = local_238;
      }
      runtime_mapaccess1_fast32(prVar3,prVar10,*(uint32 *)&local_220->buckets);
      uVar2 = (local_2a0->typ).ptrdata;
      pphVar9 = (map_runtime_typeOff__runtime__type *)(local_2a0->typ).size;
      prVar3 = *(runtime_maptype **)&(local_2a0->typ).hash;
      for (lVar8 = 0; lVar8 < (long)uVar2; lVar8 = lVar8 + 1) {
        if (pphVar9[lVar8] == local_220) goto LAB_00510caf;
      }
      cap = (runtime_maptype *)(uVar2 + 1);
      prVar4 = prVar3;
      if (prVar3 < cap) {
        old_00.len = uVar2;
        old_00.array = &DAT_0025f620;
        old_00.cap = (int)prVar6;
        runtime_growslice(&prVar3->typ,old_00,(int)cap);
        cap = (runtime_maptype *)(local_288 + 1);
        prVar4 = local_280;
        pphVar9 = local_290;
        local_2a0 = prVar3;
      }
      h = local_220;
      local_210 = pphVar9;
      if (runtime_writeBarrier._0_4_ == 0) {
        pphVar9[uVar2] = local_220;
      }
      else {
        runtime_gcWriteBarrierBX();
      }
      runtime_mapassign_fast32
                ((runtime_maptype *)(ulong)*(uint *)&h->buckets,(runtime_hmap *)h,0x236740);
      (local_2a0->typ).ptrdata = (uintptr)cap;
      *(runtime_maptype **)&(local_2a0->typ).hash = prVar4;
      if (runtime_writeBarrier._0_4_ == 0) {
        (local_2a0->typ).size = (uintptr)local_210;
      }
      else {
        runtime_gcWriteBarrier();
      }
LAB_00510caf:
      prVar3 = local_238;
      lVar8 = local_1f0;
    }
    prVar6 = local_1f8;
    if (local_1f8->typemap == (map_runtime_typeOff__runtime__type)0x0) {
                    /* Unresolved local var: map[runtime.typeOff]*runtime._type tm@[???] */
      runtime_makemap((runtime_maptype *)(local_1f8->typelinks).len,(int)prVar10,
                      (runtime_hmap *)&DAT_00235f00);
      prVar3 = local_2a0;
      iVar5 = runtime_pinnedTypemaps.len;
      pphVar9 = runtime_pinnedTypemaps.array;
      if ((ulong)runtime_pinnedTypemaps.cap < runtime_pinnedTypemaps.len + 1U) {
        local_230 = local_2a0;
        local_2a0 = (runtime_maptype *)runtime_pinnedTypemaps.cap;
        old.len = runtime_pinnedTypemaps.len;
        old.array = runtime_pinnedTypemaps.array;
        old.cap = (int)prVar6;
        runtime_growslice((runtime__type *)&DAT_00235f00,old,runtime_pinnedTypemaps.cap);
        runtime_pinnedTypemaps.cap = (int)local_280;
        iVar5 = local_288;
        if (runtime_writeBarrier._0_4_ == 0) {
          runtime_pinnedTypemaps.array = local_290;
          prVar3 = local_230;
          pphVar9 = local_290;
        }
        else {
          runtime_gcWriteBarrier();
          prVar3 = local_230;
          pphVar9 = extraout_RAX;
        }
      }
      runtime_pinnedTypemaps.len = iVar5 + 1;
      if (runtime_writeBarrier._0_4_ == 0) {
        pphVar9[iVar5] = (map_runtime_typeOff__runtime__type)prVar3;
        local_1f8->typemap = (map_runtime_typeOff__runtime__type)prVar3;
        prVar6 = local_1f8;
      }
      else {
        runtime_gcWriteBarrier();
        prVar6 = local_1f8;
        runtime_gcWriteBarrier();
      }
                    /* Unresolved local var: int32 tl@[???] */
      local_200 = (runtime_maptype *)(prVar6->typelinks).array;
      lVar13 = (prVar6->typelinks).len;
      for (h_00 = (runtime_hmap *)0x0; prVar3 = local_238, lVar8 = local_1f0, (long)h_00 < lVar13;
          h_00 = (runtime_hmap *)((long)&h_00->count + 1)) {
        local_208 = (runtime_maptype *)
                    ((long)*(int *)((long)&(local_200->typ).size + (long)h_00 * 4) + prVar6->types);
                    /* Unresolved local var: runtime._type * candidate@[???] */
        local_2b8 = (runtime_maptype *)&DAT_00236740;
        runtime_mapaccess1_fast32(local_200,h_00,(uint32)prVar6);
        local_210 = (map_runtime_typeOff__runtime__type *)(local_2a0->typ).size;
        uVar2 = (local_2a0->typ).ptrdata;
        for (lVar8 = 0; local_228 = local_208, lVar8 < (long)uVar2; lVar8 = lVar8 + 1) {
          local_228 = (runtime_maptype *)local_210[lVar8];
          local_1e8._0_8_ = 0;
          local_1e8._8_8_ = 0;
          local_1d8._0_4_ = 0;
          local_1d8._4_1_ = 0;
          local_1d8._5_1_ = 0;
          local_1d8._6_1_ = 0;
          local_1d8._7_1_ = 0;
          ppfStack_1d0 = (func_unsafe_Pointer__unsafe_Pointer__bool **)0x0;
          local_1c8 = (uint8 *)0x0;
          uStack_1c0._0_4_ = 0;
          uStack_1c0._4_4_ = 0;
          FUN_0051a179(&local_1b8);
          local_1d8 = local_188;
          runtime_fastrand();
          local_1e8._12_4_ = local_2b8._0_4_;
          local_2b8 = local_208;
          runtime_typesEqual(&local_208->typ,(runtime__type *)local_1e8,
                             (map_runtime__typePair_struct___)local_228);
          if ((char)local_2a0 != '\0') break;
        }
        runtime_mapassign_fast32(local_228,(runtime_hmap *)&DAT_00235f00,(uint32)local_1f8);
        if (runtime_writeBarrier._0_4_ == 0) {
          (local_2a0->typ).size = (uintptr)local_228;
        }
        else {
          runtime_gcWriteBarrier();
        }
                    /* Unresolved local var: runtime._type * t@[???] */
        prVar6 = local_1f8;
      }
    }
    lVar12 = lVar12 + 1;
                    /* Unresolved local var: int32 tl@[???] */
  } while( true );
}

