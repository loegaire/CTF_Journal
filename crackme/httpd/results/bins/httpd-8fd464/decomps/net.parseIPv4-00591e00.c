
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.parseIPv4(string s, net.IP ~r1) */

net_IP net_parseIPv4(string s)

{
  byte bVar1;
  bool bVar2;
  uint8 uVar3;
  uint8 uVar4;
  uint8 uVar5;
  uint8 uVar6;
  ulong uVar7;
  long in_RCX;
  ulong uVar8;
  long in_FS_OFFSET;
  net_IP nVar9;
  net_IP nVar10;
  net_IP nVar11;
  net_IP nVar12;
  net_IP nVar13;
  net_IP nVar14;
  string s_spill;
  long local_18;
  uint8 p [4];
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  p[0] = 0;
  p[1] = 0;
  p[2] = 0;
  p[3] = 0;
                    /* Unresolved local var: int i@[???] */
  uVar7 = 0;
  do {
    if (3 < (long)uVar7) {
      if (s_spill.len == 0) {
        uVar3 = p[0];
        uVar4 = p[1];
        uVar5 = p[2];
        uVar6 = p[3];
                    /* Unresolved local var: net.IP p@[???] */
        runtime_makeslicecopy
                  ((runtime__type *)(ulong)p[0],(ulong)p[3],(ulong)p[1],(void *)net_v4InV6Prefix.len
                  );
        *(uint8 *)(local_18 + 0xc) = uVar3;
        *(uint8 *)(local_18 + 0xd) = uVar4;
        *(uint8 *)(local_18 + 0xe) = uVar5;
        *(uint8 *)(local_18 + 0xf) = uVar6;
        nVar12.len._0_1_ = uVar6;
        nVar12.array = (uint8 *)local_18;
        nVar12.len._1_7_ = 0;
        nVar12.cap._0_1_ = uVar6;
        nVar12.cap._1_7_ = 0;
        return nVar12;
      }
      nVar11.len = s_spill.len;
      nVar11.array = (uint8 *)uVar7;
      nVar11.cap = in_RCX;
      return nVar11;
    }
    if (s_spill.len == 0) {
      nVar10.len = 0;
      nVar10.array = (uint8 *)uVar7;
      nVar10.cap = in_RCX;
      return nVar10;
    }
    if (0 < (long)uVar7) {
      if (*s_spill.str != 0x2e) {
        nVar9.len = s_spill.len;
        nVar9.array = (uint8 *)uVar7;
        nVar9.cap = in_RCX;
        return nVar9;
      }
      s_spill.len = s_spill.len - 1;
      s_spill.str = s_spill.str + (-s_spill.len >> 0x3f & 1);
    }
    in_RCX = 0;
    for (uVar8 = 0;
        (((long)uVar8 < s_spill.len && (bVar1 = s_spill.str[uVar8], 0x2f < bVar1)) && (bVar1 < 0x3a)
        ); uVar8 = uVar8 + 1) {
      in_RCX = (ulong)(byte)(bVar1 - 0x30) + in_RCX * 10;
      if (0xfffffe < in_RCX) {
        in_RCX = 0xffffff;
        bVar2 = false;
        goto LAB_00591eb4;
      }
    }
    if (uVar8 == 0) {
      uVar8 = 0;
      in_RCX = 0;
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
LAB_00591eb4:
    if ((!bVar2) || (0xff < in_RCX)) {
      nVar14.len = uVar8;
      nVar14.array = (uint8 *)uVar7;
      nVar14.cap = in_RCX;
      return nVar14;
    }
    if (1 < (long)uVar8) {
      if (s_spill.len == 0) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if (*s_spill.str == 0x30) {
        nVar13.len = uVar8;
        nVar13.array = (uint8 *)uVar7;
        nVar13.cap = in_RCX;
        return nVar13;
      }
    }
    if ((ulong)s_spill.len < uVar8) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
                    /* Unresolved local var: int n@[???]
                       Unresolved local var: int c@[???]
                       Unresolved local var: bool ok@[???] */
    p[uVar7] = (uint8)in_RCX;
    uVar7 = uVar7 + 1;
    s_spill.len = s_spill.len - uVar8;
    s_spill.str = s_spill.str + (-s_spill.len >> 0x3f & uVar8);
  } while( true );
}

