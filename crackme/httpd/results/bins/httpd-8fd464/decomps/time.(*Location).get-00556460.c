
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.(*Location).get(time.Location * l, time.Location * ~r0) */

time_Location * time___Location__get(time_Location *l)

{
  func__ **unaff_RBX;
  long in_FS_OFFSET;
  time_Location *l_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (l_spill != (time_Location *)0x0) {
    if ((l_spill == &time_localLoc) && (time_localOnce.done == 0)) {
      sync___Once__doSlow((sync_Once *)&PTR_time_initLocal_002b3b58,unaff_RBX);
    }
    return l_spill;
  }
  return &time_utcLoc;
}

