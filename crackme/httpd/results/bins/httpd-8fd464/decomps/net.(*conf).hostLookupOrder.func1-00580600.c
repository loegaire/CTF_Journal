
/* WARNING: Unknown calling convention */

void net___conf__hostLookupOrder_func1(string *_hostname,net_hostLookupOrder *_ret)

{
  runtime_maptype *t;
  uint8 *puVar1;
  int in_RSI;
  uint8 *in_RDI;
  uint8 *in_R8;
  int in_R9;
  long in_FS_OFFSET;
  string sVar3;
  string s;
  string s_00;
  string s_01;
  string s_02;
  multireturn_void___bool_ mVar4;
  string a0;
  string a2;
  string *_hostname_spill;
  net_hostLookupOrder *_ret_spill;
  long local_70;
  char local_68;
  uint8 *local_48;
  int iVar2;
  
                    /* Unresolved local var: uint8 * ~R0.ptr@[???]
                       Unresolved local var: int ~R0.len@[???] */
  while (&stack0xfffffffffffffff8 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  t = (runtime_maptype *)*_ret_spill;
                    /* Unresolved local var: string s@[???] */
  mVar4 = runtime_mapaccess2_fast64(t,(runtime_hmap *)_ret,(uint64)net_lookupOrderName);
  iVar2 = CONCAT71((int7)((ulong)_ret >> 8),mVar4.~r4);
  puVar1 = *(uint8 **)(local_70 + 8);
  if (local_68 == '\0') {
    sVar3 = internal_itoa_Itoa((int)t);
    a0.str = (uint8 *)sVar3.len;
    sVar3.len = in_RSI;
    sVar3.str = in_RDI;
    a0.len = (int)t;
    a2.len = in_R9;
    a2.str = in_R8;
    sVar3 = runtime_concatstring3((runtime_tmpBuf *)&DAT_002877ab,a0,sVar3,a2);
    iVar2 = sVar3.len;
    puVar1 = local_48;
  }
  runtime_printlock();
  s.len = iVar2;
  s.str = (uint8 *)0x2a2770;
  runtime_printstring(s);
  s_00.len = iVar2;
  s_00.str = (uint8 *)_hostname_spill->len;
  runtime_printstring(s_00);
  s_01.len = iVar2;
  s_01.str = &DAT_00287dd9;
  runtime_printstring(s_01);
  s_02.len = iVar2;
  s_02.str = puVar1;
  runtime_printstring(s_02);
  runtime_printnl();
  runtime_printunlock();
  return;
}

