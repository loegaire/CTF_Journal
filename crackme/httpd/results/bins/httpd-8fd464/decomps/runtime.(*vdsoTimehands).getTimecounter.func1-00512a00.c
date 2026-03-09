
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime___vdsoTimehands__getTimecounter_func1(void)

{
  runtime_vdsoTimehands *th;
  undefined1 *puVar1;
  long in_RDX;
  long extraout_RDX;
  long in_FS_OFFSET;
  uint32 local_20;
  undefined1 local_1c;
  
                    /* Unresolved local var: runtime.vdsoTimehands * th@[???]
                       Unresolved local var: uint32 * &tc@[???]
                       Unresolved local var: bool * &ok@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  th = *(runtime_vdsoTimehands **)(in_RDX + 0x10);
  puVar1 = *(undefined1 **)(in_RDX + 0x18);
  runtime___vdsoTimehands__getHPETTimecounter(th);
  th->algo = local_20;
  *puVar1 = local_1c;
  return;
}

