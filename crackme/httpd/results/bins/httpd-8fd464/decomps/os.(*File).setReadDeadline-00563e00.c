
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.(*File).setReadDeadline(os.File * f, time.Time t, error ~r1) */

error os___File__setReadDeadline(os_File *f,time_Time t)

{
  runtime_itab *prVar1;
  int in_RSI;
  time_Location *ptVar2;
  long in_FS_OFFSET;
  error eVar3;
  error eVar4;
  time_Time t_00;
  os_File *f_spill;
  time_Time t_spill;
  runtime_itab *local_18;
  
  ptVar2 = t.loc;
  eVar3.data = (void *)t.wall;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: error err@[???] */
  prVar1 = os_ErrInvalid.tab;
  if (f_spill != (os_File *)0x0) {
    prVar1 = (runtime_itab *)0x0;
  }
  if (prVar1 == (runtime_itab *)0x0) {
    t_00.ext = (int64)f_spill->file;
    t_00.wall = (uint64)eVar3.data;
    t_00.loc = ptVar2;
    eVar3 = internal_poll_setDeadlineImpl((internal_poll_FD *)t_spill.loc,t_00,in_RSI);
    eVar4.data = eVar3.data;
    eVar4.tab = local_18;
    return eVar4;
  }
  eVar3.tab = (runtime_itab *)f_spill;
  return eVar3;
}

