
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.parseIPv6Zone(string s, net.IP ~r1, string ~r2) */

multireturn_net_IP_string_ net_parseIPv6Zone(string s)

{
  ulong uVar1;
  uint8 *puVar2;
  long lVar3;
  ulong uVar4;
  uint8 *in_RDI;
  long in_FS_OFFSET;
  net_IP nVar5;
  string s_00;
  multireturn_net_IP_string_ mVar6;
  int in_stack_00000008;
  int i;
  int local_28;
  
                    /* Unresolved local var: string zone@[???] */
  while (uVar4 = i, &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  do {
    uVar1 = uVar4;
    uVar4 = uVar1 - 1;
    if ((long)uVar4 < 0) goto LAB_00592116;
    in_RDI = (uint8 *)(ulong)*(byte *)(in_stack_00000008 + uVar4);
  } while (*(byte *)(in_stack_00000008 + uVar4) != 0x25);
  if ((long)uVar4 < 1) {
LAB_00592116:
    lVar3 = 0;
    puVar2 = (uint8 *)0x0;
  }
  else {
    if ((ulong)i < uVar4) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAlen();
    }
    if ((ulong)i < uVar1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    lVar3 = (i - uVar4) + -1;
    puVar2 = (uint8 *)((uVar1 & -lVar3 >> 0x3f) + in_stack_00000008);
    i = uVar4;
  }
  s_00.len = i;
  s_00.str = puVar2;
  nVar5 = net_parseIPv6(s_00);
  mVar6.~r1.len = nVar5.len;
  mVar6.~r1.array = (uint8 *)lVar3;
  mVar6.~r1.cap = local_28;
  mVar6.~r2.len = in_stack_00000008;
  mVar6.~r2.str = in_RDI;
  return mVar6;
}

