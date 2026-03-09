
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void mime.isNotTokenChar(int32 r, bool ~r1) */

bool mime_isNotTokenChar(int32 r)

{
  long in_FS_OFFSET;
  int32 r_spill;
  undefined1 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  mime_isTokenChar(r_spill);
  return (bool)(local_10 ^ 1);
}

