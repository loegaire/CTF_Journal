
/* WARNING: Unknown calling convention */

void runtime___pageAlloc__find_func1(runtime_offAddr addr,uintptr size)

{
  uint64 *puVar1;
  uint64 v;
  uint64 v_00;
  long in_RDX;
  long extraout_RDX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  runtime_offAddr addr_spill;
  uintptr size_spill;
  
                    /* Unresolved local var:
                       struct_{_runtime.base_runtime.offAddr;_runtime.bound_runtime.offAddr_} *
                       &firstFree@[DW_OP_reg0(RAX)] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  puVar1 = *(uint64 **)(in_RDX + 8);
  if ((addr_spill.a + 0x800000000000 < *puVar1 + 0x800000000000) ||
     (puVar1[1] + 0x800000000000 < addr_spill.a + size_spill + 0x7fffffffffff)) {
    if ((*puVar1 + 0x800000000000 <= addr_spill.a + size_spill + 0x7fffffffffff) &&
       (addr_spill.a + 0x800000000000 <= puVar1[1] + 0x800000000000)) {
      runtime_printlock();
      s.len = addr_spill.a;
      s.str = &DAT_00299ab5;
      runtime_printstring(s);
      runtime_printhex(addr_spill.a);
      s_00.len = addr_spill.a;
      s_00.str = &DAT_0028d295;
      runtime_printstring(s_00);
      runtime_printuint(size_spill);
      runtime_printnl();
      runtime_printunlock();
      v = *puVar1;
      v_00 = puVar1[1];
      runtime_printlock();
      s_01.len = addr_spill.a;
      s_01.str = &DAT_00299ac5;
      runtime_printstring(s_01);
      runtime_printhex(v);
      s_02.len = addr_spill.a;
      s_02.str = &DAT_0028ec88;
      runtime_printstring(s_02);
      runtime_printhex(v_00);
      runtime_printnl();
      runtime_printunlock();
      s_03.len = addr_spill.a;
      s_03.str = &DAT_0029e73f;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_03);
    }
  }
  else {
    *puVar1 = addr_spill.a;
    puVar1[1] = (size_spill + addr_spill.a) - 1;
  }
  return;
}

