
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.hexString([]uint8 b, string ~r1) */

string net_hexString(__uint8 b)

{
  uint8 uVar1;
  runtime__type *et;
  int cap;
  long lVar2;
  long in_FS_OFFSET;
  string sVar3;
  __uint8 b_spill;
  runtime_tmpBuf *local_20;
  
  cap = b.cap;
                    /* Unresolved local var: []uint8 s@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  et = (runtime__type *)(b_spill.len << 1);
  runtime_makeslice(et,b.len,cap);
                    /* Unresolved local var: uint8 tn@[???]
                       Unresolved local var: int i@[???] */
  lVar2 = 0;
  while( true ) {
    if (b_spill.len <= lVar2) {
      sVar3 = runtime_slicebytetostring(local_20,b_spill.array,b_spill.len);
      sVar3.str = *local_20;
      return sVar3;
    }
    uVar1 = (&DAT_002992b5)[b_spill.array[lVar2] & 0xf];
    if (et <= (runtime__type *)(lVar2 << 1)) break;
    (*local_20)[lVar2 * 2] = (&DAT_002992b5)[b_spill.array[lVar2] >> 4];
    if (et <= (runtime__type *)(lVar2 * 2 + 1U)) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    (*local_20)[lVar2 * 2 + 1] = uVar1;
    lVar2 = lVar2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

