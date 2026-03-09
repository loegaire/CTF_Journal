
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void sort.(*StringSlice).Len(int ~r0) */

int sort___StringSlice__Len(void)

{
  long *plVar1;
  long in_FS_OFFSET;
  long in_stack_00000008;
  
                    /* Unresolved local var: sort.StringSlice x@[???] */
  plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
  if (plVar1 != (long *)0x0) goto LAB_00541780;
  while (in_stack_00000008 == 0) {
    runtime_panicwrap();
LAB_00541780:
    if ((undefined8 *)*plVar1 == &stack0x00000008) {
      *plVar1 = (long)&stack0xfffffffffffffff8;
    }
  }
  return *(int *)(in_stack_00000008 + 8);
}

