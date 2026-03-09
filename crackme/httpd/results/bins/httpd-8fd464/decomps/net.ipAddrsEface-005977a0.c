
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.ipAddrsEface([]net.IPAddr addrs, []interface_{} ~r1) */

__interface___ net_ipAddrsEface(__net_IPAddr addrs)

{
  long lVar1;
  int iVar2;
  void *elem;
  long in_FS_OFFSET;
  __interface___ _Var3;
  __net_IPAddr addrs_spill;
  long local_78;
  int iStack_10;
  
  iVar2 = addrs.cap;
                    /* Unresolved local var: []interface_{} s@[???] */
  while (&iStack_10 <= *(int **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_makeslice((runtime__type *)addrs_spill.len,addrs.len,iVar2);
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: net.IPAddr v@[???] */
  lVar1 = local_78;
  iVar2 = addrs.len;
  if (0 < addrs_spill.len) {
    elem = (void *)0x0;
    while( true ) {
      iStack_10 = ((addrs_spill.array)->Zone).len;
      runtime_convT2E((runtime__type *)&DAT_0024c960,elem);
      *(int *)(local_78 + (long)elem * 0x10) = addrs_spill.len;
      if (runtime_writeBarrier._0_4_ == 0) {
        *(long *)(local_78 + 8 + (long)elem * 0x10) = local_78;
        lVar1 = local_78;
      }
      else {
        lVar1 = local_78;
        runtime_gcWriteBarrierDX();
      }
      elem = (void *)((long)elem + 1);
      iVar2 = addrs_spill.len;
      if (addrs_spill.len <= (long)elem) break;
      addrs_spill.array = addrs_spill.array + 1;
    }
  }
  _Var3.len = iVar2;
  _Var3.array = (interface___ *)lVar1;
  _Var3.cap = addrs_spill.len;
  return _Var3;
}

