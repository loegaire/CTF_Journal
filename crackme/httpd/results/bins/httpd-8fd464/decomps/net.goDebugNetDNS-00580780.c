
/* WARNING: Removing unreachable block (ram,0x005808ea) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.goDebugNetDNS(string dnsMode, int debugLevel) */

multireturn_string_int__conflict net_goDebugNetDNS(void)

{
  int iVar1;
  int unaff_RBX;
  undefined8 in_RDI;
  long in_FS_OFFSET;
  multireturn_string_int__conflict mVar2;
  multireturn_string_int__conflict mVar3;
  string sVar4;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  ulong local_40;
  code *local_20;
  undefined1 *puStack_18;
  undefined1 *local_10;
  
                    /* Unresolved local var: func(string) * * parsePart@[???]
                       Unresolved local var: string goDebug@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uStack0000000000000008 = 0;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  sVar4.len = unaff_RBX;
  sVar4.str = &DAT_00289d74;
  sVar4 = net_goDebugString(sVar4);
  mVar3.dnsMode.len = sVar4.len;
                    /* Unresolved local var: int i@[???] */
  local_20 = net_goDebugNetDNS_func1;
  puStack_18 = (undefined1 *)&stack0x00000018;
  local_10 = (undefined1 *)&stack0x00000008;
  internal_bytealg_IndexByteString();
  if (local_40 != 0xffffffffffffffff) {
    (*local_20)();
    if (local_40 < local_40 + 1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    iVar1 = 0;
    mVar2.dnsMode.str = (uint8 *)(*local_20)(in_RDI,local_20,&local_20);
    mVar2.dnsMode.len = -1;
    mVar2.debugLevel = iVar1;
    return mVar2;
  }
  mVar3.dnsMode.str = (uint8 *)(*local_20)();
  mVar3.debugLevel = local_40;
  return mVar3;
}

