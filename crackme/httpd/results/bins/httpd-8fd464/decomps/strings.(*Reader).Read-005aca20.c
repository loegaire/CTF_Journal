
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strings.(*Reader).Read(strings.Reader * r, []uint8 b, int n, error
   err) */

multireturn_int_error_ strings___Reader__Read(strings_Reader *r,__uint8 b)

{
  ulong uVar1;
  uint8 *puVar2;
  ulong uVar3;
  uint8 *puVar4;
  uint8 *extraout_RAX;
  long lVar5;
  long in_FS_OFFSET;
  multireturn_int_error_ mVar6;
  multireturn_int_error_ mVar7;
  strings_Reader *r_spill;
  __uint8 b_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (r_spill->i < (r_spill->s).len) {
    r_spill->prevRune = -1;
    uVar1 = (r_spill->s).len;
    puVar2 = (r_spill->s).str;
    uVar3 = r_spill->i;
    if (uVar3 <= uVar1) {
      lVar5 = uVar1 - uVar3;
      if (lVar5 < b_spill.len) {
        b_spill.len = lVar5;
      }
      puVar4 = puVar2 + (uVar3 & -lVar5 >> 0x3f);
      if (b_spill.array != puVar4) {
        runtime_memmove();
        puVar4 = extraout_RAX;
      }
      r_spill->i = r_spill->i + b_spill.len;
      mVar6.err.tab = (runtime_itab *)puVar2;
      mVar6.n = (int)puVar4;
      mVar6.err.data = b_spill.array;
      return mVar6;
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceB();
  }
  mVar7.err.tab = (runtime_itab *)r_spill->i;
  mVar7.n = (int)io_EOF.tab;
  mVar7.err.data = io_EOF.data;
  return mVar7;
}

