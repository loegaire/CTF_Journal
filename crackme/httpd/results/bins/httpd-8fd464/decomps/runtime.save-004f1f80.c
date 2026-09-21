
/* WARNING: Unknown calling convention */

void runtime_save(uintptr pc,uintptr sp)

{
  long lVar1;
  long in_FS_OFFSET;
  string s;
  uintptr pc_spill;
  uintptr sp_spill;
  
                    /* Unresolved local var: runtime.g * _g_@[DW_OP_reg0(RAX)] */
  lVar1 = *(long *)(in_FS_OFFSET + -8);
  if ((**(long **)(lVar1 + 0x30) != lVar1) && ((*(long **)(lVar1 + 0x30))[10] != lVar1)) {
    *(uintptr *)(lVar1 + 0x40) = pc_spill;
    *(uintptr *)(lVar1 + 0x38) = sp_spill;
    *(undefined8 *)(lVar1 + 0x60) = 0;
    *(undefined8 *)(lVar1 + 0x58) = 0;
    if (*(long *)(lVar1 + 0x50) != 0) {
      runtime_badctxt();
    }
    return;
  }
  s.len = sp;
  s.str = (uint8 *)0x2a07fc;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}

