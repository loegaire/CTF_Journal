
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.loadLocation(string name, []string sources, time.Location *
   z, error firstErr) */

multireturn_time_Location___error__conflict time_loadLocation(string name,__string sources)

{
  undefined1 auVar1 [24];
  runtime__type *prVar2;
  runtime__type *prVar3;
  runtime__type *prVar4;
  long lVar5;
  runtime__type *prVar6;
  runtime__type *prVar7;
  uint8 *puVar8;
  long in_FS_OFFSET;
  string name_00;
  string sVar9;
  string name_01;
  string s;
  string a0;
  string sVar10;
  string a1;
  __uint8 data;
  multireturn_time_Location___error__conflict mVar11;
  multireturn_time_Location___error__conflict mVar12;
  multireturn_time_Location___error__conflict mVar13;
  multireturn_time_Location___error_ mVar14;
  multireturn_time_Location___error__conflict mVar15;
  string source;
  multireturn___uint8_error__conflict3 mVar16;
  string name_spill;
  __string sources_spill;
  runtime__type *local_a0;
  runtime__type *local_98;
  runtime__type *local_90;
  runtime__type *local_88;
  runtime__type *local_80;
  runtime__type *local_78;
  runtime__type *local_70;
  uint8 local_48 [24];
  undefined1 local_30 [8];
  runtime__type *local_28;
  runtime__type *local_20;
  string *local_18;
  runtime__type *local_10;
  
  prVar7 = (runtime__type *)sources.cap;
  puVar8 = (uint8 *)sources.len;
  prVar6 = (runtime__type *)name.len;
  while (local_30 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: string source@[???] */
  if (sources_spill.len < 1) {
    prVar2 = (runtime__type *)0x0;
    prVar4 = (runtime__type *)0x0;
    sources_spill.len = (int)puVar8;
  }
  else {
    lVar5 = 0;
    prVar4 = (runtime__type *)0x0;
    prVar6 = (runtime__type *)0x0;
    while( true ) {
      prVar7 = local_90;
      local_a0 = (runtime__type *)(sources_spill.array)->str;
      local_98 = (runtime__type *)(sources_spill.array)->len;
      sVar9.len = (int)prVar6;
      sVar9.str = (uint8 *)local_a0;
      source.len = (int)local_98;
      source.str = (uint8 *)sources_spill.array;
      local_20 = prVar4;
      local_18 = sources_spill.array;
      mVar16 = time_loadTzinfo(sVar9,source);
      data.len = mVar16.~r3.tab;
      prVar2 = local_78;
      prVar4 = local_70;
      if (local_78 == (runtime__type *)0x0) {
        local_a0 = local_90;
        local_98 = local_88;
        local_90 = local_80;
        name_01.len = (int)local_80;
        name_01.str = name_spill.str;
        data.array = (uint8 *)prVar7;
        data.cap = name_spill.len;
        mVar14 = time_LoadLocationFromTZData(name_01,data);
        mVar15.firstErr.tab = mVar14.~r3.tab;
        prVar2 = local_80;
        prVar4 = local_78;
        if (local_80 == (runtime__type *)0x0) {
          mVar15.z = (time_Location *)local_88;
          mVar15.firstErr.data = (void *)0x0;
          return mVar15;
        }
      }
      if ((prVar6 != (runtime__type *)0x0) ||
         (((prVar2 != (runtime__type *)0x0 && ((undefined *)prVar2->ptrdata == &DAT_002463a0)) &&
          (prVar4->size == 2)))) {
        prVar2 = prVar6;
        prVar4 = local_20;
      }
      prVar6 = (runtime__type *)&DAT_002463a0;
      lVar5 = lVar5 + 1;
      prVar7 = prVar4;
      if (sources_spill.len <= lVar5) break;
      sources_spill.array = local_18 + 1;
                    /* Unresolved local var: []uint8 zoneData@[???]
                       Unresolved local var: error err@[???] */
      prVar6 = prVar2;
    }
  }
  prVar3 = prVar2;
  if (time_loadFromEmbeddedTZData != (func_string___string__error_ **)0x0) {
                    /* Unresolved local var: string zonedata@[???]
                       Unresolved local var: error err@[???] */
    sVar10.len = (int)prVar7;
    sVar10.str = (uint8 *)sources_spill.len;
    local_10 = prVar4;
    (**time_loadFromEmbeddedTZData)
              (sVar10,(string *)time_loadFromEmbeddedTZData,(error *)name_spill.str);
    prVar4 = local_88;
    if (local_90 == (runtime__type *)0x0) {
      s.len = (int)local_a0;
      s.str = (uint8 *)local_98;
      runtime_stringtoslicebyte((runtime_tmpBuf *)local_48,s);
      name_00.len = (int)name_spill.str;
      name_00.str = (uint8 *)local_98;
      auVar1._8_8_ = name_spill.len;
      auVar1._0_8_ = sources_spill.len;
      auVar1._16_8_ = 0;
      mVar14 = time_LoadLocationFromTZData(name_00,(__uint8)(auVar1 << 0x40));
      mVar13.firstErr.tab = mVar14.~r3.tab;
      local_90 = local_80;
      local_98 = mVar13.firstErr.tab;
      prVar4 = local_78;
      if (local_80 == (runtime__type *)0x0) {
        mVar13.z = (time_Location *)local_88;
        mVar13.firstErr.data = (void *)0x0;
        return mVar13;
      }
    }
    prVar6 = local_98;
    if ((prVar2 != (runtime__type *)0x0) ||
       (((prVar3 = local_90, prVar7 = prVar4, local_90 != (runtime__type *)0x0 &&
         ((undefined *)local_90->ptrdata == &DAT_002463a0)) && (prVar4->size == 2)))) {
      prVar3 = prVar2;
      prVar4 = local_10;
      prVar7 = local_10;
    }
  }
  if (prVar3 != (runtime__type *)0x0) {
    mVar12.firstErr.tab = (runtime_itab *)prVar6;
    mVar12.z = (time_Location *)prVar3;
    mVar12.firstErr.data = prVar4;
    return mVar12;
  }
  a0.len = (int)prVar4;
  a0.str = (uint8 *)prVar6;
  a1.len = (int)prVar7;
  a1.str = (uint8 *)sources_spill.len;
  sVar9 = runtime_concatstring2((runtime_tmpBuf *)name_spill.len,a0,a1);
  mVar11.firstErr.tab = sVar9.len;
  local_28 = local_88;
  prVar6 = local_80;
  runtime_newobject(local_88);
  DAT_0029adcc = local_80;
  if (runtime_writeBarrier._0_4_ == 0) {
    DAT_0029adc4 = local_28;
  }
  else {
    runtime_gcWriteBarrier();
  }
  mVar11.z = (time_Location *)&go_itab__errors_errorString_error;
  mVar11.firstErr.data = prVar6;
  return mVar11;
}

