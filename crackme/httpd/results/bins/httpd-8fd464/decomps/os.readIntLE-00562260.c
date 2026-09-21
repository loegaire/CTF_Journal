
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.readIntLE([]uint8 b, uintptr size, uint64 ~r2) */

uint64 os_readIntLE(__uint8 b,uintptr size)

{
  long in_FS_OFFSET;
  interface___ e;
  __uint8 b_spill;
  uintptr size_spill;
  
  e.data = (void *)b.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (size_spill < 3) {
    if (size_spill == 1) {
      if (b_spill.len != 0) {
        return (ulong)*b_spill.array;
      }
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if (size_spill == 2) {
      if (1 < (ulong)b_spill.len) {
        return (ulong)*(ushort *)b_spill.array;
      }
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
  }
  else {
    if (size_spill == 4) {
      if (3 < (ulong)b_spill.len) {
        return (ulong)*(uint *)b_spill.array;
      }
      goto LAB_0056236e;
    }
    if (size_spill == 8) {
      if (7 < (ulong)b_spill.len) {
        return *(uint64 *)b_spill.array;
      }
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
  }
  e._type = (runtime__type *)&os__stmp_2;
  runtime_gopanic(e);
LAB_0056236e:
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

