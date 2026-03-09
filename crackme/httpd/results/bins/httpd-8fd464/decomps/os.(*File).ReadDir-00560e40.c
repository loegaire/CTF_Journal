
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.(*File).ReadDir(os.File * f, int n, []io/fs.DirEntry ~r1, error
   ~r2) */

multireturn___io_fs_DirEntry_error_ os___File__ReadDir(os_File *f,int n)

{
  runtime_itab *prVar1;
  os_readdirMode in_RCX;
  int iVar2;
  void *in_RSI;
  runtime_itab *in_RDI;
  long in_FS_OFFSET;
  multireturn___io_fs_DirEntry_error_ mVar3;
  multireturn___io_fs_DirEntry_error_ mVar4;
  os_File *f_spill;
  int n_spill;
  runtime_itab *local_48;
  int local_38;
  undefined8 local_18;
  void *local_10;
  
                    /* Unresolved local var: []io/fs.DirEntry dirents@[???]
                       Unresolved local var: error err@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (f_spill == (os_File *)0x0) {
    mVar4.~r1.len = n;
    mVar4.~r1.array = (io_fs_DirEntry *)os_ErrInvalid.tab;
    mVar4.~r1.cap = (int)os_ErrInvalid.data;
    mVar4.~r2.data = in_RSI;
    mVar4.~r2.tab = in_RDI;
    return mVar4;
  }
  os___File__readdir((os_File *)n_spill,n,in_RCX);
  prVar1 = (runtime_itab *)&runtime_zerobase;
  if (local_48 != (runtime_itab *)0x0) {
    prVar1 = local_48;
  }
  iVar2 = 0;
  if (local_48 != (runtime_itab *)0x0) {
    iVar2 = local_38;
  }
  mVar3.~r1.len = local_38;
  mVar3.~r1.array = (io_fs_DirEntry *)local_18;
  mVar3.~r1.cap = iVar2;
  mVar3.~r2.data = local_10;
  mVar3.~r2.tab = prVar1;
  return mVar3;
}

