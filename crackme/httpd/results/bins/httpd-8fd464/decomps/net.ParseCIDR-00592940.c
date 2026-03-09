
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.ParseCIDR(string s, net.IP ~r1, net.IPNet * ~r2, error ~r3) */

multireturn_net_IP_net_IPNet___error_ net_ParseCIDR(string s)

{
  byte bVar1;
  long len;
  int extraout_RAX;
  undefined8 *extraout_RAX_00;
  long lVar2;
  undefined8 *puVar3;
  undefined8 in_RSI;
  uint8 *puVar4;
  long lVar5;
  long in_RDI;
  undefined8 in_R8;
  ulong uVar7;
  long lVar8;
  long in_FS_OFFSET;
  string s_00;
  string s_01;
  net_IP ip;
  net_IPMask mask;
  multireturn_net_IP_net_IPNet___error_ mVar9;
  multireturn_net_IP_net_IPNet___error_ mVar10;
  multireturn_net_IP_net_IPNet___error_ mVar11;
  string s_spill;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  runtime__type *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 *local_28;
  uint8 *local_20;
  undefined8 *local_18;
  runtime__type *local_10;
  undefined8 *puVar6;
  
  s_00.len = s.len;
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int iplen@[???]
                       Unresolved local var: int n@[???]
                       Unresolved local var: bool ok@[???]
                       Unresolved local var: string addr@[???]
                       Unresolved local var: string mask@[???]
                       Unresolved local var: net.IP ip@[???]
                       Unresolved local var: net.IPMask m@[???]
                       Unresolved local var: uint8 * ~R0.ptr@[???]
                       Unresolved local var: int ~R0.cap@[???] */
  while (&local_28 <= *(undefined8 ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_98 = (undefined8 *)CONCAT71(local_98._1_7_,0x2f);
  internal_bytealg_IndexByteString();
  if ((long)local_90 < 0) {
    runtime_newobject((runtime__type *)&DAT_0024cb40);
    *(undefined8 *)(s_spill.len + 8) = 0xc;
    *(undefined **)s_spill.len = &DAT_0029294a;
    *(int *)(s_spill.len + 0x18) = s_spill.len;
    if (runtime_writeBarrier._0_4_ == 0) {
      *(uint8 **)(s_spill.len + 0x10) = s_spill.str;
    }
    else {
      in_RDI = s_spill.len + 0x10;
      runtime_gcWriteBarrierCX();
      s_spill.len = extraout_RAX;
    }
    mVar9.~r1.len = s_00.len;
    mVar9.~r1.array = (uint8 *)s_spill.len;
    mVar9.~r3.tab = (runtime_itab *)in_RSI;
    mVar9.~r2 = (net_IPNet *)in_RDI;
    mVar9.~r1.cap = (int)go_itab__net_ParseError_error;
    mVar9.~r3.data = (void *)in_R8;
    return mVar9;
  }
  if ((ulong)s_spill.len < local_90) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceAlen();
  }
  if ((ulong)s_spill.len < (long)local_90 + 1U) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceB();
  }
  s_00.str = s_spill.str;
  net_parseIPv4(s_00);
  len = (s_spill.len - (long)local_90) + -1;
  if (local_98 == (undefined8 *)0x0) {
    s_01.len = len;
    s_01.str = s_spill.str;
    local_20 = s_spill.str + ((long)local_90 + 1U & -len >> 0x3f);
    net_parseIPv6(s_01);
    lVar2 = 0x10;
    puVar4 = local_20;
  }
  else {
    lVar2 = 4;
    puVar4 = s_spill.str + ((long)local_90 + 1U & -len >> 0x3f);
  }
  uVar7 = 0;
  for (lVar8 = 0; ((lVar8 < len && (bVar1 = puVar4[lVar8], 0x2f < bVar1)) && (bVar1 < 0x3a));
      lVar8 = lVar8 + 1) {
    uVar7 = (ulong)(byte)(bVar1 - 0x30) + uVar7 * 10;
    if (0xfffffe < (long)uVar7) {
      uVar7 = 0xffffff;
      lVar5 = 0;
      goto LAB_00592b8d;
    }
  }
  if (lVar8 == 0) {
    uVar7 = 0;
    lVar5 = 0;
    lVar8 = 0;
  }
  else {
    lVar5 = 1;
  }
LAB_00592b8d:
  if (((local_98 != (undefined8 *)0x0) && ((char)lVar5 != '\0')) &&
     ((lVar8 == len && ((-1 < (long)uVar7 && ((long)uVar7 <= lVar2 * 8)))))) {
    local_18 = local_98;
                    /* Unresolved local var: int l@[???]
                       Unresolved local var: net.IPMask m@[???]
                       Unresolved local var: uint n@[???]
                       Unresolved local var: int i@[???] */
    if ((lVar2 == 4) || (lVar2 == 0x10)) {
      lVar2 = lVar2 * 8 >> 3;
      runtime_makeslice((runtime__type *)&DAT_00225720,len,lVar2);
      for (len = 0; local_28 = local_90, len < lVar2; len = len + 1) {
        if (uVar7 < 8) {
          *(byte *)((long)local_90 + len) = ~(0xffU >> ((byte)uVar7 & 0x1f));
          uVar7 = 0;
          lVar5 = lVar2;
        }
        else {
          *(undefined1 *)((long)local_90 + len) = 0xff;
          uVar7 = uVar7 - 8;
        }
      }
    }
    else {
      lVar2 = 0;
      local_28 = (undefined8 *)0x0;
    }
    ip.len = len;
    ip.array = (uint8 *)local_28;
    ip.cap = lVar2;
    mask.len = lVar5;
    mask.array = (uint8 *)local_18;
    mask.cap = (int)local_90;
    puVar6 = local_90;
    net_IP_Mask(ip,mask);
    local_10 = local_78;
    puVar3 = local_70;
    runtime_newobject(local_78);
    local_90[1] = local_70;
    local_90[2] = local_68;
    if (runtime_writeBarrier._0_4_ == 0) {
      *local_90 = local_10;
    }
    else {
      runtime_gcWriteBarrier();
    }
    local_90[4] = lVar2;
    local_90[5] = lVar2;
    if (runtime_writeBarrier._0_4_ == 0) {
      local_90[3] = local_28;
    }
    else {
      runtime_gcWriteBarrierDX();
      puVar3 = local_90;
    }
    mVar11.~r1.len = (int)&DAT_0024ca00;
    mVar11.~r1.array = (uint8 *)local_88;
    mVar11.~r3.tab = (runtime_itab *)lVar5;
    mVar11.~r2 = (net_IPNet *)local_90;
    mVar11.~r1.cap = (int)puVar3;
    mVar11.~r3.data = puVar6;
    return mVar11;
  }
  puVar3 = local_90;
  runtime_newobject((runtime__type *)&DAT_0024cb40);
  local_90[1] = 0xc;
  *local_90 = &DAT_0029294a;
  local_90[3] = s_spill.len;
  if (runtime_writeBarrier._0_4_ == 0) {
    local_90[2] = s_spill.str;
  }
  else {
    local_98 = local_90 + 2;
    runtime_gcWriteBarrierCX();
    local_90 = extraout_RAX_00;
  }
  mVar10.~r1.len = len;
  mVar10.~r1.array = (uint8 *)local_90;
  mVar10.~r3.tab = (runtime_itab *)lVar5;
  mVar10.~r2 = (net_IPNet *)local_98;
  mVar10.~r1.cap = (int)go_itab__net_ParseError_error;
  mVar10.~r3.data = puVar3;
  return mVar10;
}

