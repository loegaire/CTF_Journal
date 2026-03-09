
/* WARNING: Unknown calling convention */

void mime_loadMimeFile(string filename)

{
  os_File *poVar1;
  runtime_itab *prVar2;
  long extraout_RAX;
  long lVar3;
  int in_RCX;
  os_File *poVar4;
  undefined8 in_RDI;
  long in_FS_OFFSET;
  multireturn_os_File___error_ mVar6;
  __string _Var7;
  string a1;
  string a0;
  string sVar8;
  string s;
  interface___ e;
  string extension;
  string mimeType;
  string filename_spill;
  os_File *local_f8;
  uint8 *local_e8;
  os_File *local_e0;
  long local_d8;
  os_File *local_d0;
  uint8 *local_b8;
  os_File *local_b0;
  uint8 *local_a8;
  runtime_itab *local_a0;
  bufio_Scanner local_98;
  os_File *local_18;
  undefined **ppuStack_10;
  runtime_itab *ptr;
  uint8 *puVar5;
  error eVar9;
  
  sVar8.len = filename.len;
                    /* Unresolved local var: os.File * f@[???] */
  while (&local_98.maxTokenSize <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_18 = (os_File *)0x0;
  ppuStack_10 = (undefined **)0x0;
  local_f8 = (os_File *)filename_spill.len;
  local_e8 = (uint8 *)((ulong)local_e8 & 0xffffffff00000000);
  sVar8.str = (uint8 *)filename_spill.len;
  mVar6 = os_OpenFile(sVar8,in_RCX,(io_fs_FileMode)in_RDI);
  if (local_d8 != 0) {
    return;
  }
  ppuStack_10 = &PTR_os___File__Close_002b36e0;
  local_18 = local_e0;
  local_98.r.data = (void *)FUN_0051a182(&local_98);
  local_98.r.tab = (runtime_itab *)go_itab__os_File_io_Reader;
  local_98.split = (bufio_SplitFunc **)&PTR_bufio_ScanLines_002b2c90;
  local_98.maxTokenSize = 0x10000;
  ptr = mVar6.~r4.tab;
LAB_006f4f32:
  bufio___Scanner__Scan(&local_98);
  puVar5 = (uint8 *)local_98.token.len;
  if ((char)local_f8 != '\0') goto code_r0x006f4f50;
  prVar2 = local_98.err.tab;
  local_f8 = local_98.err.data;
  if (io_EOF.tab == local_98.err.tab) {
    runtime_ifaceeq(local_98.err.tab,ptr,local_98.err.data);
    prVar2 = local_98.err.tab;
    local_f8 = local_98.err.data;
    if ((char)local_e8 != '\0') {
      prVar2 = (runtime_itab *)0x0;
      local_f8 = (os_File *)0x0;
                    /* Unresolved local var: error err@[???] */
    }
  }
  if (prVar2 == (runtime_itab *)0x0) {
    os___File__Close(local_18);
    return;
  }
  e.data = ptr;
  e._type = prVar2->_type;
  poVar4 = local_f8;
  runtime_gopanic(e);
  lVar3 = extraout_RAX;
  puVar5 = local_a8;
  goto LAB_006f508e;
code_r0x006f4f50:
  sVar8 = runtime_slicebytetostring
                    ((runtime_tmpBuf *)local_98.token.array,(uint8 *)ptr,local_98.token.len);
  s.len = sVar8.len;
                    /* Unresolved local var: []string fields@[???] */
  local_f8 = local_e0;
  s.str = local_e8;
  _Var7 = strings_Fields(s);
  ptr = (runtime_itab *)_Var7.len;
  if (1 < (long)local_e8) {
    ptr = *(runtime_itab **)puVar5;
    if (*(uint8 **)((int)puVar5 + 8) == (uint8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
                    /* Unresolved local var: string ext@[???] */
    if ((*(uint8 *)&ptr->inter != 0x23) && (poVar4 = (os_File *)(local_e8 + -1), 0 < (long)poVar4))
    {
      lVar3 = 0;
      local_b8 = *(uint8 **)((int)puVar5 + 8);
      local_b0 = poVar4;
      local_a0 = ptr;
LAB_006f508e:
      do {
        a1.str = puVar5 + 0x10;
        poVar1 = *(os_File **)(puVar5 + 0x18);
        if (poVar1 == (os_File *)0x0) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        ptr = local_a0;
        if (**(char **)a1.str == '#') break;
        a1.len = (int)poVar4;
        a0.len = (int)poVar1;
        a0.str = (uint8 *)local_a0;
        puVar5 = a1.str;
        sVar8 = runtime_concatstring2((runtime_tmpBuf *)((long)&go_string__ + 4),a0,a1);
        extension.len = sVar8.len;
        local_f8 = local_d0;
        local_e8 = local_b8;
        extension.str = (uint8 *)local_a0;
        mimeType.len = (int)puVar5;
        mimeType.str = local_b8;
        eVar9 = mime_setExtensionType(extension,mimeType);
        ptr = eVar9.data;
        lVar3 = lVar3 + 1;
        poVar4 = local_b0;
        puVar5 = a1.str;
        local_e0 = poVar1;
        local_a8 = a1.str;
      } while (lVar3 < (long)local_b0);
    }
  }
  goto LAB_006f4f32;
}

