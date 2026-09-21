
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.notetsleep_internal(runtime.note * n, int64 ns, bool ~r2)
    */

bool runtime_notetsleep_internal(runtime_note *n,int64 ns)

{
  uint32 *addr;
  runtime_note *prVar1;
  long lVar2;
  long in_FS_OFFSET;
  runtime_note *n_spill;
  int64 ns_spill;
  runtime_note *local_38;
  
                    /* Unresolved local var: runtime.g * gp@[DW_OP_reg0(RAX)]
                       Unresolved local var: int64 deadline@[???] */
  addr = *(uint32 **)(in_FS_OFFSET + -8);
  if (ns_spill < 0) {
    if (*runtime_cgo_yield != (void *)0x0) {
      ns_spill = 10000000;
    }
    while ((int)n_spill->key == 0) {
      lVar2 = *(long *)(addr + 0xc);
      *(undefined1 *)(lVar2 + 0x11d) = 1;
      runtime_futexsleep(addr,(uint32)lVar2,ns_spill);
      if (*runtime_cgo_yield != (void *)0x0) {
        runtime_asmcgocall();
      }
      *(undefined1 *)(*(long *)(addr + 0xc) + 0x11d) = 0;
    }
    return SUB81(addr,0);
  }
  if ((int)n_spill->key == 0) {
    runtime_nanotime1();
    lVar2 = (long)local_38 + ns_spill;
    while( true ) {
      if ((*runtime_cgo_yield != (void *)0x0) && (10000000 < ns_spill)) {
        ns_spill = 10000000;
      }
      *(undefined1 *)(*(long *)(addr + 0xc) + 0x11d) = 1;
      local_38 = n_spill;
      runtime_futexsleep(addr,0,ns_spill);
      prVar1 = *runtime_cgo_yield;
      if (prVar1 != (runtime_note *)0x0) {
        runtime_asmcgocall();
        local_38 = prVar1;
      }
      *(undefined1 *)(*(long *)(addr + 0xc) + 0x11d) = 0;
      if (((int)n_spill->key != 0) || (runtime_nanotime1(), lVar2 <= (long)local_38)) break;
                    /* Unresolved local var: int64 now@[???] */
      ns_spill = lVar2 - (long)local_38;
    }
    return SUB41((int)n_spill->key,0);
  }
  return SUB81(addr,0);
}

