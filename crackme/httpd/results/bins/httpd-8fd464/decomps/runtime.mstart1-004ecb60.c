
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_mstart1(void)

{
  long lVar1;
  undefined8 *puVar2;
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  undefined8 unaff_retaddr;
  
                    /* Unresolved local var: runtime.g * _g_@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  lVar1 = *(long *)(in_FS_OFFSET + -8);
  if (**(long **)(lVar1 + 0x30) == lVar1) {
    *(long *)(lVar1 + 0x48) = lVar1;
    *(undefined8 *)(lVar1 + 0x40) = unaff_retaddr;
    *(undefined1 **)(lVar1 + 0x38) = &stack0x00000008;
    runtime_asminit();
    runtime_minit();
    if (*(runtime_m **)(lVar1 + 0x30) == &runtime_m0) {
      runtime_mstartm0();
                    /* Unresolved local var: func() * * fn@[???] */
    }
    puVar2 = *(undefined8 **)(*(long *)(lVar1 + 0x30) + 0xc0);
    if (puVar2 != (undefined8 *)0x0) {
      (*(code *)*puVar2)();
    }
    if (*(runtime_m **)(lVar1 + 0x30) != &runtime_m0) {
      runtime_acquirep((runtime_p *)(*(runtime_m **)(lVar1 + 0x30))->nextp);
      *(undefined8 *)(*(long *)(lVar1 + 0x30) + 0xe0) = 0;
    }
    runtime_schedule();
    return;
  }
  s.len = unaff_RBX;
  s.str = &DAT_0029b40e;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}

