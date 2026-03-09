
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.(*File).SetReadDeadline(os.File * f, time.Time t, error ~r1) */

error os___File__SetReadDeadline(os_File *f,time_Time t)

{
  int64 iVar1;
  time_Location *ptVar2;
  long in_FS_OFFSET;
  time_Time t_00;
  error eVar3;
  os_File *f_spill;
  time_Time t_spill;
  undefined8 local_18;
  
  ptVar2 = t.loc;
  iVar1 = t.ext;
  t_00.wall = t.wall;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  t_00.ext = iVar1;
  t_00.loc = ptVar2;
  eVar3 = os___File__setReadDeadline((os_File *)t_spill.loc,t_00);
  eVar3.tab = local_18;
  return eVar3;
}

