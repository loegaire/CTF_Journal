
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.resolveTextOff(void * rtype, int32 off, void * ~r2) */

void * reflect_resolveTextOff(void *rtype,int32 off)

{
  long in_FS_OFFSET;
  void *rtype_spill;
  int32 off_spill;
  undefined8 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime____type__textOff((runtime__type *)(ulong)(uint)off_spill,off);
  return local_10;
}

