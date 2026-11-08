
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void mime.isTokenChar(int32 r, bool ~r1) */

bool mime_isTokenChar(int32 r)

{
  int unaff_RBX;
  long in_FS_OFFSET;
  bool bVar1;
  string s;
  int32 r_spill;
  undefined8 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  s.str = (uint8 *)(ulong)(uint)r_spill;
  bVar1 = r_spill - 0x21U < 0x5e;
  if (bVar1) {
    s.len = unaff_RBX;
    strings_IndexRune(s,0x298551);
  }
  return bVar1 && local_10 < 0;
}

