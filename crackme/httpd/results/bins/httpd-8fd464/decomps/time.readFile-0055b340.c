
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.readFile(string name, []uint8 ~r1, error ~r2) */

multireturn___uint8_error_ time_readFile(string name)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  void *fd;
  ulong extraout_RAX;
  undefined8 extraout_RAX_00;
  void *fd_00;
  long lVar4;
  void *cap;
  undefined1 *puVar5;
  runtime_itab *prVar6;
  void *in_RSI;
  runtime_itab *in_RDI;
  long in_FS_OFFSET;
  byte bVar7;
  string path;
  string val;
  multireturn_int_error__conflict5 mVar8;
  __uint8 p;
  runtime_slice old;
  multireturn___uint8_error_ mVar9;
  multireturn___uint8_error_ mVar10;
  multireturn___uint8_error_ mVar11;
  string name_spill;
  runtime_itab *prStack0000000000000018;
  void *pvStack0000000000000020;
  void *pvStack0000000000000028;
  undefined1 *puStack0000000000000030;
  void *pvStack0000000000000038;
  void *local_1098;
  void *local_1088;
  runtime_itab *local_1080;
  int local_1078;
  void *local_1070;
  runtime_itab local_1028 [128];
  runtime_itab *local_28;
  int local_20;
  undefined **local_10;
  
  path.len = name.len;
  bVar7 = 0;
  while( true ) {
                    /* Unresolved local var: uintptr f@[???]
                       Unresolved local var: int n@[???]
                       Unresolved local var: error err@[???]
                       Unresolved local var: []uint8 ret@[???]
                       Unresolved local var: uint8[4096] buf@[???]
                       Unresolved local var: uintptr ~R0@[???] */
    if (((undefined1 *)0x1027 < &stack0x00000000) &&
       (*(runtime_itab **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < local_1028)) break;
    runtime_morestack_noctxt();
  }
  local_10 = (undefined **)0x0;
  prStack0000000000000018 = (runtime_itab *)0x0;
  pvStack0000000000000020 = (void *)0x0;
  pvStack0000000000000028 = (void *)0x0;
  puStack0000000000000030 = (undefined1 *)0x0;
  pvStack0000000000000038 = (void *)0x0;
  path.str = name_spill.str;
                    /* Unresolved local var: int fd@[???]
                       Unresolved local var: error err@[???] */
  mVar8 = syscall_Open(path,name_spill.len,(uint32)in_RDI);
  mVar9.~r1.len = mVar8.err.tab;
  if (local_1080 == (runtime_itab *)0x0) {
    prVar6 = (runtime_itab *)0x0;
    iVar3 = 0;
    fd_00 = local_1088;
  }
  else {
    iVar3 = local_1078;
    fd_00 = (void *)0x0;
    prVar6 = local_1080;
  }
  if (prVar6 != (runtime_itab *)0x0) {
    mVar9.~r1.array = (uint8 *)iVar3;
    mVar9.~r1.cap = (int)fd_00;
    mVar9.~r2.data = in_RSI;
    mVar9.~r2.tab = in_RDI;
    return mVar9;
  }
  local_10 = &PTR_time_closefd_002b3b48;
  prVar6 = local_1028;
  for (lVar4 = 0x200; lVar4 != 0; lVar4 = lVar4 + -1) {
    prVar6->inter = (runtime_interfacetype *)0x0;
    prVar6 = (runtime_itab *)((long)prVar6 + (ulong)bVar7 * -0x10 + 8);
  }
  fd = (void *)0x0;
  cap = (void *)0x0;
  local_28 = (runtime_itab *)0x0;
  while( true ) {
    pvVar2 = local_1088;
    local_1098 = (void *)0x1000;
    p.len = (int)cap;
    p.array = (uint8 *)local_28;
    p.cap = (int)prVar6;
    syscall_read((int)fd,p);
    local_20 = local_1078;
    if (0 < (long)local_1088) {
      if ((void *)0x1000 < local_1088) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAlen();
      }
      pvVar1 = (void *)((long)cap + (long)local_1088);
      if (fd < pvVar1) {
        old.len = (int)local_28;
        old.array = local_1080;
        old.cap = (int)pvVar1;
        runtime_growslice((runtime__type *)&DAT_00225720,old,(int)cap);
        fd = local_1070;
        local_28 = local_1080;
        local_1088 = pvVar1;
      }
      local_1098 = pvVar2;
      runtime_memmove();
      cap = pvVar1;
    }
    if ((pvVar2 == (void *)0x0) || (local_1080 != (runtime_itab *)0x0)) break;
    prVar6 = local_28;
    if (0xa00000 < (long)cap) {
      val.len = 0;
      val.str = (uint8 *)name_spill.len;
      runtime_convTstring(val);
      prStack0000000000000018 = (runtime_itab *)0x0;
      pvStack0000000000000020 = (void *)0x0;
      pvStack0000000000000028 = (void *)0x0;
      puVar5 = go_itab_time_fileSizeError_error;
      puStack0000000000000030 = go_itab_time_fileSizeError_error;
      pvStack0000000000000038 = local_1098;
      time_closefd((uintptr)fd_00);
      mVar10.~r1.len = 0;
      mVar10.~r1.array = (uint8 *)extraout_RAX;
      mVar10.~r1.cap = (int)puVar5;
      mVar10.~r2.data = fd;
      mVar10.~r2.tab = prVar6;
      return mVar10;
    }
  }
  prStack0000000000000018 = local_28;
  pvStack0000000000000020 = cap;
  pvStack0000000000000028 = fd;
  time_closefd((uintptr)fd_00);
  mVar11.~r1.len = (int)local_1080;
  mVar11.~r1.array = (uint8 *)extraout_RAX_00;
  mVar11.~r1.cap = local_20;
  mVar11.~r2.data = fd;
  mVar11.~r2.tab = local_28;
  return mVar11;
}

