
/* WARNING: Removing unreachable block (ram,0x00555e3b) */
/* WARNING: Removing unreachable block (ram,0x00555e4f) */
/* WARNING: Removing unreachable block (ram,0x00555e45) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.(*Time).UnmarshalBinary(time.Time * t, []uint8 data, error
   ~r1) */

error time___Time__UnmarshalBinary(time_Time *t,__uint8 data)

{
  time_Location *extraout_RAX;
  time_Location *extraout_RAX_00;
  time_Location *ptVar1;
  time_Location *extraout_RAX_01;
  time_Location *extraout_RAX_02;
  ushort uVar2;
  long lVar3;
  int64 iVar4;
  uint8 *puVar5;
  time_Location *extraout_RDX;
  time_Location *ptVar6;
  time_Location *extraout_RDX_00;
  uint uVar7;
  time_zone *sec;
  ulong uVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  error eVar10;
  error eVar11;
  error eVar12;
  error eVar13;
  multireturn_string_int_int64_int64_bool_ mVar14;
  time_Time *t_spill;
  __uint8 data_spill;
  runtime_itab *local_58;
  long local_40;
  
  eVar13.data = data.array;
                    /* Unresolved local var: int offset@[???]
                       Unresolved local var: []uint8 buf@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (data_spill.len == 0) {
    runtime_newobject((runtime__type *)&DAT_00241ea0);
    local_58->_type = (runtime__type *)&DAT_0000001d;
    local_58->inter = (runtime_interfacetype *)0x2a0b58;
    eVar13.tab = local_58;
    return eVar13;
  }
  if (*data_spill.array != 1) {
    runtime_newobject((runtime__type *)&DAT_00241ea0);
    local_58->_type = (runtime__type *)&DAT_00000029;
    local_58->inter = (runtime_interfacetype *)&DAT_002a6a1a;
    eVar12.data = data_spill.array;
    eVar12.tab = local_58;
    return eVar12;
  }
  if (data_spill.len == 0xf) {
    uVar8 = *(ulong *)(data_spill.array + 1);
    uVar9 = -(data_spill.cap + -9) >> 0x3f & 8;
    uVar7 = *(uint *)(data_spill.array + uVar9 + 1);
    uVar2 = *(ushort *)(data_spill.array + (-(data_spill.cap + -0xd) >> 0x3f & 4U) + uVar9 + 1);
    if (runtime_writeBarrier._0_4_ == 0) {
      t_spill->loc = (time_Location *)0x0;
      ptVar1 = (time_Location *)t_spill;
    }
    else {
      runtime_gcWriteBarrierDX();
      ptVar1 = extraout_RAX;
    }
    uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    sec = (time_zone *)(ulong)uVar7;
    puVar5 = (uint8 *)(long)(int)uVar7;
    (ptVar1->name).str = puVar5;
    uVar8 = uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 | (uVar8 & 0xff0000000000) >> 0x18 |
            (uVar8 & 0xff00000000) >> 8 | (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18 |
            (uVar8 & 0xff00) << 0x28 | uVar8 << 0x38;
    (ptVar1->name).len = uVar8;
    lVar3 = (long)(short)(uVar2 << 8 | uVar2 >> 8) * 0x3c;
    if (lVar3 == -0x3c) {
      if ((long)puVar5 < 0) {
        sec = (time_zone *)0xdd7b17f80;
        (ptVar1->name).len = ((ulong)((long)puVar5 << 1) >> 0x1f) + 0xdd7b17f80;
        (ptVar1->name).str = (uint8 *)((ulong)puVar5 & 0x3fffffff);
      }
      if (runtime_writeBarrier._0_4_ == 0) {
        (ptVar1->zone).array = (time_zone *)0x0;
        t_spill = (time_Time *)ptVar1;
      }
      else {
        runtime_gcWriteBarrier();
        t_spill = (time_Time *)extraout_RAX_00;
      }
    }
    else {
      if ((long)puVar5 < 0) {
        sec = (time_zone *)0xdd7b17f80;
        uVar8 = ((ulong)((long)puVar5 << 1) >> 0x1f) + 0xdd7b17f80;
      }
      ptVar1 = (time_Location *)(uVar8 - 0xe7791f700);
      mVar14 = time___Location__lookup(ptVar1,(int64)sec);
      sec = mVar14.name.len;
      if (local_40 == lVar3) {
        ptVar1 = time_Local;
        if (time_Local == &time_utcLoc) {
          ptVar1 = (time_Location *)0x0;
        }
        if ((long)t_spill->wall < 0) {
          sec = (time_zone *)0xdd7b17f80;
          t_spill->ext = ((t_spill->wall << 1) >> 0x1f) + 0xdd7b17f80;
          t_spill->wall = t_spill->wall & 0x3fffffff;
        }
        if (runtime_writeBarrier._0_4_ == 0) {
          t_spill->loc = ptVar1;
          t_spill = (time_Time *)ptVar1;
        }
        else {
          runtime_gcWriteBarrier();
          t_spill = (time_Time *)extraout_RAX_01;
        }
      }
      else {
                    /* Unresolved local var: time.Location * l@[???] */
        runtime_newobject((runtime__type *)&DAT_00271260);
        (ptVar1->name).str = (uint8 *)0x0;
        runtime_newobject((runtime__type *)ptVar1);
        (ptVar1->name).str = (uint8 *)0x0;
        *(long *)(uVar8 - 0xe7791f6f0) = lVar3;
        *(undefined1 *)(uVar8 - 0xe7791f6e8) = 0;
        *(undefined8 *)(uVar8 - 0xe7791f6e8) = 1;
        *(undefined8 *)(uVar8 - 0xe7791f6e0) = 1;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(time_Location **)(uVar8 - 0xe7791f6f0) = ptVar1;
        }
        else {
          runtime_gcWriteBarrier();
        }
        runtime_newobject((runtime__type *)&DAT_00226800);
        iVar4 = -0x8000000000000000;
        (ptVar1->name).str = (uint8 *)0x8000000000000000;
        *(undefined2 *)(uVar8 - 0xe7791f6f8) = 0;
        *(undefined1 *)(uVar8 - 0xe7791f6f6) = 0;
        *(undefined8 *)(uVar8 - 0xe7791f6d0) = 1;
        *(undefined8 *)(uVar8 - 0xe7791f6c8) = 1;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(time_Location **)(uVar8 - 0xe7791f6d8) = ptVar1;
        }
        else {
          runtime_gcWriteBarrier();
          ptVar1 = extraout_RDX;
        }
        ptVar1->cacheStart = iVar4;
        ptVar1->cacheEnd = 0x7fffffffffffffff;
        sec = (ptVar1->zone).array;
        if ((ptVar1->zone).len == 0) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        ptVar6 = ptVar1;
        if (ptVar1 == &time_utcLoc) {
          ptVar6 = (time_Location *)0x0;
        }
        if (runtime_writeBarrier._0_4_ == 0) {
          ptVar1->cacheZone = sec;
        }
        else {
          runtime_gcWriteBarrierBX();
          ptVar6 = extraout_RDX_00;
        }
        if ((long)t_spill->wall < 0) {
          sec = (time_zone *)0xdd7b17f80;
          t_spill->ext = ((t_spill->wall << 1) >> 0x1f) + 0xdd7b17f80;
          t_spill->wall = t_spill->wall & 0x3fffffff;
        }
        if (runtime_writeBarrier._0_4_ == 0) {
          t_spill->loc = ptVar6;
        }
        else {
          runtime_gcWriteBarrierDX();
          t_spill = (time_Time *)extraout_RAX_02;
        }
      }
    }
    eVar10.data = sec;
    eVar10.tab = (runtime_itab *)t_spill;
    return eVar10;
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_58->_type = (runtime__type *)&DAT_00000024;
  local_58->inter = (runtime_interfacetype *)&DAT_002a4ad1;
  eVar11.data = data_spill.array;
  eVar11.tab = local_58;
  return eVar11;
}

