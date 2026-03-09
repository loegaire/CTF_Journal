
/* WARNING: Unknown calling convention */

void net_goDebugNetDNS_func1(string s)

{
  byte bVar1;
  undefined8 *puVar2;
  long in_RDX;
  long extraout_RDX;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  string s_spill;
  
                    /* Unresolved local var: int * &debugLevel@[???]
                       Unresolved local var: string * &dnsMode@[DW_OP_reg5(RDI)] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  puVar2 = *(undefined8 **)(in_RDX + 0x10);
  if (s_spill.len == 0) {
    return;
  }
  if ((*s_spill.str < 0x30) || (0x39 < *s_spill.str)) {
    puVar2[1] = s_spill.len;
    if (runtime_writeBarrier._0_4_ == 0) {
      *puVar2 = s_spill.str;
    }
    else {
      runtime_gcWriteBarrierDX();
    }
  }
  else {
    lVar3 = 0;
    for (lVar4 = 0;
        ((lVar4 < s_spill.len && (bVar1 = s_spill.str[lVar4], 0x2f < bVar1)) && (bVar1 < 0x3a));
        lVar4 = lVar4 + 1) {
      lVar3 = (ulong)(byte)(bVar1 - 0x30) + lVar3 * 10;
      if (0xfffffe < lVar3) {
        lVar3 = 0xffffff;
        goto LAB_005809bb;
      }
    }
    if (lVar4 == 0) {
      lVar3 = 0;
    }
LAB_005809bb:
    **(long **)(in_RDX + 8) = lVar3;
  }
  return;
}

