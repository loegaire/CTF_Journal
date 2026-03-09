
/* WARNING: Unknown calling convention */

void fmt___pp__badVerb(fmt_pp *p,int32 verb)

{
  long lVar1;
  reflect_flag rVar2;
  undefined1 *puVar3;
  runtime__type *extraout_RAX;
  runtime__type *prVar4;
  runtime__type *extraout_RAX_00;
  runtime__type *extraout_RAX_01;
  runtime__type *extraout_RAX_02;
  runtime__type *extraout_RAX_03;
  runtime__type *prVar5;
  runtime__type *extraout_RAX_04;
  undefined1 *puVar6;
  runtime__type *prVar7;
  runtime__type *extraout_RDX;
  runtime__type *prVar8;
  runtime__type *prVar9;
  runtime__type *extraout_RDX_00;
  int32 verb_00;
  void *cap;
  fmt_pp *pfVar11;
  long in_FS_OFFSET;
  runtime_slice rVar12;
  reflect_Value v;
  interface___ arg;
  runtime_slice old;
  runtime_slice old_00;
  runtime_slice old_01;
  runtime_slice old_02;
  runtime_slice old_03;
  runtime_slice old_04;
  reflect_Value value;
  runtime_slice old_05;
  fmt_pp *p_spill;
  int32 verb_spill;
  runtime__type *local_90;
  runtime__type *local_88;
  runtime__type *local_80;
  runtime__type *local_70;
  runtime__type *local_68;
  runtime__type *local_60;
  runtime__type *local_18;
  void *local_10;
  runtime__type *prVar10;
  
  while (&local_18 <= *(runtime__type ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  p_spill->erroring = true;
  prVar7 = (runtime__type *)(p_spill->buf).len;
  prVar5 = (runtime__type *)((long)&prVar7->size + 2);
  prVar9 = (runtime__type *)(p_spill->buf).cap;
  prVar8 = (runtime__type *)(p_spill->buf).array;
  prVar4 = prVar9;
  prVar10 = prVar8;
  if (prVar9 < prVar5) {
    rVar12.len = (int)prVar5;
    rVar12.array = prVar8;
    rVar12.cap = (int)p_spill;
    runtime_growslice(prVar7,rVar12,0x225720);
    prVar4 = local_60;
    prVar10 = local_70;
    local_90 = prVar8;
    local_88 = prVar7;
    local_80 = prVar9;
  }
  *(undefined2 *)((long)&prVar7->size + (long)&prVar10->size) = 0x2125;
  (p_spill->buf).len = (int)prVar5;
  (p_spill->buf).cap = (int)prVar4;
  if (runtime_writeBarrier._0_4_ == 0) {
    (p_spill->buf).array = (uint8 *)prVar10;
  }
  else {
    runtime_gcWriteBarrierBX();
  }
  local_90 = (runtime__type *)CONCAT44(local_90._4_4_,verb_spill);
  fmt___buffer__writeRune((fmt_buffer *)(ulong)(uint)verb_spill,(int32)prVar10);
  prVar7 = (runtime__type *)(p_spill->buf).len;
  prVar5 = (runtime__type *)((long)&prVar7->size + 1);
  prVar9 = (runtime__type *)(p_spill->buf).array;
  prVar8 = (runtime__type *)(p_spill->buf).cap;
  prVar4 = prVar7;
  prVar10 = prVar8;
  pfVar11 = p_spill;
  if (prVar8 < prVar5) {
    old.len = (int)prVar5;
    old.array = prVar8;
    old.cap = (int)p_spill;
    rVar12 = runtime_growslice(prVar7,old,0x225720);
    prVar10 = (runtime__type *)rVar12.len;
    (p_spill->buf).cap = (int)local_60;
    prVar4 = local_68;
    local_90 = prVar9;
    local_88 = prVar7;
    local_80 = prVar8;
    if (runtime_writeBarrier._0_4_ == 0) {
      (p_spill->buf).array = (uint8 *)local_70;
      prVar9 = local_70;
    }
    else {
      runtime_gcWriteBarrier();
      prVar9 = extraout_RAX;
    }
  }
  (pfVar11->buf).len = (int)((long)&prVar4->size + 1);
  *(undefined1 *)((long)&prVar4->size + (long)&prVar9->size) = 0x28;
  prVar5 = (pfVar11->arg)._type;
  if (prVar5 == (runtime__type *)0x0) {
    rVar2 = (pfVar11->value).flag;
    if (rVar2 == 0) {
      prVar7 = (runtime__type *)(pfVar11->buf).len;
      prVar5 = (runtime__type *)((long)&prVar7->size + 5);
      prVar9 = (runtime__type *)(pfVar11->buf).cap;
      prVar8 = (runtime__type *)(pfVar11->buf).array;
      if (prVar9 < prVar5) {
        old_02.len = (int)prVar5;
        old_02.array = prVar8;
        old_02.cap = (int)pfVar11;
        runtime_growslice(prVar7,old_02,0x225720);
        prVar9 = local_60;
        prVar8 = local_70;
        pfVar11 = p_spill;
      }
      *(undefined4 *)((long)&prVar7->size + (long)&prVar8->size) = 0x6c696e3c;
      ((undefined1 *)((long)&prVar8->size + 4))[(long)prVar7] = 0x3e;
      (pfVar11->buf).len = (int)prVar5;
      (pfVar11->buf).cap = (int)prVar9;
      if (runtime_writeBarrier._0_4_ == 0) {
        (pfVar11->buf).array = (uint8 *)prVar8;
      }
      else {
        runtime_gcWriteBarrierBX();
      }
    }
    else {
      cap = (pfVar11->value).ptr;
      v.ptr = prVar10;
      v.typ = (reflect_rtype *)rVar2;
      v.flag = (reflect_flag)cap;
      reflect_Value_Type(v);
      (*(code *)local_80[5].ptrdata)();
      lVar1 = (p_spill->buf).len;
      prVar5 = (runtime__type *)(rVar2 + lVar1);
      prVar7 = (runtime__type *)(p_spill->buf).cap;
      prVar9 = (runtime__type *)(p_spill->buf).array;
      if (prVar7 < prVar5) {
        old_03.len = (int)p_spill;
        old_03.array = prVar5;
        old_03.cap = (int)prVar7;
        runtime_growslice((runtime__type *)&DAT_00225720,old_03,(int)cap);
        prVar7 = local_60;
        prVar9 = local_70;
      }
      prVar4 = prVar9;
      runtime_memmove();
      verb_00 = (int32)cap;
      (p_spill->buf).len = (int)prVar5;
      (p_spill->buf).cap = (int)prVar7;
      prVar8 = (runtime__type *)(rVar2 + lVar1 + 1);
      pfVar11 = p_spill;
      if (runtime_writeBarrier._0_4_ == 0) {
        (p_spill->buf).array = (uint8 *)prVar9;
      }
      else {
        runtime_gcWriteBarrierBX();
        prVar5 = extraout_RAX_02;
        prVar8 = extraout_RDX_00;
      }
      if (prVar7 < prVar8) {
        verb_00 = 0x225720;
        old_04.len = (int)prVar7;
        old_04.array = prVar9;
        old_04.cap = (int)pfVar11;
        runtime_growslice(prVar5,old_04,0x225720);
        (p_spill->buf).cap = (int)local_60;
        prVar5 = local_68;
        if (runtime_writeBarrier._0_4_ == 0) {
          (p_spill->buf).array = (uint8 *)local_70;
          prVar9 = local_70;
          pfVar11 = p_spill;
        }
        else {
          pfVar11 = p_spill;
          runtime_gcWriteBarrier();
          prVar9 = extraout_RAX_03;
        }
      }
      (pfVar11->buf).len = (int)((long)&prVar5->size + 1);
      *(undefined1 *)((long)&prVar5->size + (long)&prVar9->size) = 0x3d;
      local_70 = (runtime__type *)0x0;
      value.ptr = (void *)(pfVar11->value).flag;
      value.typ = (reflect_rtype *)prVar9;
      value.flag = (reflect_flag)pfVar11;
      fmt___pp__printValue((pfVar11->value).ptr,value,verb_00,(int)prVar4);
      pfVar11 = p_spill;
    }
  }
  else {
    if (prVar5 == (runtime__type *)0x0) {
      puVar6 = (undefined1 *)0x0;
    }
    else {
      puVar6 = go_itab__reflect_rtype_reflect_Type;
    }
    local_18 = prVar5;
    local_10 = (pfVar11->arg).data;
    (**(code **)(puVar6 + 0xf8))();
    lVar1 = (p_spill->buf).len;
    prVar5 = (runtime__type *)((long)&local_88->size + lVar1);
    prVar7 = (runtime__type *)(p_spill->buf).cap;
    prVar9 = (runtime__type *)(p_spill->buf).array;
    if (prVar7 < prVar5) {
      old_00.len = (int)p_spill;
      old_00.array = prVar5;
      old_00.cap = (int)prVar7;
      runtime_growslice((runtime__type *)&DAT_00225720,old_00,(int)local_90);
      prVar7 = local_60;
      prVar9 = local_70;
    }
    runtime_memmove();
    (p_spill->buf).len = (int)prVar5;
    (p_spill->buf).cap = (int)prVar7;
    prVar8 = (runtime__type *)((long)&local_88->size + lVar1 + 1);
    pfVar11 = p_spill;
    if (runtime_writeBarrier._0_4_ == 0) {
      (p_spill->buf).array = (uint8 *)prVar9;
    }
    else {
      runtime_gcWriteBarrierBX();
      prVar5 = extraout_RAX_00;
      prVar8 = extraout_RDX;
    }
    if (prVar7 < prVar8) {
      old_01.len = (int)prVar7;
      old_01.array = prVar9;
      old_01.cap = (int)pfVar11;
      runtime_growslice(prVar5,old_01,0x225720);
      (p_spill->buf).cap = (int)local_60;
      prVar5 = local_68;
      if (runtime_writeBarrier._0_4_ == 0) {
        (p_spill->buf).array = (uint8 *)local_70;
        prVar9 = local_70;
        pfVar11 = p_spill;
      }
      else {
        pfVar11 = p_spill;
        runtime_gcWriteBarrier();
        prVar9 = extraout_RAX_01;
      }
    }
    (pfVar11->buf).len = (int)((long)&prVar5->size + 1);
    *(undefined1 *)((long)&prVar5->size + (long)&prVar9->size) = 0x3d;
    arg.data = (pfVar11->arg).data;
    arg._type = prVar9;
    fmt___pp__printArg((fmt_pp *)(pfVar11->arg)._type,arg,(int32)pfVar11);
    pfVar11 = p_spill;
  }
  prVar5 = (runtime__type *)(pfVar11->buf).len;
  puVar6 = (undefined1 *)((long)&prVar5->size + 1);
  puVar3 = (undefined1 *)(pfVar11->buf).cap;
  prVar7 = (runtime__type *)(pfVar11->buf).array;
  if (puVar3 < puVar6) {
    old_05.len = (int)puVar6;
    old_05.array = puVar3;
    old_05.cap = (int)pfVar11;
    runtime_growslice(prVar5,old_05,0x225720);
    (p_spill->buf).cap = (int)local_60;
    prVar5 = local_68;
    if (runtime_writeBarrier._0_4_ == 0) {
      (p_spill->buf).array = (uint8 *)local_70;
      prVar7 = local_70;
      pfVar11 = p_spill;
    }
    else {
      runtime_gcWriteBarrier();
      prVar7 = extraout_RAX_04;
      pfVar11 = p_spill;
    }
  }
  (pfVar11->buf).len = (int)((long)&prVar5->size + 1);
  *(undefined1 *)((long)&prVar5->size + (long)&prVar7->size) = 0x29;
  pfVar11->erroring = false;
  return;
}

