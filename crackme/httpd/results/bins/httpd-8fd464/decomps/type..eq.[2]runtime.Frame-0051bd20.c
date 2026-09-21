
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.[2]runtime.Frame(runtime.Frame[2] * p, runtime.Frame[2] *
   q, bool r) */

bool type__eq__2_runtime_Frame(runtime_Frame (*p) [2],runtime_Frame (*q) [2])

{
  bool bVar1;
  runtime_Frame *p_00;
  long in_FS_OFFSET;
  runtime_Frame (*p_spill) [2];
  runtime_Frame (*q_spill) [2];
  char local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  p_00 = (runtime_Frame *)0x0;
  while( true ) {
    if (1 < (long)p_00) {
      return SUB81(p_00,0);
    }
    bVar1 = type__eq_runtime_Frame(p_00,*q_spill);
    if (local_18 == '\0') break;
    p_00 = (runtime_Frame *)((long)&p_00->PC + 1);
  }
  return bVar1;
}

