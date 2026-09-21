
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*IPNet).Contains(net.IPNet * n, net.IP ip, bool ~r1) */

bool net___IPNet__Contains(net_IPNet *n,net_IP ip)

{
  ulong uVar1;
  uint8 *puVar2;
  long lVar3;
  long in_FS_OFFSET;
  net_IPNet *n_spill;
  net_IP ip_spill;
  long local_38;
  long local_30;
  long local_20;
  ulong local_18;
  
                    /* Unresolved local var: int l@[???]
                       Unresolved local var: net.IP nn@[???]
                       Unresolved local var: net.IPMask m@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  net_networkNumberAndMask(n_spill);
                    /* Unresolved local var: int i@[???] */
  puVar2 = ip_spill.array;
  lVar3 = ip_spill.len;
  if (ip_spill.len != 4) {
    if (ip_spill.len == 0x10) {
                    /* Unresolved local var: int i@[???] */
      for (lVar3 = 0; lVar3 < 10; lVar3 = lVar3 + 1) {
        if (ip_spill.array[lVar3] != 0) goto LAB_0059196c;
      }
      if ((ip_spill.array[10] == 0xff) && (ip_spill.array[0xb] == 0xff)) {
        puVar2 = ip_spill.array + 0xc;
        lVar3 = 4;
        goto LAB_00591971;
      }
    }
LAB_0059196c:
    puVar2 = (uint8 *)0x0;
    lVar3 = 0;
  }
LAB_00591971:
  if (puVar2 == (uint8 *)0x0) {
    puVar2 = ip_spill.array;
    lVar3 = ip_spill.len;
  }
  if (lVar3 != local_30) {
    return SUB81(local_30,0);
  }
  uVar1 = 0;
  while( true ) {
    if (lVar3 <= (long)uVar1) {
      return SUB81(uVar1,0);
    }
    if (local_18 <= uVar1) break;
    if ((puVar2[uVar1] & *(byte *)(local_20 + uVar1)) !=
        (*(byte *)(uVar1 + local_38) & *(byte *)(local_20 + uVar1))) {
      return SUB81(uVar1,0);
    }
    uVar1 = uVar1 + 1;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

