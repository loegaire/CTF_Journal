
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.(*File).readdir(os.File * f, int n, os.readdirMode mode,
   []string names, []io/fs.DirEntry dirents, []io/fs.FileInfo infos, error err) */

multireturn___string___io_fs_DirEntry___io_fs_FileInfo_error__x86_64
os___File__readdir(os_File *f,int n,os_readdirMode mode)

{
  long *plVar1;
  ushort *puVar2;
  byte bVar3;
  runtime__type *iface;
  internal_poll_FD *fd;
  func_string___io_fs_FileInfo__error_ *pfVar4;
  ulong uVar5;
  uint8 *buf;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *extraout_RAX;
  undefined8 *extraout_RAX_00;
  undefined8 *puVar8;
  io_fs_FileInfo *piVar9;
  io_fs_FileInfo *piVar10;
  io_fs_FileInfo *piVar11;
  io_fs_FileInfo *piVar12;
  io_fs_FileInfo *piVar13;
  ulong cap;
  long n_00;
  runtime_itab *prVar14;
  runtime_itab *prVar15;
  undefined8 uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  ulong uVar23;
  ulong cap_00;
  long lVar24;
  ulong uVar25;
  long lVar26;
  uint8 *puVar27;
  uint8 *puVar28;
  long lVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  undefined1 *puVar36;
  undefined1 *unaff_RBP;
  long *plVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  undefined8 *puVar43;
  uint8 *puVar45;
  io_fs_DirEntry *piVar46;
  io_fs_DirEntry *piVar47;
  io_fs_DirEntry *piVar48;
  io_fs_DirEntry *piVar49;
  io_fs_DirEntry *piVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  long lVar56;
  string *psVar57;
  string *psVar58;
  string *psVar59;
  string *psVar60;
  string *psVar61;
  void *pvVar62;
  void *pvVar63;
  void *pvVar64;
  void *pvVar65;
  void *pvVar66;
  runtime_itab *prVar67;
  runtime_itab *prVar68;
  runtime_itab *prVar69;
  runtime_itab *prVar70;
  runtime_itab *prVar71;
  long lVar72;
  long in_FS_OFFSET;
  bool bVar73;
  bool bVar74;
  interface___ iVar75;
  string sVar76;
  string parent;
  error err;
  error err_00;
  string sVar77;
  string a0;
  __uint8 buf_00;
  runtime_slice old;
  runtime_slice old_00;
  runtime_slice old_01;
  __uint8 buf_01;
  __uint8 buf_02;
  __uint8 buf_03;
  multireturn_uint64_bool__conflict1 mVar78;
  string name;
  error target;
  error target_00;
  string a2;
  multireturn___string___io_fs_DirEntry___io_fs_FileInfo_error__x86_64 mVar79;
  undefined1 auVar80 [48];
  undefined1 auVar81 [48];
  undefined1 auVar82 [48];
  undefined1 auVar83 [48];
  undefined1 auVar84 [48];
  undefined1 auVar85 [24];
  undefined1 auVar86 [24];
  undefined1 auVar87 [24];
  undefined1 auVar88 [24];
  undefined1 auVar89 [24];
  undefined1 auVar90 [24];
  undefined1 auVar91 [24];
  undefined1 auVar92 [24];
  undefined1 auVar93 [24];
  undefined1 auVar94 [24];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [40];
  undefined1 auVar101 [40];
  undefined1 auVar102 [40];
  undefined1 auVar103 [40];
  undefined1 auVar104 [40];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [24];
  undefined1 auVar111 [24];
  undefined1 auVar112 [24];
  undefined1 auVar113 [24];
  undefined1 auVar114 [24];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  error err_return_result_alias;
  os_File *f_spill;
  int n_spill;
  os_readdirMode mode_spill;
  undefined7 uVar35;
  void *pvVar44;
  
  do {
                    /* Unresolved local var: os.dirInfo * d@[???] */
    puVar36 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) <
        (undefined1 *)((long)register0x00000020 + -0xa0)) {
      puVar36 = (undefined1 *)((long)register0x00000020 + -0x120);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      buf_03.len = *(long **)((long)register0x00000020 + 8);
      if (*(long *)(*buf_03.len + 0x48) != 0) goto LAB_00561393;
      *(undefined **)((long)register0x00000020 + -0x120) = &DAT_00258120;
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x56131a;
      runtime_newobject((runtime__type *)&DAT_00258120);
      if (runtime_writeBarrier._0_4_ == 0) {
        *(undefined8 *)(**(long **)((long)register0x00000020 + 8) + 0x48) =
             *(undefined8 *)((long)register0x00000020 + -0x118);
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -0x128) = 0x561345;
        runtime_gcWriteBarrierDX();
      }
      *(sync_Pool **)((long)register0x00000020 + -0x120) = &os_dirBufPool;
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x561355;
      iVar75 = sync___Pool__Get(&os_dirBufPool);
      iface = *(runtime__type **)((long)register0x00000020 + -0x110);
      if (*(undefined8 **)((long)register0x00000020 + -0x118) == &DAT_00219520) break;
      *(undefined8 **)((long)register0x00000020 + -0x120) =
           *(undefined8 **)((long)register0x00000020 + -0x118);
      *(undefined8 **)((long)register0x00000020 + -0x118) = &DAT_00219520;
      *(undefined8 **)((long)register0x00000020 + -0x110) = &DAT_0022dfe0;
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x56224f;
      runtime_panicdottypeE((runtime__type *)&DAT_0022dfe0,iVar75.data,iface);
    }
    *(undefined8 *)(puVar36 + -8) = 0x562255;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar36;
  } while( true );
  buf_03.len = *(long **)((long)register0x00000020 + 8);
  if (runtime_writeBarrier._0_4_ == 0) {
    **(undefined8 **)(*buf_03.len + 0x48) = iface;
  }
  else {
    *(undefined8 *)((long)register0x00000020 + -0x128) = 0x561393;
    runtime_gcWriteBarrierCX();
  }
