
/* WARNING: Unknown calling convention */

void runtime_tracebackothers_func1(runtime_g *gp)

{
  int iVar1;
  runtime_g *gp_00;
  uint uVar2;
  long in_RDX;
  long extraout_RDX;
  uint in_RSI;
  runtime_g *in_RDI;
  long in_FS_OFFSET;
  string s;
  runtime_g *gp_spill;
  char local_28;
  runtime_m *lr;
  
                    /* Unresolved local var: runtime.g * curgp@[DW_OP_reg0(RAX)] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  iVar1 = *(int *)(in_RDX + 0x18);
  if (*(runtime_g **)(in_RDX + 8) == gp_spill) {
    gp_00 = (runtime_g *)0x1;
  }
  else if (gp_spill == *(runtime_g **)(in_RDX + 0x10)) {
    gp_00 = (runtime_g *)0x1;
  }
  else {
    gp_00 = (runtime_g *)
            (ulong)CONCAT31((int3)(gp_spill->atomicstatus >> 8),gp_spill->atomicstatus == 6);
  }
  if ((char)gp_00 == '\0') {
    runtime_isSystemGoroutine(gp_00,SUB81(gp_spill,0));
    if ((local_28 == '\0') || (1 < iVar1)) {
      runtime_printlock();
      runtime_printnl();
      runtime_printunlock();
      runtime_goroutineheader(gp_spill);
      lr = gp_spill->m;
      if ((*(runtime_m **)(*(long *)(in_FS_OFFSET + -8) + 0x30) == lr) ||
         (uVar2 = gp_spill->atomicstatus & 0xffffefff, lr = (runtime_m *)(ulong)uVar2, uVar2 != 2))
      {
        runtime_traceback1((uintptr)gp_spill,(uintptr)gp_spill,(uintptr)lr,in_RDI,in_RSI);
      }
      else {
        runtime_printlock();
        s.len = (int)gp_spill;
        s.str = &DAT_002aa056;
        runtime_printstring(s);
        runtime_printunlock();
        runtime_printcreatedby(gp_spill);
      }
      return;
    }
  }
  return;
}

