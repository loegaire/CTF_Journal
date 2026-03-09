
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.parseNSSConfFile(string file, net.nssConf * ~r1) */

net_nssConf * net_parseNSSConfFile(string file)

{
  net_nssConf *extraout_RAX;
  net_nssConf *extraout_RAX_00;
  int in_RCX;
  undefined8 in_RDI;
  long in_FS_OFFSET;
  string name;
  io_Reader r;
  error eVar1;
  multireturn_os_File___error_ mVar2;
  string file_spill;
  undefined8 uStack0000000000000018;
  os_File *local_48;
  runtime_itab *local_40;
  void *local_38;
  
  name.len = file.len;
                    /* Unresolved local var: os.File * f@[???]
                       Unresolved local var: error err@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uStack0000000000000018 = 0;
  name.str = (uint8 *)file_spill.len;
  mVar2 = os_OpenFile(name,in_RCX,(io_fs_FileMode)in_RDI);
  r.data = mVar2.~r4.tab;
  if (local_40 != (runtime_itab *)0x0) {
    runtime_newobject((runtime__type *)&DAT_0024cd20);
    if (runtime_writeBarrier._0_4_ == 0) {
      *(undefined8 *)(file_spill.len + 0x10) = 0;
    }
    else {
      runtime_gcWriteBarrierCX();
      file_spill.len = (int)extraout_RAX;
    }
    (((net_nssConf *)file_spill.len)->err).tab = local_40;
    if (runtime_writeBarrier._0_4_ == 0) {
      (((net_nssConf *)file_spill.len)->err).data = local_38;
    }
    else {
      runtime_gcWriteBarrierCX();
      file_spill.len = (int)extraout_RAX_00;
    }
    return (net_nssConf *)file_spill.len;
  }
  r.tab = (runtime_itab *)go_itab__os_File_io_Reader;
  net_parseNSSConf(r);
  uStack0000000000000018 = 0;
  eVar1 = os___File__Close(local_48);
  return (net_nssConf *)eVar1.tab;
}

