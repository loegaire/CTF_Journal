
/* WARNING: Unknown calling convention */

void fmt___pp__badArgNum(fmt_pp *p,int32 verb)

{
  undefined1 *puVar1;
  uint8 *puVar2;
  runtime__type *prVar3;
  undefined1 *puVar4;
  uint8 *puVar5;
  long in_FS_OFFSET;
  runtime_slice old;
  runtime_slice old_00;
  fmt_pp *p_spill;
  int32 verb_spill;
  uint8 *local_30;
  undefined1 *local_20;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  prVar3 = (runtime__type *)(p_spill->buf).len;
  puVar1 = (undefined1 *)((long)&prVar3->size + 2);
  puVar4 = (undefined1 *)(p_spill->buf).cap;
  puVar5 = (p_spill->buf).array;
  if (puVar4 < puVar1) {
    old.len = (int)puVar1;
    old.array = puVar5;
    old.cap = (int)p_spill;
    runtime_growslice(prVar3,old,0x225720);
    puVar4 = local_20;
    puVar5 = local_30;
  }
  puVar2 = (uint8 *)((long)&prVar3->size + (long)puVar5);
  puVar2[0] = 0x25;
  puVar2[1] = 0x21;
  (p_spill->buf).len = (int)puVar1;
  (p_spill->buf).cap = (int)puVar4;
  if (runtime_writeBarrier._0_4_ == 0) {
    (p_spill->buf).array = puVar5;
  }
  else {
    runtime_gcWriteBarrierBX();
  }
  fmt___buffer__writeRune((fmt_buffer *)(ulong)(uint)verb_spill,(int32)puVar5);
  prVar3 = (runtime__type *)(p_spill->buf).len;
  puVar1 = (undefined1 *)((long)&prVar3->ptrdata + 2);
  puVar4 = (undefined1 *)(p_spill->buf).cap;
  puVar5 = (p_spill->buf).array;
  if (puVar4 < puVar1) {
    old_00.len = (int)puVar1;
    old_00.array = puVar5;
    old_00.cap = (int)p_spill;
    runtime_growslice(prVar3,old_00,0x225720);
    puVar4 = local_20;
    puVar5 = local_30;
  }
  puVar2 = (uint8 *)((long)&prVar3->size + (long)puVar5);
  puVar2[0] = 0x28;
  puVar2[1] = 0x42;
  puVar2[2] = 0x41;
  puVar2[3] = 0x44;
  puVar2[4] = 0x49;
  puVar2[5] = 0x4e;
  puVar2[6] = 0x44;
  puVar2[7] = 0x45;
  puVar2 = (uint8 *)((long)&prVar3->ptrdata + (long)puVar5);
  puVar2[0] = 0x58;
  puVar2[1] = 0x29;
  (p_spill->buf).len = (int)puVar1;
  (p_spill->buf).cap = (int)puVar4;
  if (runtime_writeBarrier._0_4_ == 0) {
    (p_spill->buf).array = puVar5;
  }
  else {
    runtime_gcWriteBarrierBX();
  }
  return;
}

