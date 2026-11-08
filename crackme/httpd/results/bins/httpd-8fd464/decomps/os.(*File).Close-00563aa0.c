
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.(*File).Close(os.File * f, error ~r0) */

error os___File__Close(os_File *f)

{
  void *unaff_RBX;
  long in_FS_OFFSET;
  error eVar1;
  error eVar2;
  os_File *f_spill;
  runtime_itab *local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (f_spill != (os_File *)0x0) {
    eVar1 = os___file__close(f_spill->file);
    eVar2.data = eVar1.data;
    eVar2.tab = local_18;
    return eVar2;
  }
  eVar1.data = unaff_RBX;
  eVar1.tab = os_ErrInvalid.tab;
  return eVar1;
}

