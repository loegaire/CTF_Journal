
/* WARNING: Unknown calling convention */

void log___Logger__formatHeader(log_Logger *l,__uint8 *buf,time_Time t,string file,int line)

{
  runtime_tflag *prVar1;
  undefined1 *puVar2;
  char cVar3;
  runtime__type *extraout_RAX;
  uint8 *extraout_RAX_00;
  runtime__type *extraout_RAX_01;
  runtime__type *extraout_RAX_02;
  uint8 *extraout_RAX_03;
  runtime__type *extraout_RAX_04;
  uint8 *extraout_RAX_05;
  runtime__type *extraout_RAX_06;
  uint8 *extraout_RAX_07;
  runtime__type *extraout_RAX_08;
  uint8 *extraout_RAX_09;
  runtime__type *extraout_RAX_10;
  uint8 *extraout_RAX_11;
  runtime__type *extraout_RAX_12;
  uint8 *extraout_RAX_13;
  runtime__type *prVar4;
  uint8 *extraout_RAX_14;
  runtime__type *prVar5;
  ulong uVar6;
  runtime__type *extraout_RDX;
  uint8 *extraout_RDX_00;
  runtime__type *prVar7;
  uint8 *extraout_RDX_01;
  uint8 *puVar8;
  uint8 *extraout_RDX_02;
  uint8 *extraout_RDX_03;
  uint8 *extraout_RDX_04;
  uint8 *extraout_RDX_05;
  uint8 *extraout_RDX_06;
  long lVar9;
  ulong uVar10;
  undefined1 full;
  __uint8 *p_Var12;
  long in_FS_OFFSET;
  time_Time t_00;
  time_Time t_01;
  runtime_slice old;
  runtime_slice old_00;
  runtime_slice old_01;
  runtime_slice old_02;
  runtime_slice old_03;
  runtime_slice old_04;
  runtime_slice old_05;
  runtime_slice old_06;
  runtime_slice old_07;
  runtime_slice old_08;
  runtime_slice old_09;
  runtime_slice old_10;
  runtime_slice old_11;
  runtime_slice old_12;
  runtime_slice old_13;
  runtime_slice old_14;
  runtime_slice old_15;
  runtime_slice old_16;
  runtime_slice old_17;
  runtime_slice old_18;
  log_Logger *l_spill;
  __uint8 *buf_spill;
  time_Time t_spill;
  string file_spill;
  int line_spill;
  runtime__type *local_150;
  runtime__type *local_148;
  uint8 *local_140;
  runtime__type *local_138;
  runtime__type *local_130;
  runtime__type *local_e8;
  undefined8 local_e0;
  char local_d8 [160];
  time_Location *local_38;
  uint8 *local_30;
  uint8 *local_28;
  time_Location *local_20;
  long local_18;
  undefined8 local_10;
  int64 iVar11;
  
  iVar11 = t.ext;
  while (full = (undefined1)iVar11,
        &local_e8 <= *(runtime__type ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (((uint)l_spill->flag >> 6 & 1) == 0) {
    local_e8 = (runtime__type *)(l_spill->prefix).len;
    prVar7 = (runtime__type *)((long)&local_e8->size + buf_spill->len);
    prVar4 = (runtime__type *)buf_spill->cap;
    prVar5 = prVar4;
    local_30 = buf_spill->array;
    local_e0 = prVar7;
    if (prVar4 < prVar7) {
      old.len = (int)buf_spill;
      old.array = local_e8;
      old.cap = (int)prVar4;
      local_28 = (l_spill->prefix).str;
      runtime_growslice((runtime__type *)&DAT_00225720,old,(int)prVar7);
      prVar5 = local_130;
      local_30 = local_140;
      local_150 = prVar4;
      local_148 = prVar7;
    }
    local_e8 = prVar5;
    runtime_memmove();
    buf_spill->len = (int)local_e0;
    buf_spill->cap = (int)local_e8;
    p_Var12 = buf_spill;
    if (runtime_writeBarrier._0_4_ == 0) {
      buf_spill->array = local_30;
    }
    else {
      runtime_gcWriteBarrier();
    }
    full = SUB81(p_Var12,0);
  }
  if ((l_spill->flag & 7U) != 0) {
    if (((uint)l_spill->flag >> 5 & 1) != 0) {
      local_20 = (time_Location *)t_spill.wall;
      local_18 = t_spill.ext;
      if ((long)t_spill.wall < 0) {
        local_18 = ((t_spill.wall << 1) >> 0x1f) + 0xdd7b17f80;
        local_20 = (time_Location *)(t_spill.wall & 0x3fffffff);
      }
      local_10 = 0;
      t_spill.loc = (time_Location *)0x0;
      t_spill.wall = (uint64)local_20;
    }
    if ((l_spill->flag & 1U) != 0) {
                    /* Unresolved local var: int year@[???]
                       Unresolved local var: time.Month month@[???]
                       Unresolved local var: int day@[???] */
      local_150 = (runtime__type *)CONCAT71(local_150._1_7_,1);
      t_00.ext = (int64)t_spill.loc;
      t_00.wall = (uint64)l_spill;
      t_00.loc = (time_Location *)t_spill.wall;
      local_38 = t_spill.loc;
      time_Time_date(t_00,(bool)full);
      local_d8[0x3c] = '\0';
      local_d8[0x3d] = '\0';
      local_d8[0x3e] = '\0';
      local_d8[0x3f] = '\0';
                    /* Unresolved local var: uint8[20] b@[???]
                       Unresolved local var: int bp@[???]
                       Unresolved local var: int q@[???] */
      local_d8[0x40] = '\0';
      local_d8[0x41] = '\0';
      local_d8[0x42] = '\0';
      local_d8[0x43] = '\0';
      local_d8[0x44] = '\0';
      local_d8[0x45] = '\0';
      local_d8[0x46] = '\0';
      local_d8[0x47] = '\0';
      local_d8[0x48] = '\0';
      local_d8[0x49] = '\0';
      local_d8[0x4a] = '\0';
      local_d8[0x4b] = '\0';
      local_d8[0x4c] = '\0';
      local_d8[0x4d] = '\0';
      local_d8[0x4e] = '\0';
      local_d8[0x4f] = '\0';
      uVar10 = 0x13;
      prVar7 = local_148;
      for (lVar9 = 4; (cVar3 = (char)prVar7, 9 < (long)prVar7 || (1 < lVar9)); lVar9 = lVar9 + -1) {
        prVar7 = (runtime__type *)
                 (((long)((long)&prVar7->size +
                         SUB168(SEXT816(-0x3333333333333333) * SEXT816((long)prVar7),8)) >> 3) -
                 ((long)prVar7 >> 0x3f));
        if (0x13 < uVar10) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        local_d8[uVar10 + 0x3c] = cVar3 + (char)prVar7 * -10 + '0';
        uVar10 = uVar10 - 1;
                    /* Unresolved local var: uint8[20] b@[???]
                       Unresolved local var: int bp@[???]
                       Unresolved local var: int q@[???] */
      }
      if (0x13 < uVar10) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      local_d8[uVar10 + 0x3c] = cVar3 + '0';
      old_05.array = buf_spill->len - uVar10;
      prVar7 = (runtime__type *)(old_05.array + 0x14);
      prVar4 = (runtime__type *)buf_spill->cap;
      local_30 = (uint8 *)(local_d8 + (uVar10 & (long)(uVar10 - 0x14) >> 0x3f) + 0x3c);
      prVar5 = prVar4;
      puVar8 = buf_spill->array;
      local_e8 = prVar7;
      local_e0 = (runtime__type *)old_05.array;
      if (prVar4 < prVar7) {
        old_05.len = (int)local_140;
        old_05.cap = buf_spill->len;
        runtime_growslice((runtime__type *)&DAT_00225720,old_05,(int)local_30);
        prVar5 = local_130;
        puVar8 = local_140;
        local_150 = prVar4;
        local_148 = prVar7;
      }
      local_30 = puVar8;
      runtime_memmove();
      buf_spill->len = (int)local_e8;
      buf_spill->cap = (int)prVar5;
      p_Var12 = buf_spill;
      if (runtime_writeBarrier._0_4_ == 0) {
        buf_spill->array = local_30;
        prVar7 = local_e8;
        puVar8 = local_30;
      }
      else {
        runtime_gcWriteBarrierDX();
        prVar7 = extraout_RAX_02;
        puVar8 = extraout_RDX_01;
      }
      old_06.array = (runtime__type *)((long)local_e0 + 0x15);
      if (prVar5 < old_06.array) {
        old_06.len = (int)prVar5;
        old_06.cap = (int)p_Var12;
        runtime_growslice(prVar7,old_06,0x225720);
        buf_spill->cap = (int)local_130;
        prVar7 = local_138;
        local_150 = prVar5;
        local_148 = old_06.array;
        if (runtime_writeBarrier._0_4_ == 0) {
          buf_spill->array = local_140;
          puVar8 = local_140;
          p_Var12 = buf_spill;
        }
        else {
          p_Var12 = buf_spill;
          runtime_gcWriteBarrier();
          puVar8 = extraout_RAX_03;
        }
      }
      p_Var12->len = (int)((long)&prVar7->size + 1);
      *(uint8 *)((long)&prVar7->size + (long)puVar8) = 0x2f;
      local_d8[0] = '\0';
      local_d8[1] = '\0';
      local_d8[2] = '\0';
      local_d8[3] = '\0';
                    /* Unresolved local var: uint8[20] b@[???]
                       Unresolved local var: int bp@[???]
                       Unresolved local var: int q@[???] */
      local_d8[4] = '\0';
      local_d8[5] = '\0';
      local_d8[6] = '\0';
      local_d8[7] = '\0';
      local_d8[8] = '\0';
      local_d8[9] = '\0';
      local_d8[10] = '\0';
      local_d8[0xb] = '\0';
      local_d8[0xc] = '\0';
      local_d8[0xd] = '\0';
      local_d8[0xe] = '\0';
      local_d8[0xf] = '\0';
      local_d8[0x10] = '\0';
      local_d8[0x11] = '\0';
      local_d8[0x12] = '\0';
      local_d8[0x13] = '\0';
      uVar10 = 0x13;
      puVar8 = local_140;
      for (lVar9 = 2; (cVar3 = (char)puVar8, 9 < (long)puVar8 || (1 < lVar9)); lVar9 = lVar9 + -1) {
        puVar8 = (uint8 *)(((long)(puVar8 + SUB168(SEXT816(-0x3333333333333333) *
                                                   SEXT816((long)puVar8),8)) >> 3) -
                          ((long)puVar8 >> 0x3f));
        if (0x13 < uVar10) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        local_d8[uVar10] = cVar3 + (char)puVar8 * -10 + '0';
        uVar10 = uVar10 - 1;
      }
      if (0x13 < uVar10) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      local_d8[uVar10] = cVar3 + '0';
      local_e0 = (runtime__type *)(p_Var12->len - uVar10);
      prVar7 = (runtime__type *)((long)local_e0 + 0x14);
      prVar4 = (runtime__type *)p_Var12->cap;
      local_30 = (uint8 *)(local_d8 + (uVar10 & (long)(uVar10 - 0x14) >> 0x3f));
      prVar5 = prVar4;
      puVar8 = p_Var12->array;
      local_e8 = prVar7;
      if (prVar4 < prVar7) {
        old_07.len = p_Var12->len;
        old_07.array = prVar7;
        old_07.cap = (int)p_Var12;
        runtime_growslice((runtime__type *)&DAT_00225720,old_07,(int)prVar4);
        prVar5 = local_130;
        puVar8 = local_140;
        local_150 = prVar4;
        local_148 = prVar7;
      }
      local_30 = puVar8;
      runtime_memmove();
      buf_spill->len = (int)local_e8;
      buf_spill->cap = (int)prVar5;
      p_Var12 = buf_spill;
      if (runtime_writeBarrier._0_4_ == 0) {
        buf_spill->array = local_30;
        prVar7 = local_e8;
        puVar8 = local_30;
      }
      else {
        runtime_gcWriteBarrierDX();
        prVar7 = extraout_RAX_04;
        puVar8 = extraout_RDX_02;
      }
      old_08.array = (runtime__type *)((long)local_e0 + 0x15);
      if (prVar5 < old_08.array) {
        old_08.len = (int)prVar5;
        old_08.cap = (int)p_Var12;
        runtime_growslice(prVar7,old_08,0x225720);
        buf_spill->cap = (int)local_130;
        prVar7 = local_138;
        local_150 = prVar5;
        local_148 = old_08.array;
        if (runtime_writeBarrier._0_4_ == 0) {
          buf_spill->array = local_140;
          puVar8 = local_140;
          p_Var12 = buf_spill;
        }
        else {
          p_Var12 = buf_spill;
          runtime_gcWriteBarrier();
          puVar8 = extraout_RAX_05;
        }
      }
      p_Var12->len = (int)((long)&prVar7->size + 1);
      *(uint8 *)((long)&prVar7->size + (long)puVar8) = 0x2f;
      local_d8[0x50] = '\0';
      local_d8[0x51] = '\0';
      local_d8[0x52] = '\0';
      local_d8[0x53] = '\0';
      local_d8[0x54] = '\0';
      local_d8[0x55] = '\0';
      local_d8[0x56] = '\0';
      local_d8[0x57] = '\0';
      local_d8[0x58] = '\0';
      local_d8[0x59] = '\0';
      local_d8[0x5a] = '\0';
      local_d8[0x5b] = '\0';
      local_d8[0x5c] = '\0';
      local_d8[0x5d] = '\0';
      local_d8[0x5e] = '\0';
      local_d8[0x5f] = '\0';
      local_d8[0x60] = '\0';
      local_d8[0x61] = '\0';
      local_d8[0x62] = '\0';
      local_d8[99] = '\0';
      uVar10 = 0x13;
      prVar7 = local_138;
      for (lVar9 = 2; (cVar3 = (char)prVar7, 9 < (long)prVar7 || (1 < lVar9)); lVar9 = lVar9 + -1) {
        prVar7 = (runtime__type *)
                 (((long)&prVar7->size +
                   SUB168(SEXT816(-0x3333333333333333) * SEXT816((long)prVar7),8) >> 3) -
                 ((long)prVar7 >> 0x3f));
        if (0x13 < uVar10) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        local_d8[uVar10 + 0x50] = cVar3 + (char)prVar7 * -10 + '0';
        uVar10 = uVar10 - 1;
      }
      if (0x13 < uVar10) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      local_d8[uVar10 + 0x50] = cVar3 + '0';
      local_e0 = (runtime__type *)(p_Var12->len - uVar10);
      prVar1 = &local_e0->tflag;
      prVar7 = (runtime__type *)p_Var12->cap;
      local_30 = (uint8 *)(local_d8 + (uVar10 & (long)(uVar10 - 0x14) >> 0x3f) + 0x50);
      prVar4 = prVar7;
      puVar8 = p_Var12->array;
      local_e8 = (runtime__type *)prVar1;
      if (prVar7 < prVar1) {
        old_09.len = (int)local_30;
        old_09.array = prVar1;
        old_09.cap = (int)p_Var12;
        runtime_growslice((runtime__type *)&DAT_00225720,old_09,(int)prVar7);
        prVar4 = local_130;
        puVar8 = local_140;
        local_150 = prVar7;
        local_148 = (runtime__type *)prVar1;
      }
      local_30 = puVar8;
      runtime_memmove();
      buf_spill->len = (int)local_e8;
      buf_spill->cap = (int)prVar4;
      p_Var12 = buf_spill;
      if (runtime_writeBarrier._0_4_ == 0) {
        buf_spill->array = local_30;
        prVar7 = local_e8;
        puVar8 = local_30;
      }
      else {
        runtime_gcWriteBarrierDX();
        prVar7 = extraout_RAX_06;
        puVar8 = extraout_RDX_03;
      }
      old_10.array = &local_e0->align;
      if (prVar4 < old_10.array) {
        old_10.len = (int)prVar4;
        old_10.cap = (int)p_Var12;
        runtime_growslice(prVar7,old_10,0x225720);
        buf_spill->cap = (int)local_130;
        prVar7 = local_138;
        local_150 = prVar4;
        local_148 = (runtime__type *)old_10.array;
        if (runtime_writeBarrier._0_4_ == 0) {
          buf_spill->array = local_140;
          puVar8 = local_140;
          p_Var12 = buf_spill;
        }
        else {
          p_Var12 = buf_spill;
          runtime_gcWriteBarrier();
          puVar8 = extraout_RAX_07;
        }
      }
      p_Var12->len = (int)((long)&prVar7->size + 1);
      *(uint8 *)((long)&prVar7->size + (long)puVar8) = 0x20;
      t_spill.loc = local_38;
    }
    if ((l_spill->flag & 6U) != 0) {
      t_01.ext = (int64)t_spill.loc;
      t_01.wall = (uint64)l_spill;
      t_01.loc = (time_Location *)t_spill.wall;
      time_Time_Clock(t_01);
      local_d8[0x78] = '\0';
      local_d8[0x79] = '\0';
      local_d8[0x7a] = '\0';
      local_d8[0x7b] = '\0';
                    /* Unresolved local var: uint8[20] b@[???]
                       Unresolved local var: int bp@[???]
                       Unresolved local var: int q@[???] */
      local_d8[0x7c] = '\0';
      local_d8[0x7d] = '\0';
      local_d8[0x7e] = '\0';
      local_d8[0x7f] = '\0';
      local_d8[0x80] = '\0';
      local_d8[0x81] = '\0';
      local_d8[0x82] = '\0';
      local_d8[0x83] = '\0';
      local_d8[0x84] = '\0';
      local_d8[0x85] = '\0';
      local_d8[0x86] = '\0';
      local_d8[0x87] = '\0';
      local_d8[0x88] = '\0';
      local_d8[0x89] = '\0';
      local_d8[0x8a] = '\0';
      local_d8[0x8b] = '\0';
      uVar10 = 0x13;
      for (lVar9 = 2; (cVar3 = (char)local_150, 9 < (long)local_150 || (1 < lVar9));
          lVar9 = lVar9 + -1) {
        local_150 = (runtime__type *)
                    (((long)((long)&local_150->size +
                            SUB168(SEXT816(-0x3333333333333333) * SEXT816((long)local_150),8)) >> 3)
                    - ((long)local_150 >> 0x3f));
        if (0x13 < uVar10) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        local_d8[uVar10 + 0x78] = cVar3 + (char)local_150 * -10 + '0';
        uVar10 = uVar10 - 1;
                    /* Unresolved local var: uint8[20] b@[???]
                       Unresolved local var: int bp@[???]
                       Unresolved local var: int q@[???] */
      }
      if (0x13 < uVar10) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      local_d8[uVar10 + 0x78] = cVar3 + '0';
      old_11.array = buf_spill->len - uVar10;
      local_e8 = (runtime__type *)(old_11.array + 0x14);
      local_30 = (uint8 *)(local_d8 + (uVar10 & (long)(uVar10 - 0x14) >> 0x3f) + 0x78);
      prVar7 = (runtime__type *)buf_spill->cap;
      puVar8 = buf_spill->array;
      local_e0 = (runtime__type *)old_11.array;
      if ((runtime__type *)buf_spill->cap < local_e8) {
        old_11.len = (int)local_148;
        old_11.cap = buf_spill->len;
        runtime_growslice((runtime__type *)&DAT_00225720,old_11,(int)local_30);
        prVar7 = local_130;
        puVar8 = local_140;
      }
      local_30 = puVar8;
      runtime_memmove();
      buf_spill->len = (int)local_e8;
      buf_spill->cap = (int)prVar7;
      p_Var12 = buf_spill;
      if (runtime_writeBarrier._0_4_ == 0) {
        buf_spill->array = local_30;
        prVar4 = local_e8;
        puVar8 = local_30;
      }
      else {
        runtime_gcWriteBarrierDX();
        prVar4 = extraout_RAX_08;
        puVar8 = extraout_RDX_04;
      }
      old_12.array = (runtime__type *)((long)local_e0 + 0x15);
      if (prVar7 < old_12.array) {
        old_12.len = (int)prVar7;
        old_12.cap = (int)p_Var12;
        runtime_growslice(prVar4,old_12,0x225720);
        buf_spill->cap = (int)local_130;
        prVar4 = local_138;
        if (runtime_writeBarrier._0_4_ == 0) {
          buf_spill->array = local_140;
          puVar8 = local_140;
          p_Var12 = buf_spill;
        }
        else {
          p_Var12 = buf_spill;
          runtime_gcWriteBarrier();
          puVar8 = extraout_RAX_09;
        }
      }
      p_Var12->len = (int)((long)&prVar4->size + 1);
      *(uint8 *)((long)&prVar4->size + (long)puVar8) = 0x3a;
      local_d8[100] = '\0';
      local_d8[0x65] = '\0';
      local_d8[0x66] = '\0';
      local_d8[0x67] = '\0';
                    /* Unresolved local var: uint8[20] b@[???]
                       Unresolved local var: int bp@[???]
                       Unresolved local var: int q@[???] */
      local_d8[0x68] = '\0';
      local_d8[0x69] = '\0';
      local_d8[0x6a] = '\0';
      local_d8[0x6b] = '\0';
      local_d8[0x6c] = '\0';
      local_d8[0x6d] = '\0';
      local_d8[0x6e] = '\0';
      local_d8[0x6f] = '\0';
      local_d8[0x70] = '\0';
      local_d8[0x71] = '\0';
      local_d8[0x72] = '\0';
      local_d8[0x73] = '\0';
      local_d8[0x74] = '\0';
      local_d8[0x75] = '\0';
      local_d8[0x76] = '\0';
      local_d8[0x77] = '\0';
      uVar10 = 0x13;
      for (lVar9 = 2; (cVar3 = (char)local_148, 9 < (long)local_148 || (1 < lVar9));
          lVar9 = lVar9 + -1) {
        local_148 = (runtime__type *)
                    (((long)((long)&local_148->size +
                            SUB168(SEXT816(-0x3333333333333333) * SEXT816((long)local_148),8)) >> 3)
                    - ((long)local_148 >> 0x3f));
        if (0x13 < uVar10) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        local_d8[uVar10 + 100] = cVar3 + (char)local_148 * -10 + '0';
        uVar10 = uVar10 - 1;
      }
      if (0x13 < uVar10) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      local_d8[uVar10 + 100] = cVar3 + '0';
      local_e0 = (runtime__type *)(p_Var12->len - uVar10);
      local_e8 = (runtime__type *)((long)local_e0 + 0x14);
      prVar7 = (runtime__type *)p_Var12->cap;
      local_30 = (uint8 *)(local_d8 + (uVar10 & (long)(uVar10 - 0x14) >> 0x3f) + 100);
      puVar8 = p_Var12->array;
      if (prVar7 < local_e8) {
        old_13.len = p_Var12->len;
        old_13.array = local_e8;
        old_13.cap = (int)p_Var12;
        runtime_growslice((runtime__type *)&DAT_00225720,old_13,(int)prVar7);
        prVar7 = local_130;
        puVar8 = local_140;
      }
      local_30 = puVar8;
      runtime_memmove();
      buf_spill->len = (int)local_e8;
      buf_spill->cap = (int)prVar7;
      p_Var12 = buf_spill;
      if (runtime_writeBarrier._0_4_ == 0) {
        buf_spill->array = local_30;
        prVar4 = local_e8;
        puVar8 = local_30;
      }
      else {
        runtime_gcWriteBarrierDX();
        prVar4 = extraout_RAX_10;
        puVar8 = extraout_RDX_05;
      }
      old_14.array = (runtime__type *)((long)local_e0 + 0x15);
      if (prVar7 < old_14.array) {
        old_14.len = (int)prVar7;
        old_14.cap = (int)p_Var12;
        runtime_growslice(prVar4,old_14,0x225720);
        buf_spill->cap = (int)local_130;
        prVar4 = local_138;
        if (runtime_writeBarrier._0_4_ == 0) {
          buf_spill->array = local_140;
          puVar8 = local_140;
          p_Var12 = buf_spill;
        }
        else {
          p_Var12 = buf_spill;
          runtime_gcWriteBarrier();
          puVar8 = extraout_RAX_11;
        }
      }
      p_Var12->len = (int)((long)&prVar4->size + 1);
      *(uint8 *)((long)&prVar4->size + (long)puVar8) = 0x3a;
      local_d8[0x28] = '\0';
      local_d8[0x29] = '\0';
      local_d8[0x2a] = '\0';
      local_d8[0x2b] = '\0';
      local_d8[0x2c] = '\0';
      local_d8[0x2d] = '\0';
      local_d8[0x2e] = '\0';
      local_d8[0x2f] = '\0';
      local_d8[0x30] = '\0';
      local_d8[0x31] = '\0';
      local_d8[0x32] = '\0';
      local_d8[0x33] = '\0';
      local_d8[0x34] = '\0';
      local_d8[0x35] = '\0';
      local_d8[0x36] = '\0';
      local_d8[0x37] = '\0';
      local_d8[0x38] = '\0';
      local_d8[0x39] = '\0';
      local_d8[0x3a] = '\0';
      local_d8[0x3b] = '\0';
      uVar10 = 0x13;
      puVar8 = local_140;
      for (lVar9 = 2; (cVar3 = (char)puVar8, 9 < (long)puVar8 || (1 < lVar9)); lVar9 = lVar9 + -1) {
        puVar8 = (uint8 *)(((long)(puVar8 + SUB168(SEXT816(-0x3333333333333333) *
                                                   SEXT816((long)puVar8),8)) >> 3) -
                          ((long)puVar8 >> 0x3f));
        if (0x13 < uVar10) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        local_d8[uVar10 + 0x28] = cVar3 + (char)puVar8 * -10 + '0';
        uVar10 = uVar10 - 1;
      }
      if (0x13 < uVar10) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      local_d8[uVar10 + 0x28] = cVar3 + '0';
      local_e0 = (runtime__type *)(p_Var12->len - uVar10);
      local_e8 = (runtime__type *)&local_e0->tflag;
      prVar7 = (runtime__type *)p_Var12->cap;
      local_30 = (uint8 *)(local_d8 + (uVar10 & (long)(uVar10 - 0x14) >> 0x3f) + 0x28);
      puVar8 = p_Var12->array;
      if (prVar7 < local_e8) {
        old_15.len = (int)local_30;
        old_15.array = local_e8;
        old_15.cap = (int)p_Var12;
        runtime_growslice((runtime__type *)&DAT_00225720,old_15,(int)prVar7);
        prVar7 = local_130;
        puVar8 = local_140;
      }
      local_30 = puVar8;
      runtime_memmove();
      buf_spill->len = (int)local_e8;
      buf_spill->cap = (int)prVar7;
      p_Var12 = buf_spill;
      if (runtime_writeBarrier._0_4_ == 0) {
        buf_spill->array = local_30;
        prVar4 = local_e8;
        puVar8 = local_30;
      }
      else {
        runtime_gcWriteBarrierDX();
        prVar4 = extraout_RAX_12;
        puVar8 = extraout_RDX_06;
      }
      if (((uint)l_spill->flag >> 2 & 1) != 0) {
        if (prVar7 < &local_e0->align) {
          old_16.len = (int)prVar7;
          old_16.array = &DAT_00225720;
          old_16.cap = (int)p_Var12;
          runtime_growslice(prVar4,old_16,(int)&local_e0->align);
          buf_spill->cap = (int)local_130;
          prVar4 = local_138;
          if (runtime_writeBarrier._0_4_ == 0) {
            buf_spill->array = local_140;
            puVar8 = local_140;
            p_Var12 = buf_spill;
          }
          else {
            p_Var12 = buf_spill;
            runtime_gcWriteBarrier();
            puVar8 = extraout_RAX_13;
          }
        }
        p_Var12->len = (int)((long)&prVar4->size + 1);
        *(uint8 *)((long)&prVar4->size + (long)puVar8) = 0x2e;
        local_d8[0x8c] = '\0';
        local_d8[0x8d] = '\0';
        local_d8[0x8e] = '\0';
        local_d8[0x8f] = '\0';
                    /* Unresolved local var: uint8[20] b@[???]
                       Unresolved local var: int bp@[???]
                       Unresolved local var: int q@[???] */
        local_d8[0x90] = '\0';
        local_d8[0x91] = '\0';
        local_d8[0x92] = '\0';
        local_d8[0x93] = '\0';
        local_d8[0x94] = '\0';
        local_d8[0x95] = '\0';
        local_d8[0x96] = '\0';
        local_d8[0x97] = '\0';
        local_d8[0x98] = '\0';
        local_d8[0x99] = '\0';
        local_d8[0x9a] = '\0';
        local_d8[0x9b] = '\0';
        local_d8[0x9c] = '\0';
        local_d8[0x9d] = '\0';
        local_d8[0x9e] = '\0';
        local_d8[0x9f] = '\0';
        uVar10 = (ulong)(long)(int)((uint)t_spill.wall & 0x3fffffff) / 1000;
        uVar6 = 0x13;
        for (lVar9 = 6; (cVar3 = (char)uVar10, 9 < (long)uVar10 || (1 < lVar9)); lVar9 = lVar9 + -1)
        {
          uVar10 = ((long)(SUB168(SEXT816(-0x3333333333333333) * SEXT816((long)uVar10),8) + uVar10)
                   >> 3) - ((long)uVar10 >> 0x3f);
          if (0x13 < uVar6) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          local_d8[uVar6 + 0x8c] = cVar3 + (char)uVar10 * -10 + '0';
          uVar6 = uVar6 - 1;
        }
        if (0x13 < uVar6) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        local_d8[uVar6 + 0x8c] = cVar3 + '0';
        local_e0 = (runtime__type *)((p_Var12->len - uVar6) + 0x14);
        prVar7 = (runtime__type *)p_Var12->cap;
        local_e8 = (runtime__type *)(uVar6 - 0x14);
        local_30 = (uint8 *)(local_d8 + (uVar6 & (long)local_e8 >> 0x3f) + 0x8c);
        puVar8 = p_Var12->array;
        if (prVar7 < local_e0) {
          old_18.len = (int)&DAT_00225720;
          old_18.array = l_spill;
          old_18.cap = (int)p_Var12;
          runtime_growslice(local_e0,old_18,(int)prVar7);
          prVar7 = local_130;
          puVar8 = local_140;
        }
        local_e8 = prVar7;
        local_30 = puVar8;
        runtime_memmove();
        buf_spill->len = (int)local_e0;
        buf_spill->cap = (int)local_e8;
        if (runtime_writeBarrier._0_4_ == 0) {
          buf_spill->array = local_30;
          p_Var12 = buf_spill;
        }
        else {
          p_Var12 = buf_spill;
          runtime_gcWriteBarrier();
        }
      }
      prVar7 = (runtime__type *)p_Var12->len;
      puVar2 = (undefined1 *)((long)&prVar7->size + 1);
      puVar8 = p_Var12->array;
      if ((undefined1 *)p_Var12->cap < puVar2) {
        old_17.len = (int)puVar2;
        old_17.array = &DAT_00225720;
        old_17.cap = (int)p_Var12;
        runtime_growslice(prVar7,old_17,p_Var12->cap);
        buf_spill->cap = (int)local_130;
        prVar7 = local_138;
        if (runtime_writeBarrier._0_4_ == 0) {
          buf_spill->array = local_140;
          puVar8 = local_140;
          p_Var12 = buf_spill;
        }
        else {
          p_Var12 = buf_spill;
          runtime_gcWriteBarrier();
          puVar8 = extraout_RAX_14;
        }
      }
      p_Var12->len = (int)((long)&prVar7->size + 1);
      *(uint8 *)((long)&prVar7->size + (long)puVar8) = 0x20;
    }
  }
  if ((l_spill->flag & 0x18U) != 0) {
    uVar10 = file_spill.len;
    if (((uint)l_spill->flag >> 4 & 1) != 0) {
      do {
        uVar6 = uVar10;
        uVar10 = uVar6 - 1;
        if ((long)uVar10 < 1) goto LAB_0062cb7f;
      } while (file_spill.str[uVar10] != 0x2f);
      file_spill.len = (file_spill.len - uVar10) + -1;
      file_spill.str = file_spill.str + (-file_spill.len >> 0x3f & uVar6);
    }
LAB_0062cb7f:
    local_e8 = (runtime__type *)buf_spill->len;
    prVar7 = (runtime__type *)((long)&local_e8->size + file_spill.len);
    prVar4 = (runtime__type *)buf_spill->cap;
    puVar8 = buf_spill->array;
    local_e0 = (runtime__type *)file_spill.len;
    if ((runtime__type *)buf_spill->cap < prVar7) {
      old_01.len = file_spill.len;
      old_01.array = buf_spill;
      old_01.cap = (int)prVar7;
      local_28 = file_spill.str;
      runtime_growslice((runtime__type *)&DAT_00225720,old_01,(int)local_e8);
      prVar4 = local_130;
      puVar8 = local_140;
    }
    local_30 = puVar8;
    runtime_memmove();
    puVar8 = local_30;
    buf_spill->len = (int)prVar7;
    buf_spill->cap = (int)prVar4;
    prVar5 = (runtime__type *)((long)&local_e8->size + (long)local_e0 + 1);
    p_Var12 = buf_spill;
    if (runtime_writeBarrier._0_4_ == 0) {
      buf_spill->array = local_30;
    }
    else {
      runtime_gcWriteBarrierBX();
      prVar7 = extraout_RAX;
      prVar5 = extraout_RDX;
    }
    if (prVar4 < prVar5) {
      old_02.len = (int)prVar4;
      old_02.array = puVar8;
      old_02.cap = (int)p_Var12;
      runtime_growslice(prVar7,old_02,0x225720);
      buf_spill->cap = (int)local_130;
      prVar7 = local_138;
      if (runtime_writeBarrier._0_4_ == 0) {
        buf_spill->array = local_140;
        puVar8 = local_140;
        p_Var12 = buf_spill;
      }
      else {
        p_Var12 = buf_spill;
        runtime_gcWriteBarrier();
        puVar8 = extraout_RAX_00;
      }
    }
    p_Var12->len = (int)((long)&prVar7->size + 1);
    *(uint8 *)((long)&prVar7->size + (long)puVar8) = 0x3a;
    local_d8[0x14] = '\0';
    local_d8[0x15] = '\0';
    local_d8[0x16] = '\0';
    local_d8[0x17] = '\0';
                    /* Unresolved local var: uint8[20] b@[???]
                       Unresolved local var: int bp@[???]
                       Unresolved local var: int q@[???] */
    local_d8[0x18] = '\0';
    local_d8[0x19] = '\0';
    local_d8[0x1a] = '\0';
    local_d8[0x1b] = '\0';
    local_d8[0x1c] = '\0';
    local_d8[0x1d] = '\0';
    local_d8[0x1e] = '\0';
    local_d8[0x1f] = '\0';
    local_d8[0x20] = '\0';
    local_d8[0x21] = '\0';
    local_d8[0x22] = '\0';
    local_d8[0x23] = '\0';
    local_d8[0x24] = '\0';
    local_d8[0x25] = '\0';
    local_d8[0x26] = '\0';
    local_d8[0x27] = '\0';
    uVar10 = 0x13;
    for (lVar9 = -1; (cVar3 = (char)line_spill, 9 < line_spill || (1 < lVar9)); lVar9 = lVar9 + -1)
    {
      line_spill = (SUB168(SEXT816(-0x3333333333333333) * SEXT816(line_spill),8) + line_spill >> 3)
                   - (line_spill >> 0x3f);
      if (0x13 < uVar10) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      local_d8[uVar10 + 0x14] = cVar3 + (char)line_spill * -10 + '0';
      uVar10 = uVar10 - 1;
    }
    if (0x13 < uVar10) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    local_d8[uVar10 + 0x14] = cVar3 + '0';
    local_e0 = (runtime__type *)(p_Var12->len - uVar10);
    local_e8 = (runtime__type *)((long)local_e0 + 0x14);
    prVar7 = (runtime__type *)p_Var12->cap;
    local_30 = (uint8 *)(local_d8 + (uVar10 & (long)(uVar10 - 0x14) >> 0x3f) + 0x14);
    puVar8 = p_Var12->array;
    if (prVar7 < local_e8) {
      old_03.len = (int)local_30;
      old_03.array = local_e8;
      old_03.cap = (int)p_Var12;
      runtime_growslice((runtime__type *)&DAT_00225720,old_03,(int)prVar7);
      prVar7 = local_130;
      puVar8 = local_140;
    }
    local_30 = puVar8;
    runtime_memmove();
    buf_spill->len = (int)local_e8;
    buf_spill->cap = (int)prVar7;
    p_Var12 = buf_spill;
    if (runtime_writeBarrier._0_4_ == 0) {
      buf_spill->array = local_30;
      prVar4 = local_e8;
      puVar8 = local_30;
    }
    else {
      runtime_gcWriteBarrierDX();
      prVar4 = extraout_RAX_01;
      puVar8 = extraout_RDX_00;
    }
    prVar5 = (runtime__type *)((long)local_e0 + 0x16);
    if (prVar7 < prVar5) {
      old_04.len = (int)prVar7;
      old_04.array = &DAT_00225720;
      old_04.cap = (int)p_Var12;
      local_e8 = prVar5;
      runtime_growslice(prVar4,old_04,(int)prVar5);
      prVar7 = local_130;
      puVar8 = local_140;
      prVar5 = local_e8;
      p_Var12 = buf_spill;
    }
    (puVar8 + (long)local_e0 + 0x14)[0] = 0x3a;
    (puVar8 + (long)local_e0 + 0x14)[1] = 0x20;
    p_Var12->len = (int)prVar5;
    p_Var12->cap = (int)prVar7;
    if (runtime_writeBarrier._0_4_ == 0) {
      p_Var12->array = puVar8;
    }
    else {
      runtime_gcWriteBarrierDX();
    }
  }
  if (((uint)l_spill->flag >> 6 & 1) != 0) {
    local_e8 = (runtime__type *)(l_spill->prefix).len;
    local_e0 = (runtime__type *)((long)&local_e8->size + buf_spill->len);
    prVar7 = (runtime__type *)buf_spill->cap;
    puVar8 = buf_spill->array;
    if (prVar7 < local_e0) {
      old_00.len = (int)buf_spill;
      old_00.array = local_e8;
      old_00.cap = (int)prVar7;
      local_28 = (l_spill->prefix).str;
      runtime_growslice((runtime__type *)&DAT_00225720,old_00,(int)local_e0);
      prVar7 = local_130;
      puVar8 = local_140;
    }
    local_e8 = prVar7;
    local_30 = puVar8;
    runtime_memmove();
    buf_spill->len = (int)local_e0;
    buf_spill->cap = (int)local_e8;
    if (runtime_writeBarrier._0_4_ == 0) {
      buf_spill->array = local_30;
    }
    else {
      runtime_gcWriteBarrier();
    }
  }
  return;
}

