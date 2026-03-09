
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void math_init(void)

{
  math_useFMA = internal_cpu_X86.HasFMA;
  if (!internal_cpu_X86.HasAVX) {
    math_useFMA = (bool)0;
  }
  return;
}

