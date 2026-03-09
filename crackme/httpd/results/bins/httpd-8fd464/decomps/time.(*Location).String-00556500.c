
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.(*Location).String(time.Location * l, string ~r0) */

string time___Location__String(time_Location *l)

{
  int unaff_RBX;
  long in_FS_OFFSET;
  string sVar1;
  time_Location *l_spill;
  undefined8 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  time___Location__get(l_spill);
  sVar1.len = unaff_RBX;
  sVar1.str = *(uint8 **)(local_10 + 8);
  return sVar1;
}

