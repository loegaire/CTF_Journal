
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strings.(*Replacer).Replace(strings.Replacer * r, string s, string
   ~r1) */

string strings___Replacer__Replace(strings_Replacer *r,string s)

{
  long in_FS_OFFSET;
  string sVar1;
  strings_Replacer *r_spill;
  string s_spill;
  uint8 *local_28;
  
  sVar1.len = (func__ **)s.str;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((r_spill->once).done == 0) {
    sync___Once__doSlow(&r_spill->once,sVar1.len);
  }
  (*(code *)((r_spill->r).tab)->fun[0])();
  sVar1.str = local_28;
  return sVar1;
}

