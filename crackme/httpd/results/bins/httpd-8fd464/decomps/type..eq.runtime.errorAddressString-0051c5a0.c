
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.runtime.errorAddressString(runtime.errorAddressString *
   p, runtime.errorAddressString * q, bool r) */

bool type__eq_runtime_errorAddressString
               (runtime_errorAddressString *p,runtime_errorAddressString *q)

{
  long in_FS_OFFSET;
  runtime_errorAddressString *p_spill;
  runtime_errorAddressString *q_spill;
  undefined1 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (((q_spill->msg).len == (p_spill->msg).len) && (q_spill->addr == p_spill->addr)) {
    runtime_memequal();
  }
  else {
    local_10 = 0;
  }
  return (bool)local_10;
}

