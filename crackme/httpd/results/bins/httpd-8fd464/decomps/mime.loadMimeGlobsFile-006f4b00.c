
/* WARNING: Removing unreachable block (ram,0x006f4d46) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void mime.loadMimeGlobsFile(string filename, error ~r1) */

error mime_loadMimeGlobsFile(string filename)

{
  bool bVar1;
  os_File *poVar2;
  runtime_itab *extraout_RAX;
  int in_RCX;
  void *extraout_RDX;
  sync_Map **in_RSI;
  undefined8 in_RDI;
  bufio_Scanner *pbVar3;
  int in_R8;
  long in_FS_OFFSET;
  string sVar4;
  string s;
  error eVar5;
  interface___ e;
  error eVar6;
  multireturn_os_File___error_ mVar7;
  __string _Var8;
  interface___ key;
  string sep;
  multireturn_interface____bool_ mVar9;
  string filename_spill;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  os_File *local_108;
  os_File *local_f0;
  runtime_itab *local_e8;
  undefined8 *local_e0;
  long local_d8;
  sync_Map *local_a8;
  void *local_a0;
  bufio_Scanner local_98;
  os_File *local_18;
  undefined **ppuStack_10;
  
  sVar4.len = filename.len;
                    /* Unresolved local var: os.File * f@[???]
                       Unresolved local var: error err@[???] */
  while (&local_98.r.data <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_18 = (os_File *)0x0;
  ppuStack_10 = (undefined **)0x0;
  uStack0000000000000018 = 0;
  uStack0000000000000020 = 0;
  local_108 = (os_File *)filename_spill.len;
  bVar1 = false;
  sVar4.str = (uint8 *)filename_spill.len;
  mVar7 = os_OpenFile(sVar4,in_RCX,(io_fs_FileMode)in_RDI);
  eVar5.data = mVar7.~r4.tab;
  if (local_e8 != (runtime_itab *)0x0) {
    eVar5.tab = local_e8;
    return eVar5;
  }
  ppuStack_10 = &PTR_os___File__Close_002b36e0;
  local_18 = local_f0;
  pbVar3 = &local_98;
  FUN_0051a182();
  local_98.r.tab = (runtime_itab *)go_itab__os_File_io_Reader;
  local_98.split = (bufio_SplitFunc **)&PTR_bufio_ScanLines_002b2c90;
  local_98.maxTokenSize = 0x10000;
  local_98.r.data = extraout_RDX;
  while( true ) {
    poVar2 = local_f0;
    bufio___Scanner__Scan(&local_98);
    if ((char)local_108 == '\0') break;
    sVar4 = runtime_slicebytetostring
                      ((runtime_tmpBuf *)local_98.token.array,(uint8 *)eVar5.data,local_98.token.len
                      );
    s.len = sVar4.len;
    local_108 = local_f0;
    bVar1 = true;
    local_f0 = (os_File *)0x0;
    s.str = &DAT_00287748;
    sep.len = (int)pbVar3;
    sep.str = (uint8 *)poVar2;
    _Var8 = strings_genSplit(s,sep,(int)in_RSI,in_R8);
    eVar5.data = (runtime_itab *)_Var8.len;
    if ((2 < local_d8) && (0 < (long)local_e0[1])) {
      eVar5.data = (runtime_itab *)local_e0[5];
      if ((1 < (long)eVar5.data) && ((*(char *)*local_e0 != '#' && (*(char *)local_e0[4] == '*'))))
      {
        local_a8 = (sync_Map *)((char *)local_e0[4] + 1);
        local_a0 = (void *)((long)eVar5.data[-1].fun + 7);
        local_108 = (os_File *)&DAT_00225520;
        in_RSI = &local_a8;
        key.data = local_a0;
        key._type = (runtime__type *)&DAT_00225520;
        mVar9 = sync___Map__Load(local_a8,key);
        eVar5.data = mVar9.value.data;
      }
    }
  }
  if ((io_EOF.tab == local_98.err.tab) &&
     (runtime_ifaceeq(local_98.err.tab,eVar5.data,local_98.err.data), bVar1)) {
    local_98.err.tab = (runtime_itab *)0x0;
                    /* Unresolved local var: error err@[???] */
  }
  if (local_98.err.tab != (runtime_itab *)0x0) {
    e.data = eVar5.data;
    e._type = (local_98.err.tab)->_type;
    runtime_gopanic(e);
    runtime_deferreturn();
    eVar6.data = eVar5.data;
    eVar6.tab = extraout_RAX;
    return eVar6;
  }
  uStack0000000000000018 = 0;
  uStack0000000000000020 = 0;
  eVar5 = os___File__Close(local_18);
  return eVar5;
}

