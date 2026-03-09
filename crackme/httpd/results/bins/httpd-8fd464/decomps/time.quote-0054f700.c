
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.quote(string s, string ~r1) */

string time_quote(string s)

{
  runtime__type *prVar1;
  undefined1 uVar2;
  runtime__type *prVar3;
  runtime__type *prVar5;
  runtime__type *prVar6;
  runtime__type *prVar7;
  runtime__type *prVar8;
  runtime__type *prVar9;
  uint uVar10;
  long lVar11;
  runtime__type *prVar12;
  long in_FS_OFFSET;
  string s_00;
  string sVar13;
  runtime_slice rVar14;
  runtime_slice old;
  runtime_slice old_00;
  runtime_slice old_01;
  runtime_slice old_02;
  runtime_slice old_03;
  string s_spill;
  runtime__type *local_a8;
  runtime__type *local_a0;
  runtime__type *local_98;
  runtime__type *local_90;
  long local_88;
  runtime__type *local_80;
  runtime__type *local_38;
  runtime__type *local_30;
  runtime__type *local_28;
  runtime__type *local_20;
  runtime__type *local_18;
  runtime__type *local_10;
  runtime__type *prVar4;
  
                    /* Unresolved local var: []uint8 buf@[???] */
  while (&local_38 <= *(runtime__type ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  prVar5 = (runtime__type *)(s_spill.len + 2);
  runtime_makeslice((runtime__type *)&DAT_00225720,s.len,s_spill.len);
  *(undefined1 *)&local_a0->size = 0x22;
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int32 c@[???] */
  local_20 = local_a0;
  prVar3 = (runtime__type *)0x0;
  prVar9 = (runtime__type *)0x1;
  local_a8 = prVar5;
  do {
    while( true ) {
      prVar8 = prVar3;
      if (s_spill.len <= (long)prVar8) {
        prVar3 = (runtime__type *)((long)&prVar9->size + 1);
        prVar4 = prVar5;
        if (prVar5 < prVar3) {
          rVar14.len = (int)prVar3;
          rVar14.array = prVar5;
          rVar14.cap = (int)prVar9;
          rVar14 = runtime_growslice(local_20,rVar14,(int)prVar8);
          prVar4 = (runtime__type *)rVar14.len;
          prVar3 = (runtime__type *)(local_88 + 1);
          local_20 = local_90;
          local_a0 = prVar5;
        }
        *(undefined1 *)((long)&prVar9->size + (long)&local_20->size) = 0x22;
        sVar13 = runtime_slicebytetostring((runtime_tmpBuf *)local_20,(uint8 *)prVar4,(int)prVar3);
        sVar13.str = (uint8 *)local_a0;
        return sVar13;
      }
      if (s_spill.str[(long)prVar8] < 0x80) {
        local_28 = (runtime__type *)((long)&prVar8->size + 1);
        uVar10 = (uint)s_spill.str[(long)prVar8];
      }
      else {
        s_00.len = (int)prVar5;
        s_00.str = (uint8 *)local_20;
        runtime_decoderune(s_00,(int)s_spill.str);
                    /* Unresolved local var: int width@[???] */
        local_28 = local_98;
        uVar10 = (uint)local_a0;
        local_a8 = prVar8;
      }
      if (0x5f < uVar10 - 0x20) break;
      if ((uVar10 == 0x22) || (prVar3 = prVar9, uVar10 == 0x5c)) {
        prVar8 = (runtime__type *)((long)&prVar9->size + 1);
        prVar4 = prVar5;
        prVar3 = prVar8;
        if (prVar5 < prVar8) {
          old.len = (int)&DAT_00225720;
          old.array = prVar5;
          old.cap = (int)prVar9;
          runtime_growslice(local_20,old,(int)prVar8);
          prVar3 = (runtime__type *)(local_88 + 1);
          local_20 = local_90;
          prVar4 = local_80;
          local_a8 = prVar9;
          local_a0 = prVar5;
          local_98 = prVar8;
        }
        *(undefined1 *)((long)&prVar9->size + (long)&local_20->size) = 0x5c;
        prVar5 = prVar4;
      }
      local_10 = local_20;
      runtime_intstring((uint8 (*) [4])local_20,(int64)prVar5);
      prVar8 = (runtime__type *)((long)&prVar3->size + (long)&local_a0->size);
      prVar4 = local_a0;
      prVar6 = prVar5;
      local_30 = prVar8;
      if (prVar5 < prVar8) {
        local_18 = local_a8;
        local_38 = local_a0;
        old_00.len = (int)prVar3;
        old_00.array = local_10;
        old_00.cap = (int)prVar9;
        runtime_growslice((runtime__type *)&DAT_00225720,old_00,(int)prVar5);
        prVar4 = local_38;
        prVar6 = local_80;
        local_10 = local_90;
        local_a0 = prVar5;
        local_98 = prVar8;
      }
      prVar5 = prVar6;
      runtime_memmove();
      local_20 = local_10;
      prVar3 = local_28;
      prVar9 = local_30;
      local_a8 = prVar4;
    }
    if (uVar10 == 0xfffd) {
      if ((long)((long)&prVar8->size + 2) < s_spill.len) {
        prVar3 = (runtime__type *)((long)&prVar8->size + 3);
        if ((ulong)s_spill.len < prVar3) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceAlen();
        }
        if (prVar3 < prVar8) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceB();
        }
        if ((*(short *)(s_spill.str + (long)prVar8) == -0x4011) &&
           ((s_spill.str + 2)[(long)prVar8] == 0xbd)) {
          prVar4 = (runtime__type *)0x3;
          goto LAB_0054f8e0;
        }
      }
      prVar4 = (runtime__type *)0x1;
    }
    else {
      runtime_intstring((uint8 (*) [4])(long)(int)uVar10,(int64)prVar5);
                    /* Unresolved local var: int j@[???] */
      prVar4 = local_a0;
    }
LAB_0054f8e0:
    for (lVar11 = 0; prVar3 = local_28, lVar11 < (long)prVar4; lVar11 = lVar11 + 1) {
      prVar3 = (runtime__type *)((long)&prVar9->size + 2);
      prVar6 = prVar5;
      if (prVar5 < prVar3) {
        old_01.len = (int)&DAT_00225720;
        old_01.array = prVar5;
        old_01.cap = (int)prVar9;
        runtime_growslice(local_20,old_01,(int)prVar8);
        local_20 = local_90;
        prVar6 = local_80;
        local_a8 = prVar9;
        local_a0 = prVar5;
        local_98 = prVar3;
      }
      *(undefined2 *)((long)&prVar9->size + (long)&local_20->size) = 0x785c;
      prVar5 = (runtime__type *)((long)&prVar8->size + lVar11);
      if ((ulong)s_spill.len <= prVar5) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      prVar1 = (runtime__type *)((long)&prVar9->size + 3);
      uVar2 = (&DAT_002992b5)[s_spill.str[(long)prVar5] >> 4];
      prVar7 = prVar6;
      prVar12 = prVar1;
      if (prVar6 < prVar1) {
        old_02.len = (int)&DAT_00225720;
        old_02.array = prVar6;
        old_02.cap = (int)prVar9;
        local_30 = prVar5;
        runtime_growslice(local_20,old_02,(int)prVar8);
        prVar12 = (runtime__type *)(local_88 + 1);
        local_20 = local_90;
        prVar7 = local_80;
        prVar5 = local_30;
        local_a8 = prVar3;
        local_a0 = prVar6;
        local_98 = prVar1;
      }
      ((undefined1 *)((long)&prVar9->size + 2))[(long)local_20] = uVar2;
      prVar3 = (runtime__type *)((long)&prVar12->size + 1);
      uVar2 = (&DAT_002992b5)[s_spill.str[(long)prVar5] & 0xf];
      prVar5 = prVar7;
      prVar9 = prVar3;
      if (prVar7 < prVar3) {
        old_03.len = (int)&DAT_00225720;
        old_03.array = prVar7;
        old_03.cap = (int)prVar3;
        runtime_growslice(local_20,old_03,(int)prVar8);
        prVar9 = (runtime__type *)(local_88 + 1);
        local_20 = local_90;
        prVar5 = local_80;
        local_a8 = prVar12;
        local_a0 = prVar7;
        local_98 = prVar3;
      }
      *(undefined1 *)((long)&prVar12->size + (long)&local_20->size) = uVar2;
    }
  } while( true );
}

