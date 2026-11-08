
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_persistentalloc_func1(void)

{
  undefined8 *align;
  long in_RDX;
  long extraout_RDX;
  long in_FS_OFFSET;
  undefined8 local_18;
  
                    /* Unresolved local var: uintptr size@[???]
                       Unresolved local var: uintptr align@[???]
                       Unresolved local var: runtime.sysMemStat * sysStat@[???]
                       Unresolved local var: runtime.notInHeap * * &p@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  align = *(undefined8 **)(in_RDX + 0x20);
  runtime_persistentalloc1
            (*(uintptr *)(in_RDX + 0x10),(uintptr)align,*(runtime_sysMemStat **)(in_RDX + 0x18));
  *align = local_18;
  return;
}

