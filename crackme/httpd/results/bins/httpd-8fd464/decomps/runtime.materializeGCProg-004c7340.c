
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.materializeGCProg(uintptr ptrdata, uint8 * prog,
   runtime.mspan * ~r2) */

runtime_mspan * runtime_materializeGCProg(uintptr ptrdata,uint8 *prog)

{
  undefined8 in_RCX;
  int in_RDI;
  long in_FS_OFFSET;
  uintptr ptrdata_spill;
  uint8 *prog_spill;
  runtime_mspan *local_20;
  
                    /* Unresolved local var: runtime.mspan * s@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime___mheap__allocManual
            ((runtime_mheap *)((ptrdata_spill + 0x3f >> 6) + 0x1fff >> 0xd),(uintptr)prog,
             (runtime_spanAllocType)in_RCX);
  runtime_runGCProg((uint8 *)local_20,prog,(uint8 *)local_20->startAddr,in_RDI);
  return local_20;
}

