
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.avoidDNS(string name, bool ~r1) */

bool net_avoidDNS(string name)

{
  int in_RDI;
  long in_FS_OFFSET;
  string s;
  string suffix;
  string name_spill;
  undefined1 local_10;
  
  s.len = name.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (name_spill.len != 0) {
    s.str = &DAT_0028945c;
    suffix.len = in_RDI;
    suffix.str = name_spill.str;
    net_stringsHasSuffixFold(s,suffix);
    return (bool)local_10;
  }
  return false;
}

