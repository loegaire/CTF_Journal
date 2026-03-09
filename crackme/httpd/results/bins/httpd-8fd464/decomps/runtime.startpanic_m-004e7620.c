
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.startpanic_m(bool ~r0) */

bool runtime_startpanic_m(void)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  undefined1 extraout_AL;
  undefined1 extraout_AL_00;
  bool detailed;
  undefined1 extraout_AL_01;
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  
                    /* Unresolved local var: runtime.g * _g_@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  lVar3 = *(long *)(in_FS_OFFSET + -8);
  if (runtime_mheap_.cachealloc.size == 0) {
    runtime_printlock();
    s.len = unaff_RBX;
    s.str = &DAT_002a862a;
    runtime_printstring(s);
    runtime_printunlock();
  }
  piVar1 = (int *)(*(long *)(lVar3 + 0x30) + 0xf8);
  *piVar1 = *piVar1 + 1;
  if (*(int *)(*(long *)(lVar3 + 0x30) + 0x110) < 0) {
    *(undefined4 *)(*(long *)(lVar3 + 0x30) + 0x110) = 1;
  }
  lVar3 = *(long *)(lVar3 + 0x30);
  iVar2 = *(int *)(lVar3 + 0x114);
  if (iVar2 != 0) {
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        *(undefined4 *)(lVar3 + 0x114) = 3;
        runtime_printlock();
        s_00.len = unaff_RBX;
        s_00.str = &DAT_0029e7e7;
        runtime_printstring(s_00);
        runtime_printunlock();
        runtime_exit();
      }
      runtime_exit();
      return (bool)extraout_AL;
    }
    *(undefined4 *)(lVar3 + 0x114) = 2;
    runtime_printlock();
    s_01.len = unaff_RBX;
    s_01.str = &DAT_0029b6a7;
    runtime_printstring(s_01);
    runtime_printunlock();
    return (bool)extraout_AL_00;
  }
  *(undefined4 *)(lVar3 + 0x114) = 1;
  LOCK();
  runtime_panicking = runtime_panicking + 1;
  UNLOCK();
  runtime_lock(&runtime_paniclk);
  if ((0 < runtime_debug.schedtrace) || (0 < runtime_debug.scheddetail)) {
    runtime_schedtrace(detailed);
  }
  runtime_freezetheworld();
  return (bool)extraout_AL_01;
}

