
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.(*rawConn).Read(os.rawConn * c, func(uintptr)_bool * * f, error
   ~r1) */

error os___rawConn__Read(os_rawConn *c,func_uintptr__bool **f)

{
  runtime_itab *prVar1;
  func_uintptr__bool **f_00;
  long in_FS_OFFSET;
  error eVar2;
  error eVar3;
  os_rawConn *c_spill;
  func_uintptr__bool **f_spill;
  
                    /* Unresolved local var: error err@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: error err@[???] */
  prVar1 = os_ErrInvalid.tab;
  f_00 = os_ErrInvalid.data;
  if (c_spill->file != (os_File *)0x0) {
    prVar1 = (runtime_itab *)0x0;
    f_00 = (func_uintptr__bool **)0x0;
  }
  if (prVar1 == (runtime_itab *)0x0) {
    eVar2 = internal_poll___FD__RawRead((internal_poll_FD *)f_spill,f_00);
    eVar3.data = eVar2.data;
    eVar3.tab = (runtime_itab *)c_spill->file;
    return eVar3;
  }
  eVar2.data = f_00;
  eVar2.tab = (runtime_itab *)c_spill;
  return eVar2;
}

