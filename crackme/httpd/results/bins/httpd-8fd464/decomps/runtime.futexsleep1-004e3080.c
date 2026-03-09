
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void runtime_futexsleep1(uint32 *addr,uint32 val,int64 ns)

{
  undefined4 unaff_0000001c;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  uint32 *addr_spill;
  uint32 val_spill;
  int64 ns_spill;
  int local_30;
  
  s.len = CONCAT44(unaff_0000001c,val);
                    /* Unresolved local var: runtime.umtx_time * utp@[???]
                       Unresolved local var: int32 ret@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_sys_umtx_op();
  if (((local_30 < 0) && (local_30 != -4)) && (local_30 != -0x3c)) {
    runtime_printlock();
    s.str = &DAT_00299190;
    runtime_printstring(s);
    runtime_printpointer(addr_spill);
    s_00.len = s.len;
    s_00.str = &DAT_00288926;
    runtime_printstring(s_00);
    runtime_printuint((ulong)val_spill);
    s_01.len = s.len;
    s_01.str = &DAT_00288908;
    runtime_printstring(s_01);
    runtime_printint((long)local_30);
    runtime_printnl();
    runtime_printunlock();
    _DAT_00001005 = 0x1005;
    return;
  }
  return;
}

