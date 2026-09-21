
/* WARNING: Unknown calling convention */

void runtime_doInit(runtime_initTask *t)

{
  uint64 uVar1;
  ulong uVar2;
  uint64 uVar3;
  ulong uVar4;
  uintptr uVar5;
  long lVar6;
  int unaff_RBX;
  uint64 uVar7;
  uintptr *ns;
  long in_FS_OFFSET;
  runtime_funcInfo rVar8;
  string sVar9;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  string s_05;
  string s_06;
  string s_07;
  string s_08;
  string s_09;
  __uint8 _Var10;
  __uint8 buf;
  runtime_initTask *t_spill;
  uintptr local_148;
  runtime__func *local_140;
  uint8 *local_130;
  runtime_tmpBuf *local_128;
  int local_120;
  uint64 local_c8;
  undefined8 local_c0;
  uint8 local_b8 [152];
  uintptr *local_20;
  long local_10;
  
  while (&local_c8 <= *(uint64 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (t_spill->state == 1) {
    sVar9.len = unaff_RBX;
    sVar9.str = &DAT_002a976f;
                    /* WARNING: Subroutine does not return */
    runtime_throw(sVar9);
  }
  if (t_spill->state == 2) {
    return;
  }
                    /* Unresolved local var: int64 start@[???]
                       Unresolved local var: void * firstFunc@[???]
                       Unresolved local var: runtime.tracestat before@[???]
                       Unresolved local var: void * ~R0@[???] */
  t_spill->state = 1;
                    /* Unresolved local var: uintptr i@[???] */
  for (uVar2 = 0; uVar2 < t_spill->ndeps; uVar2 = uVar2 + 1) {
                    /* Unresolved local var: runtime.initTask * t2@[???] */
    local_148 = (&t_spill[1].state)[uVar2];
    runtime_doInit(t_spill);
  }
  if (t_spill->nfns != 0) {
    if (runtime_inittrace.active == false) {
      uVar3 = 0;
      uVar5 = 0;
      uVar7 = 0;
    }
    else {
      runtime_nanotime1();
                    /* Unresolved local var: int64 end@[???]
                       Unresolved local var: string pkg@[???]
                       Unresolved local var: uint8[24] sbuf@[???]
                       Unresolved local var: int64 ~R0@[???] */
      uVar3 = runtime_inittrace.bytes;
      uVar5 = local_148;
      uVar7 = runtime_inittrace.allocs;
    }
    local_c0 = t_spill->ndeps;
    local_20 = &t_spill[1].state + local_c0;
                    /* Unresolved local var: uintptr i@[???] */
    for (uVar2 = 0; uVar2 < t_spill->nfns; uVar2 = uVar2 + 1) {
      (*(code *)local_20[uVar2])(local_20,local_c0,local_20 + uVar2,uVar3);
    }
    if (runtime_inittrace.active != false) {
      ns = local_20;
      runtime_nanotime1();
      uVar1 = runtime_inittrace.bytes;
      local_c8 = runtime_inittrace.allocs;
      rVar8 = runtime_findfunc(runtime_inittrace.allocs);
      rVar8._func = local_140;
      sVar9 = runtime_funcpkgpath(rVar8);
      s.len = sVar9.len;
      local_b8[0] = 0;
      local_b8[1] = 0;
      local_b8[2] = 0;
      local_b8[3] = 0;
      local_b8[4] = 0;
      local_b8[5] = 0;
      local_b8[6] = 0;
      local_b8[7] = 0;
      local_b8[8] = 0;
      local_b8[9] = 0;
      local_b8[10] = 0;
      local_b8[0xb] = 0;
      local_b8[0xc] = 0;
      local_b8[0xd] = 0;
      local_b8[0xe] = 0;
      local_b8[0xf] = 0;
      local_b8[0x10] = 0;
      local_b8[0x11] = 0;
      local_b8[0x12] = 0;
      local_b8[0x13] = 0;
      local_b8[0x14] = 0;
      local_b8[0x15] = 0;
      local_b8[0x16] = 0;
      local_b8[0x17] = 0;
      runtime_printlock();
      s.str = &DAT_00288e53;
      runtime_printstring(s);
      s_00.len = s.len;
      s_00.str = local_130;
      runtime_printstring(s_00);
      s_01.len = s.len;
      s_01.str = (uint8 *)((long)&DAT_0028776c + 3);
      runtime_printstring(s_01);
      runtime_printunlock();
      lVar6 = uVar5 - runtime_runtimeInitTime;
      _Var10.len = s.len;
      _Var10.array = (uint8 *)runtime_runtimeInitTime;
      _Var10.cap = (int)local_b8;
      _Var10 = runtime_fmtNSAsMS(_Var10,(uint64)ns);
      sVar9 = runtime_slicebytetostring(local_128,(uint8 *)_Var10.len,local_120);
      s_02.len = sVar9.len;
      local_10 = lVar6;
      runtime_printlock();
      s_02.str = *local_128;
      runtime_printstring(s_02);
      s_03.len = s_02.len;
      s_03.str = &DAT_002888fe;
      runtime_printstring(s_03);
      runtime_printunlock();
      buf.array = local_148 - uVar5;
      buf.len = s_02.len;
      buf.cap = uVar5;
      _Var10 = runtime_fmtNSAsMS(buf,(uint64)ns);
      sVar9 = runtime_slicebytetostring(local_128,(uint8 *)_Var10.len,local_120);
      s_04.len = (uint8 *)sVar9.len;
      local_10 = buf.array;
      runtime_printlock();
      s_04.str = *local_128;
      runtime_printstring(s_04);
      s_05.len = (int)s_04.len;
      s_05.str = &DAT_0029093d;
      runtime_printstring(s_05);
      runtime_printunlock();
                    /* Unresolved local var: int i@[???] */
      uVar4 = 0x17;
      uVar2 = uVar1 - uVar3;
      while (9 < uVar2) {
        if (0x17 < uVar4) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        s_04.len = (uint8 *)(uVar2 % 10 + 0x30);
        local_b8[uVar4] = (uint8)s_04.len;
        uVar4 = uVar4 - 1;
        uVar2 = uVar2 / 10;
      }
      if (0x17 < uVar4) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      local_b8[uVar4] = (char)uVar2 + 0x30;
      uVar4 = uVar4 & (long)(uVar4 - 0x18) >> 0x3f;
      sVar9 = runtime_slicebytetostring((runtime_tmpBuf *)(local_b8 + uVar4),s_04.len,uVar4);
      s_06.len = (uint8 *)sVar9.len;
      local_10 = buf.array;
      runtime_printlock();
      s_06.str = *local_128;
      runtime_printstring(s_06);
      s_07.len = (int)s_06.len;
      s_07.str = &DAT_0028b84a;
      runtime_printstring(s_07);
      runtime_printunlock();
      uVar4 = 0x17;
      uVar2 = local_c8 - uVar7;
                    /* Unresolved local var: int i@[???] */
      while (9 < uVar2) {
        if (0x17 < uVar4) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        s_06.len = (uint8 *)(uVar2 % 10 + 0x30);
        local_b8[uVar4] = (uint8)s_06.len;
        uVar4 = uVar4 - 1;
        uVar2 = uVar2 / 10;
      }
      if (0x17 < uVar4) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      local_b8[uVar4] = (char)uVar2 + 0x30;
      uVar4 = uVar4 & (long)(uVar4 - 0x18) >> 0x3f;
      sVar9 = runtime_slicebytetostring((runtime_tmpBuf *)(local_b8 + uVar4),s_06.len,uVar4);
      s_08.len = sVar9.len;
      local_10 = buf.array;
      runtime_printlock();
      s_08.str = *local_128;
      runtime_printstring(s_08);
      s_09.len = s_08.len;
      s_09.str = &DAT_0028a3c8;
      runtime_printstring(s_09);
      runtime_printunlock();
      runtime_printlock();
      runtime_printnl();
      runtime_printunlock();
    }
    t_spill->state = 2;
    return;
  }
  t_spill->state = 2;
  return;
}

