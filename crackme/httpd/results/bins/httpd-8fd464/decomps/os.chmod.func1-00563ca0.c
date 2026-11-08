
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.chmod.func1(error ~r0) */

error os_chmod_func1(void)

{
  uint mode;
  uint uVar1;
  long in_RDX;
  long extraout_RDX;
  int unaff_RBX;
  long in_FS_OFFSET;
  string path;
  runtime_itab *local_18;
  error eVar2;
  
                    /* Unresolved local var: io/fs.FileMode mode@[???]
                       Unresolved local var: string longName@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  mode = *(uint *)(in_RDX + 0x18);
  uVar1 = mode & 0x1ff;
  if ((mode & 0x800000) != 0) {
    uVar1 = mode & 0x1ff | 0x800;
  }
  if ((mode & 0x400000) != 0) {
    uVar1 = uVar1 | 0x400;
  }
  path.str = (uint8 *)(ulong)(uVar1 | 0x200);
  path.len = unaff_RBX;
  eVar2 = syscall_Chmod(path,mode);
  eVar2.tab = local_18;
  return eVar2;
}

