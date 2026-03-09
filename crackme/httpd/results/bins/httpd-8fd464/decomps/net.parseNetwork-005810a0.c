
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.parseNetwork(context.Context ctx, string network, bool
   needsProto, string afnet, int proto, error err) */

multireturn_string_int_error_ net_parseNetwork(context_Context ctx,string network,bool needsProto)

{
  byte bVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  runtime_itab *prVar5;
  runtime_itab *extraout_RAX;
  long lVar6;
  undefined8 uVar7;
  runtime_itab *prVar8;
  long in_FS_OFFSET;
  string val;
  string val_00;
  string val_01;
  string name;
  multireturn_int_error__conflict2 mVar9;
  multireturn_string_int_error_ mVar10;
  multireturn_string_int_error_ mVar11;
  multireturn_string_int_error_ mVar12;
  multireturn_string_int_error_ mVar13;
  multireturn_string_int_error_ mVar14;
  multireturn_string_int_error_ mVar15;
  context_Context ctx_spill;
  runtime_itab *in_stack_00000018;
  int i;
  bool needsProto_spill;
  undefined *local_38;
  uint8 *local_28;
  long local_20;
  
  prVar8 = (runtime_itab *)network.len;
  name.str = network.str;
  prVar5 = ctx.tab;
                    /* Unresolved local var: int i@[???] */
  while (uVar4 = i, &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    prVar5 = extraout_RAX;
  }
  do {
    uVar3 = uVar4;
    val.len = uVar3 - 1;
    if ((long)val.len < 0) goto LAB_005811a4;
    prVar8 = (runtime_itab *)(ulong)in_stack_00000018->_[uVar3 - 0x15];
    uVar4 = val.len;
  } while (in_stack_00000018->_[uVar3 - 0x15] != 0x3a);
  if (-1 < (long)val.len) {
    if ((ulong)i < val.len) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAlen();
    }
    prVar8 = (runtime_itab *)&DAT_0000003a;
    if (val.len == 2) {
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: bool ok@[???]
                       Unresolved local var: int proto@[???]
                       Unresolved local var: string protostr@[???] */
      if (*(short *)&in_stack_00000018->inter == 0x7069) {
LAB_0058112d:
        if ((ulong)i < uVar3) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceB();
        }
        prVar5 = (runtime_itab *)((i - val.len) + -1);
        name.str = in_stack_00000018->_ + ((uVar3 & -(long)prVar5 >> 0x3f) - 0x14);
        lVar6 = 0;
        prVar8 = (runtime_itab *)0x0;
        while ((((long)prVar8 < (long)prVar5 &&
                (bVar1 = name.str[(long)(prVar8->_ + -0x14)], 0x2f < bVar1)) && (bVar1 < 0x3a))) {
          lVar6 = (ulong)(byte)(bVar1 - 0x30) + lVar6 * 10;
          if (0xfffffe < lVar6) {
            uVar7 = 0;
            goto LAB_0058146a;
          }
          prVar8 = (runtime_itab *)((long)&prVar8->inter + 1);
        }
        if (prVar8 == (runtime_itab *)0x0) {
          uVar7 = 0;
          prVar8 = (runtime_itab *)0x0;
        }
        else {
          uVar7 = 1;
        }
LAB_0058146a:
        if (((char)uVar7 == '\0') || (prVar8 != prVar5)) {
          name.len = val.len;
          prVar5 = in_stack_00000018;
          mVar9 = net_lookupProtocol(name);
          mVar15.afnet.len = mVar9.~r3.tab;
          if (local_20 != 0) {
            mVar15.afnet.str = local_28;
            mVar15.proto = local_20;
            mVar15.err.data = prVar5;
            mVar15.err.tab = prVar8;
            return mVar15;
          }
          uVar7 = 0;
          name.str = local_28;
        }
        mVar14.afnet.len = val.len;
        mVar14.afnet.str = name.str;
        mVar14.proto = uVar7;
        mVar14.err.data = in_stack_00000018;
        mVar14.err.tab = prVar8;
        return mVar14;
      }
    }
    else if (val.len == 3) {
      uVar2 = *(ushort *)&in_stack_00000018->inter;
      prVar8 = (runtime_itab *)(ulong)uVar2;
      if (((uVar2 == 0x7069) && (*(char *)((long)&in_stack_00000018->inter + 2) == '4')) ||
         ((uVar2 == 0x7069 && (*(char *)((long)&in_stack_00000018->inter + 2) == '6'))))
      goto LAB_0058112d;
    }
    val.str = (uint8 *)prVar5;
    runtime_convTstring(val);
    mVar10.afnet.len = val.len;
    mVar10.afnet.str = local_38;
    mVar10.proto = (int)go_itab_net_UnknownNetworkError_error;
    mVar10.err.data = in_stack_00000018;
    mVar10.err.tab = prVar8;
    return mVar10;
  }
