
/* WARNING: Removing unreachable block (ram,0x0055aaa6) */
/* WARNING: Removing unreachable block (ram,0x0055ab36) */
/* WARNING: Removing unreachable block (ram,0x0055ab29) */
/* WARNING: Removing unreachable block (ram,0x0055ab45) */
/* WARNING: Removing unreachable block (ram,0x0055a89e) */
/* WARNING: Removing unreachable block (ram,0x0055a3a8) */
/* WARNING: Removing unreachable block (ram,0x0055a436) */
/* WARNING: Removing unreachable block (ram,0x0055a429) */
/* WARNING: Removing unreachable block (ram,0x0055a445) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.loadTzinfoFromZip(string zipfile, string name, []uint8 ~r2,
   error ~r3) */

multireturn___uint8_error__conflict3 time_loadTzinfoFromZip(string zipfile,string name)

{
  undefined1 *puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 extraout_RAX;
  uint *puVar6;
  undefined8 extraout_RAX_00;
  undefined8 extraout_RAX_01;
  undefined8 extraout_RAX_02;
  undefined8 extraout_RAX_03;
  ulong uVar7;
  long lVar8;
  runtime__type *prVar10;
  undefined1 *puVar11;
  int iVar12;
  runtime_itab *in_RSI;
  runtime_itab *prVar13;
  runtime_itab *cap;
  runtime_itab *prVar14;
  uint *puVar15;
  ulong uVar16;
  uint8 *puVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  string a0;
  string a0_00;
  string a0_01;
  error eVar19;
  string sVar20;
  multireturn_int_error__conflict5 mVar21;
  string a1;
  string a1_00;
  string a1_01;
  __uint8 buf;
  __uint8 buf_00;
  __uint8 buf_01;
  __uint8 buf_02;
  multireturn___uint8_error__conflict3 mVar22;
  multireturn___uint8_error__conflict3 mVar23;
  multireturn___uint8_error__conflict3 mVar24;
  multireturn___uint8_error__conflict3 mVar25;
  multireturn___uint8_error__conflict3 mVar26;
  multireturn___uint8_error__conflict3 mVar27;
  string a2;
  string a3;
  string zipfile_spill;
  string name_spill;
  undefined1 *puStack0000000000000028;
  runtime_itab *prStack0000000000000030;
  runtime_itab *prStack0000000000000038;
  undefined **ppuStack0000000000000040;
  runtime_itab *prStack0000000000000048;
  uint *local_110;
  ulong local_108;
  runtime__type *local_100;
  int local_f8;
  runtime__type *local_e0;
  int local_d8;
  runtime_itab *local_a8;
  runtime__type *local_a0;
  runtime_itab *local_98;
  int local_88;
  int local_80;
  int local_70;
  long local_68;
  undefined1 *local_60;
  ulong local_58;
  undefined1 *local_50;
  runtime__type *local_48;
  runtime__type *local_38;
  runtime__type *local_30;
  uint *local_20;
  uint *local_18;
  undefined **local_10;
  long lVar9;
  
  prVar13 = (runtime_itab *)name.len;
  sVar20.len = zipfile.len;
                    /* Unresolved local var: uintptr fd@[???]
                       Unresolved local var: error err@[???]
                       Unresolved local var: []uint8 buf@[???]
                       Unresolved local var: uintptr ~R0@[???] */
  while (&local_a8 <= *(runtime_itab ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_10 = (undefined **)0x0;
  puStack0000000000000028 = (undefined1 *)0x0;
  prStack0000000000000030 = (runtime_itab *)0x0;
  prStack0000000000000038 = (runtime_itab *)0x0;
  ppuStack0000000000000040 = (undefined **)0x0;
  prStack0000000000000048 = (runtime_itab *)0x0;
                    /* Unresolved local var: int fd@[???]
                       Unresolved local var: error err@[???] */
  local_110 = (uint *)((ulong)local_110 & 0xffffffff00000000);
  sVar20.str = zipfile_spill.str;
  mVar21 = syscall_Open(sVar20,zipfile_spill.len,(uint32)prVar13);
  buf.array = mVar21.err.tab;
  if (local_100 == (runtime__type *)0x0) {
    prVar10 = (runtime__type *)0x0;
    iVar5 = 0;
  }
  else {
    local_108 = 0;
    iVar5 = local_f8;
    prVar10 = local_100;
  }
  if (prVar10 != (runtime__type *)0x0) {
    mVar23.~r2.len = (int)buf.array;
    mVar23.~r2.array = (uint8 *)iVar5;
    mVar23.~r2.cap = local_108;
    mVar23.~r3.data = in_RSI;
    mVar23.~r3.tab = prVar13;
    return mVar23;
  }
  local_10 = &PTR_time_closefd_002b3b48;
  local_58 = local_108;
  runtime_makeslice((runtime__type *)&DAT_00225720,(int)buf.array,local_108);
  local_18 = local_110;
  buf.len = local_108;
  buf.cap = (int)prVar13;
  uVar7 = local_108;
  eVar19 = time_preadn((uintptr)local_110,buf,(int)in_RSI);
  a0.str = eVar19.data;
  if ((local_100 != (runtime__type *)0x0) || (uVar7 = (ulong)*local_18, uVar7 != 0x6054b50)) {
    a0.len = uVar7;
    a1.len = (int)in_RSI;
    a1.str = (uint8 *)prVar13;
    sVar20 = runtime_concatstring2((runtime_tmpBuf *)zipfile_spill.len,a0,a1);
    mVar22.~r2.len = sVar20.len;
    local_48 = local_100;
    local_80 = local_f8;
    runtime_newobject(local_100);
    prVar13 = (runtime_itab *)&DAT_0029a0c4;
    DAT_0029a0cc = local_80;
    if (runtime_writeBarrier._0_4_ == 0) {
      DAT_0029a0c4 = local_48;
    }
    else {
      runtime_gcWriteBarrier();
    }
    puStack0000000000000028 = (undefined1 *)0x0;
    prStack0000000000000030 = (runtime_itab *)0x0;
    prStack0000000000000038 = (runtime_itab *)0x0;
    ppuStack0000000000000040 = &go_itab__errors_errorString_error;
    prStack0000000000000048 = prVar13;
    time_closefd(local_58);
    mVar22.~r2.array = (uint8 *)extraout_RAX;
    mVar22.~r2.cap = local_f8;
    mVar22.~r3.data = in_RSI;
    mVar22.~r3.tab = prVar13;
    return mVar22;
  }
  uVar2 = *(ushort *)((long)local_18 + 10);
  uVar3 = local_18[3];
  uVar4 = local_18[4];
  runtime_makeslice((runtime__type *)(ulong)uVar4,0x225720,(ulong)uVar2);
  local_18 = (uint *)&DAT_00000016;
  buf_00.array = (ulong)uVar4;
  buf_00.len = local_108;
  buf_00.cap = (int)prVar13;
  time_preadn(0x16,buf_00,(int)in_RSI);
  puVar11 = (undefined1 *)(ulong)uVar3;
  lVar8 = 0;
  puVar6 = local_18;
  while (a0_00.str = (uint8 *)(ulong)uVar2, lVar8 < (long)a0_00.str) {
    if ((long)puVar11 < 4) {
      in_RSI = (runtime_itab *)0x0;
    }
    else {
      in_RSI = (runtime_itab *)(ulong)*puVar6;
    }
    if (in_RSI != (runtime_itab *)0x2014b50) break;
    if (puVar11 < &DAT_0000000a) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    if ((long)(puVar11 + -10) < 2) {
      in_RSI = (runtime_itab *)0x0;
    }
    else {
      in_RSI = (runtime_itab *)
               (ulong)*(ushort *)((long)puVar6 + (-(long)(puVar11 + -10) >> 0x3f & 10U));
    }
    if (puVar11 < &DAT_00000018) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    if ((long)(puVar11 + -0x18) < 4) {
      prVar13 = (runtime_itab *)0x0;
    }
    else {
      prVar13 = (runtime_itab *)
                (ulong)*(uint *)((long)puVar6 + (-(long)(puVar11 + -0x18) >> 0x3f & 0x18U));
    }
    if (puVar11 < &DAT_0000001c) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    if ((long)(puVar11 + -0x1c) < 2) {
      cap = (runtime_itab *)0x0;
    }
    else {
      cap = (runtime_itab *)
            (ulong)*(ushort *)((long)puVar6 + (-(long)(puVar11 + -0x1c) >> 0x3f & 0x1cU));
    }
    if (puVar11 < &DAT_0000001e) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    if ((long)(puVar11 + -0x1e) < 2) {
      uVar7 = 0;
    }
    else {
      uVar7 = (ulong)*(ushort *)((long)puVar6 + (-(long)(puVar11 + -0x1e) >> 0x3f & 0x1eU));
    }
    if (puVar11 < &DAT_00000020) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    if ((long)(puVar11 + -0x20) < 2) {
      uVar16 = 0;
    }
    else {
      uVar16 = (ulong)*(ushort *)((long)puVar6 + (-(long)(puVar11 + -0x20) >> 0x3f & 0x20U));
    }
    if (puVar11 < (undefined1 *)0x2a) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    if ((long)(puVar11 + -0x2a) < 4) {
      uVar18 = 0;
    }
    else {
      uVar18 = (ulong)*(uint *)((long)puVar6 + (-(long)(puVar11 + -0x2a) >> 0x3f & 0x2aU));
    }
    puVar1 = (undefined1 *)((long)&cap[1]._type + 6);
    if (puVar11 < puVar1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAcap();
    }
    if (puVar1 < &DAT_0000002e) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    if (puVar11 < cap[1]._ + uVar16 + uVar7 + -6) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    puVar11 = puVar11 + (-0x2e - (long)(cap->_ + uVar16 + uVar7 + -0x14));
    puVar15 = (uint *)(((ulong)(cap[1]._ + uVar16 + uVar7 + -6) & -(long)puVar11 >> 0x3f) +
                      (long)puVar6);
    lVar9 = lVar8;
    puVar6 = puVar15;
    if ((runtime_itab *)name_spill.len == cap) {
      prVar14 = cap;
      puVar17 = (uint8 *)name_spill.len;
      uVar7 = uVar18;
      local_a8 = prVar13;
      local_98 = in_RSI;
      local_68 = lVar8;
      local_50 = puVar11;
      local_20 = puVar15;
      runtime_memequal();
      local_110._0_1_ = (byte)uVar3;
      lVar9 = local_68;
      puVar6 = local_20;
      puVar11 = local_50;
      if ((byte)local_110 != '\0') {
        if (local_98 != (runtime_itab *)0x0) {
          a0_00.len = lVar8;
          a1_00.len = (int)in_RSI;
          a1_00.str = (uint8 *)prVar13;
          a2.len = (int)puVar15;
          a2.str = (uint8 *)prVar14;
          a3.len = uVar7;
          a3.str = puVar17;
          sVar20 = runtime_concatstring4((runtime_tmpBuf *)zipfile_spill.len,a0_00,a1_00,a2,a3);
          mVar24.~r2.len = sVar20.len;
          local_38 = local_e0;
          local_88 = local_d8;
          runtime_newobject(local_e0);
          prVar13 = (runtime_itab *)0x2a0888;
                    /* WARNING: Read-only address (ram,0x002a0890) is written */
          s_unlock__lock_countsignal_receive_0029ff36[0x95a] = (undefined1)local_88;
          s_unlock__lock_countsignal_receive_0029ff36[0x95b] = local_88._1_1_;
          s_unlock__lock_countsignal_receive_0029ff36[0x95c] = local_88._2_1_;
          s_unlock__lock_countsignal_receive_0029ff36[0x95d] = local_88._3_1_;
          s_unlock__lock_countsignal_receive_0029ff36[0x95e] = local_88._4_1_;
          s_unlock__lock_countsignal_receive_0029ff36[0x95f] = local_88._5_1_;
          s_unlock__lock_countsignal_receive_0029ff36[0x960] = local_88._6_1_;
          s_unlock__lock_countsignal_receive_0029ff36[0x961] = local_88._7_1_;
          if (runtime_writeBarrier._0_4_ == 0) {
                    /* WARNING: Read-only address (ram,0x002a0888) is written */
            s_unlock__lock_countsignal_receive_0029ff36._2386_8_ = local_38;
          }
          else {
            runtime_gcWriteBarrier();
          }
          puStack0000000000000028 = (undefined1 *)0x0;
          prStack0000000000000030 = (runtime_itab *)0x0;
          prStack0000000000000038 = (runtime_itab *)0x0;
          ppuStack0000000000000040 = &go_itab__errors_errorString_error;
          prStack0000000000000048 = prVar13;
          time_closefd(local_58);
          mVar24.~r2.array = (uint8 *)extraout_RAX_00;
          mVar24.~r2.cap = local_d8;
          mVar24.~r3.data = in_RSI;
          mVar24.~r3.tab = prVar13;
          return mVar24;
        }
        local_60 = (undefined1 *)((long)cap->fun + 6);
        runtime_makeslice((runtime__type *)&DAT_00225720,(int)a0_00.str,(int)cap);
        puVar11 = local_60;
        buf_01.len = local_108;
        buf_01.array = (uint8 *)uVar18;
        buf_01.cap = (int)prVar13;
        local_18 = (uint *)(ulong)uVar3;
        time_preadn((uintptr)(ulong)uVar3,buf_01,(int)in_RSI);
        if ((long)local_60 < 4) {
          iVar12 = 0;
        }
        else {
          iVar12 = *local_18;
        }
        if (iVar12 == 0x4034b50) {
          if (local_60 < &DAT_00000008) {
                    /* WARNING: Subroutine does not return */
            runtime_panicSliceB();
          }
          if (cap->_ + 2 < (uint8 *)0x2) {
            in_RSI = (runtime_itab *)0x0;
          }
          else {
            in_RSI = (runtime_itab *)
                     (ulong)*(ushort *)((-(long)(cap->_ + 2) >> 0x3f & 8U) + (long)local_18);
          }
          if (in_RSI == local_98) {
            if (local_60 < &DAT_0000001a) {
                    /* WARNING: Subroutine does not return */
              runtime_panicSliceB();
            }
            puVar17 = (uint8 *)((long)&cap->inter + 4);
            if (puVar17 < (uint8 *)0x2) {
              in_RSI = (runtime_itab *)0x0;
            }
            else {
              in_RSI = (runtime_itab *)
                       (ulong)*(ushort *)((-(long)puVar17 >> 0x3f & 0x1aU) + (long)local_18);
            }
            if (in_RSI == cap) {
              if (local_60 < &DAT_0000001e) {
                    /* WARNING: Subroutine does not return */
                runtime_panicSliceB();
              }
              in_RSI = cap;
              if ((runtime_itab *)name_spill.len == cap) {
                runtime_memequal();
                local_110._0_1_ = (byte)puVar11;
                local_110._0_1_ = (byte)local_110 ^ 1;
              }
              else {
                local_110._0_1_ = 1;
              }
            }
            else {
              local_110._0_1_ = 1;
              name_spill.len = (int)local_98;
            }
          }
          else {
            local_110._0_1_ = 1;
            name_spill.len = (int)local_98;
          }
        }
        else {
          local_110._0_1_ = 1;
          name_spill.len = (int)prVar13;
        }
        if ((byte)local_110 != 0) {
          a0_01.len = (int)local_60;
          a0_01.str = (uint8 *)cap;
          a1_01.len = (int)in_RSI;
          a1_01.str = (uint8 *)name_spill.len;
          sVar20 = runtime_concatstring2((runtime_tmpBuf *)zipfile_spill.len,a0_01,a1_01);
          mVar26.~r2.len = sVar20.len;
          local_30 = local_100;
          local_70 = local_f8;
          runtime_newobject((runtime__type *)0x0);
          prVar13 = (runtime_itab *)&DAT_0029a0c4;
          DAT_0029a0cc = local_70;
          if (runtime_writeBarrier._0_4_ == 0) {
            DAT_0029a0c4 = local_30;
          }
          else {
            runtime_gcWriteBarrier();
          }
          puStack0000000000000028 = (undefined1 *)0x0;
          prStack0000000000000030 = (runtime_itab *)0x0;
          prStack0000000000000038 = (runtime_itab *)0x0;
          ppuStack0000000000000040 = &go_itab__errors_errorString_error;
          prStack0000000000000048 = prVar13;
          time_closefd(local_58);
          mVar26.~r2.array = (uint8 *)extraout_RAX_02;
          mVar26.~r2.cap = local_f8;
          mVar26.~r3.data = in_RSI;
          mVar26.~r3.tab = prVar13;
          return mVar26;
        }
        if (local_60 < &DAT_0000001c) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceB();
        }
        puVar17 = (uint8 *)((long)&cap->inter + 2);
        if (puVar17 < (uint8 *)0x2) {
          local_a0 = (runtime__type *)0x0;
        }
        else {
          local_a0 = (runtime__type *)
                     (ulong)*(ushort *)((-(long)puVar17 >> 0x3f & 0x1cU) + (long)local_18);
        }
        runtime_makeslice(local_a0,(int)cap,(int)local_a8);
        local_18 = (uint *)puVar11;
        buf_02.len = (int)local_a8;
        buf_02.array = (uint8 *)local_a0;
        buf_02.cap = name_spill.len;
        prVar13 = local_a8;
        eVar19 = time_preadn((uintptr)puVar11,buf_02,(int)in_RSI);
        mVar25.~r2.len = eVar19.data;
        puStack0000000000000028 = (undefined1 *)local_18;
        prStack0000000000000030 = local_a8;
        prStack0000000000000038 = local_a8;
        ppuStack0000000000000040 = (undefined **)0x0;
        prStack0000000000000048 = (runtime_itab *)0x0;
        time_closefd(local_58);
        mVar25.~r2.array = (uint8 *)extraout_RAX_01;
        mVar25.~r2.cap = (int)prVar13;
        mVar25.~r3.data = in_RSI;
        mVar25.~r3.tab = (runtime_itab *)name_spill.len;
        return mVar25;
      }
    }
                    /* Unresolved local var: int i@[???] */
    lVar8 = lVar9 + 1;
                    /* Unresolved local var: int fclen@[???]
                       Unresolved local var: int off@[???]
                       Unresolved local var: int meth@[???]
                       Unresolved local var: int size@[???]
                       Unresolved local var: int namelen@[???]
                       Unresolved local var: int xlen@[???]
                       Unresolved local var: []uint8 zname@[???]
                       Unresolved local var: int ~R0@[???] */
  }
  puStack0000000000000028 = (undefined1 *)0x0;
  prStack0000000000000030 = (runtime_itab *)0x0;
  prStack0000000000000038 = (runtime_itab *)0x0;
  ppuStack0000000000000040 = (undefined **)go_itab_syscall_Errno_error;
  prStack0000000000000048 = (runtime_itab *)&DAT_002b2e18;
  time_closefd(local_58);
  mVar27.~r2.len._0_2_ = uVar2;
  mVar27.~r2.array = (uint8 *)extraout_RAX_03;
  mVar27.~r2.len._2_6_ = 0;
  mVar27.~r2.cap = lVar8;
  mVar27.~r3.data = in_RSI;
  mVar27.~r3.tab = prVar13;
  return mVar27;
}

