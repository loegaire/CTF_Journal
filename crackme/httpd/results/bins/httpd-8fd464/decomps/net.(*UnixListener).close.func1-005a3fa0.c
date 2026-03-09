
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void net___UnixListener__close_func1(void)

{
  long lVar1;
  undefined8 in_RAX;
  undefined8 in_RDX;
  long in_FS_OFFSET;
  string path;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = in_RDX;
  auVar2._0_8_ = in_RAX;
                    /* Unresolved local var: net.UnixListener * ln@[???] */
  while (path.str = auVar2._0_8_,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    auVar2 = runtime_morestack();
  }
  lVar1 = *(long *)(auVar2._8_8_ + 8);
  if (*(long *)(lVar1 + 0x10) != 0) {
    if ((**(char **)(lVar1 + 8) != '@') && (*(char *)(lVar1 + 0x18) != '\0')) {
      path.len = (int)*(char **)(lVar1 + 8);
      syscall_Unlink(path);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

