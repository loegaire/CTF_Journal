
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.absDomainName([]uint8 b, string ~r1) */

string net_absDomainName(__uint8 b)

{
  long lVar1;
  runtime__type *n;
  runtime__type *et;
  int in_RDI;
  long in_FS_OFFSET;
  string sVar2;
  runtime_slice old;
  __uint8 b_spill;
  uint8 *local_30;
  uint8 *local_20;
  long local_18;
  
  n = (runtime__type *)b.cap;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  lVar1 = 0;
  do {
    if (b_spill.len <= lVar1) {
LAB_0058554f:
      sVar2 = runtime_slicebytetostring((runtime_tmpBuf *)b_spill.len,b_spill.array,(int)n);
      sVar2.str = local_30;
      return sVar2;
    }
    if (b_spill.array[lVar1] == 0x2e) {
      if ((ulong)b_spill.len <= b_spill.len - 1U) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if (b_spill.array[b_spill.len + -1] != 0x2e) {
        et = (runtime__type *)(b_spill.len + 1);
        n = (runtime__type *)b_spill.cap;
        if ((ulong)b_spill.cap < et) {
          local_30 = (uint8 *)b_spill.cap;
          old.len = b_spill.cap;
          old.array = b_spill.array;
          old.cap = in_RDI;
          runtime_growslice(et,old,0x225720);
          et = (runtime__type *)(local_18 + 1);
          n = et;
          b_spill.array = local_20;
        }
        b_spill.array[b_spill.len] = 0x2e;
        b_spill.len = (int)et;
      }
      goto LAB_0058554f;
    }
    lVar1 = lVar1 + 1;
  } while( true );
}

