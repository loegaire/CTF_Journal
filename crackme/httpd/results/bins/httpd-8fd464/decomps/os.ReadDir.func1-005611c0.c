
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.ReadDir.func1(int i, int j, bool ~r2) */

bool os_ReadDir_func1(int i,int j)

{
  long lVar1;
  ulong uVar2;
  undefined1 extraout_AL;
  long in_RDX;
  long extraout_RDX;
  long in_FS_OFFSET;
  int i_spill;
  int j_spill;
  
                    /* Unresolved local var: []io/fs.DirEntry dirs@[DW_OP_reg3(RBX); DW_OP_piece: 8;
                       DW_OP_piece: 8] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  lVar1 = *(long *)(in_RDX + 8);
  uVar2 = *(ulong *)(in_RDX + 0x10);
  if ((ulong)i_spill < uVar2) {
    (**(code **)(*(long *)(lVar1 + i_spill * 0x10) + 0x28))();
    if ((ulong)j_spill < uVar2) {
      (**(code **)(*(long *)(lVar1 + j_spill * 0x10) + 0x28))();
      runtime_cmpstring();
      return (bool)extraout_AL;
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

