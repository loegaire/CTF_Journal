
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.isIPv4(net.Addr addr, bool ~r1) */

bool net_isIPv4(net_Addr addr)

{
  uint uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *in_stack_00000008;
  net_TCPAddr *addr_1;
  
  puVar2 = in_stack_00000008;
  if (in_stack_00000008 != (undefined1 *)0x0) {
    uVar1 = *(uint *)(in_stack_00000008 + 0x10);
    if (uVar1 == 0x103a77be) {
      if (in_stack_00000008 == go_itab__net_TCPAddr_net_Addr) {
        lVar3 = (addr_1->IP).len;
        if ((lVar3 != 4) && (lVar3 == 0x10)) {
                    /* Unresolved local var: int i@[???] */
          for (lVar3 = 0; (lVar3 < 10 && ((addr_1->IP).array[lVar3] == 0)); lVar3 = lVar3 + 1) {
          }
        }
        return SUB81(lVar3,0);
      }
    }
    else if (uVar1 == 0xd7d15deb) {
      if (in_stack_00000008 == go_itab__net_UDPAddr_net_Addr) {
        lVar3 = (addr_1->IP).len;
        if ((lVar3 != 4) && (lVar3 == 0x10)) {
                    /* Unresolved local var: int i@[???] */
          for (lVar3 = 0; (lVar3 < 10 && ((addr_1->IP).array[lVar3] == 0)); lVar3 = lVar3 + 1) {
          }
        }
        return SUB81(lVar3,0);
      }
    }
    else {
      puVar2 = (undefined1 *)(ulong)uVar1;
      if ((uVar1 == 0xff2d2c4c) &&
         (puVar2 = in_stack_00000008, in_stack_00000008 == go_itab__net_IPAddr_net_Addr)) {
        lVar3 = (addr_1->IP).len;
        if ((lVar3 != 4) && (lVar3 == 0x10)) {
                    /* Unresolved local var: int i@[???] */
          for (lVar3 = 0; (lVar3 < 10 && ((addr_1->IP).array[lVar3] == 0)); lVar3 = lVar3 + 1) {
          }
        }
        return SUB81(lVar3,0);
      }
    }
  }
  return SUB81(puVar2,0);
}

