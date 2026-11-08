
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.malg(int32 stacksize, runtime.g * ~r1) */

runtime_g * runtime_malg(int32 stacksize)

{
  ulong uVar1;
  long in_FS_OFFSET;
  int32 stacksize_spill;
  runtime_g *in_stack_ffffffffffffffd0;
  
                    /* Unresolved local var: runtime.g * newg@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_newobject((runtime__type *)&DAT_00286620);
  if (-1 < stacksize_spill) {
    uVar1 = 0;
                    /* Unresolved local var: uint s@[???] */
    while( true ) {
      if (stacksize_spill <= (int)(1 << ((byte)uVar1 & 0x1f) & -(uint)(uVar1 < 0x20))) break;
      uVar1 = uVar1 + 1;
    }
    runtime_systemstack();
    in_stack_ffffffffffffffd0->stackguard0 = (in_stack_ffffffffffffffd0->stack).lo + 0x3a0;
    in_stack_ffffffffffffffd0->stackguard1 = 0xffffffffffffffff;
    *(undefined8 *)(in_stack_ffffffffffffffd0->stack).lo = 0;
  }
  return in_stack_ffffffffffffffd0;
}

