
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.fillAligned(uint64 x, uint m, uint64 ~r2) */

uint64 runtime_fillAligned(uint64 x,uint m)

{
  uint64 uVar1;
  long in_FS_OFFSET;
  string s;
  uint64 x_spill;
  uint m_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (m_spill < 5) {
    if (m_spill == 1) {
      return x_spill;
    }
    if (m_spill == 2) {
      uVar1 = ~((x_spill & 0x5555555555555555) + 0x5555555555555555 | x_spill | 0x5555555555555555);
    }
    else {
      if (m_spill != 4) goto LAB_004d3990;
      uVar1 = ~((x_spill & 0x7777777777777777) + 0x7777777777777777 | x_spill | 0x7777777777777777);
    }
  }
  else if (m_spill < 0x11) {
    if (m_spill == 8) {
      uVar1 = ~((x_spill & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f | x_spill | 0x7f7f7f7f7f7f7f7f);
    }
    else {
      if (m_spill != 0x10) {
LAB_004d3990:
        s.len = m;
        s.str = &DAT_002910a1;
                    /* WARNING: Subroutine does not return */
        runtime_throw(s);
      }
      uVar1 = ~((x_spill & 0x7fff7fff7fff7fff) + 0x7fff7fff7fff7fff | x_spill | 0x7fff7fff7fff7fff);
    }
  }
  else if (m_spill == 0x20) {
    uVar1 = ~((x_spill & 0x7fffffff7fffffff) + 0x7fffffff7fffffff | x_spill | 0x7fffffff7fffffff);
  }
  else {
    if (m_spill != 0x40) goto LAB_004d3990;
    uVar1 = ~((x_spill & 0x7fffffffffffffff) + 0x7fffffffffffffff | x_spill | 0x7fffffffffffffff);
  }
  return uVar1;
}

