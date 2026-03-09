
/* WARNING: Unknown calling convention */

void runtime_sysMap(void *v,uintptr n,runtime_sysMemStat *sysStat)

{
  long in_FS_OFFSET;
  string s;
  string s_00;
  void *v_spill;
  uintptr n_spill;
  runtime_sysMemStat *sysStat_spill;
  void *local_18;
  long local_10;
  
                    /* Unresolved local var: void * p@[???]
                       Unresolved local var: int err@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime___sysMemStat__add((runtime_sysMemStat *)n_spill,n);
  runtime_mmap();
  if (local_10 != 0xc) {
    if ((v_spill == local_18) && (local_10 == 0)) {
      return;
    }
    s.len = n;
    s.str = &DAT_002a8ecc;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  s_00.len = n;
  s_00.str = &DAT_0029d46b;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_00);
}

