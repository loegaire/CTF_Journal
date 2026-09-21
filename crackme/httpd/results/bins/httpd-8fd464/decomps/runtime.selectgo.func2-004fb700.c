
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_selectgo_func2(void)

{
  long in_RDX;
  long extraout_RDX;
  int in_R8;
  long in_FS_OFFSET;
  __runtime_scase scases;
  __uint16 lockorder;
  
                    /* Unresolved local var: []runtime.scase scases@[???]
                       Unresolved local var: []uint16 lockorder@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  scases.len = *(undefined8 *)(in_RDX + 0x18);
  scases.array = (runtime_scase *)*(undefined8 *)(in_RDX + 8);
  scases.cap = *(int *)(in_RDX + 0x10);
  lockorder.len = *(undefined8 *)(in_RDX + 0x20);
  lockorder.array = (uint16 *)*(undefined8 *)(in_RDX + 0x28);
  lockorder.cap = in_R8;
  runtime_selunlock(scases,lockorder);
  return;
}

