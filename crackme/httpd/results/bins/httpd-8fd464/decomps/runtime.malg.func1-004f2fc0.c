
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_malg_func1(void)

{
  undefined8 *puVar1;
  long in_RDX;
  long extraout_RDX;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  
                    /* Unresolved local var: int32 stacksize@[???]
                       Unresolved local var: runtime.g * newg@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  puVar1 = *(undefined8 **)(in_RDX + 0x10);
  runtime_stackalloc((uint32)puVar1);
  *puVar1 = local_20;
  puVar1[1] = local_18;
  return;
}

