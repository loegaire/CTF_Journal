
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.IP.Mask(net.IP ip, net.IPMask mask, net.IP ~r1) */

net_IP net_IP_Mask(net_IP ip,net_IPMask mask)

{
  char cVar1;
  long lVar2;
  long in_FS_OFFSET;
  __uint8 b;
  net_IP nVar3;
  net_IP nVar4;
  net_IP ip_spill;
  net_IPMask mask_spill;
  char local_30;
  undefined7 uStack_2f;
  
  b.len = ip.len;
                    /* Unresolved local var: int n@[???]
                       Unresolved local var: net.IP out@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (mask_spill.len == 0x10) {
    if (ip_spill.len == 4) {
      b.array = mask_spill.array;
      b.cap = mask_spill.cap;
      net_allFF(b);
      cVar1 = local_30;
    }
    else {
      cVar1 = '\0';
    }
  }
  else {
    cVar1 = '\0';
  }
  if (cVar1 != '\0') {
    if ((ulong)mask_spill.len < 0xc) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    mask_spill.array = mask_spill.array + (-(mask_spill.cap + -0xc) >> 0x3f & 0xc);
    mask_spill.len = mask_spill.len + -0xc;
  }
  if (mask_spill.len == 4) {
    if (ip_spill.len == 0x10) {
      if (net_v4InV6Prefix.len == 0xc) {
        runtime_memequal();
        cVar1 = local_30;
                    /* Unresolved local var: int i@[???] */
      }
      else {
        cVar1 = '\0';
      }
    }
    else {
      cVar1 = '\0';
    }
  }
  else {
    cVar1 = '\0';
  }
  if (cVar1 != '\0') {
    if ((ulong)ip_spill.len < 0xc) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    ip_spill.array = ip_spill.array + (-(ip_spill.cap + -0xc) >> 0x3f & 0xc);
    ip_spill.len = ip_spill.len + -0xc;
  }
  if (ip_spill.len != mask_spill.len) {
    nVar3.len = (int)mask_spill.array;
    nVar3.array = ip_spill.array;
    nVar3.cap = ip_spill.len;
    return nVar3;
  }
  runtime_makeslice((runtime__type *)&DAT_00225720,(int)mask_spill.array,ip_spill.len);
  for (lVar2 = 0; lVar2 < ip_spill.len; lVar2 = lVar2 + 1) {
    *(uint8 *)(CONCAT71(uStack_2f,local_30) + lVar2) =
         ip_spill.array[lVar2] & mask_spill.array[lVar2];
  }
  nVar4.len = (int)ip_spill.array;
  nVar4.array = (uint8 *)CONCAT71(uStack_2f,local_30);
  nVar4.cap = ip_spill.len;
  return nVar4;
}

