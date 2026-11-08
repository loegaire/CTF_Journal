
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.Getenv(string key, string ~r1) */

string os_Getenv(string key)

{
  long in_FS_OFFSET;
  string name;
  string key_00;
  string sVar1;
  multireturn_string_bool__conflict3 mVar2;
  string key_spill;
  undefined8 local_20;
  
  name.len = key.len;
                    /* Unresolved local var: string v@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  name.str = key_spill.str;
  internal_testlog_Getenv(name);
  key_00.len = name.len;
  key_00.str = (uint8 *)key_spill.len;
  mVar2 = syscall_Getenv(key_00);
  sVar1.len = mVar2.value.len;
  sVar1.str = local_20;
  return sVar1;
}

