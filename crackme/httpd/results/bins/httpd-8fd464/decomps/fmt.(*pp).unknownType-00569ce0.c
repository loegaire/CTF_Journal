
/* WARNING: Unknown calling convention */

void fmt___pp__unknownType(fmt_pp *p,reflect_Value v)

{
  undefined1 *puVar1;
  uint8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  uint8 *extraout_RAX;
  runtime__type *extraout_RAX_00;
  uint8 *extraout_RAX_01;
  runtime__type *prVar5;
  fmt_pp *pfVar6;
  runtime__type *prVar7;
  runtime__type *extraout_RDX;
  runtime__type *prVar8;
  uint8 *puVar9;
  long in_FS_OFFSET;
  reflect_Value v_00;
  runtime_slice old;
  runtime_slice old_00;
  runtime_slice old_01;
  runtime_slice old_02;
  fmt_pp *p_spill;
  reflect_Value v_spill;
  undefined1 *local_60;
  uint8 *local_50;
  runtime__type *local_48;
  runtime__type *local_40;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (v_spill.flag == 0) {
    prVar7 = (runtime__type *)(p_spill->buf).len;
    prVar5 = (runtime__type *)((long)&prVar7->size + 5);
    prVar8 = (runtime__type *)(p_spill->buf).cap;
    puVar9 = (p_spill->buf).array;
    if (prVar8 < prVar5) {
      old_02.len = (int)prVar5;
      old_02.array = puVar9;
      old_02.cap = (int)p_spill;
      runtime_growslice(prVar7,old_02,0x225720);
      prVar8 = local_40;
      puVar9 = local_50;
    }
    puVar2 = (uint8 *)((long)&prVar7->size + (long)puVar9);
    puVar2[0] = 0x3c;
    puVar2[1] = 0x6e;
    puVar2[2] = 0x69;
    puVar2[3] = 0x6c;
    *(uint8 *)((long)&prVar7->size + (long)(puVar9 + 4)) = 0x3e;
    (p_spill->buf).len = (int)prVar5;
    (p_spill->buf).cap = (int)prVar8;
    if (runtime_writeBarrier._0_4_ == 0) {
      (p_spill->buf).array = puVar9;
    }
    else {
      runtime_gcWriteBarrierBX();
    }
    return;
  }
  prVar5 = (runtime__type *)(p_spill->buf).len;
  puVar1 = (undefined1 *)((long)&prVar5->size + 1);
  puVar9 = (p_spill->buf).array;
  puVar3 = (undefined1 *)(p_spill->buf).cap;
  pfVar6 = p_spill;
  if (puVar3 < puVar1) {
    old.len = (int)p_spill;
    old.array = puVar1;
    old.cap = (int)puVar3;
    runtime_growslice((runtime__type *)&DAT_00225720,old,(int)puVar9);
    (p_spill->buf).cap = (int)local_40;
    prVar5 = local_48;
    local_60 = puVar3;
    if (runtime_writeBarrier._0_4_ == 0) {
      (p_spill->buf).array = local_50;
      puVar9 = local_50;
    }
    else {
      runtime_gcWriteBarrier();
      puVar9 = extraout_RAX;
    }
  }
  puVar1 = (undefined1 *)((long)&prVar5->size + 1);
  (pfVar6->buf).len = (int)puVar1;
  *(uint8 *)((long)&prVar5->size + (long)puVar9) = 0x3f;
  v_00.ptr = puVar1;
  v_00.typ = (reflect_rtype *)v_spill.flag;
  v_00.flag = (reflect_flag)pfVar6;
  reflect_Value_Type(v_00);
  (**(code **)(local_60 + 0xf8))();
  lVar4 = (p_spill->buf).len;
  prVar5 = (runtime__type *)(lVar4 + v_spill.flag);
  prVar7 = (runtime__type *)(p_spill->buf).cap;
  puVar9 = (p_spill->buf).array;
  if (prVar7 < prVar5) {
    old_00.len = (int)p_spill;
    old_00.array = prVar5;
    old_00.cap = (int)prVar7;
    runtime_growslice((runtime__type *)&DAT_00225720,old_00,(int)v_spill.ptr);
    prVar7 = local_40;
    puVar9 = local_50;
  }
  runtime_memmove();
  (p_spill->buf).len = (int)prVar5;
  (p_spill->buf).cap = (int)prVar7;
  prVar8 = (runtime__type *)(lVar4 + v_spill.flag + 1);
  pfVar6 = p_spill;
  if (runtime_writeBarrier._0_4_ == 0) {
    (p_spill->buf).array = puVar9;
  }
  else {
    runtime_gcWriteBarrierBX();
    prVar5 = extraout_RAX_00;
    prVar8 = extraout_RDX;
  }
  if (prVar7 < prVar8) {
    old_01.len = (int)prVar7;
    old_01.array = puVar9;
    old_01.cap = (int)pfVar6;
    runtime_growslice(prVar5,old_01,0x225720);
    (p_spill->buf).cap = (int)local_40;
    prVar5 = local_48;
    if (runtime_writeBarrier._0_4_ == 0) {
      (p_spill->buf).array = local_50;
      puVar9 = local_50;
      pfVar6 = p_spill;
    }
    else {
      runtime_gcWriteBarrier();
      puVar9 = extraout_RAX_01;
      pfVar6 = p_spill;
    }
  }
  (pfVar6->buf).len = (int)((long)&prVar5->size + 1);
  *(uint8 *)((long)&prVar5->size + (long)puVar9) = 0x3f;
  return;
}

