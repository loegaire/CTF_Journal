
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.checkResponse(uint16 reqID,
   vendor/golang.org/x/net/dns/dnsmessage.Question reqQues,
   vendor/golang.org/x/net/dns/dnsmessage.Header respHdr,
   vendor/golang.org/x/net/dns/dnsmessage.Question respQues, bool ~r4) */

bool net_checkResponse(uint16 reqID,vendor_golang_org_x_net_dns_dnsmessage_Question reqQues,
                      vendor_golang_org_x_net_dns_dnsmessage_Header respHdr,
                      vendor_golang_org_x_net_dns_dnsmessage_Question respQues)

{
  ulong uVar1;
  ulong extraout_RAX;
  char cVar2;
  char cVar3;
  long in_FS_OFFSET;
  short in_stack_0000010c;
  short in_stack_0000010e;
  uint16 reqID_spill;
  vendor_golang_org_x_net_dns_dnsmessage_Class in_stack_0000021a;
  short in_stack_0000021c;
  vendor_golang_org_x_net_dns_dnsmessage_Header respHdr_spill;
  char local_208 [256];
  char local_108 [256];
  
  uVar1 = (ulong)reqID;
  while (local_208 + 0x70 <= *(char **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    uVar1 = extraout_RAX;
  }
  if (respQues.Name.Data[0] == 0) {
    return SUB81(uVar1,0);
  }
  if (in_stack_0000010e != reqQues.Name.Data._0_2_) {
    return SUB81(uVar1,0);
  }
  if ((in_stack_0000021a == reqQues.Class) && (in_stack_0000021c == in_stack_0000010c)) {
    FUN_0051a460(local_108,reqQues.Name.Data + 2);
    uVar1 = FUN_0051a460(local_208,respQues.Name.Data + 10);
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: uint8 a@[???]
                       Unresolved local var: uint8 b@[???] */
    if (local_208[0xff] == local_108[0xff]) {
      uVar1 = 0;
      while( true ) {
        if ((long)(ulong)(byte)local_108[0xff] <= (long)uVar1) {
          return SUB81(uVar1,0);
        }
        if (0xfe < uVar1) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        cVar2 = local_108[uVar1];
        cVar3 = local_208[uVar1];
        if ((byte)(cVar2 + 0xbfU) < 0x1a) {
          cVar2 = cVar2 + ' ';
        }
        if ((byte)(cVar3 + 0xbfU) < 0x1a) {
          cVar3 = cVar3 + ' ';
        }
        if (cVar2 != cVar3) break;
        uVar1 = uVar1 + 1;
      }
    }
  }
  return SUB81(uVar1,0);
}

