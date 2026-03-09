
/* WARNING: Unknown calling convention */

void fmt___pp__doPrint(fmt_pp *p,__interface___ a)

{
  runtime__type *cap;
  void *pvVar1;
  bool bVar2;
  uint8 *extraout_RAX;
  void *pvVar3;
  long lVar4;
  fmt_pp *pfVar5;
  undefined1 *puVar6;
  uint8 *puVar7;
  long in_FS_OFFSET;
  bool bVar8;
  interface___ arg;
  runtime_slice old;
  fmt_pp *p_spill;
  __interface___ a_spill;
  runtime__type *local_78;
  uint8 *local_58;
  long local_50;
  int local_48;
  
                    /* Unresolved local var: bool prevString@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: int argNum@[???]
                       Unresolved local var: interface_{} arg@[???] */
  if (0 < a_spill.len) {
    pvVar3 = (void *)0x0;
    bVar2 = false;
    while( true ) {
      cap = (a_spill.array)->_type;
      pvVar1 = (a_spill.array)->data;
      if (cap == (runtime__type *)0x0) {
        bVar8 = false;
      }
      else {
        if (cap == (runtime__type *)0x0) {
          puVar6 = (undefined1 *)0x0;
        }
        else {
          puVar6 = go_itab__reflect_rtype_reflect_Type;
        }
        (**(code **)(puVar6 + 0x98))();
        bVar8 = local_78 == (runtime__type *)0x18;
      }
      pfVar5 = p_spill;
      if (((0 < (long)pvVar3) && (!bVar8)) && (!bVar2)) {
        lVar4 = (p_spill->buf).len;
        puVar7 = (p_spill->buf).array;
        if ((ulong)(p_spill->buf).cap < lVar4 + 1U) {
          old.len = (int)pvVar3;
          old.array = p_spill;
          old.cap = (int)pvVar1;
          runtime_growslice((runtime__type *)&DAT_00225720,old,(int)cap);
          (p_spill->buf).cap = local_48;
          lVar4 = local_50;
          if (runtime_writeBarrier._0_4_ == 0) {
            (p_spill->buf).array = local_58;
            puVar7 = local_58;
          }
          else {
            runtime_gcWriteBarrier();
            puVar7 = extraout_RAX;
          }
        }
        (pfVar5->buf).len = lVar4 + 1;
        puVar7[lVar4] = 0x20;
      }
      arg.data = pvVar3;
      arg._type = (runtime__type *)pfVar5;
      fmt___pp__printArg((fmt_pp *)a_spill.len,arg,(int32)pvVar1);
      pvVar3 = (void *)((long)pvVar3 + 1);
      if (a_spill.len <= (long)pvVar3) break;
      a_spill.array = a_spill.array + 1;
                    /* Unresolved local var: bool isString@[???] */
      local_78 = cap;
      bVar2 = bVar8;
    }
  }
  return;
}

