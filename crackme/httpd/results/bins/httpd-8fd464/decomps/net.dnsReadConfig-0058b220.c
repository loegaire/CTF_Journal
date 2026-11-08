
/* WARNING: Removing unreachable block (ram,0x0058b87f) */
/* WARNING: Removing unreachable block (ram,0x0058b8b2) */
/* WARNING: Removing unreachable block (ram,0x0058b95f) */
/* WARNING: Removing unreachable block (ram,0x0058b8ed) */
/* WARNING: Removing unreachable block (ram,0x0058b9ba) */
/* WARNING: Removing unreachable block (ram,0x0058b9d6) */
/* WARNING: Removing unreachable block (ram,0x0058ba30) */
/* WARNING: Removing unreachable block (ram,0x0058ba2b) */
/* WARNING: Removing unreachable block (ram,0x0058ba35) */
/* WARNING: Removing unreachable block (ram,0x0058ba4b) */
/* WARNING: Removing unreachable block (ram,0x0058ba72) */
/* WARNING: Removing unreachable block (ram,0x0058ba69) */
/* WARNING: Removing unreachable block (ram,0x0058b8a5) */
/* WARNING: Removing unreachable block (ram,0x0058b762) */
/* WARNING: Removing unreachable block (ram,0x0058b479) */
/* WARNING: Removing unreachable block (ram,0x0058b4c0) */
/* WARNING: Removing unreachable block (ram,0x0058b4b7) */
/* WARNING: Removing unreachable block (ram,0x0058b4c5) */
/* WARNING: Removing unreachable block (ram,0x0058b4f7) */
/* WARNING: Removing unreachable block (ram,0x0058b4f1) */
/* WARNING: Removing unreachable block (ram,0x0058b505) */
/* WARNING: Removing unreachable block (ram,0x0058b528) */
/* WARNING: Removing unreachable block (ram,0x0058b51a) */
/* WARNING: Removing unreachable block (ram,0x0058b539) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.dnsReadConfig(string filename, net.dnsConfig * ~r1) */

net_dnsConfig * net_dnsReadConfig(string filename)

