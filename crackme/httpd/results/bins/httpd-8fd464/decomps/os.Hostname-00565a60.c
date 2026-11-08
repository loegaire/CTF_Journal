
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.Hostname(string name, error err) */

multireturn_string_error__conflict2 os_Hostname(void)

{
  long in_FS_OFFSET;
  multireturn_string_error__conflict2 mVar1;
  undefined8 local_28;
  undefined8 local_18;
  undefined8 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  mVar1 = os_hostname();
  mVar1.name.len = local_10;
  mVar1.name.str = local_28;
  mVar1.err.tab = local_18;
  return mVar1;
}

