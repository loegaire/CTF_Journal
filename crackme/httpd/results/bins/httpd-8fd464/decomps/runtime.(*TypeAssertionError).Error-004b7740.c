
/* WARNING: Removing unreachable block (ram,0x004b79ef) */
/* WARNING: Removing unreachable block (ram,0x004b7971) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*TypeAssertionError).Error(runtime.TypeAssertionError *
   e, string ~r0) */

string runtime___TypeAssertionError__Error(runtime_TypeAssertionError *e)

{
  runtime__type *prVar1;
  runtime__type *prVar2;
  undefined *puVar3;
  int in_RSI;
  undefined **ppuVar4;
  uint8 *in_RDI;
  undefined **ppuVar5;
  uint8 *in_R8;
  int in_R9;
  uint8 *in_R10;
  int in_R11;
  long in_FS_OFFSET;
  string sVar6;
  string sVar7;
  string sVar8;
  string a1;
  string a1_00;
  __string a;
  __string a_00;
  string a0;
  string a0_00;
  string a2;
  string a3;
  undefined1 auVar9 [16];
  runtime_TypeAssertionError *e_spill;
  undefined *local_108;
  runtime__type *local_100;
  uint8 *local_f0;
  uint8 *local_e8;
  uint8 *local_c8;
  undefined1 local_90 [8];
  undefined *local_88 [2];
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  uint8 local_60 [8];
  undefined *local_58;
  runtime__type *local_50;
  undefined *local_48;
  undefined8 local_40;
  runtime_tmpBuf *local_38;
  undefined *local_28;
  undefined8 local_20;
  undefined *local_18;
  undefined8 local_10;
  
                    /* Unresolved local var: string inter@[???]
                       Unresolved local var: string as@[???]
                       Unresolved local var: string cs@[???] */
  while (local_90 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (e_spill->_interface == (runtime__type *)0x0) {
    prVar1 = (runtime__type *)&DAT_00000009;
    local_88[0] = &DAT_0028df6a;
  }
  else {
    runtime____type__string((runtime__type *)e_spill);
                    /* Unresolved local var: string msg@[???] */
    prVar1 = local_100;
    local_88[0] = local_108;
  }
  runtime____type__string((runtime__type *)e_spill);
  if (e_spill->concrete != (runtime__type *)0x0) {
    local_78 = local_108;
    runtime____type__string((runtime__type *)e_spill);
    if ((e_spill->missingMethod).len == 0) {
      ppuVar5 = local_88;
      prVar2 = local_100;
      local_38 = (runtime_tmpBuf *)FUN_0051a18b();
      local_68 = &DAT_0029d2b3;
      local_60[0] = 0x16;
      local_60[1] = 0;
      local_60[2] = 0;
      local_60[3] = 0;
      local_60[4] = 0;
      local_60[5] = 0;
      local_60[6] = 0;
      local_60[7] = 0;
      local_58 = local_88[0];
      local_48 = &DAT_00287db1;
      local_40 = 4;
      local_28 = &DAT_00289444;
      local_20 = 6;
      local_18 = local_78;
      ppuVar4 = &local_68;
      a.len = (int)prVar2;
      a.array = (string *)local_100;
      a.cap = (int)ppuVar5;
      local_50 = prVar1;
      runtime_concatstrings(local_38,a);
      runtime_memequal();
      runtime____type__pkgpath((runtime__type *)e_spill);
      local_70 = local_78;
      sVar6 = runtime____type__pkgpath(local_100);
      a0.str = (uint8 *)sVar6.len;
      puVar3 = local_70;
      runtime_memequal();
      a1.len = (int)ppuVar4;
      a1.str = (uint8 *)ppuVar5;
      a0.len = (int)puVar3;
      sVar6 = runtime_concatstring2((runtime_tmpBuf *)0x2a11ea,a0,a1);
      sVar7.len = sVar6.len;
      sVar7.str = local_e8;
      return sVar7;
    }
    ppuVar5 = local_88;
    auVar9 = FUN_0051a18b();
    local_58 = auVar9._0_8_;
    local_68 = &DAT_0029d2b3;
    local_60[0] = 0x16;
    local_60[1] = 0;
    local_60[2] = 0;
    local_60[3] = 0;
    local_60[4] = 0;
    local_60[5] = 0;
    local_60[6] = 0;
    local_60[7] = 0;
    local_48 = &DAT_0028b872;
    local_40 = 8;
    local_38 = (runtime_tmpBuf *)local_78;
    local_28 = &DAT_00299c2f;
    local_20 = 0x11;
    local_10 = *(undefined8 *)(auVar9._8_8_ + 0x20);
    local_18 = *(undefined **)(auVar9._8_8_ + 0x18);
    a_00.len = (int)local_18;
    a_00.array = (string *)&DAT_0029d2b3;
    a_00.cap = (int)ppuVar5;
    sVar6 = runtime_concatstrings((runtime_tmpBuf *)&local_68,a_00);
    sVar8.len = sVar6.len;
    sVar8.str = local_f0;
    return sVar8;
  }
  a1_00.len = in_RSI;
  a1_00.str = in_RDI;
  a0_00.len = 0;
  a0_00.str = (uint8 *)local_100;
  a2.len = in_R9;
  a2.str = in_R8;
  a3.len = in_R11;
  a3.str = in_R10;
  sVar6 = runtime_concatstring4((runtime_tmpBuf *)&DAT_0029451d,a0_00,a1_00,a2,a3);
  sVar6.str = local_c8;
  return sVar6;
}

