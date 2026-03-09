
/* WARNING: Removing unreachable block (ram,0x006f46de) */
/* WARNING: Removing unreachable block (ram,0x006f48db) */
/* WARNING: Removing unreachable block (ram,0x006f4705) */
/* WARNING: Removing unreachable block (ram,0x006f48a0) */
/* WARNING: Removing unreachable block (ram,0x006f48ac) */
/* WARNING: Removing unreachable block (ram,0x006f4906) */
/* WARNING: Removing unreachable block (ram,0x006f490e) */
/* WARNING: Removing unreachable block (ram,0x006f489c) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void mime.setExtensionType(string extension, string mimeType, error
   ~r2) */

error mime_setExtensionType(string extension,string mimeType)

{
  undefined1 auVar1 [24];
  uint8 *puVar2;
  runtime_itab *extraout_RAX;
  runtime_itab *extraout_RAX_00;
  map_string_string param;
  char cVar3;
  runtime_maptype *prVar4;
  uint8 *puVar5;
  uint8 *puVar6;
  void *pvVar7;
  runtime_maptype *prVar8;
  long in_FS_OFFSET;
  bool bVar9;
  string t;
  string sVar10;
  string val;
  string val_00;
  string val_01;
  string val_02;
  error eVar11;
  string val_03;
  error eVar12;
  error eVar13;
  string ky;
  string s_00;
  interface___ value;
  interface___ value_00;
  interface___ value_01;
  interface___ key;
  interface___ key_00;
  interface___ key_01;
  interface___ key_02;
  multireturn_string_map_string_string_error_ mVar14;
  multireturn_interface____bool_ mVar15;
  string extension_spill;
  string mimeType_spill;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  runtime_maptype *local_c8;
  uint8 *local_c0;
  runtime_maptype *local_b8;
  char local_b0;
  uint7 uStack_af;
  long local_a8;
  undefined8 local_a0;
  runtime_maptype *local_58 [2];
  runtime_maptype *local_48;
  runtime_maptype *local_40;
  runtime_maptype *local_38;
  uint8 *local_30;
  runtime_maptype *local_28;
  sync_Mutex *local_18;
  undefined **ppuStack_10;
  string s;
  
  puVar2 = local_c0;
  sVar10.len = extension.len;
                    /* Unresolved local var: map[string]string param@[???]
                       Unresolved local var: string justType@[???]
                       Unresolved local var: error err@[???]
                       Unresolved local var: string extLower@[???]
                       Unresolved local var: []string exts@[???] */
  while (local_58 <= *(runtime_maptype ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_18 = (sync_Mutex *)0x0;
  ppuStack_10 = (undefined **)0x0;
  uStack0000000000000028 = 0;
  uStack0000000000000030 = 0;
  sVar10.str = mimeType_spill.str;
  mVar14 = mime_ParseMediaType(sVar10);
  prVar8 = mVar14.err.tab;
                    /* Unresolved local var: interface_{} ei@[???] */
  if (CONCAT71(uStack_af,local_b0) != 0) {
    eVar11.data = local_c8;
    eVar11.tab = (runtime_itab *)local_b8;
    return eVar11;
  }
  local_58[0] = local_c8;
  if (mimeType_spill.len < 5) {
    cVar3 = '\0';
  }
  else {
    local_c8 = (runtime_maptype *)&DAT_00000005;
    runtime_memequal();
    cVar3 = (char)local_c0;
  }
  prVar4 = local_58[0];
  puVar6 = puVar2;
  if (cVar3 != '\0') {
    local_c8 = (runtime_maptype *)&DAT_0028a97f;
    local_c0 = &DAT_00000007;
    ky.len = (int)prVar8;
    ky.str = &DAT_00236500;
    puVar5 = puVar2;
    runtime_mapaccess1_faststr(local_b8,(runtime_hmap *)local_58[0],ky);
    if ((local_b8->typ).ptrdata == 0) {
      local_c0 = &DAT_00000007;
      s_00.len = (int)prVar8;
      s_00.str = &DAT_0028a97f;
      param = (map_string_string)&DAT_0028a97f;
      runtime_mapassign_faststr(local_b8,(runtime_hmap *)prVar4,s_00);
      (local_b8->typ).ptrdata = 5;
      prVar8 = local_b8;
      if (runtime_writeBarrier._0_4_ == 0) {
        (local_b8->typ).size = (uintptr)&DAT_002892e0;
      }
      else {
        runtime_gcWriteBarrier();
      }
      local_c8 = local_b8;
      t.len = (int)prVar4;
      t.str = (uint8 *)local_b8;
      mime_FormatMediaType(t,param);
      mimeType_spill.str = &DAT_00000007;
      puVar6 = puVar5;
    }
  }
  s.len = extension_spill.len;
  s.str = mimeType_spill.str;
  local_30 = mimeType_spill.str;
  sVar10 = strings_ToLower(s);
  val.len = (runtime__type *)sVar10.len;
  local_48 = local_c8;
  val.str = (uint8 *)local_c8;
  runtime_convTstring(val);
  local_38 = local_c8;
  val_00.len = (int)val.len;
  val_00.str = (uint8 *)local_c8;
  runtime_convTstring(val_00);
  prVar4 = local_38;
  value.data = puVar6;
  value._type = &prVar8->typ;
  key.data = &DAT_00225520;
  key._type = val.len;
  sync___Map__Store((sync_Map *)local_c8,key,value);
  val_01.len = (int)val.len;
  val_01.str = (uint8 *)local_48;
  runtime_convTstring(val_01);
  val_02.len = (int)val.len;
  val_02.str = (uint8 *)prVar4;
  local_38 = prVar4;
  runtime_convTstring(val_02);
  value_00.data = puVar6;
  value_00._type = &prVar8->typ;
  key_00.data = &DAT_00225520;
  key_00._type = val.len;
  sync___Map__Store((sync_Map *)prVar4,key_00,value_00);
  LOCK();
  bVar9 = mime_extensionsMu.state == 0;
  if (bVar9) {
    mime_extensionsMu.state = 1;
  }
  UNLOCK();
  if (!bVar9) {
    sync___Mutex__lockSlow(&mime_extensionsMu);
  }
  ppuStack_10 = &PTR_sync___Mutex__Unlock_002b3aa0;
  local_18 = &mime_extensionsMu;
  local_28 = local_58[0];
  key_01.data = puVar2;
  key_01._type = (runtime__type *)&DAT_00225520;
  mVar15 = sync___Map__Load((sync_Map *)local_58[0],key_01);
  eVar13.data = mVar15.value.data;
  if (local_b0 != '\0') {
    runtime_panicdottypeE((runtime__type *)&DAT_0022dfe0,eVar13.data,(runtime__type *)&DAT_00225520)
    ;
    runtime_deferreturn();
    eVar13.tab = extraout_RAX_00;
    return eVar13;
  }
  runtime_growslice((runtime__type *)0x0,(runtime_slice)(ZEXT824(prVar8) << 0x80),1);
  prVar4 = local_48;
  prVar8 = (runtime_maptype *)((ulong)uStack_af * 0x100);
  pvVar7 = (void *)(local_a8 + 1);
  (prVar8->typ).ptrdata = (uintptr)local_c0;
  local_40 = prVar8;
  if (runtime_writeBarrier._0_4_ == 0) {
    (prVar8->typ).size = (uintptr)local_48;
    prVar4 = (runtime_maptype *)0x0;
    prVar8 = local_48;
  }
  else {
    runtime_gcWriteBarrierBX();
  }
  val_03.len = (int)prVar4;
  val_03.str = puVar2;
  runtime_convTstring(val_03);
  local_38 = (runtime_maptype *)0x0;
  auVar1._8_8_ = local_a0;
  auVar1._0_8_ = prVar4;
  auVar1._16_8_ = 0;
  runtime_convTslice((__uint8)(auVar1 << 0x40));
  value_01.data = pvVar7;
  value_01._type = &prVar8->typ;
  key_02.data = &DAT_00221f20;
  key_02._type = &prVar4->typ;
  sync___Map__Store((sync_Map *)0x0,key_02,value_01);
  uStack0000000000000028 = 0;
  uStack0000000000000030 = 0;
  sync___Mutex__Unlock(local_18);
  eVar12.data = prVar4;
  eVar12.tab = extraout_RAX;
  return eVar12;
}

