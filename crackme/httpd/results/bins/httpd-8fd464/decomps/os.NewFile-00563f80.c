
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.NewFile(uintptr fd, string name, os.File * ~r2) */

os_File * os_NewFile(uintptr fd,string name)

{
  uintptr fd_00;
  os_newFileKind in_RDI;
  long in_FS_OFFSET;
  string name_00;
  multireturn_bool_error__conflict mVar1;
  uintptr fd_spill;
  string name_spill;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 local_10;
  
                    /* Unresolved local var: os.newFileKind kind@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  mVar1 = internal_syscall_unix_IsNonblock(fd_spill);
  name_00.str = mVar1.err.tab;
  if ((local_20 == 0) && (local_28 != '\0')) {
    fd_00 = 3;
  }
  else {
    fd_00 = 0;
  }
  name_00.len = name_spill.len;
  os_newFile(fd_00,name_00,in_RDI);
  return local_10;
}

