
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void mime.consumeValue(string v, string value, string rest) */

multireturn_string_string__conflict mime_consumeValue(string v)

{
  uint8 uVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  uint8 *puVar4;
  uint8 *extraout_RAX;
  long lVar5;
  undefined8 ***in_RDI;
  long in_FS_OFFSET;
  bool bVar6;
  string v_00;
  string s;
  interface___ e;
  interface___ e_00;
  runtime_slice old;
  runtime_slice old_00;
  multireturn_string_string_ mVar7;
  multireturn_string_string__conflict mVar8;
  multireturn_string_string__conflict mVar9;
  multireturn_string_string__conflict mVar10;
  multireturn_string_string__conflict mVar11;
  multireturn_string_string__conflict mVar12;
  string v_spill;
  uint8 *local_70;
  ulong local_68;
  uint8 *local_60;
  int local_58;
  undefined8 **local_50;
  ulong local_48;
  undefined8 **local_28;
  long lStack_20;
  undefined8 **local_18;
  ulong uStack_10;
  
  v_00.len = (uint8 *)v.len;
  puVar4 = v.str;
                    /* Unresolved local var: strings.Builder * buffer@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    puVar4 = extraout_RAX;
  }
  if (v_spill.len == 0) {
    mVar9.value.len = (int)v_00.len;
    mVar9.value.str = puVar4;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = in_RDI;
    mVar9.rest = (string)(auVar3 << 0x40);
    return mVar9;
  }
  if (*v_spill.str != 0x22) {
    v_00.str = puVar4;
    mVar7 = mime_consumeToken(v_00);
    mVar8.rest.len = mVar7.rest.len;
    mVar8.value.len = local_58;
    mVar8.value.str = local_70;
    mVar8.rest.str = local_60;
    return mVar8;
  }
  local_28 = (undefined8 ***)0x0;
  lStack_20 = 0;
  local_18 = (undefined8 ***)0x0;
  uStack_10 = 0;
  puVar4 = (uint8 *)0x1;
                    /* Unresolved local var: int i@[???] */
  do {
    if (v_spill.len <= (long)puVar4) {
      mVar12.value.len = (int)v_00.len;
      mVar12.value.str = puVar4;
      mVar12.rest.len = (int)in_RDI;
      mVar12.rest.str = (uint8 *)v_spill.len;
      return mVar12;
    }
                    /* Unresolved local var: uint8 r@[???] */
    if ((ulong)v_spill.len <= puVar4) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    uVar1 = v_spill.str[(long)puVar4];
    if (uVar1 == 0x22) {
      lVar5 = (v_spill.len - (long)puVar4) + -1;
      mVar11.rest.str = (uint8 *)(-lVar5 >> 0x3f);
      mVar11.value.str = v_spill.str + ((ulong)(puVar4 + 1) & (ulong)mVar11.rest.str);
      mVar11.value.len = lVar5;
      mVar11.rest.len = (int)in_RDI;
      return mVar11;
    }
    if (uVar1 == 0x5c) {
      if ((long)(puVar4 + 1) < v_spill.len) {
        if ((ulong)v_spill.len <= puVar4 + 1) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        s.len = (int)&DAT_00298551;
        s.str = puVar4;
        strings_IndexRune(s,(uint)(puVar4 + 1)[(long)v_spill.str]);
        bVar6 = -1 < (long)local_68;
      }
      else {
        bVar6 = false;
      }
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      v_00.len = puVar4 + 1;
      if ((ulong)v_spill.len <= v_00.len) goto LAB_006f3a65;
      bVar2 = (puVar4 + 1)[(long)v_spill.str];
      if ((undefined8 ***)local_28 == (undefined8 ***)0x0) {
        local_28 = &local_28;
      }
      else if ((undefined8 ***)local_28 != &local_28) goto LAB_006f3a45;
      in_RDI = (undefined8 ***)local_18;
      if (uStack_10 < (long)local_18 + 1U) {
        local_68 = uStack_10;
        old.len = v_spill.len;
        old.array = v_00.len;
        old.cap = (int)local_18;
        runtime_growslice((runtime__type *)&DAT_00225720,old,(ulong)bVar2);
        uStack_10 = local_48;
        lStack_20 = local_58;
        in_RDI = (undefined8 ***)local_50;
      }
      *(byte *)(lStack_20 + (long)in_RDI) = bVar2;
      local_18 = in_RDI;
    }
    else {
      if ((uVar1 == 0xd) || (uVar1 == 10)) {
        mVar10.value.len._0_1_ = uVar1;
        mVar10.value.str = puVar4;
        mVar10.value.len._1_7_ = 0;
        mVar10.rest.len = (int)in_RDI;
        mVar10.rest.str = (uint8 *)v_spill.len;
        return mVar10;
      }
      bVar2 = v_spill.str[(long)puVar4];
      old_00.array = (ulong)bVar2;
      if ((undefined8 ***)local_28 == (undefined8 ***)0x0) {
        local_28 = &local_28;
      }
      else if ((undefined8 ***)local_28 != &local_28) {
        e.data._0_1_ = bVar2;
        e._type = (runtime__type *)&net_http__stmp_78;
        e.data._1_7_ = 0;
        v_00.len = (uint8 *)(ulong)bVar2;
        runtime_gopanic(e);
LAB_006f3a45:
        e_00.data = v_00.len;
        e_00._type = (runtime__type *)&net_http__stmp_78;
        runtime_gopanic(e_00);
LAB_006f3a65:
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      old_00.cap = &local_28;
      if (uStack_10 < (long)local_18 + 1U) {
        local_68 = uStack_10;
        old_00.len = v_spill.len;
        runtime_growslice((runtime__type *)&DAT_00225720,old_00,(int)local_18);
        uStack_10 = local_48;
        lStack_20 = local_58;
        local_18 = local_50;
      }
      in_RDI = &local_28;
      *(byte *)(lStack_20 + (long)local_18) = bVar2;
      v_00.len = puVar4;
    }
    local_18 = (undefined8 **)((long)local_18 + 1);
    puVar4 = v_00.len + 1;
  } while( true );
}

