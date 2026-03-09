
/* WARNING: Removing unreachable block (ram,0x00564217) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.newFile(uintptr fd, string name, os.newFileKind kind, os.File *
   ~r3) */

os_File * os_newFile(uintptr fd,string name,os_newFileKind kind)

{
  uint uVar1;
  os_file *extraout_RAX;
  long *plVar2;
  syscall_Stat_t *st;
  long in_FS_OFFSET;
  error eVar4;
  interface___ obj;
  interface___ finalizer;
  string net;
  int fdi;
  string name_spill;
  os_newFileKind kind_spill;
  os_file *local_120;
  long local_118;
  undefined1 local_110 [32];
  undefined1 local_f0 [24];
  ushort local_d8;
  undefined1 local_a8 [152];
  os_file *local_10;
  void *pvVar3;
  
                    /* Unresolved local var: os.File * f@[???]
                       Unresolved local var: bool pollable@[???] */
  while (local_a8 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (fdi < 0) {
    return (os_File *)fdi;
  }
  local_110[0x1f] = fdi == 1 || fdi == 2;
  runtime_newobject((runtime__type *)&DAT_002493a0);
  local_10 = local_120;
  runtime_newobject((runtime__type *)local_120);
  (local_120->pfd).Sysfd = fdi;
  (local_120->pfd).IsStream = true;
  (local_120->pfd).ZeroReadIsEOF = true;
  (local_120->name).len = name_spill.len;
  plVar2 = (long *)fdi;
  if (runtime_writeBarrier._0_4_ == 0) {
    (local_120->name).str = name_spill.str;
  }
  else {
    kind = (os_newFileKind)&local_120->name;
    runtime_gcWriteBarrierDX();
    local_120 = extraout_RAX;
  }
  local_120->stdoutOrErr = (bool)local_110[0x1f];
  if (runtime_writeBarrier._0_4_ == 0) {
    (local_10->pfd).fdmu.state = (uint64)local_120;
  }
  else {
    kind = (os_newFileKind)local_10;
    runtime_gcWriteBarrier();
  }
  if ((kind_spill == 1) || (kind_spill == 2)) {
    st = (syscall_Stat_t *)0x1;
  }
  else {
    st = (syscall_Stat_t *)CONCAT71(name.str._1_7_,kind_spill == 3);
  }
  if (kind_spill == 1) {
    local_110[0x1e] = (byte)st;
                    /* Unresolved local var: uint16 typ@[???]
                       Unresolved local var: error err@[???]
                       Unresolved local var: syscall.Stat_t st@[???] */
    kind = (os_newFileKind)local_110;
    FUN_0051a15d();
                    /* Unresolved local var: error err@[???] */
    do {
      syscall_Fstat((int)local_f0,st);
      if ((local_118 == 0) ||
         (st = (syscall_Stat_t *)&DAT_002463a0, *(undefined **)(local_118 + 8) != &DAT_002463a0))
      break;
    } while (*(long *)local_110._0_8_ == 4);
    if ((local_118 == 0) && (((local_d8 & 0xf000) == 0x8000 || ((local_d8 & 0xf000) == 0x4000)))) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)local_110[0x1e];
    }
    st = (syscall_Stat_t *)(ulong)uVar1;
    plVar2 = (long *)local_110._0_8_;
  }
  local_110[0x1e] = (byte)st;
  local_110[0] = local_110[0x1e];
  net.len = (int)plVar2;
  net.str = (uint8 *)st;
  eVar4 = internal_poll___FD__Init((internal_poll_FD *)&DAT_00288271,net,SUB81(kind,0));
  pvVar3 = eVar4.data;
  if ((local_110._8_8_ == 0) && (local_110[0x1e] != '\0')) {
    eVar4 = syscall_SetNonblock(fdi,eVar4.data._0_1_);
    pvVar3 = eVar4.data;
  }
  local_110._0_8_ = &PTR_os___file__close_002b36e8;
  obj.data = pvVar3;
  obj._type = (runtime__type *)local_10;
  finalizer.data = (void *)kind;
  finalizer._type = (runtime__type *)&PTR_os___file__close_002b36e8;
  runtime_SetFinalizer(obj,finalizer);
  return (os_File *)local_10;
}