LAB_00561393:
  puVar43 = *(undefined8 **)((long)register0x00000020 + 0x10);
  if (puVar43 == (undefined8 *)0x0) {
    puVar43 = (undefined8 *)0xffffffffffffffff;
  }
  plVar37 = *(long **)(*buf_03.len + 0x48);
  *(long **)((long)register0x00000020 + -0x48) = plVar37;
  uVar5 = 0;
  cap = 0;
  uVar23 = 0;
  uVar6 = 0;
  uVar25 = 0;
  lVar24 = 0;
  lVar29 = 0;
  cap_00 = 0;
  lVar72 = 0;
  do {
    bVar74 = (long)puVar43 < 0;
    bVar73 = true;
    if (puVar43 == (undefined8 *)0x0) {
LAB_00561fe1:
      if ((!bVar73 && !bVar74) &&
         (buf_03.len = (long *)(uVar25 + uVar5 + cap), buf_03.len == (long *)0x0)) {
        *(undefined8 *)((long)register0x00000020 + 0x20) = 0;
        *(undefined8 *)((long)register0x00000020 + 0x28) = 0;
        *(undefined8 *)((long)register0x00000020 + 0x30) = 0;
        *(undefined8 *)((long)register0x00000020 + 0x38) = 0;
        *(undefined8 *)((long)register0x00000020 + 0x40) = 0;
        *(undefined8 *)((long)register0x00000020 + 0x48) = 0;
        *(undefined8 *)((long)register0x00000020 + 0x50) = 0;
        *(undefined8 *)((long)register0x00000020 + 0x58) = 0;
        *(undefined8 *)((long)register0x00000020 + 0x60) = 0;
        *(runtime_itab **)((long)register0x00000020 + 0x68) = io_EOF.tab;
        *(void **)((long)register0x00000020 + 0x70) = io_EOF.data;
        pvVar63 = (void *)lVar24;
        prVar68 = (runtime_itab *)lVar29;
        auVar116 = CONCAT88(pvVar63,prVar68);
        iVar18 = (int)io_EOF.data;
        piVar47 = (io_fs_DirEntry *)puVar43;
        auVar96 = CONCAT88(iVar18,piVar47);
        psVar58 = (string *)uVar25;
        auVar111 = CONCAT816(psVar58,auVar116);
        iVar39 = (int)plVar37;
        iVar52 = uVar6;
        auVar106 = CONCAT88(iVar39,iVar52);
        iVar31 = 0;
        auVar91 = CONCAT816(iVar31,auVar96);
        piVar10 = (io_fs_FileInfo *)io_EOF.tab;
        auVar86 = CONCAT168(err_return_result_alias,piVar10);
        auVar101 = CONCAT1624(auVar106,auVar111);
        auVar81 = CONCAT2424(auVar86,auVar91);
        mVar79 = (multireturn___string___io_fs_DirEntry___io_fs_FileInfo_error__x86_64)
                 CONCAT4840(auVar81,auVar101);
        return mVar79;
      }
      *(long *)((long)register0x00000020 + 0x20) = lVar72;
      *(ulong *)((long)register0x00000020 + 0x28) = uVar25;
      *(ulong *)((long)register0x00000020 + 0x30) = cap_00;
      *(long *)((long)register0x00000020 + 0x38) = lVar24;
      *(ulong *)((long)register0x00000020 + 0x40) = uVar5;
      *(ulong *)((long)register0x00000020 + 0x48) = uVar23;
      *(long *)((long)register0x00000020 + 0x50) = lVar29;
      *(ulong *)((long)register0x00000020 + 0x58) = cap;
      *(ulong *)((long)register0x00000020 + 0x60) = uVar6;
      *(undefined8 *)((long)register0x00000020 + 0x68) = 0;
      *(undefined8 *)((long)register0x00000020 + 0x70) = 0;
      pvVar64 = (void *)lVar24;
      prVar69 = (runtime_itab *)lVar29;
      auVar117 = CONCAT88(pvVar64,prVar69);
      iVar19 = cap;
      piVar48 = (io_fs_DirEntry *)puVar43;
      auVar97 = CONCAT88(iVar19,piVar48);
      psVar59 = (string *)uVar25;
      auVar112 = CONCAT816(psVar59,auVar117);
      iVar40 = (int)plVar37;
      iVar53 = uVar6;
      auVar107 = CONCAT88(iVar40,iVar53);
      iVar32 = (int)buf_03.len;
      auVar92 = CONCAT816(iVar32,auVar97);
      piVar11 = (io_fs_FileInfo *)uVar5;
      auVar87 = CONCAT168(err_return_result_alias,piVar11);
      auVar102 = CONCAT1624(auVar107,auVar112);
      auVar82 = CONCAT2424(auVar87,auVar92);
      mVar79 = (multireturn___string___io_fs_DirEntry___io_fs_FileInfo_error__x86_64)
               CONCAT4840(auVar82,auVar102);
      return mVar79;
    }
    *(ulong *)((long)register0x00000020 + -0x78) = uVar23;
    *(undefined8 **)((long)register0x00000020 + -0x80) = puVar43;
    *(ulong *)((long)register0x00000020 + -0x88) = uVar5;
    *(ulong *)((long)register0x00000020 + -0x90) = uVar6;
    *(ulong *)((long)register0x00000020 + -0x98) = cap;
    *(long *)((long)register0x00000020 + -0x10) = lVar29;
    *(long *)((long)register0x00000020 + -0x18) = lVar24;
    *(ulong *)((long)register0x00000020 + -0xa0) = cap_00;
    *(ulong *)((long)register0x00000020 + -0xa8) = uVar25;
    *(long *)((long)register0x00000020 + -0x20) = lVar72;
    if (plVar37[1] <= plVar37[2]) {
      plVar37[2] = 0;
      fd = (internal_poll_FD *)*buf_03.len;
      puVar8 = (undefined8 *)*plVar37;
      uVar7 = *puVar8;
      puVar43 = (undefined8 *)puVar8[1];
      uVar16 = puVar8[2];
      *(internal_poll_FD **)((long)register0x00000020 + -0x120) = fd;
      *(undefined8 *)((long)register0x00000020 + -0x118) = uVar7;
      *(undefined8 **)((long)register0x00000020 + -0x110) = puVar43;
      *(undefined8 *)((long)register0x00000020 + -0x108) = uVar16;
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x56148b;
      buf_00.len = uVar16;
      buf_00.array = (uint8 *)buf_03.len;
      buf_00.cap = (int)puVar43;
      internal_poll___FD__ReadDirent(fd,buf_00);
      uVar7 = *(undefined8 *)((long)register0x00000020 + -0xf0);
      uVar16 = *(undefined8 *)((long)register0x00000020 + -0xf8);
      lVar72 = *(long *)((long)register0x00000020 + -0xf8);
      buf_03.len = *(long **)((long)register0x00000020 + -0x48);
      buf_03.len[1] = *(long *)((long)register0x00000020 + -0x100);
      if (lVar72 != 0) {
        *(undefined8 *)((long)register0x00000020 + -0x30) = uVar16;
        *(undefined8 *)((long)register0x00000020 + -0x68) = uVar7;
        *(undefined **)((long)register0x00000020 + -0x120) = &DAT_00257220;
        *(undefined8 *)((long)register0x00000020 + -0x128) = 0x561eb3;
        runtime_newobject((runtime__type *)&DAT_00257220);
        puVar8 = *(undefined8 **)((long)register0x00000020 + -0x118);
        puVar8[1] = 10;
        *puVar8 = &DAT_0029022c;
        uVar7 = *(undefined8 *)(**(long **)((long)register0x00000020 + 8) + 0x38);
        puVar8[3] = *(undefined8 *)(**(long **)((long)register0x00000020 + 8) + 0x40);
        if (runtime_writeBarrier._0_4_ == 0) {
          puVar8[2] = uVar7;
        }
        else {
          puVar43 = puVar8 + 2;
          *(undefined8 *)((long)register0x00000020 + -0x128) = 0x561ef9;
          runtime_gcWriteBarrierDX();
          puVar8 = extraout_RAX;
        }
        puVar8[4] = *(undefined8 *)((long)register0x00000020 + -0x30);
        if (runtime_writeBarrier._0_4_ == 0) {
          puVar8[5] = *(undefined8 *)((long)register0x00000020 + -0x68);
        }
        else {
          puVar43 = puVar8 + 5;
          *(undefined8 *)((long)register0x00000020 + -0x128) = 0x561f2d;
          runtime_gcWriteBarrierCX();
          puVar8 = extraout_RAX_00;
        }
        *(undefined8 *)((long)register0x00000020 + 0x20) =
             *(undefined8 *)((long)register0x00000020 + -0x20);
        *(undefined8 *)((long)register0x00000020 + 0x28) =
             *(undefined8 *)((long)register0x00000020 + -0xa8);
        *(undefined8 *)((long)register0x00000020 + 0x30) =
             *(undefined8 *)((long)register0x00000020 + -0xa0);
        *(undefined8 *)((long)register0x00000020 + 0x38) =
             *(undefined8 *)((long)register0x00000020 + -0x18);
        *(undefined8 *)((long)register0x00000020 + 0x40) =
             *(undefined8 *)((long)register0x00000020 + -0x88);
        *(undefined8 *)((long)register0x00000020 + 0x48) =
             *(undefined8 *)((long)register0x00000020 + -0x78);
        *(undefined8 *)((long)register0x00000020 + 0x50) =
             *(undefined8 *)((long)register0x00000020 + -0x10);
        *(undefined8 *)((long)register0x00000020 + 0x58) =
             *(undefined8 *)((long)register0x00000020 + -0x98);
        *(undefined8 *)((long)register0x00000020 + 0x60) =
             *(undefined8 *)((long)register0x00000020 + -0x90);
        *(undefined1 **)((long)register0x00000020 + 0x68) = go_itab__io_fs_PathError_error;
        *(undefined8 **)((long)register0x00000020 + 0x70) = puVar8;
        pvVar62 = (void *)lVar24;
        prVar67 = (runtime_itab *)lVar29;
        auVar115 = CONCAT88(pvVar62,prVar67);
        iVar17 = (int)go_itab__io_fs_PathError_error;
        piVar46 = (io_fs_DirEntry *)puVar43;
        auVar95 = CONCAT88(iVar17,piVar46);
        psVar57 = (string *)uVar25;
        auVar110 = CONCAT816(psVar57,auVar115);
        iVar38 = (int)plVar37;
        iVar51 = uVar6;
        auVar105 = CONCAT88(iVar38,iVar51);
        iVar30 = (int)buf_03.len;
        auVar90 = CONCAT816(iVar30,auVar95);
        piVar9 = (io_fs_FileInfo *)puVar8;
        auVar85 = CONCAT168(err_return_result_alias,piVar9);
        auVar100 = CONCAT1624(auVar105,auVar110);
        auVar80 = CONCAT2424(auVar85,auVar90);
        mVar79 = (multireturn___string___io_fs_DirEntry___io_fs_FileInfo_error__x86_64)
                 CONCAT4840(auVar80,auVar100);
        return mVar79;
      }
      if (buf_03.len[1] < 1) {
        bVar74 = *(long *)((long)register0x00000020 + -0x80) < 0;
        bVar73 = *(long *)((long)register0x00000020 + -0x80) == 0;
        uVar5 = *(ulong *)((long)register0x00000020 + -0x88);
        cap = *(ulong *)((long)register0x00000020 + -0x98);
        uVar23 = *(ulong *)((long)register0x00000020 + -0x78);
        uVar6 = *(ulong *)((long)register0x00000020 + -0x90);
        uVar25 = *(ulong *)((long)register0x00000020 + -0xa8);
        lVar24 = *(long *)((long)register0x00000020 + -0x18);
        lVar29 = *(long *)((long)register0x00000020 + -0x10);
        cap_00 = *(ulong *)((long)register0x00000020 + -0xa0);
        lVar72 = *(long *)((long)register0x00000020 + -0x20);
        goto LAB_00561fe1;
      }
      plVar37 = *(long **)((long)register0x00000020 + -0x48);
      puVar43 = *(undefined8 **)((long)register0x00000020 + -0x80);
      lVar24 = *(long *)((long)register0x00000020 + -0x18);
      lVar29 = *(long *)((long)register0x00000020 + -0x10);
    }
    puVar45 = (uint8 *)((long *)*plVar37)[2];
    lVar72 = *(long *)*plVar37;
    puVar28 = (uint8 *)plVar37[2];
    puVar27 = (uint8 *)plVar37[1];
    if (puVar45 < puVar27) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x562235;
      runtime_panicSliceAcap();
    }
    if (puVar27 < puVar28) goto LAB_0056221f;
    *(long *)((long)register0x00000020 + -0x28) = lVar72;
    lVar26 = (long)puVar45 - (long)puVar28;
    *(long *)((long)register0x00000020 + -0xc0) = lVar26;
    buf_01.len = -lVar26 >> 0x3f & (ulong)puVar28;
    *(ulong *)((long)register0x00000020 + -0xb0) = buf_01.len;
    lVar72 = buf_01.len + lVar72;
    *(long *)((long)register0x00000020 + -0x40) = lVar72;
    *(long *)((long)register0x00000020 + -0x120) = lVar72;
    lVar56 = (long)puVar27 - (long)puVar28;
    *(long *)((long)register0x00000020 + -200) = lVar56;
    *(long *)((long)register0x00000020 + -0x118) = lVar56;
    *(long *)((long)register0x00000020 + -0x110) = lVar26;
    *(undefined8 *)((long)register0x00000020 + -0x128) = 0x561587;
    buf_01.array = (uint8 *)lVar26;
    buf_01.cap = lVar72;
    mVar78 = os_direntReclen(buf_01);
    buf_03.len = (long *)CONCAT71((int7)(buf_01.len >> 8),mVar78.~r2);
    uVar5 = *(ulong *)((long)register0x00000020 + -0x108);
    if (*(char *)((long)register0x00000020 + -0x100) == '\0') {
      lVar24 = *(long *)((long)register0x00000020 + -0x80);
LAB_00561df4:
      bVar74 = lVar24 < 0;
      bVar73 = lVar24 == 0;
      uVar5 = *(ulong *)((long)register0x00000020 + -0x88);
      cap = *(ulong *)((long)register0x00000020 + -0x98);
      uVar23 = *(ulong *)((long)register0x00000020 + -0x78);
      uVar6 = *(ulong *)((long)register0x00000020 + -0x90);
      uVar25 = *(ulong *)((long)register0x00000020 + -0xa8);
      lVar24 = *(long *)((long)register0x00000020 + -0x18);
      lVar29 = *(long *)((long)register0x00000020 + -0x10);
      cap_00 = *(ulong *)((long)register0x00000020 + -0xa0);
      lVar72 = *(long *)((long)register0x00000020 + -0x20);
      goto LAB_00561fe1;
    }
    if (*(ulong *)((long)register0x00000020 + -200) < uVar5) {
      lVar24 = *(long *)((long)register0x00000020 + -0x80);
      goto LAB_00561df4;
    }
    *(ulong *)((long)register0x00000020 + -0xd0) = uVar5;
    lVar72 = *(long *)((long)register0x00000020 + -0x48);
    buf_03.len = (long *)(lVar72 + 0x10);
    *buf_03.len = *buf_03.len + uVar5;
    *(undefined8 *)((long)register0x00000020 + -0x120) =
         *(undefined8 *)((long)register0x00000020 + -0x40);
    *(ulong *)((long)register0x00000020 + -0x118) = uVar5;
    uVar7 = *(undefined8 *)((long)register0x00000020 + -0xc0);
    *(undefined8 *)((long)register0x00000020 + -0x110) = uVar7;
    *(undefined8 *)((long)register0x00000020 + -0x128) = 0x5615da;
    buf_02.len = uVar7;
    buf_02.array = (uint8 *)uVar5;
    buf_02.cap = lVar72;
    mVar78 = os_direntIno(buf_02);
    uVar35 = (undefined7)((ulong)uVar7 >> 8);
    buf_03.len = (long *)CONCAT71(uVar35,mVar78.~r2);
    if (*(char *)((long)register0x00000020 + -0x100) == '\0') {
      bVar74 = *(long *)((long)register0x00000020 + -0x80) < 0;
      bVar73 = *(long *)((long)register0x00000020 + -0x80) == 0;
      uVar5 = *(ulong *)((long)register0x00000020 + -0x88);
      cap = *(ulong *)((long)register0x00000020 + -0x98);
      uVar23 = *(ulong *)((long)register0x00000020 + -0x78);
      uVar6 = *(ulong *)((long)register0x00000020 + -0x90);
      uVar25 = *(ulong *)((long)register0x00000020 + -0xa8);
      lVar24 = *(long *)((long)register0x00000020 + -0x18);
      lVar29 = *(long *)((long)register0x00000020 + -0x10);
      cap_00 = *(ulong *)((long)register0x00000020 + -0xa0);
      lVar72 = *(long *)((long)register0x00000020 + -0x20);
      goto LAB_00561fe1;
    }
    if (*(long *)((long)register0x00000020 + -0x108) == 0) {
      puVar43 = *(undefined8 **)((long)register0x00000020 + -0x80);
      uVar5 = *(ulong *)((long)register0x00000020 + -0x88);
      uVar23 = *(ulong *)((long)register0x00000020 + -0x78);
      uVar6 = *(ulong *)((long)register0x00000020 + -0x90);
      cap = *(ulong *)((long)register0x00000020 + -0x98);
      uVar25 = *(ulong *)((long)register0x00000020 + -0xa8);
      cap_00 = *(ulong *)((long)register0x00000020 + -0xa0);
      lVar24 = *(long *)((long)register0x00000020 + -0x18);
      lVar29 = *(long *)((long)register0x00000020 + -0x10);
      lVar72 = *(long *)((long)register0x00000020 + -0x20);
      goto LAB_005613d2;
    }
    *(undefined8 *)((long)register0x00000020 + -0x120) =
         *(undefined8 *)((long)register0x00000020 + -0x40);
    *(int *)((long)register0x00000020 + -0x118) = *(int *)((long)register0x00000020 + -0xd0);
    *(undefined8 *)((long)register0x00000020 + -0x110) =
         *(undefined8 *)((long)register0x00000020 + -0xc0);
    *(undefined8 *)((long)register0x00000020 + -0x128) = 0x56166a;
    buf_03.array = (uint8 *)*(undefined8 *)((long)register0x00000020 + -0x40);
    buf_03.cap = *(int *)((long)register0x00000020 + -0xd0);
    mVar78 = os_direntNamlen(buf_03);
    buf_03.len = (long *)CONCAT71(uVar35,mVar78.~r2);
    lVar72 = *(long *)((long)register0x00000020 + -0x108);
    if (*(char *)((long)register0x00000020 + -0x100) == '\0') {
      lVar24 = *(long *)((long)register0x00000020 + -0x80);
LAB_00561d3d:
      bVar74 = lVar24 < 0;
      bVar73 = lVar24 == 0;
      uVar5 = *(ulong *)((long)register0x00000020 + -0x88);
      cap = *(ulong *)((long)register0x00000020 + -0x98);
      uVar23 = *(ulong *)((long)register0x00000020 + -0x78);
      uVar6 = *(ulong *)((long)register0x00000020 + -0x90);
      uVar25 = *(ulong *)((long)register0x00000020 + -0xa8);
      lVar24 = *(long *)((long)register0x00000020 + -0x18);
      lVar29 = *(long *)((long)register0x00000020 + -0x10);
      cap_00 = *(ulong *)((long)register0x00000020 + -0xa0);
      lVar72 = *(long *)((long)register0x00000020 + -0x20);
      goto LAB_00561fe1;
    }
    plVar1 = (long *)(lVar72 + 0x18);
    buf_03.len = *(long **)((long)register0x00000020 + -0xd0);
    if (buf_03.len < plVar1) {
      lVar24 = *(long *)((long)register0x00000020 + -0x80);
      goto LAB_00561d3d;
    }
    if (*(long **)((long)register0x00000020 + -0xc0) < plVar1) {
LAB_0056221a:
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x56221f;
      runtime_panicSliceAcapU();
LAB_0056221f:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x56222a;
      runtime_panicSliceB();
    }
    if (plVar1 < &DAT_00000018) {
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x56221a;
      runtime_panicSliceBU();
      goto LAB_0056221a;
    }
    puVar27 = (uint8 *)(-(long)(*(long **)((long)register0x00000020 + -0xc0) + -3) >> 0x3f & 0x18);
    lVar26 = *(long *)((long)register0x00000020 + -0x40);
    puVar45 = puVar27 + lVar26;
                    /* Unresolved local var: int i@[???] */
    for (lVar20 = 0;
        (n_00 = lVar72, lVar20 < lVar72 &&
        (puVar28 = (uint8 *)(ulong)puVar45[lVar20], n_00 = lVar20, puVar45[lVar20] != 0));
        lVar20 = lVar20 + 1) {
    }
    if (((n_00 == 1) && (puVar28 = (uint8 *)(ulong)puVar27[lVar26], puVar27[lVar26] == 0x2e)) ||
       ((n_00 == 2 &&
        (puVar2 = (ushort *)(puVar27 + lVar26), puVar27 = (uint8 *)(ulong)*puVar2, *puVar2 == 0x2e2e
        )))) {
      puVar43 = *(undefined8 **)((long)register0x00000020 + -0x80);
      uVar5 = *(ulong *)((long)register0x00000020 + -0x88);
      uVar23 = *(ulong *)((long)register0x00000020 + -0x78);
      uVar6 = *(ulong *)((long)register0x00000020 + -0x90);
      cap = *(ulong *)((long)register0x00000020 + -0x98);
      uVar25 = *(ulong *)((long)register0x00000020 + -0xa8);
      cap_00 = *(ulong *)((long)register0x00000020 + -0xa0);
      lVar24 = *(long *)((long)register0x00000020 + -0x18);
      lVar29 = *(long *)((long)register0x00000020 + -0x10);
      lVar72 = *(long *)((long)register0x00000020 + -0x20);
      goto LAB_005613d2;
    }
    buf = *(uint8 **)((long)register0x00000020 + -0x80);
    if (0 < (long)buf) {
      buf = *(runtime_tmpBuf *)((long)buf + -0x20) + 0x1f;
    }
    *(uint8 **)((long)register0x00000020 + -0x80) = buf;
    if (*(long *)((long)register0x00000020 + 0x18) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0;
      *(uint8 **)((long)register0x00000020 + -0x118) = puVar45;
      *(long *)((long)register0x00000020 + -0x110) = n_00;
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x561c2e;
      runtime_slicebytetostring((runtime_tmpBuf *)buf,puVar27,n_00);
      uVar7 = *(undefined8 *)((long)register0x00000020 + -0x108);
      uVar16 = *(undefined8 *)((long)register0x00000020 + -0x100);
      lVar24 = *(long *)((long)register0x00000020 + -0xa8);
      uVar25 = lVar24 + 1;
      cap_00 = *(ulong *)((long)register0x00000020 + -0xa0);
      if (cap_00 < uVar25) {
        *(undefined8 *)((long)register0x00000020 + -0xa0) = uVar16;
        *(undefined8 *)((long)register0x00000020 + -0x30) = uVar7;
        *(undefined **)((long)register0x00000020 + -0x120) = &DAT_00225520;
        *(undefined8 *)((long)register0x00000020 + -0x118) =
             *(undefined8 *)((long)register0x00000020 + -0x20);
        *(long *)((long)register0x00000020 + -0x110) = lVar24;
        *(ulong *)((long)register0x00000020 + -0x108) = cap_00;
        *(ulong *)((long)register0x00000020 + -0x100) = uVar25;
        *(undefined8 *)((long)register0x00000020 + -0x128) = 0x561c94;
        old_01.len = *(undefined8 *)((long)register0x00000020 + -0x20);
        old_01.array = (void *)uVar25;
        old_01.cap = (int)puVar45;
        runtime_growslice((runtime__type *)&DAT_00225520,old_01,cap_00);
        lVar72 = *(long *)((long)register0x00000020 + -0xf8);
        cap_00 = *(ulong *)((long)register0x00000020 + -0xe8);
        uVar25 = *(long *)((long)register0x00000020 + -0xf0) + 1;
        uVar7 = *(undefined8 *)((long)register0x00000020 + -0x30);
        uVar16 = *(undefined8 *)((long)register0x00000020 + -0xa0);
        lVar24 = *(long *)((long)register0x00000020 + -0xa8);
      }
      else {
        lVar72 = *(long *)((long)register0x00000020 + -0x20);
      }
      *(undefined8 *)(lVar72 + 8 + lVar24 * 0x10) = uVar16;
      if (runtime_writeBarrier._0_4_ == 0) {
        *(undefined8 *)(lVar72 + lVar24 * 0x10) = uVar7;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -0x128) = 0x561ce5;
        runtime_gcWriteBarrier();
      }
      uVar23 = *(ulong *)((long)register0x00000020 + -0x78);
      uVar6 = *(ulong *)((long)register0x00000020 + -0x90);
      cap = *(ulong *)((long)register0x00000020 + -0x98);
      lVar24 = *(long *)((long)register0x00000020 + -0x18);
      lVar29 = *(long *)((long)register0x00000020 + -0x10);
      uVar5 = *(ulong *)((long)register0x00000020 + -0x88);
