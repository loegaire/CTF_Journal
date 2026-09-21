
/* WARNING: Unknown calling convention */

void fmt___pp__doPrintln(fmt_pp *p,__interface___ a)

{
  ulong cap;
  runtime__type *prVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint8 *extraout_RAX;
  uint8 *extraout_RAX_00;
  void *pvVar4;
  long lVar5;
  uint8 *puVar6;
  fmt_pp *pfVar7;
  long in_FS_OFFSET;
  interface___ arg;
  runtime_slice old;
  runtime_slice old_00;
  fmt_pp *p_spill;
  __interface___ a_spill;
  uint8 *local_40;
  long local_38;
  int local_30;
  
  pfVar7 = (fmt_pp *)a.cap;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: int argNum@[???]
                       Unresolved local var: interface_{} arg@[???] */
  if (0 < a_spill.len) {
    pvVar4 = (void *)0x0;
    while( true ) {
      prVar1 = (a_spill.array)->_type;
      pfVar7 = p_spill;
      if (0 < (long)pvVar4) {
        lVar5 = (p_spill->buf).len;
        puVar6 = (p_spill->buf).array;
        if ((ulong)(p_spill->buf).cap < lVar5 + 1U) {
          old_00.len = (int)pvVar4;
          old_00.array = prVar1;
          old_00.cap = (int)p_spill;
          runtime_growslice((runtime__type *)&DAT_00225720,old_00,(int)(a_spill.array)->data);
          (p_spill->buf).cap = local_30;
          lVar5 = local_38;
          if (runtime_writeBarrier._0_4_ == 0) {
            (p_spill->buf).array = local_40;
            puVar6 = local_40;
          }
          else {
            runtime_gcWriteBarrier();
            puVar6 = extraout_RAX_00;
          }
        }
        (pfVar7->buf).len = lVar5 + 1;
        puVar6[lVar5] = 0x20;
      }
      arg.data = pvVar4;
      arg._type = prVar1;
      fmt___pp__printArg((fmt_pp *)a_spill.len,arg,(int32)pfVar7);
      pvVar4 = (void *)((long)pvVar4 + 1);
      if (a_spill.len <= (long)pvVar4) break;
      a_spill.array = a_spill.array + 1;
    }
  }
  lVar5 = (p_spill->buf).len;
  uVar2 = (p_spill->buf).array;
  uVar3 = (p_spill->buf).len;
  old.len = uVar3;
  old.array = (void *)uVar2;
  cap = (p_spill->buf).cap;
  puVar6 = (p_spill->buf).array;
  if (cap < lVar5 + 1U) {
    old.cap = (int)pfVar7;
    runtime_growslice((runtime__type *)&DAT_00225720,old,cap);
    (p_spill->buf).cap = local_30;
    if (runtime_writeBarrier._0_4_ == 0) {
      (p_spill->buf).array = local_40;
      lVar5 = local_38;
      puVar6 = local_40;
    }
    else {
      runtime_gcWriteBarrier();
      lVar5 = local_38;
      puVar6 = extraout_RAX;
    }
  }
  (p_spill->buf).len = lVar5 + 1;
  puVar6[lVar5] = 10;
  return;
}

