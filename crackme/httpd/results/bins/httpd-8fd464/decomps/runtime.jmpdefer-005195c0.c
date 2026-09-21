
void runtime_jmpdefer(void)

{
  undefined8 *in_stack_00000008;
  long in_stack_00000010;
  
  *(long *)(in_stack_00000010 + -8) = *(long *)(in_stack_00000010 + -8) + -5;
                    /* WARNING: Could not recover jumptable at 0x005195db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*in_stack_00000008)();
  return;
}

