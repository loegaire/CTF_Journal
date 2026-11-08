
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.copyIP(net.IP x, net.IP ~r1) */

net_IP net_copyIP(net_IP x)

{
  byte bVar1;
  uint8 uVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  int iVar6;
  long in_FS_OFFSET;
  net_IP nVar7;
  net_IP nVar8;
  net_IP x_spill;
  long local_20;
  
  iVar6 = x.cap;
  nVar8.len = (runtime__type *)x.len;
                    /* Unresolved local var: net.IP y@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (x_spill.len < 0x10) {
    if (x_spill.len == 4) {
      bVar1 = *x_spill.array;
      uVar2 = x_spill.array[1];
      bVar3 = x_spill.array[2];
      nVar8.len = (runtime__type *)(ulong)bVar3;
      bVar4 = x_spill.array[3];
                    /* Unresolved local var: net.IP p@[???] */
      runtime_makeslicecopy
                ((runtime__type *)(ulong)bVar4,(int)nVar8.len,(ulong)bVar1,
                 (void *)net_v4InV6Prefix.len);
      *(byte *)(local_20 + 0xc) = bVar1;
      *(uint8 *)(local_20 + 0xd) = uVar2;
      *(byte *)(local_20 + 0xe) = bVar3;
      *(byte *)(local_20 + 0xf) = bVar4;
      uVar5 = 0x10;
    }
    else {
      uVar5 = 0;
      local_20 = 0;
    }
    nVar7.len = (int)nVar8.len;
    nVar7.array = (uint8 *)uVar5;
    nVar7.cap = local_20;
    return nVar7;
  }
  runtime_mallocgc(x_spill.len,nVar8.len,SUB81(iVar6,0));
  iVar6 = x_spill.len;
  runtime_memmove();
  nVar8.array = (uint8 *)x_spill.len;
  nVar8.cap = iVar6;
  return nVar8;
}