LAB_00561d18:
      puVar43 = *(undefined8 **)((long)register0x00000020 + -0x80);
    }
    else if (*(long *)((long)register0x00000020 + 0x18) == 1) {
                    /* Unresolved local var: uint8 typ@[???] */
      bVar3 = *(byte *)(*(long *)((long)register0x00000020 + -0x28) + 0x12 +
                       *(long *)((long)register0x00000020 + -0xb0));
      if (bVar3 < 5) {
        if (bVar3 == 1) {
          puVar28 = (uint8 *)0x2000000;
                    /* Unresolved local var: io/fs.DirEntry de@[???]
                       Unresolved local var: error err@[???]
                       Unresolved local var: io/fs.FileMode ~R0@[???] */
        }
        else if (bVar3 == 2) {
          puVar28 = (uint8 *)0x4200000;
        }
        else {
          if (bVar3 != 4) goto LAB_005617ee;
          puVar28 = (uint8 *)0x80000000;
        }
      }
      else if (bVar3 < 9) {
        if (bVar3 == 6) {
          puVar28 = (uint8 *)0x4000000;
        }
        else if (bVar3 == 8) {
          puVar28 = (uint8 *)0x0;
        }
        else {
LAB_005617ee:
          puVar28 = (uint8 *)0xffffffff;
        }
      }
      else if (bVar3 == 10) {
        puVar28 = (uint8 *)0x8000000;
      }
      else {
        if (bVar3 != 0xc) goto LAB_005617ee;
        puVar28 = (uint8 *)0x1000000;
      }
      *(int *)((long)register0x00000020 + -0xd4) = (int)puVar28;
      lVar72 = *(long *)**(runtime_tmpBuf **)((long)register0x00000020 + 8);
      uVar7 = *(undefined8 *)(lVar72 + 0x38);
      *(undefined8 *)((long)register0x00000020 + -0x30) = uVar7;
      *(undefined8 *)((long)register0x00000020 + -0xb0) = *(undefined8 *)(lVar72 + 0x40);
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0;
      *(uint8 **)((long)register0x00000020 + -0x118) = puVar45;
      *(long *)((long)register0x00000020 + -0x110) = n_00;
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x56182e;
      sVar76 = runtime_slicebytetostring
                         (*(runtime_tmpBuf **)((long)register0x00000020 + 8),puVar28,n_00);
      parent.len = sVar76.len;
      puVar28 = *(uint8 **)((long)register0x00000020 + -0x100);
      *(undefined8 *)((long)register0x00000020 + -0x120) =
           *(undefined8 *)((long)register0x00000020 + -0x30);
      *(undefined8 *)((long)register0x00000020 + -0x118) =
           *(undefined8 *)((long)register0x00000020 + -0xb0);
      *(undefined8 *)((long)register0x00000020 + -0x110) =
           *(undefined8 *)((long)register0x00000020 + -0x108);
      *(uint8 **)((long)register0x00000020 + -0x108) = puVar28;
      parent.str = (uint8 *)(ulong)*(uint *)((long)register0x00000020 + -0xd4);
      *(uint *)((long)register0x00000020 + -0x100) = *(uint *)((long)register0x00000020 + -0xd4);
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x561865;
      name.len = (int)puVar45;
      name.str = puVar28;
      os_newUnixDirent(parent,name,(io_fs_FileMode)uVar7);
      *(runtime_itab **)((long)register0x00000020 + -0x50) =
           *(runtime_itab **)((long)register0x00000020 + -0xf0);
      prVar14 = *(runtime_itab **)((long)register0x00000020 + -0xf8);
      *(runtime_itab **)((long)register0x00000020 + -0x30) = prVar14;
      uVar7 = *(undefined8 *)((long)register0x00000020 + -0xe8);
      *(undefined8 *)((long)register0x00000020 + -0x38) = uVar7;
      pvVar44 = *(void **)((long)register0x00000020 + -0xe0);
      *(void **)((long)register0x00000020 + -0x58) = pvVar44;
      uVar16 = *(undefined8 *)((long)register0x00000020 + -0xe8);
      *(undefined8 *)((long)register0x00000020 + -0xb8) = uVar16;
      *(undefined8 *)((long)register0x00000020 + -0x120) = uVar7;
      *(void **)((long)register0x00000020 + -0x118) = pvVar44;
      *(runtime_itab **)((long)register0x00000020 + -0x110) = os_ErrNotExist.tab;
      *(void **)((long)register0x00000020 + -0x108) = os_ErrNotExist.data;
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x5618c9;
      err.data = os_ErrNotExist.data;
      err.tab = *(runtime_itab **)((long)register0x00000020 + -0xf0);
      target.data = pvVar44;
      target.tab = prVar14;
      os_underlyingErrorIs(err,target);
      if (*(char *)((long)register0x00000020 + -0x100) == '\0') {
        if (*(long *)((long)register0x00000020 + -0xb8) != 0) {
          *(undefined8 *)((long)register0x00000020 + 0x20) = 0;
          *(undefined8 *)((long)register0x00000020 + 0x28) = 0;
          *(undefined8 *)((long)register0x00000020 + 0x30) = 0;
          *(undefined8 *)((long)register0x00000020 + 0x38) =
               *(undefined8 *)((long)register0x00000020 + -0x18);
          *(undefined8 *)((long)register0x00000020 + 0x40) =
               *(undefined8 *)((long)register0x00000020 + -0x88);
          *(undefined8 *)((long)register0x00000020 + 0x48) =
               *(undefined8 *)((long)register0x00000020 + -0x78);
          *(undefined8 *)((long)register0x00000020 + 0x50) = 0;
          *(undefined8 *)((long)register0x00000020 + 0x58) = 0;
          *(undefined8 *)((long)register0x00000020 + 0x60) = 0;
          *(undefined8 *)((long)register0x00000020 + 0x68) =
               *(undefined8 *)((long)register0x00000020 + -0x38);
          *(undefined8 *)((long)register0x00000020 + 0x70) =
               *(undefined8 *)((long)register0x00000020 + -0x58);
          pvVar65 = (void *)lVar24;
          prVar70 = (runtime_itab *)lVar29;
          auVar118 = CONCAT88(pvVar65,prVar70);
          iVar21 = (int)prVar14;
          piVar49 = pvVar44;
          auVar98 = CONCAT88(iVar21,piVar49);
          psVar60 = (string *)lVar56;
          auVar113 = CONCAT816(psVar60,auVar118);
          iVar41 = uVar7;
          iVar54 = uVar16;
          auVar108 = CONCAT88(iVar41,iVar54);
          iVar33 = *(long *)((long)register0x00000020 + -0xb8);
          auVar93 = CONCAT816(iVar33,auVar98);
          piVar12 = (io_fs_FileInfo *)*(undefined8 *)((long)register0x00000020 + -0x58);
          auVar88 = CONCAT168(err_return_result_alias,piVar12);
          auVar103 = CONCAT1624(auVar108,auVar113);
          auVar83 = CONCAT2424(auVar88,auVar93);
          mVar79 = (multireturn___string___io_fs_DirEntry___io_fs_FileInfo_error__x86_64)
                   CONCAT4840(auVar83,auVar103);
          return mVar79;
        }
        lVar29 = *(long *)((long)register0x00000020 + -0x88);
        uVar5 = lVar29 + 1;
        uVar23 = *(ulong *)((long)register0x00000020 + -0x78);
        if (uVar23 < uVar5) {
          *(undefined **)((long)register0x00000020 + -0x120) = &DAT_00245120;
          *(undefined8 *)((long)register0x00000020 + -0x118) =
               *(undefined8 *)((long)register0x00000020 + -0x18);
          *(long *)((long)register0x00000020 + -0x110) = lVar29;
          *(ulong *)((long)register0x00000020 + -0x108) = uVar23;
          *(ulong *)((long)register0x00000020 + -0x100) = uVar5;
          *(undefined8 *)((long)register0x00000020 + -0x128) = 0x561985;
          old.len = *(undefined8 *)((long)register0x00000020 + -0x18);
          old.array = (void *)lVar29;
          old.cap = (int)pvVar44;
          runtime_growslice((runtime__type *)&DAT_00245120,old,uVar5);
          lVar24 = *(long *)((long)register0x00000020 + -0xf8);
          uVar23 = *(ulong *)((long)register0x00000020 + -0xe8);
          uVar5 = *(long *)((long)register0x00000020 + -0xf0) + 1;
          lVar29 = *(long *)((long)register0x00000020 + -0x88);
        }
        else {
          lVar24 = *(long *)((long)register0x00000020 + -0x18);
        }
        *(undefined8 *)(lVar24 + lVar29 * 0x10) = *(undefined8 *)((long)register0x00000020 + -0x30);
        if (runtime_writeBarrier._0_4_ == 0) {
          *(undefined8 *)(lVar24 + 8 + lVar29 * 0x10) =
               *(undefined8 *)((long)register0x00000020 + -0x50);
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -0x128) = 0x5619e5;
          runtime_gcWriteBarrierBX();
        }
        uVar6 = *(ulong *)((long)register0x00000020 + -0x90);
        cap = *(ulong *)((long)register0x00000020 + -0x98);
        lVar29 = *(long *)((long)register0x00000020 + -0x10);
LAB_00561bfd:
        cap_00 = *(ulong *)((long)register0x00000020 + -0xa0);
        uVar25 = *(ulong *)((long)register0x00000020 + -0xa8);
        lVar72 = *(long *)((long)register0x00000020 + -0x20);
        goto LAB_00561d18;
      }
      puVar43 = *(undefined8 **)((long)register0x00000020 + -0x80);
      uVar5 = *(ulong *)((long)register0x00000020 + -0x88);
      uVar23 = *(ulong *)((long)register0x00000020 + -0x78);
      uVar6 = *(ulong *)((long)register0x00000020 + -0x90);
      cap = *(ulong *)((long)register0x00000020 + -0x98);
      uVar25 = *(ulong *)((long)register0x00000020 + -0xa8);
      cap_00 = *(ulong *)((long)register0x00000020 + -0xa0);
      lVar24 = *(long *)((long)register0x00000020 + -0x18);
      lVar29 = *(long *)((long)register0x00000020 + -0x10);
      lVar72 = *(long *)((long)register0x00000020 + -0x20);
    }
    else {
                    /* Unresolved local var: io/fs.FileInfo info@[???]
                       Unresolved local var: error err@[???] */
      lVar72 = *(long *)**(runtime_tmpBuf **)((long)register0x00000020 + 8);
      puVar27 = *(uint8 **)(lVar72 + 0x38);
      uVar7 = *(undefined8 *)(lVar72 + 0x40);
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0;
      *(uint8 **)((long)register0x00000020 + -0x118) = puVar27;
      *(undefined8 *)((long)register0x00000020 + -0x110) = uVar7;
      *(undefined1 **)((long)register0x00000020 + -0x108) = &net__stmp_87;
      *(undefined8 *)((long)register0x00000020 + -0x100) = 1;
      *(uint8 **)((long)register0x00000020 + -0xf8) = puVar45;
      *(long *)((long)register0x00000020 + -0xf0) = n_00;
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x561a4e;
      sVar76.len = lVar26;
      sVar76.str = puVar45;
      a0.len = n_00;
      a0.str = puVar27;
      a2.len = lVar56;
      a2.str = puVar28;
      runtime_concatstring3(*(runtime_tmpBuf **)((long)register0x00000020 + 8),a0,sVar76,a2);
      pfVar4 = *os_lstat;
      *(error **)((long)register0x00000020 + -0x120) = *(error **)((long)register0x00000020 + -0xe8)
      ;
      *(undefined8 *)((long)register0x00000020 + -0x118) =
           *(undefined8 *)((long)register0x00000020 + -0xe0);
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x561a6d;
      sVar77.len = lVar26;
      sVar77.str = puVar45;
      (*pfVar4)(sVar77,(io_fs_FileInfo *)os_lstat,*(error **)((long)register0x00000020 + -0xe8));
      prVar14 = *(runtime_itab **)((long)register0x00000020 + -0x100);
      *(runtime_itab **)((long)register0x00000020 + -0x30) = prVar14;
      prVar15 = *(runtime_itab **)((long)register0x00000020 + -0xf8);
      *(runtime_itab **)((long)register0x00000020 + -0x60) = prVar15;
      *(undefined8 *)((long)register0x00000020 + -0x70) =
           *(undefined8 *)((long)register0x00000020 + -0x108);
      pvVar44 = *(void **)((long)register0x00000020 + -0x110);
      *(void **)((long)register0x00000020 + -0x38) = pvVar44;
      uVar7 = *(undefined8 *)((long)register0x00000020 + -0x100);
      *(undefined8 *)((long)register0x00000020 + -0xb8) = uVar7;
      *(runtime_itab **)((long)register0x00000020 + -0x120) = prVar14;
      *(runtime_itab **)((long)register0x00000020 + -0x118) = prVar15;
      *(runtime_itab **)((long)register0x00000020 + -0x110) = os_ErrNotExist.tab;
      *(void **)((long)register0x00000020 + -0x108) = os_ErrNotExist.data;
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x561ad1;
      err_00.data = pvVar44;
      err_00.tab = prVar14;
      target_00.data = os_ErrNotExist.data;
      target_00.tab = prVar15;
      prVar14 = os_ErrNotExist.tab;
      pvVar44 = os_ErrNotExist.data;
      os_underlyingErrorIs(err_00,target_00);
      if (*(char *)((long)register0x00000020 + -0x100) == '\0') {
        if (*(long *)((long)register0x00000020 + -0xb8) != 0) {
          *(undefined8 *)((long)register0x00000020 + 0x20) = 0;
          *(undefined8 *)((long)register0x00000020 + 0x28) = 0;
          *(undefined8 *)((long)register0x00000020 + 0x30) = 0;
          *(undefined8 *)((long)register0x00000020 + 0x38) = 0;
          *(undefined8 *)((long)register0x00000020 + 0x40) = 0;
          *(undefined8 *)((long)register0x00000020 + 0x48) = 0;
          *(undefined8 *)((long)register0x00000020 + 0x50) =
               *(undefined8 *)((long)register0x00000020 + -0x10);
          *(undefined8 *)((long)register0x00000020 + 0x58) =
               *(undefined8 *)((long)register0x00000020 + -0x98);
          *(undefined8 *)((long)register0x00000020 + 0x60) =
               *(undefined8 *)((long)register0x00000020 + -0x90);
          *(undefined8 *)((long)register0x00000020 + 0x68) =
               *(undefined8 *)((long)register0x00000020 + -0x30);
          *(undefined8 *)((long)register0x00000020 + 0x70) =
               *(undefined8 *)((long)register0x00000020 + -0x60);
          pvVar66 = (void *)lVar24;
          prVar71 = (runtime_itab *)lVar29;
          auVar119 = CONCAT88(pvVar66,prVar71);
          iVar22 = (int)prVar15;
          piVar50 = pvVar44;
          auVar99 = CONCAT88(iVar22,piVar50);
          psVar61 = (string *)lVar56;
          auVar114 = CONCAT816(psVar61,auVar119);
          iVar42 = (int)prVar14;
          iVar55 = uVar7;
          auVar109 = CONCAT88(iVar42,iVar55);
          iVar34 = *(long *)((long)register0x00000020 + -0xb8);
          auVar94 = CONCAT816(iVar34,auVar99);
          piVar13 = (io_fs_FileInfo *)*(undefined8 *)((long)register0x00000020 + -0x60);
          auVar89 = CONCAT168(err_return_result_alias,piVar13);
          auVar104 = CONCAT1624(auVar109,auVar114);
          auVar84 = CONCAT2424(auVar89,auVar94);
          mVar79 = (multireturn___string___io_fs_DirEntry___io_fs_FileInfo_error__x86_64)
                   CONCAT4840(auVar84,auVar104);
          return mVar79;
        }
        lVar24 = *(long *)((long)register0x00000020 + -0x98);
        cap = lVar24 + 1;
        uVar6 = *(ulong *)((long)register0x00000020 + -0x90);
        if (uVar6 < cap) {
          *(undefined **)((long)register0x00000020 + -0x120) = &DAT_0024c5a0;
          *(undefined8 *)((long)register0x00000020 + -0x118) =
               *(undefined8 *)((long)register0x00000020 + -0x10);
          *(long *)((long)register0x00000020 + -0x110) = lVar24;
          *(ulong *)((long)register0x00000020 + -0x108) = uVar6;
          *(ulong *)((long)register0x00000020 + -0x100) = cap;
          *(undefined8 *)((long)register0x00000020 + -0x128) = 0x561b87;
          old_00.len = *(undefined8 *)((long)register0x00000020 + -0x10);
          old_00.array = (void *)lVar24;
          old_00.cap = (int)pvVar44;
          runtime_growslice((runtime__type *)&DAT_0024c5a0,old_00,cap);
          lVar29 = *(long *)((long)register0x00000020 + -0xf8);
          uVar6 = *(ulong *)((long)register0x00000020 + -0xe8);
          cap = *(long *)((long)register0x00000020 + -0xf0) + 1;
          lVar24 = *(long *)((long)register0x00000020 + -0x98);
        }
        else {
          lVar29 = *(long *)((long)register0x00000020 + -0x10);
        }
        *(undefined8 *)(lVar29 + lVar24 * 0x10) = *(undefined8 *)((long)register0x00000020 + -0x38);
        if (runtime_writeBarrier._0_4_ == 0) {
          *(undefined8 *)(lVar29 + 8 + lVar24 * 0x10) =
               *(undefined8 *)((long)register0x00000020 + -0x70);
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -0x128) = 0x561bdf;
          runtime_gcWriteBarrierBX();
        }
        uVar23 = *(ulong *)((long)register0x00000020 + -0x78);
        lVar24 = *(long *)((long)register0x00000020 + -0x18);
        uVar5 = *(ulong *)((long)register0x00000020 + -0x88);
        goto LAB_00561bfd;
      }
      puVar43 = *(undefined8 **)((long)register0x00000020 + -0x80);
      uVar5 = *(ulong *)((long)register0x00000020 + -0x88);
      uVar23 = *(ulong *)((long)register0x00000020 + -0x78);
      uVar6 = *(ulong *)((long)register0x00000020 + -0x90);
      cap = *(ulong *)((long)register0x00000020 + -0x98);
      uVar25 = *(ulong *)((long)register0x00000020 + -0xa8);
      cap_00 = *(ulong *)((long)register0x00000020 + -0xa0);
      lVar24 = *(long *)((long)register0x00000020 + -0x18);
      lVar29 = *(long *)((long)register0x00000020 + -0x10);
      lVar72 = *(long *)((long)register0x00000020 + -0x20);
    }
LAB_005613d2:
    plVar37 = *(long **)((long)register0x00000020 + -0x48);
                    /* Unresolved local var: uint64 reclen@[???]
                       Unresolved local var: uint64 namlen@[???]
                       Unresolved local var: []uint8 buf@[???]
                       Unresolved local var: []uint8 rec@[???]
                       Unresolved local var: []uint8 name@[???]
                       Unresolved local var: error errno@[???] */
    buf_03.len = *(long **)((long)register0x00000020 + 8);
  } while( true );
}