LAB_005811a4:
  if (i < 4) {
    if (i == 2) {
      if (*(short *)&in_stack_00000018->inter != 0x7069) goto LAB_005813cd;
    }
    else {
      if (i != 3) goto LAB_005813cd;
      local_38 = &DAT_00287b85;
      runtime_cmpstring();
      if (0 < (long)local_28) {
        if (((*(short *)&in_stack_00000018->inter == 0x6374) &&
            (prVar5 = in_stack_00000018, *(char *)((long)&in_stack_00000018->inter + 2) == 'p')) ||
           ((prVar5 = in_stack_00000018, *(short *)&in_stack_00000018->inter == 0x6475 &&
            (*(char *)((long)&in_stack_00000018->inter + 2) == 'p')))) goto LAB_00581395;
        goto LAB_005813cd;
      }
      uVar2 = *(ushort *)&in_stack_00000018->inter;
      name.str = (uint8 *)(ulong)uVar2;
      if (((uVar2 != 0x7069) || (*(char *)((long)&in_stack_00000018->inter + 2) != '4')) &&
         ((prVar5 = in_stack_00000018, uVar2 != 0x7069 ||
          (*(char *)((long)&in_stack_00000018->inter + 2) != '6')))) goto LAB_005813cd;
    }
    prVar5 = (runtime_itab *)(ulong)needsProto_spill;
    if (needsProto_spill) {
      val_00.len = val.len;
      val_00.str = (uint8 *)0x1;
      runtime_convTstring(val_00);
      mVar11.afnet.len = val.len;
      mVar11.afnet.str = local_38;
      mVar11.proto = (int)go_itab_net_UnknownNetworkError_error;
      mVar11.err.data = in_stack_00000018;
      mVar11.err.tab = prVar8;
      return mVar11;
    }
LAB_00581395:
    mVar12.afnet.len = val.len;
    mVar12.afnet.str = (uint8 *)prVar5;
    mVar12.proto = (int)name.str;
    mVar12.err.data = in_stack_00000018;
    mVar12.err.tab = prVar8;
    return mVar12;
  }
  if (i == 4) {
    local_38 = &DAT_00288785;
    runtime_cmpstring();
    if ((long)local_28 < 1) {
      prVar5 = in_stack_00000018;
      if ((*(int *)&in_stack_00000018->inter != 0x34706374) &&
         (*(int *)&in_stack_00000018->inter != 0x36706374)) goto LAB_005813cd;
      goto LAB_00581395;
    }
    prVar5 = in_stack_00000018;
    if (((*(int *)&in_stack_00000018->inter == 0x34706475) ||
        (*(int *)&in_stack_00000018->inter == 0x36706475)) ||
       (*(int *)&in_stack_00000018->inter == 0x78696e75)) goto LAB_00581395;
  }
  else if (i == 8) {
    prVar5 = (runtime_itab *)0x6d61726778696e75;
    if (in_stack_00000018->inter == (runtime_interfacetype *)0x6d61726778696e75) goto LAB_00581395;
  }
  else if (((i == 10) &&
           (prVar5 = (runtime_itab *)0x6b63617078696e75,
           in_stack_00000018->inter == (runtime_interfacetype *)0x6b63617078696e75)) &&
          (*(short *)&in_stack_00000018->_type == 0x7465)) goto LAB_00581395;
LAB_005813cd:
  val_01.len = val.len;
  val_01.str = (uint8 *)prVar5;
  runtime_convTstring(val_01);
  mVar13.afnet.len = val.len;
  mVar13.afnet.str = local_38;
  mVar13.proto = (int)go_itab_net_UnknownNetworkError_error;
  mVar13.err.data = in_stack_00000018;
  mVar13.err.tab = prVar8;
  return mVar13;
}

