
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*conf).hostLookupOrder(net.conf * c, net.Resolver * r, string
   hostname, net.hostLookupOrder ret) */

net_hostLookupOrder net___conf__hostLookupOrder(net_conf *c,net_Resolver *r,string hostname)

{
  byte bVar1;
  uint8 *puVar2;
  runtime_itab *prVar3;
  runtime_itab *prVar4;
  int iVar5;
  char cVar6;
  int extraout_EAX;
  net_hostLookupOrder extraout_RAX;
  net_hostLookupOrder extraout_RAX_00;
  net_hostLookupOrder extraout_RAX_01;
  net_hostLookupOrder extraout_RAX_02;
  net_hostLookupOrder extraout_RAX_03;
  net_hostLookupOrder extraout_RAX_04;
  net_hostLookupOrder extraout_RAX_05;
  net_hostLookupOrder extraout_RAX_06;
  net_hostLookupOrder extraout_RAX_07;
  net_hostLookupOrder extraout_RAX_08;
  net_hostLookupOrder extraout_RAX_09;
  net_hostLookupOrder extraout_RAX_10;
  net_hostLookupOrder extraout_RAX_11;
  net_hostLookupOrder extraout_RAX_12;
  net_hostLookupOrder extraout_RAX_13;
  net_hostLookupOrder extraout_RAX_14;
  net_hostLookupOrder extraout_RAX_15;
  net_hostLookupOrder extraout_RAX_16;
  net_hostLookupOrder extraout_RAX_17;
  net_hostLookupOrder extraout_RAX_18;
  net_hostLookupOrder extraout_RAX_19;
  net_hostLookupOrder extraout_RAX_20;
  net_hostLookupOrder extraout_RAX_21;
  runtime__type *prVar7;
  net_hostLookupOrder extraout_RAX_22;
  net_hostLookupOrder extraout_RAX_23;
  net_hostLookupOrder extraout_RAX_24;
  net_hostLookupOrder extraout_RAX_25;
  long lVar8;
  char cVar9;
  undefined8 uVar10;
  runtime_interfacetype *prVar11;
  char cVar12;
  error *peVar13;
  string *psVar14;
  uint8 uVar15;
  int iVar16;
  error *peVar17;
  uint8 uVar18;
  void *pvVar19;
  long lVar20;
  string *psVar21;
  runtime__type *prVar22;
  long in_FS_OFFSET;
  bool bVar23;
  error err;
  string s;
  error err_00;
  string h;
  net_nssSource s_00;
  error target;
  string suffix;
  string ky;
  error target_00;
  net_conf *c_spill;
  net_Resolver *r_spill;
  string hostname_spill;
  undefined8 uStack0000000000000028;
  runtime_itab *prStack_f0;
  void *local_e8;
  long *plStack_e0;
  char local_d8;
  runtime__defer local_a8;
  string *local_60;
  undefined1 *local_58;
  runtime_itab *local_50;
  net_nssConf *local_48;
  runtime_interfacetype *local_40;
  runtime_itab *local_38;
  runtime_interfacetype *local_30;
  runtime__type *local_28;
  runtime_itab *prStack_20;
  void *local_18;
  runtime_interfacetype *prStack_10;
  
  pvVar19 = (void *)hostname.len;
                    /* Unresolved local var: net.hostLookupOrder fallbackOrder@[???]
                       Unresolved local var: net.nssConf * nss@[???]
                       Unresolved local var: bool mdnsSource@[???]
                       Unresolved local var: bool filesSource@[???]
                       Unresolved local var: bool dnsSource@[???]
                       Unresolved local var: []net.nssSource srcs@[???]
                       Unresolved local var: string first@[???] */
  while (&local_a8.link <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uStack0000000000000028 = 0;
  if (1 < c_spill->dnsDebugLevel) {
    local_a8.siz = 0x10;
    local_a8.fn = (runtime_funcval *)&PTR_net___conf__hostLookupOrder_func1_002b3420;
    local_60 = &hostname_spill;
    local_58 = (undefined1 *)&stack0x00000028;
    runtime_deferprocStack(&local_a8);
    if (extraout_EAX != 0) {
      runtime_deferreturn();
      return extraout_RAX_15;
    }
  }
  if ((c_spill->netGo == false) &&
     ((r_spill == (net_Resolver *)0x0 || (r_spill->PreferGo == false)))) {
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
  }
  if (((c_spill->forceCgoLookupHost != false) || (c_spill->resolv->unknownOpt != false)) ||
     ((puVar2 = (c_spill->goos).str, (c_spill->goos).len == 7 &&
      (((*(int *)puVar2 == 0x72646e61 && (*(short *)(puVar2 + 4) == 0x696f)) && (puVar2[6] == 100)))
      ))) {
    uStack0000000000000028 = uVar10;
    runtime_deferreturn();
    return extraout_RAX;
  }
  internal_bytealg_IndexByteString();
  if (local_e8 != (void *)0xffffffffffffffff) {
    uStack0000000000000028 = uVar10;
    runtime_deferreturn();
    return extraout_RAX_00;
  }
  internal_bytealg_IndexByteString();
  iVar16 = hostname_spill.len;
  puVar2 = (c_spill->goos).str;
  if ((((c_spill->goos).len == 7) && (*(int *)puVar2 == 0x6e65706f)) &&
     ((*(short *)(puVar2 + 4) == 0x7362 && (puVar2[6] == 100)))) {
                    /* Unresolved local var: []string lookup@[???] */
    err.data = os_ErrNotExist.tab;
    err.tab = (runtime_itab *)c_spill;
    target.data = pvVar19;
    target.tab = (c_spill->resolv->err).data;
    os_underlyingErrorIs(err,target);
    if ((char)plStack_e0 != '\0') {
      uStack0000000000000028 = 3;
      runtime_deferreturn();
      return extraout_RAX_10;
    }
    psVar14 = (c_spill->resolv->lookup).array;
    lVar20 = (c_spill->resolv->lookup).len;
    if (lVar20 == 0) {
      uStack0000000000000028 = 2;
      runtime_deferreturn();
      return extraout_RAX_09;
    }
    if (2 < lVar20) {
      uStack0000000000000028 = uVar10;
      runtime_deferreturn();
      return extraout_RAX_08;
    }
    if (psVar14->len == 4) {
      if (*(int *)psVar14->str == 0x646e6962) {
        if (lVar20 != 2) {
          uStack0000000000000028 = 4;
          runtime_deferreturn();
          return extraout_RAX_03;
        }
        if ((psVar14[1].len == 4) && (*(int *)psVar14[1].str == 0x656c6966)) {
          uStack0000000000000028 = 2;
          runtime_deferreturn();
          return extraout_RAX_01;
        }
        uStack0000000000000028 = uVar10;
        runtime_deferreturn();
        return extraout_RAX_02;
      }
      if (*(int *)psVar14->str == 0x656c6966) {
        if (lVar20 != 2) {
          uStack0000000000000028 = 3;
          runtime_deferreturn();
          return extraout_RAX_06;
        }
        if ((psVar14[1].len == 4) && (*(int *)psVar14[1].str == 0x646e6962)) {
          uStack0000000000000028 = 1;
          runtime_deferreturn();
          return extraout_RAX_04;
        }
        uStack0000000000000028 = uVar10;
        runtime_deferreturn();
        return extraout_RAX_05;
      }
    }
    uStack0000000000000028 = uVar10;
    runtime_deferreturn();
    return extraout_RAX_07;
  }
  if (hostname_spill.len < 1) {
    local_e8._0_1_ = '\0';
  }
  else {
    runtime_memequal();
    local_e8._0_1_ = -1;
  }
  if (((char)local_e8 != '\0') &&
     (bVar23 = (ulong)hostname_spill.len < hostname_spill.len - 1U,
     hostname_spill.len = hostname_spill.len - 1U, bVar23)) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceAlen();
  }
  s.len = iVar16;
  s.str = &DAT_00289456;
  suffix.len = (int)pvVar19;
  suffix.str = (uint8 *)hostname_spill.len;
  net_stringsHasSuffixFold(s,suffix);
  if ((char)plStack_e0 != '\0') {
    uStack0000000000000028 = uVar10;
    runtime_deferreturn();
    return extraout_RAX_14;
  }
  local_48 = c_spill->nss;
  ky.len = (int)pvVar19;
  ky.str = (uint8 *)local_48;
  runtime_mapaccess1_faststr((runtime_maptype *)c_spill,(runtime_hmap *)&DAT_00236140,ky);
  prVar3 = (runtime_itab *)plStack_e0[1];
  local_50 = (runtime_itab *)*plStack_e0;
  prStack_f0 = os_ErrNotExist.tab;
  local_e8 = os_ErrNotExist.data;
  err_00.data = (local_48->err).tab;
  err_00.tab = local_50;
  target_00.data = os_ErrNotExist.tab;
  target_00.tab = prVar3;
  os_underlyingErrorIs(err_00,target_00);
  prVar4 = (local_48->err).tab;
  if ((prVar4 == (runtime_itab *)0x0) && (prVar3 == (runtime_itab *)0x0)) {
    puVar2 = (c_spill->goos).str;
    if (((c_spill->goos).len == 7) &&
       (((*(int *)puVar2 == 0x616c6f73 && (*(short *)(puVar2 + 4) == 0x6972)) && (puVar2[6] == 0x73)
        ))) {
      uStack0000000000000028 = uVar10;
      runtime_deferreturn();
      return extraout_RAX_12;
    }
    uStack0000000000000028 = 1;
    runtime_deferreturn();
    return extraout_RAX_13;
  }
  if (prVar4 != (runtime_itab *)0x0) {
    uStack0000000000000028 = uVar10;
    runtime_deferreturn();
    return extraout_RAX_11;
  }
  if (0 < (long)prVar3) {
    lVar20 = 0;
    iVar16 = 0;
    peVar13 = (error *)0x0;
    psVar14 = (string *)0x0;
    prVar11 = (runtime_interfacetype *)0x0;
    local_38 = local_50;
    prVar22 = (runtime__type *)0x0;
    do {
      iVar5 = hostname_spill.len;
      puVar2 = hostname_spill.str;
      local_30 = local_38->inter;
      local_28 = local_38->_type;
      prVar4 = *(runtime_itab **)&local_38->hash;
      pvVar19 = (void *)local_38->fun[0];
      prStack_10 = local_38[1].inter;
      prVar7 = prVar22;
      local_40 = prVar11;
      prStack_20 = prVar4;
      local_18 = pvVar19;
      if (((local_28 == (runtime__type *)&DAT_0000000a) &&
          ((local_30->typ).size == 0x616e74736f68796d)) &&
         ((short)(local_30->typ).ptrdata == 0x656d)) {
        h.len = iVar16;
        h.str = hostname_spill.str;
        peVar17 = peVar13;
        psVar21 = psVar14;
                    /* Unresolved local var: string hn@[???] */
        net_isLocalhost(h);
        if ((char)prStack_f0 != '\0') {
LAB_005804cf:
          uStack0000000000000028 = uVar10;
          runtime_deferreturn();
          return extraout_RAX_24;
        }
                    /* Unresolved local var: int i@[???] */
        if (hostname_spill.len == 7) {
          lVar8 = 0;
          while( true ) {
            if (6 < lVar8) goto LAB_005804cf;
            uVar15 = hostname_spill.str[lVar8];
            if ((byte)(uVar15 + 0xbf) < 0x1a) {
              uVar15 = uVar15 + 0x20;
            }
            bVar1 = (&DAT_0028acdc)[lVar8];
            peVar17 = (error *)(ulong)bVar1;
            psVar21 = (string *)(ulong)(bVar1 - 0x41);
            if ((byte)(bVar1 - 0x41) < 0x1a) {
              peVar17 = (error *)(ulong)(bVar1 + 0x20);
            }
            if (uVar15 != (uint8)peVar17) break;
            lVar8 = lVar8 + 1;
          }
        }
        (**net_getHostname)(psVar21,peVar17);
                    /* Unresolved local var: int i@[???] */
        if (prStack_f0 != (runtime_itab *)0x0) {
LAB_0058052c:
          uStack0000000000000028 = uVar10;
          runtime_deferreturn();
          return extraout_RAX_25;
        }
        prVar11 = local_40;
        if (iVar5 == hostname_spill.len) {
          lVar8 = 0;
          while( true ) {
            if (hostname_spill.len <= lVar8) goto LAB_0058052c;
            uVar15 = hostname_spill.str[lVar8];
            if ((byte)(uVar15 + 0xbf) < 0x1a) {
              uVar15 = uVar15 + 0x20;
            }
            uVar18 = puVar2[lVar8];
            if ((byte)(uVar18 + 0xbf) < 0x1a) {
              uVar18 = uVar18 + 0x20;
            }
            if (uVar15 != uVar18) break;
            lVar8 = lVar8 + 1;
          }
        }
      }
      else if ((((local_28 == (runtime__type *)&DAT_00000005) &&
                ((int)(local_30->typ).size == 0x656c6966)) &&
               (*(char *)((long)&(local_30->typ).size + 4) == 's')) ||
              (((local_28 == (runtime__type *)0x3 && ((short)(local_30->typ).size == 0x6e64)) &&
               (*(char *)((long)&(local_30->typ).size + 2) == 's')))) {
        s_00.source.len = iVar16;
        s_00.source.str = (uint8 *)local_30;
        s_00.criteria.array = (net_nssCriterion *)prVar3;
        s_00.criteria.cap = (int)peVar13;
        s_00.criteria.len = (int)psVar14;
        net_nssSource_standardCriteria(s_00);
        if (local_d8 == '\0') {
          uStack0000000000000028 = uVar10;
          runtime_deferreturn();
          return extraout_RAX_22;
        }
        if (((local_28 == (runtime__type *)&DAT_00000005) &&
            ((int)(local_30->typ).size == 0x656c6966)) &&
           (*(char *)((long)&(local_30->typ).size + 4) == 's')) {
          psVar14 = (string *)0x1;
        }
        else if (((local_28 == (runtime__type *)0x3) && ((short)(local_30->typ).size == 0x6e64)) &&
                (*(char *)((long)&(local_30->typ).size + 2) == 's')) {
          peVar13 = (error *)0x1;
        }
        prVar7 = local_28;
        prVar11 = local_30;
        prStack_f0 = prVar4;
        local_e8 = pvVar19;
        if (prVar22 != (runtime__type *)0x0) {
          prVar7 = prVar22;
          prVar11 = local_40;
        }
      }
      else {
        if ((long)local_28 < 4) {
LAB_00580495:
          uStack0000000000000028 = uVar10;
          runtime_deferreturn();
          return extraout_RAX_23;
        }
        prStack_f0 = (runtime_itab *)&DAT_00000004;
        runtime_memequal();
        if ((char)local_e8 == '\0') goto LAB_00580495;
        iVar16 = 1;
        prVar11 = local_40;
      }
      lVar20 = lVar20 + 1;
      if ((long)prVar3 <= lVar20) goto LAB_005804b8;
      local_38 = (runtime_itab *)&local_38[1]._type;
      prVar22 = prVar7;
    } while( true );
  }
  cVar6 = '\0';
  cVar9 = '\0';
  cVar12 = '\0';
  prVar11 = (runtime_interfacetype *)0x0;
  prVar7 = (runtime__type *)0x0;
LAB_00580121:
  if ((cVar6 != '\0') && (c_spill->hasMDNSAllow != false)) {
    uStack0000000000000028 = uVar10;
    runtime_deferreturn();
    return extraout_RAX_16;
  }
  if (cVar12 != '\0') {
    if (cVar9 != '\0') {
      if (((prVar7 == (runtime__type *)&DAT_00000005) && ((int)(prVar11->typ).size == 0x656c6966))
         && (*(char *)((long)&(prVar11->typ).size + 4) == 's')) {
        uStack0000000000000028 = 1;
        runtime_deferreturn();
        return extraout_RAX_17;
      }
      uStack0000000000000028 = 2;
      runtime_deferreturn();
      return extraout_RAX_18;
    }
    if (cVar12 != '\0') {
      uStack0000000000000028 = 3;
      runtime_deferreturn();
      return extraout_RAX_19;
    }
  }
  if (cVar9 != '\0') {
    uStack0000000000000028 = 4;
    runtime_deferreturn();
    return extraout_RAX_20;
  }
  uStack0000000000000028 = uVar10;
  runtime_deferreturn();
  return extraout_RAX_21;
LAB_005804b8:
  cVar6 = (char)iVar16;
  cVar9 = (char)peVar13;
  cVar12 = (char)psVar14;
  goto LAB_00580121;
}