{
  byte bVar1;
  net_dnsConfig *pnVar2;
  __string *p_Var3;
  int iVar4;
  char cVar5;
  net_dnsConfig *extraout_RAX;
  net_dnsConfig *extraout_RAX_00;
  net_dnsConfig *pnVar6;
  net_dnsConfig *extraout_RAX_01;
  net_dnsConfig *pnVar7;
  net_dnsConfig *pnVar8;
  net_dnsConfig *pnVar9;
  net_dnsConfig *pnVar10;
  net_dnsConfig *pnVar11;
  uint8 *extraout_RDX;
  uint8 *puVar12;
  uint8 *extraout_RDX_00;
  undefined8 *puVar13;
  int iVar14;
  string *psVar15;
  long lVar16;
  long lVar17;
  net_dnsConfig *in_R8;
  net_dnsConfig *in_R9;
  uint8 *in_R10;
  net_dnsConfig *in_R11;
  long in_FS_OFFSET;
  string a1;
  string a1_00;
  string a1_01;
  string name;
  string s;
  string s_00;
  string a0;
  string a0_00;
  string a0_01;
  string t;
  net_IP nVar18;
  runtime_slice old;
  string a2;
  string a3;
  multireturn_io_fs_FileInfo_error__conflict mVar19;
  multireturn_string_bool__conflict4 mVar20;
  string filename_spill;
  undefined8 uStack0000000000000018;
  net_dnsConfig *local_130;
  net_dnsConfig *local_128;
  net_dnsConfig *local_120;
  net_dnsConfig *local_118;
  net_dnsConfig *local_110;
  net_dnsConfig *local_108;
  net_dnsConfig *local_100;
  string *local_e8;
  int local_e0;
  ulong local_b0;
  net_dnsConfig *local_a8;
  net_dnsConfig *local_a0;
  net_dnsConfig *local_90;
  net_dnsConfig *local_88;
  string *local_80;
  net_dnsConfig *local_70;
  net_dnsConfig *local_68;
  long *local_60;
  net_dnsConfig *local_58;
  net_dnsConfig *local_48;
  net_dnsConfig *local_40;
  uint8 *local_30;
  undefined8 *local_28;
  net_dnsConfig *local_20;
  net_dnsConfig *local_18;
  undefined **ppuStack_10;
  
  pnVar7 = local_118;
  pnVar11 = local_128;
  name.len = filename.len;
                    /* Unresolved local var: net.dnsConfig * conf@[???]
                       Unresolved local var: net.file * file@[???]
                       Unresolved local var: error err@[???] */
  while (&local_b0 <= *(ulong **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_18 = (net_dnsConfig *)0x0;
  ppuStack_10 = (undefined **)0x0;
  uStack0000000000000018 = 0;
  runtime_newobject((runtime__type *)&DAT_0027a140);
  local_30 = (uint8 *)local_128;
  *(uint8 *)&local_128->ndots = 1;
  *(uint8 *)((long)&local_128->ndots + 1) = 0;
  *(uint8 *)((long)&local_128->ndots + 2) = 0;
  *(uint8 *)((long)&local_128->ndots + 3) = 0;
  *(uint8 *)((long)&local_128->ndots + 4) = 0;
  *(uint8 *)((long)&local_128->ndots + 5) = 0;
  *(uint8 *)((long)&local_128->ndots + 6) = 0;
  *(uint8 *)((long)&local_128->ndots + 7) = 0;
  *(uint8 *)&local_128->timeout = 0;
  *(uint8 *)((long)&local_128->timeout + 1) = 0xf2;
  *(uint8 *)((long)&local_128->timeout + 2) = 5;
  *(uint8 *)((long)&local_128->timeout + 3) = 0x2a;
  *(uint8 *)((long)&local_128->timeout + 4) = 1;
  *(uint8 *)((long)&local_128->timeout + 5) = 0;
  *(uint8 *)((long)&local_128->timeout + 6) = 0;
  *(uint8 *)((long)&local_128->timeout + 7) = 0;
  *(uint8 *)&local_128->attempts = 2;
  *(uint8 *)((long)&local_128->attempts + 1) = 0;
  *(uint8 *)((long)&local_128->attempts + 2) = 0;
  *(uint8 *)((long)&local_128->attempts + 3) = 0;
  *(uint8 *)((long)&local_128->attempts + 4) = 0;
  *(uint8 *)((long)&local_128->attempts + 5) = 0;
  *(uint8 *)((long)&local_128->attempts + 6) = 0;
  *(uint8 *)((long)&local_128->attempts + 7) = 0;
  local_128 = (net_dnsConfig *)filename_spill.len;
  name.str = (uint8 *)pnVar11;
  net_open(name);
  iVar14 = net_defaultNS.cap;
  psVar15 = net_defaultNS.array;
  if (local_118 != (net_dnsConfig *)0x0) {
    local_40 = local_110;
    local_20 = local_118;
    *(int *)(local_30 + 8) = net_defaultNS.len;
    *(int *)(local_30 + 0x10) = iVar14;
    if (runtime_writeBarrier._0_4_ == 0) {
      *(string **)local_30 = psVar15;
    }
    else {
      runtime_gcWriteBarrier();
    }
    net_dnsDefaultSearch();
    *(int *)(local_30 + 0x20) = filename_spill.len;
    *(net_dnsConfig **)(local_30 + 0x28) = local_120;
    if (runtime_writeBarrier._0_4_ == 0) {
      *(uint8 **)(local_30 + 0x18) = filename_spill.str;
    }
    else {
      runtime_gcWriteBarrier();
    }
    *(net_dnsConfig **)(local_30 + 0x68) = local_20;
    if (runtime_writeBarrier._0_4_ == 0) {
      *(net_dnsConfig **)(local_30 + 0x70) = local_40;
    }
    else {
      runtime_gcWriteBarrier();
      local_40 = extraout_RAX;
    }
    return local_40;
  }
  local_48 = local_120;
  ppuStack_10 = &PTR_net___file__close_002b3428;
  local_18 = local_120;
                    /* Unresolved local var: io/fs.FileInfo fi@[???]
                       Unresolved local var: error err@[???] */
  mVar19 = os___File__Stat((os_File *)local_120);
  pnVar11 = mVar19.~r1.data;
  (**(code **)(filename_spill.len + 0x20))();
  *(int *)(local_30 + 0x78) = filename_spill.len;
  *(net_dnsConfig **)(local_30 + 0x80) = local_120;
  if (runtime_writeBarrier._0_4_ == 0) {
    local_30[0x88] = 0;
    local_30[0x89] = 0;
    local_30[0x8a] = 0;
    local_30[0x8b] = 0;
    local_30[0x8c] = 0;
    local_30[0x8d] = 0;
    local_30[0x8e] = 0;
    local_30[0x8f] = 0;
  }
  else {
    pnVar11 = (net_dnsConfig *)(local_30 + 0x88);
    runtime_gcWriteBarrier();
  }
                    /* Unresolved local var: bool ok@[???]
                       Unresolved local var: string line@[???] */
  local_130 = local_48;
  mVar20 = net___file__readLine((net_file *)local_48);
  iVar14 = mVar20.s.len;
  local_118._0_1_ = '\0';
  cVar5 = (char)local_118;
  local_118 = pnVar7;
                    /* Unresolved local var: []string f@[???]
                       Unresolved local var: string * ~R0.ptr@[???]
                       Unresolved local var: int ~R0.len@[???] */
  do {
    pnVar7 = local_128;
    iVar4 = net_defaultNS.cap;
    psVar15 = net_defaultNS.array;
    if (cVar5 == '\0') {
      puVar12 = local_30;
      if (*(long *)(local_30 + 8) == 0) {
        *(int *)(local_30 + 8) = net_defaultNS.len;
        *(int *)(local_30 + 0x10) = iVar4;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(string **)local_30 = psVar15;
        }
        else {
          runtime_gcWriteBarrier();
        }
      }
      if (*(long *)(puVar12 + 0x20) == 0) {
        net_dnsDefaultSearch();
        *(net_dnsConfig **)(local_30 + 0x20) = local_128;
        *(net_dnsConfig **)(local_30 + 0x28) = local_120;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(net_dnsConfig **)(local_30 + 0x18) = local_130;
        }
        else {
          runtime_gcWriteBarrier();
        }
      }
      net___file__close((net_file *)local_18);
      return extraout_RAX_01;
    }
    if (((long)local_120 < 1) ||
       ((cVar5 = *(char *)&(local_128->servers).array, cVar5 != ';' && (cVar5 != '#')))) {
      local_128 = local_120;
      local_120 = (net_dnsConfig *)&DAT_00287d9d;
      local_118 = (net_dnsConfig *)&DAT_00000004;
      pnVar10 = local_118;
      s.len = iVar14;
      s.str = &DAT_00287d9d;
      t.len = (int)pnVar11;
      t.str = (uint8 *)pnVar7;
      net_splitAtBytes(s,t);
                    /* Unresolved local var: uint8 * ~R0.ptr@[???]
                       Unresolved local var: int ~R0.len@[???] */
      local_118 = pnVar10;
      if (0 < (long)local_108) {
        local_68 = local_110;
        lVar17 = (local_110->servers).len;
        psVar15 = (local_110->servers).array;
        if (lVar17 == 6) {
          if ((*(int *)&psVar15->str == 0x616d6f64) &&
             (*(short *)((long)&psVar15->str + 4) == 0x6e69)) {
            if (1 < (long)local_108) {
              pnVar7 = (net_dnsConfig *)(local_110->search).array;
              pnVar10 = (net_dnsConfig *)(local_110->servers).cap;
              if (((long)pnVar7 < 1) ||
                 (pnVar6 = pnVar7, pnVar9 = pnVar10, (&pnVar10[-1].field_0x97)[(long)pnVar7] != '.')
                 ) {
                local_118 = (net_dnsConfig *)((long)&go_string__ + 4);
                local_110 = (net_dnsConfig *)0x1;
                a1_00.len = (int)psVar15;
                a1_00.str = (uint8 *)pnVar11;
                a0_00.len = (int)pnVar10;
                a0_00.str = &DAT_00000006;
                runtime_concatstring2((runtime_tmpBuf *)((long)&go_string__ + 4),a0_00,a1_00);
                pnVar6 = local_100;
                pnVar9 = local_108;
                local_128 = pnVar10;
                local_120 = pnVar7;
              }
              local_70 = pnVar9;
              runtime_newobject((runtime__type *)pnVar6);
              (local_128->servers).len = (int)pnVar6;
              pnVar11 = local_128;
              if (runtime_writeBarrier._0_4_ == 0) {
                (local_128->servers).array = (string *)local_70;
              }
              else {
                runtime_gcWriteBarrier();
              }
              local_30[0x20] = 1;
              local_30[0x21] = 0;
              local_30[0x22] = 0;
              local_30[0x23] = 0;
              local_30[0x24] = 0;
              local_30[0x25] = 0;
              local_30[0x26] = 0;
              local_30[0x27] = 0;
              local_30[0x28] = 1;
              local_30[0x29] = 0;
              local_30[0x2a] = 0;
              local_30[0x2b] = 0;
              local_30[0x2c] = 0;
              local_30[0x2d] = 0;
              local_30[0x2e] = 0;
              local_30[0x2f] = 0;
              if (runtime_writeBarrier._0_4_ == 0) {
                *(net_dnsConfig **)(local_30 + 0x18) = pnVar11;
              }
              else {
                pnVar11 = (net_dnsConfig *)(local_30 + 0x18);
                runtime_gcWriteBarrierDX();
              }
            }
          }
          else if ((*(int *)&psVar15->str == 0x6b6f6f6c) &&
                  (*(short *)((long)&psVar15->str + 4) == 0x7075)) {
            *(undefined1 **)(local_30 + 0x58) = &local_108[-1].field_0x97;
            *(undefined1 **)(local_30 + 0x60) = &local_100[-1].field_0x97;
            if (runtime_writeBarrier._0_4_ == 0) {
              *(undefined1 **)(local_30 + 0x50) =
                   (undefined1 *)
                   ((long)&(local_110->servers).array +
                   (-(long)&local_100[-1].field_0x97 >> 0x3f & 0x10U));
            }
            else {
              pnVar11 = (net_dnsConfig *)(local_30 + 0x50);
              runtime_gcWriteBarrier();
            }
          }
          else {
            if ((*(int *)&psVar15->str != 0x72616573) ||
               (*(short *)((long)&psVar15->str + 4) != 0x6863)) goto LAB_0058bc7f;
            local_128 = (net_dnsConfig *)&local_108[-1].field_0x97;
            local_88 = local_128;
            runtime_makeslice((runtime__type *)local_108,6,0x225520);
            *(net_dnsConfig **)(local_30 + 0x20) = local_88;
            *(net_dnsConfig **)(local_30 + 0x28) = local_88;
            if (runtime_writeBarrier._0_4_ == 0) {
              local_30[0x18] = 4;
              local_30[0x19] = 0;
              local_30[0x1a] = 0;
              local_30[0x1b] = 0;
              local_30[0x1c] = 0;
              local_30[0x1d] = 0;
              local_30[0x1e] = 0;
              local_30[0x1f] = 0;
              puVar12 = local_30;
            }
            else {
              pnVar11 = (net_dnsConfig *)(local_30 + 0x18);
              runtime_gcWriteBarrier();
              puVar12 = extraout_RDX;
            }
                    /* Unresolved local var: int i@[???] */
            pnVar7 = (net_dnsConfig *)0x0;
            pnVar10 = local_108;
            pnVar6 = local_68;
            local_120 = local_128;
            while ((long)pnVar7 < *(long *)(puVar12 + 0x20)) {
              p_Var3 = &pnVar7->servers;
              pnVar9 = (net_dnsConfig *)((long)&p_Var3->array + 1);
              if (pnVar10 <= pnVar9) {
                    /* WARNING: Subroutine does not return */
                runtime_panicIndex();
              }
              pnVar8 = (net_dnsConfig *)(&(pnVar6->search).array)[(long)p_Var3 * 2];
              pnVar2 = (net_dnsConfig *)(&(pnVar6->servers).cap)[(long)p_Var3 * 2];
              local_a8 = pnVar7;
              local_88 = pnVar9;
              if (((long)pnVar8 < 1) ||
                 (pnVar9 = pnVar2, in_R9 = pnVar8, (&pnVar2[-1].field_0x97)[(long)pnVar8] != '.')) {
                local_118 = (net_dnsConfig *)((long)&go_string__ + 4);
                local_110 = (net_dnsConfig *)0x1;
                a1_01.len = (int)pnVar2;
                a1_01.str = (uint8 *)pnVar11;
                a0_01.len = (int)pnVar10;
                a0_01.str = (uint8 *)pnVar6;
                runtime_concatstring2((runtime_tmpBuf *)((long)&go_string__ + 4),a0_01,a1_01);
                pnVar10 = local_108;
                puVar12 = local_30;
                pnVar6 = local_68;
                pnVar9 = local_108;
                in_R9 = local_100;
                local_128 = pnVar2;
                local_120 = pnVar8;
              }
              in_R10 = *(uint8 **)(puVar12 + 0x18);
              in_R11 = *(net_dnsConfig **)(puVar12 + 0x20);
              if (in_R11 <= local_a8) {
                    /* WARNING: Subroutine does not return */
                runtime_panicIndex();
              }
              lVar17 = (long)local_a8 * 0x10;
              *(net_dnsConfig **)(in_R10 + lVar17 + 8) = in_R9;
              pnVar11 = (net_dnsConfig *)(in_R10 + lVar17);
              pnVar7 = local_88;
              if (runtime_writeBarrier._0_4_ == 0) {
                *(net_dnsConfig **)(in_R10 + lVar17) = pnVar9;
                in_R8 = local_88;
              }
              else {
                runtime_gcWriteBarrierSI();
                puVar12 = extraout_RDX_00;
                in_R8 = pnVar7;
              }
            }
          }
        }
        else if (lVar17 == 7) {
          if (((*(int *)&psVar15->str == 0x6974706f) &&
              (*(short *)((long)&psVar15->str + 4) == 0x6e6f)) &&
             (*(char *)((long)&psVar15->str + 6) == 's')) {
                    /* Unresolved local var: string s@[???] */
            puVar13 = (undefined8 *)
                      ((long)&(local_110->servers).array +
                      (-(long)&local_100[-1].field_0x97 >> 0x3f & 0x10U));
            pnVar7 = (net_dnsConfig *)&local_108[-1].field_0x97;
            if (0 < (long)pnVar7) {
              in_R8 = (net_dnsConfig *)0x0;
              local_88 = pnVar7;
              do {
                local_60 = (long *)*puVar13;
                local_b0 = puVar13[1];
                local_118._0_1_ = '\x04';
                local_90 = in_R8;
                local_28 = puVar13;
                if ((long)local_b0 < 6) {
                  cVar5 = '\0';
                }
                else {
                  local_128 = (net_dnsConfig *)&DAT_00289d5c;
                  local_120 = (net_dnsConfig *)&DAT_00000006;
                  runtime_memequal();
                    /* Unresolved local var: int n@[???] */
                  pnVar7 = local_88;
                  cVar5 = (char)local_118;
                }
                if (cVar5 == '\0') {
                  if ((long)local_b0 < 8) {
                    cVar5 = '\0';
                  }
                  else {
                    local_128 = (net_dnsConfig *)&DAT_0028cf72;
                    local_120 = (net_dnsConfig *)&DAT_00000008;
                    runtime_memequal();
                    /* Unresolved local var: int n@[???] */
                    pnVar7 = local_88;
                    cVar5 = (char)local_118;
                  }
                  if (cVar5 == '\0') {
                    if ((long)local_b0 < 9) {
                      cVar5 = '\0';
                    }
                    else {
                      local_128 = (net_dnsConfig *)&DAT_0028d742;
                      local_120 = (net_dnsConfig *)&DAT_00000009;
                      runtime_memequal();
                    /* Unresolved local var: int n@[???] */
                      pnVar7 = local_88;
                      cVar5 = (char)local_118;
                    }
                    if (cVar5 == '\0') {
                      if (((local_b0 == 6) && ((int)*local_60 == 0x61746f72)) &&
                         (*(short *)((long)local_60 + 4) == 0x6574)) {
                        local_30[0x48] = 1;
                      }
                      else {
                        if (((local_b0 == 0xe) && (*local_60 == 0x722d656c676e6973)) &&
                           (((int)local_60[1] == 0x65757165 &&
                            (*(short *)((long)local_60 + 0xc) == 0x7473)))) {
                          local_118._0_1_ = '\x01';
                        }
                        else if (local_b0 == 0x15) {
                          local_128 = (net_dnsConfig *)&DAT_0029cad8;
                          runtime_memequal();
                          local_120 = (net_dnsConfig *)&DAT_00000015;
                          pnVar7 = local_88;
                        }
                        else {
                          local_118._0_1_ = '\0';
                        }
                        if ((char)local_118 == '\0') {
                          if ((((local_b0 == 6) && ((int)*local_60 == 0x2d657375)) &&
                              (*(short *)((long)local_60 + 4) == 0x6376)) ||
                             ((((local_b0 == 5 && ((int)*local_60 == 0x76657375)) &&
                               (*(char *)((long)local_60 + 4) == 'c')) ||
                              (((local_b0 == 3 && ((short)*local_60 == 0x6374)) &&
                               (*(char *)((long)local_60 + 2) == 'p')))))) {
                            local_30[0x95] = 1;
                          }
                          else {
                            local_30[0x49] = 1;
                          }
                        }
                        else {
                          local_30[0x94] = 1;
                        }
                      }
                    }
                    else {
                      if (local_b0 < 9) {
                    /* WARNING: Subroutine does not return */
                        runtime_panicSliceB();
                      }
                      pnVar11 = (net_dnsConfig *)0x0;
                      for (lVar17 = 0; lVar17 < (long)(local_b0 - 9); lVar17 = lVar17 + 1) {
                        bVar1 = *(byte *)((long)local_60 +
                                         lVar17 + ((long)-(local_b0 - 9) >> 0x3f & 9U));
                        in_R9 = (net_dnsConfig *)(ulong)bVar1;
                        if ((bVar1 < 0x30) || (0x39 < bVar1)) break;
                        in_R10 = (uint8 *)((long)pnVar11 * 5);
                        in_R9 = (net_dnsConfig *)((ulong)(byte)(bVar1 - 0x30) + (long)pnVar11 * 10);
                        if (0xfffffe < (long)in_R9) {
                          pnVar11 = (net_dnsConfig *)0xffffff;
                          goto LAB_0058c19d;
                        }
                        pnVar11 = in_R9;
                      }
                      if (lVar17 == 0) {
                        pnVar11 = (net_dnsConfig *)0x0;
                      }
LAB_0058c19d:
                      if ((long)pnVar11 < 1) {
                        pnVar11 = (net_dnsConfig *)0x1;
                      }
                      *(net_dnsConfig **)(local_30 + 0x40) = pnVar11;
                    }
                  }
                  else {
                    if (local_b0 < 8) {
                    /* WARNING: Subroutine does not return */
                      runtime_panicSliceB();
                    }
                    lVar17 = 0;
                    for (lVar16 = 0;
                        ((lVar16 < (long)(local_b0 - 8) &&
                         (bVar1 = *(byte *)((long)local_60 +
                                           lVar16 + ((long)-(local_b0 - 8) >> 0x3f & 8U)),
                         0x2f < bVar1)) && (bVar1 < 0x3a)); lVar16 = lVar16 + 1) {
                      in_R10 = (uint8 *)(lVar17 * 5);
                      lVar17 = (ulong)(byte)(bVar1 - 0x30) + lVar17 * 10;
                      if (0xfffffe < lVar17) {
                        lVar17 = 0xffffff;
                        goto LAB_0058c217;
                      }
                    }
                    if (lVar16 == 0) {
                      lVar17 = 0;
                    }
LAB_0058c217:
                    if (lVar17 < 1) {
                      lVar17 = 1;
                    }
                    in_R9 = (net_dnsConfig *)(lVar17 * 1000000000);
                    *(net_dnsConfig **)(local_30 + 0x38) = in_R9;
                  }
                }
                else {
                  if (local_b0 < 6) {
                    /* WARNING: Subroutine does not return */
                    runtime_panicSliceB();
                  }
                  pnVar11 = (net_dnsConfig *)0x0;
                  for (lVar17 = 0; lVar17 < (long)(local_b0 - 6); lVar17 = lVar17 + 1) {
                    bVar1 = *(byte *)((long)local_60 + lVar17 + ((long)-(local_b0 - 6) >> 0x3f & 6U)
                                     );
                    in_R9 = (net_dnsConfig *)(ulong)bVar1;
                    if ((bVar1 < 0x30) || (0x39 < bVar1)) break;
                    in_R10 = (uint8 *)((long)pnVar11 * 5);
                    in_R9 = (net_dnsConfig *)((ulong)(byte)(bVar1 - 0x30) + (long)pnVar11 * 10);
                    if (0xfffffe < (long)in_R9) {
                      pnVar11 = (net_dnsConfig *)0xffffff;
                      goto LAB_0058c297;
                    }
                    pnVar11 = in_R9;
                  }
                  if (lVar17 == 0) {
                    pnVar11 = (net_dnsConfig *)0x0;
                  }
LAB_0058c297:
                  if ((long)pnVar11 < 0) {
                    pnVar11 = (net_dnsConfig *)0x0;
                  }
                  else if (0xf < (long)pnVar11) {
                    pnVar11 = (net_dnsConfig *)&DAT_0000000f;
                  }
                  *(net_dnsConfig **)(local_30 + 0x30) = pnVar11;
                }
                pnVar11 = (net_dnsConfig *)0x722d656c676e6973;
                in_R8 = (net_dnsConfig *)((long)&(local_90->servers).array + 1);
                if ((long)pnVar7 <= (long)in_R8) break;
                puVar13 = local_28 + 2;
              } while( true );
            }
          }
          else {
LAB_0058bc7f:
            local_30[0x49] = 1;
            local_68 = local_110;
          }
        }
        else {
          if (((lVar17 != 10) || (psVar15->str != (uint8 *)0x76726573656d616e)) ||
             ((short)psVar15->len != 0x7265)) goto LAB_0058bc7f;
          if ((1 < (long)local_108) && (*(long *)(local_30 + 8) < 3)) {
                    /* Unresolved local var: uint8 * ~R0.ptr@[???]
                       Unresolved local var: int ~R0.len@[???] */
            s_00.len = 10;
            s_00.str = (uint8 *)(local_110->servers).cap;
            nVar18 = net_parseIPv4(s_00);
            a0.str = (uint8 *)nVar18.len;
            local_58 = (net_dnsConfig *)(local_68->servers).cap;
            local_a0 = (net_dnsConfig *)(local_68->search).array;
            internal_bytealg_IndexByteString();
            local_118 = local_58;
            local_110 = local_a0;
            local_108 = (net_dnsConfig *)&DAT_00287837;
            pnVar2 = local_108;
            a1.len = (int)psVar15;
            a1.str = (uint8 *)pnVar11;
            a0.len = (int)&DAT_00287837;
            a2.len = (int)in_R9;
            a2.str = (uint8 *)in_R8;
            a3.len = (int)in_R11;
            a3.str = in_R10;
            runtime_concatstring4((runtime_tmpBuf *)&DAT_00287754,a0,a1,a2,a3);
            local_108 = (net_dnsConfig *)&DAT_00287837;
            local_120 = (net_dnsConfig *)0x1;
            local_128 = (net_dnsConfig *)&DAT_00287754;
            local_80 = local_e8;
            local_100 = (net_dnsConfig *)0x2;
            pnVar10 = *(net_dnsConfig **)(local_30 + 8);
            pnVar6 = *(net_dnsConfig **)local_30;
            pnVar9 = *(net_dnsConfig **)(local_30 + 0x10);
            pnVar7 = (net_dnsConfig *)((long)&(pnVar10->servers).array + 1);
            puVar12 = local_30;
            pnVar8 = pnVar10;
            in_R9 = pnVar7;
            if (pnVar9 < pnVar7) {
              old.len = local_e0;
              old.array = pnVar10;
              old.cap = (int)pnVar11;
              runtime_growslice((runtime__type *)&DAT_00225520,old,(int)pnVar6);
              pnVar8 = (net_dnsConfig *)0x2;
              *(undefined **)(local_30 + 0x10) = &DAT_0028779f;
              local_110 = pnVar7;
              local_118 = pnVar9;
              puVar12 = local_30;
              local_128 = pnVar6;
              local_120 = pnVar10;
              if (runtime_writeBarrier._0_4_ == 0) {
                *(undefined **)local_30 = &DAT_00287837;
                pnVar6 = local_108;
              }
              else {
                runtime_gcWriteBarrier();
                pnVar6 = extraout_RAX_00;
              }
            }
            in_R8 = (net_dnsConfig *)((long)&(pnVar8->servers).array + 1);
            *(net_dnsConfig **)(puVar12 + 8) = in_R8;
            (&(pnVar6->servers).len)[(long)pnVar8 * 2] = local_e0;
            pnVar11 = (net_dnsConfig *)(&(pnVar6->servers).array + (long)pnVar8 * 2);
            if (runtime_writeBarrier._0_4_ == 0) {
              (&(pnVar6->servers).array)[(long)pnVar8 * 2] = local_80;
              local_108 = pnVar2;
            }
            else {
              runtime_gcWriteBarrier();
            }
          }
        }
      }
    }
    local_130 = local_48;
    mVar20 = net___file__readLine((net_file *)local_48);
    iVar14 = mVar20.s.len;
    cVar5 = (char)local_118;
  } while( true );
}

