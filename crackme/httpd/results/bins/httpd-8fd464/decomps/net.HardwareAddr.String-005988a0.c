
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.HardwareAddr.String(net.HardwareAddr a, string ~r0) */

string net_HardwareAddr_String(net_HardwareAddr a)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 auVar3 [16];
  runtime__type *et;
  runtime__type *ptr;
  runtime__type *prVar4;
  int cap;
  runtime__type *prVar5;
  runtime__type *prVar6;
  long in_FS_OFFSET;
  string sVar7;
  runtime_slice old;
  runtime_slice old_00;
  runtime_slice old_01;
  net_HardwareAddr a_spill;
  runtime__type *local_58;
  runtime__type *local_48;
  long local_40;
  runtime__type *local_38;
  
                    /* Unresolved local var: []uint8 buf@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (a_spill.len == 0) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = a.len;
    return (string)(auVar3 << 0x40);
  }
  ptr = (runtime__type *)(a_spill.len * 3 + -1);
  runtime_makeslice((runtime__type *)a_spill.len,a.len,0x225720);
  prVar5 = (runtime__type *)0x0;
  et = local_58;
                    /* Unresolved local var: uint8 b@[???]
                       Unresolved local var: int i@[???] */
  for (cap = 0; cap < a_spill.len; cap = cap + 1) {
    bVar1 = a_spill.array[cap];
    if (0 < cap) {
      prVar6 = (runtime__type *)((long)&prVar5->size + 1);
      prVar4 = ptr;
      if (ptr < prVar6) {
        old.len = (int)&DAT_00225720;
        old.array = ptr;
        old.cap = (int)prVar5;
        runtime_growslice(et,old,cap);
        prVar6 = (runtime__type *)(local_40 + 1);
        et = local_48;
        prVar4 = local_38;
        local_58 = ptr;
      }
      *(undefined1 *)((long)&prVar5->size + (long)&et->size) = 0x3a;
      ptr = prVar4;
      prVar5 = prVar6;
    }
    prVar6 = (runtime__type *)((long)&prVar5->size + 1);
    uVar2 = (&DAT_002992b5)[bVar1 >> 4];
    prVar4 = ptr;
    if (ptr < prVar6) {
      old_00.len = (int)&DAT_00225720;
      old_00.array = ptr;
      old_00.cap = (int)prVar6;
      runtime_growslice(et,old_00,cap);
      prVar6 = (runtime__type *)(local_40 + 1);
      et = local_48;
      prVar4 = local_38;
      local_58 = ptr;
    }
    *(undefined1 *)((long)&prVar5->size + (long)&et->size) = uVar2;
    prVar5 = (runtime__type *)((long)&prVar6->size + 1);
    uVar2 = (&DAT_002992b5)[bVar1 & 0xf];
    ptr = prVar4;
    if (prVar4 < prVar5) {
      old_01.len = (int)&DAT_00225720;
      old_01.array = prVar4;
      old_01.cap = (int)prVar6;
      runtime_growslice(et,old_01,cap);
      prVar5 = (runtime__type *)(local_40 + 1);
      et = local_48;
      ptr = local_38;
      local_58 = prVar4;
    }
    *(undefined1 *)((long)&prVar6->size + (long)&et->size) = uVar2;
  }
  sVar7 = runtime_slicebytetostring((runtime_tmpBuf *)et,(uint8 *)ptr,a_spill.len);
  sVar7.str = (uint8 *)local_58;
  return sVar7;
}

