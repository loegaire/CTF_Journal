
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.resolveNameOff(void * ptrInModule, int32 off, void * ~r2)
    */

void * reflect_resolveNameOff(void *ptrInModule,int32 off)

{
  long in_FS_OFFSET;
  void *ptrInModule_spill;
  int32 off_spill;
  undefined8 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_resolveNameOff((void *)(ulong)(uint)off_spill,off);
  return local_10;
}

