
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.cgocall(void * fn, void * arg, int32 ~r2) */

int32 runtime_cgocall(void *fn,void *arg)

{
  long lVar1;
  long in_FS_OFFSET;
  string s;
  string s_00;
  void *fn_spill;
  void *arg_spill;
  int32 local_20;
  
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: int32 errno@[???] */
  if (!runtime_iscgo) {
    s_00.len = (int)arg;
    s_00.str = &DAT_0029b480;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_00);
  }
  if (fn_spill != (void *)0x0) {
    lVar1 = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30);
    *(long *)(lVar1 + 0x138) = *(long *)(lVar1 + 0x138) + 1;
    *(int *)(lVar1 + 0x140) = *(int *)(lVar1 + 0x140) + 1;
    **(undefined8 **)(lVar1 + 0x148) = 0;
    runtime_entersyscall();
    *(undefined1 *)(lVar1 + 0x120) = 1;
    runtime_asmcgocall();
    *(undefined1 *)(lVar1 + 0x120) = 0;
    *(int *)(lVar1 + 0x140) = *(int *)(lVar1 + 0x140) + -1;
    runtime_exitsyscall();
    return local_20;
  }
  s.len = (int)arg;
  s.str = &DAT_00291259;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}

