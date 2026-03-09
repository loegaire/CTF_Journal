
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_panicwrap(void)

{
  uint8 *puVar1;
  runtime_tmpBuf *pauVar2;
  int iVar3;
  uint8 *puVar4;
  uint8 *in_RSI;
  uint8 *puVar5;
  uint8 *in_RDI;
  undefined1 *puVar6;
  long in_FS_OFFSET;
  runtime_funcInfo rVar7;
  string sVar8;
  string s;
  string s_00;
  string val;
  interface___ e;
  string s_01;
  string s_02;
  string a0;
  string a0_00;
  string a0_01;
  string a1;
  string a1_00;
  string a1_01;
  string a1_02;
  __string a;
  uintptr unaff_retaddr;
  runtime__func *local_130;
  uint8 *local_128;
  uint8 *local_120;
  uint8 *local_118;
  uint8 *local_110;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  uint8 *local_a8;
  uint8 *local_a0;
  undefined *local_98;
  uint8 local_90 [8];
  uint8 *local_88;
  uint8 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  uint8 *local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  uint8 *local_48;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  uint8 *local_28;
  long local_20;
  undefined *local_18;
  undefined8 local_10;
  
                    /* Unresolved local var: uintptr pc@[???]
                       Unresolved local var: int i@[???]
                       Unresolved local var: string name@[???]
                       Unresolved local var: string pkg@[???]
                       Unresolved local var: string typ@[???]
                       Unresolved local var: string meth@[???] */
  while (local_b8 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  rVar7 = runtime_findfunc(unaff_retaddr);
  rVar7._func = local_130;
  sVar8 = runtime_funcname(rVar7);
  sVar8.str = (uint8 *)sVar8.len;
  local_a8 = local_128;
  pauVar2 = (runtime_tmpBuf *)local_120;
  internal_bytealg_IndexByteString();
  if ((long)local_120 < 0) {
    sVar8.len = (int)pauVar2;
    a1_02.len = (int)in_RSI;
    a1_02.str = in_RDI;
    sVar8 = runtime_concatstring2((runtime_tmpBuf *)local_120,sVar8,a1_02);
    s_02.len = sVar8.len;
    s_02.str = local_110;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_02);
  }
  puVar1 = local_120 + -1;
  if (local_120 < puVar1) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceAlen();
  }
  puVar4 = local_120 + 2;
  if ((long)puVar4 < (long)local_120) {
    if (local_120 < puVar4) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAlen();
    }
    if (puVar4 < puVar1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    in_RDI = (uint8 *)(ulong)CONCAT11(local_120[(long)local_a8],(local_120 + -1)[(long)local_a8]);
    in_RSI = local_a8;
    if ((CONCAT11(local_120[(long)local_a8],(local_120 + -1)[(long)local_a8]) == 0x282e) &&
       (in_RDI = (uint8 *)(ulong)local_a8[(long)(local_120 + 1)],
       local_a8[(long)(local_120 + 1)] == 0x2a)) {
      iVar3 = -2;
      local_a0 = local_a8;
      puVar5 = local_a8;
      internal_bytealg_IndexByteString();
      if ((long)local_120 < 0) {
        a0_01.len = iVar3;
        a0_01.str = puVar4;
        a1_01.len = (int)puVar5;
        a1_01.str = in_RDI;
        sVar8 = runtime_concatstring2((runtime_tmpBuf *)0xfffffffffffffffe,a0_01,a1_01);
        s_01.len = sVar8.len;
        s_01.str = local_110;
                    /* WARNING: Subroutine does not return */
        runtime_throw(s_01);
      }
      pauVar2 = (runtime_tmpBuf *)(local_120 + 2);
      if (-3 < (long)pauVar2) {
LAB_004b965b:
        a0_00.len = (int)pauVar2;
        a0_00.str = puVar4;
        a1_00.len = (int)puVar5;
        a1_00.str = in_RDI;
        sVar8 = runtime_concatstring2((runtime_tmpBuf *)local_a0,a0_00,a1_00);
        s_00.len = sVar8.len;
        s_00.str = local_110;
                    /* WARNING: Subroutine does not return */
        runtime_throw(s_00);
      }
      if ((runtime_tmpBuf *)0xfffffffffffffffe < pauVar2) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAlen();
      }
      if (local_120 <= pauVar2) {
        puVar5 = (uint8 *)(ulong)*(ushort *)(local_a0 + (long)local_120);
        puVar4 = local_a0;
        if (*(ushort *)(local_a0 + (long)local_120) != 0x2e29) goto LAB_004b965b;
        puVar6 = local_c8;
        local_60 = FUN_0051a179();
        local_98 = &DAT_00296361;
        local_90[0] = 0xd;
        local_90[1] = 0;
        local_90[2] = 0;
        local_90[3] = 0;
        local_90[4] = 0;
        local_90[5] = 0;
        local_90[6] = 0;
        local_90[7] = 0;
        local_88 = local_a8;
        local_78 = 0x287744;
        local_70 = 1;
        local_68 = local_a0;
        local_58 = 0x287744;
        local_50 = 1;
        local_40 = -4 - local_60;
        local_48 = local_a0 + (-local_40 >> 0x3f & (ulong)pauVar2);
        local_38 = &DAT_0029ae31;
        local_30 = 0x13;
        local_28 = local_a0;
        local_18 = &DAT_0028b8b2;
        local_10 = 8;
        a.len = (int)&DAT_0029ae31;
        a.array = (string *)local_a0;
        a.cap = (int)puVar6;
        local_80 = puVar1;
        local_20 = local_60;
        sVar8 = runtime_concatstrings((runtime_tmpBuf *)&local_98,a);
        val.len = (void *)sVar8.len;
        val.str = local_118;
        runtime_convTstring(val);
        e.data = val.len;
        e._type = (runtime__type *)&DAT_00000009;
        runtime_gopanic(e);
      }
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
  }
  a0.len = (int)puVar1;
  a0.str = puVar4;
  a1.len = (int)in_RSI;
  a1.str = in_RDI;
  sVar8 = runtime_concatstring2((runtime_tmpBuf *)local_a8,a0,a1);
  s.len = sVar8.len;
  s.str = local_110;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}

