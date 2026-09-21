
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void sync.(*Pool).pin(sync.Pool * p, sync.poolLocal * ~r0, int ~r1) */

multireturn_sync_poolLocal___int_ sync___Pool__pin(sync_Pool *p)

{
  long in_FS_OFFSET;
  multireturn_sync_poolLocal___int_ mVar1;
  multireturn_sync_poolLocal___int_ mVar2;
  sync_Pool *p_spill;
  sync_Pool *local_20;
  sync_poolLocal *local_18;
  
                    /* Unresolved local var: int pid@[???]
                       Unresolved local var: uintptr s@[???]
                       Unresolved local var: void * l@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  sync_runtime_procPin();
  if (local_20 < (sync_Pool *)p_spill->localSize) {
                    /* Unresolved local var: void * lp@[???] */
    mVar1.~r0 = (sync_poolLocal *)((long)local_20 * 0x80 + (long)p_spill->local);
    mVar1.~r1 = (int)p_spill->local;
    return mVar1;
  }
  mVar2 = sync___Pool__pinSlow(local_20);
  mVar2.~r0 = local_18;
  return mVar2;
}

