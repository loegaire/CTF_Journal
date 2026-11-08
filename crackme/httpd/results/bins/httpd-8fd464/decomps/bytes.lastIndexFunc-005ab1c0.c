
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bytes.lastIndexFunc([]uint8 s, func(int32)_bool * * f, bool truth,
   int ~r3) */

int bytes_lastIndexFunc(__uint8 s,func_int32__bool **f,bool truth)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  __uint8 p;
  long in_stack_00000008;
  int i;
  undefined8 in_stack_00000018;
  func_int32__bool **f_spill;
  bool truth_spill;
  undefined8 local_38;
  undefined8 local_20;
  
  while (iVar2 = i, &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  while( true ) {
    if (iVar2 < 1) {
      return i;
    }
    if ((ulong)i <= iVar2 - 1U) break;
    bVar1 = *(byte *)(iVar2 + -1 + in_stack_00000008);
    lVar4 = in_stack_00000008;
    if (bVar1 < 0x80) {
      lVar3 = 1;
    }
    else {
      p.len = iVar2;
      p.array = (uint8 *)in_stack_00000018;
      p.cap._0_1_ = bVar1;
      p.cap._1_7_ = 0;
      unicode_utf8_DecodeLastRune(p);
      lVar3 = local_20;
      local_38 = iVar2;
    }
    (**f_spill)((int32)lVar4,(bool *)f_spill);
    iVar2 = iVar2 - lVar3;
    if ((bool)(char)local_38 == truth_spill) {
      return iVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

