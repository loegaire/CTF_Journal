
void runtime_callCgoSigaction(void)

{
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  (*_cgo_sigaction)(in_stack_00000008,in_stack_00000010,in_stack_00000018);
  return;
}

