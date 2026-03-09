
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.boundsError.Error(runtime.boundsError e, string ~r0) */

string runtime_boundsError_Error(void)

{
  uint8 uVar1;
  char cVar2;
  uint8 *puVar3;
  ulong uVar5;
  uint8 *n;
  uint8 *ptr;
  uint8 *cap;
  uint8 *puVar6;
  uint8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined7 *puVar10;
  uint8 *puVar11;
  long in_FS_OFFSET;
  runtime_slice old;
  runtime_slice old_00;
  runtime_slice old_01;
  runtime_slice old_02;
  runtime_slice old_03;
  string sVar12;
  runtime_boundsError e_spill;
  uint8 *local_120;
  undefined7 *local_110;
  long local_108;
  uint8 *local_100;
  undefined1 local_b8 [3];
  char acStack_b5 [13];
  undefined8 uStack_a8;
  char local_a0 [20];
  undefined7 local_8c;
  undefined1 uStack_85;
  undefined7 uStack_84;
  char *local_28;
  char *local_20;
  uint8 *local_18;
  undefined7 *local_10;
  uint8 *puVar4;
  
                    /* Unresolved local var: string fmt@[???]
                       Unresolved local var: []uint8 b@[???]
                       Unresolved local var: uint8 * ~R0.ptr@[???] */
  while (local_b8 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar9 = (ulong)e_spill.code;
  if (8 < uVar9) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  cap = runtime_boundsErrorFmts[uVar9].str;
  ptr = (uint8 *)runtime_boundsErrorFmts[uVar9].len;
  uVar8 = e_spill._16_8_ & 0xff;
  if ((e_spill.signed) && (e_spill.x < 0)) {
    if (7 < e_spill.code) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    cap = runtime_boundsNegErrorFmts[uVar9].str;
    ptr = (uint8 *)runtime_boundsNegErrorFmts[uVar9].len;
  }
                    /* Unresolved local var: int i@[???] */
  local_8c = 0;
  uStack_85 = 0;
  uVar9 = e_spill.x;
  local_18 = cap;
  FUN_0051a18b(&uStack_a8);
  local_8c = 0x656d69746e7572;
  uStack_85 = 0x20;
  uStack_84 = 0x203a726f727265;
  puVar3 = (uint8 *)0x0;
  n = &DAT_0000000f;
  puVar10 = &local_8c;
  puVar6 = (uint8 *)0x64;
  do {
    if ((long)ptr <= (long)puVar3) {
      sVar12 = runtime_slicebytetostring((runtime_tmpBuf *)puVar3,ptr,(int)n);
      sVar12.str = local_120;
      return sVar12;
    }
    if (ptr <= puVar3) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    uVar1 = puVar3[(long)cap];
    puVar7 = puVar6;
    if (uVar1 == 0x25) {
      puVar4 = puVar3 + 1;
      if (ptr <= puVar4) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if (puVar3[(long)(cap + 1)] == 0x78) {
        if (((char)uVar8 != '\0') && ((long)uVar9 < 0)) {
          puVar3 = n + 1;
          if (puVar6 < puVar3) {
            old_00.len = (int)n;
            old_00.array = ptr;
            old_00.cap = (int)puVar6;
            runtime_growslice((runtime__type *)&DAT_00225720,old_00,(int)cap);
            puVar3 = (uint8 *)(local_108 + 1);
            cap = local_18;
            puVar7 = local_100;
            uVar9 = e_spill.x;
            puVar10 = local_110;
            local_120 = puVar6;
          }
          *(uint8 *)((long)puVar10 + (long)n) = 0x2d;
          uVar9 = -uVar9;
          puVar6 = puVar7;
          n = puVar3;
        }
        local_a0[0] = '\0';
        local_a0[1] = '\0';
        local_a0[2] = '\0';
        local_a0[3] = '\0';
        local_a0[4] = '\0';
        local_a0[5] = '\0';
        local_a0[6] = '\0';
        local_a0[7] = '\0';
        local_a0[8] = '\0';
        local_a0[9] = '\0';
        local_a0[10] = '\0';
        local_a0[0xb] = '\0';
        local_a0[0xc] = '\0';
        local_a0[0xd] = '\0';
        local_a0[0xe] = '\0';
        local_a0[0xf] = '\0';
        local_a0[0x10] = '\0';
        local_a0[0x11] = '\0';
        local_a0[0x12] = '\0';
        local_a0[0x13] = '\0';
                    /* Unresolved local var: int i@[???] */
        uVar5 = 0x13;
        while (cVar2 = (char)uVar9, 9 < uVar9) {
          uVar9 = uVar9 / 10;
          if (0x13 < uVar5) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          local_a0[uVar5] = cVar2 + (char)uVar9 * -10 + '0';
          uVar5 = uVar5 - 1;
        }
        if (0x13 < uVar5) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        local_a0[uVar5] = cVar2 + '0';
        puVar7 = puVar6;
        if (puVar6 < n + (0x14 - uVar5)) {
          old_03.len = (int)n;
          old_03.array = ptr;
          old_03.cap = (int)puVar6;
          local_20 = local_a0 + (uVar5 & (long)(uVar5 - 0x14) >> 0x3f);
          runtime_growslice((runtime__type *)&DAT_00225720,old_03,(int)cap);
          puVar7 = local_100;
          puVar10 = local_110;
          local_120 = puVar6;
        }
        local_10 = puVar10;
        runtime_memmove();
        uVar8 = e_spill._16_8_ & 0xff;
        cap = local_18;
        uVar9 = e_spill.x;
        puVar10 = local_10;
        n = n + (0x14 - uVar5);
      }
      else if (puVar3[(long)(cap + 1)] == 0x79) {
        uVar9 = e_spill.y;
        if (e_spill.y < 0) {
          puVar3 = n + 1;
          if (puVar6 < puVar3) {
            old_01.len = (int)n;
            old_01.array = ptr;
            old_01.cap = (int)puVar6;
            runtime_growslice((runtime__type *)&DAT_00225720,old_01,(int)cap);
            puVar3 = (uint8 *)(local_108 + 1);
            cap = local_18;
            puVar7 = local_100;
            puVar10 = local_110;
            local_120 = puVar6;
          }
          *(uint8 *)((long)puVar10 + (long)n) = 0x2d;
          uVar9 = -e_spill.y;
          puVar6 = puVar7;
          n = puVar3;
        }
        acStack_b5[1] = '\0';
        acStack_b5[2] = '\0';
        acStack_b5[3] = '\0';
        acStack_b5[4] = '\0';
        acStack_b5[5] = '\0';
        acStack_b5[6] = '\0';
        acStack_b5[7] = '\0';
        acStack_b5[8] = '\0';
        acStack_b5[9] = '\0';
        acStack_b5[10] = '\0';
        acStack_b5[0xb] = '\0';
        acStack_b5[0xc] = '\0';
        uStack_a8 = 0;
        uVar5 = 0x13;
                    /* Unresolved local var: int i@[???] */
        while (cVar2 = (char)uVar9, 9 < uVar9) {
          uVar9 = uVar9 / 10;
          if (0x13 < uVar5) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          acStack_b5[uVar5 + 1] = cVar2 + (char)uVar9 * -10 + '0';
          uVar5 = uVar5 - 1;
        }
        if (0x13 < uVar5) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        acStack_b5[uVar5 + 1] = cVar2 + '0';
        puVar7 = puVar6;
        if (puVar6 < n + (0x14 - uVar5)) {
          old_02.len = (int)n;
          old_02.array = ptr;
          old_02.cap = (int)puVar6;
          local_28 = acStack_b5 + (uVar5 & (long)(uVar5 - 0x14) >> 0x3f) + 1;
          runtime_growslice((runtime__type *)&DAT_00225720,old_02,(int)cap);
          puVar7 = local_100;
          puVar10 = local_110;
          local_120 = puVar6;
        }
        local_10 = puVar10;
        runtime_memmove();
        uVar8 = e_spill._16_8_ & 0xff;
        cap = local_18;
        uVar9 = e_spill.x;
        puVar10 = local_10;
        n = n + (0x14 - uVar5);
      }
    }
    else {
      puVar11 = n + 1;
      if (puVar6 < puVar11) {
        old.len = (int)n;
        old.array = ptr;
        old.cap = (int)puVar6;
        runtime_growslice((runtime__type *)&DAT_00225720,old,(int)cap);
        puVar11 = (uint8 *)(local_108 + 1);
                    /* Unresolved local var: uint8[20] buf@[???] */
        uVar8 = e_spill._16_8_ & 0xff;
        cap = local_18;
        puVar7 = local_100;
        uVar9 = e_spill.x;
        puVar10 = local_110;
        local_120 = puVar6;
      }
      *(uint8 *)((long)puVar10 + (long)n) = uVar1;
      puVar4 = puVar3;
      n = puVar11;
    }
    puVar3 = puVar4 + 1;
                    /* Unresolved local var: uint8 c@[???] */
    puVar6 = puVar7;
  } while( true );
}

