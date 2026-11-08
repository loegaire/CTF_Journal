
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void crypto.Hash.String(crypto.Hash h, string ~r0) */

string crypto_Hash_String(crypto_Hash h)

{
  int unaff_RBX;
  int in_RSI;
  uint8 *in_RDI;
  long in_FS_OFFSET;
  string sVar1;
  string sVar2;
  string sVar3;
  string sVar4;
  string sVar5;
  string sVar6;
  string sVar7;
  string sVar8;
  string sVar9;
  string sVar10;
  string sVar11;
  string sVar12;
  string sVar13;
  string sVar14;
  string sVar15;
  string sVar16;
  string sVar17;
  string sVar18;
  string sVar19;
  string sVar20;
  string a1;
  string a0;
  crypto_Hash h_spill;
  runtime_tmpBuf *local_30;
  int local_28;
  uint8 *local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (h_spill < 10) {
    if (4 < h_spill) {
      if (h_spill < 7) {
        if (h_spill == 5) {
          sVar5.len = unaff_RBX;
          sVar5.str = &DAT_0028a63e;
          return sVar5;
        }
        sVar6.len = unaff_RBX;
        sVar6.str = &DAT_0028a645;
        return sVar6;
      }
      if (h_spill == 7) {
        sVar9.len = unaff_RBX;
        sVar9.str = &DAT_0028a64c;
        return sVar9;
      }
      if (h_spill == 8) {
        sVar7.len = unaff_RBX;
        sVar7.str = &DAT_0028baea;
        return sVar7;
      }
      sVar8.len = unaff_RBX;
      sVar8.str = &DAT_0028f002;
      return sVar8;
    }
    if (2 < h_spill) {
      if (h_spill == 3) {
        sVar3.len = unaff_RBX;
        sVar3.str = &DAT_00288b0b;
        return sVar3;
      }
      sVar4.len = unaff_RBX;
      sVar4.str = &DAT_0028a637;
      return sVar4;
    }
    if (h_spill == 1) {
      sVar2.len = unaff_RBX;
      sVar2.str = &DAT_00287939;
      return sVar2;
    }
    if (h_spill == 2) {
      sVar1.len = unaff_RBX;
      sVar1.str = &DAT_0028793c;
      return sVar1;
    }
  }
  else {
    if (h_spill < 0xf) {
      if (h_spill < 0xc) {
        if (h_spill == 10) {
          sVar10.len = unaff_RBX;
          sVar10.str = &DAT_0028bbf2;
          return sVar10;
        }
        sVar11.len = unaff_RBX;
        sVar11.str = &DAT_0028bbfa;
        return sVar11;
      }
      if (h_spill == 0xc) {
        sVar14.len = unaff_RBX;
        sVar14.str = &DAT_0028bc02;
        return sVar14;
      }
      if (h_spill == 0xd) {
        sVar12.len = unaff_RBX;
        sVar12.str = &DAT_0028bc0a;
        return sVar12;
      }
      sVar13.len = unaff_RBX;
      sVar13.str = &DAT_00290d52;
      return sVar13;
    }
    if (h_spill < 0x11) {
      if (h_spill == 0xf) {
        sVar15.len = unaff_RBX;
        sVar15.str = &DAT_00290d5d;
        return sVar15;
      }
      sVar16.len = unaff_RBX;
      sVar16.str = &DAT_00290a66;
      return sVar16;
    }
    if (h_spill == 0x11) {
      sVar17.len = unaff_RBX;
      sVar17.str = &DAT_00290a45;
      return sVar17;
    }
    if (h_spill == 0x12) {
      sVar20.len = unaff_RBX;
      sVar20.str = &DAT_00290a50;
      return sVar20;
    }
    if (h_spill == 0x13) {
      sVar19.len = unaff_RBX;
      sVar19.str = &DAT_00290a5b;
      return sVar19;
    }
  }
  sVar17 = strconv_FormatInt(h_spill,unaff_RBX);
  a0.str = (uint8 *)sVar17.len;
  a1.len = in_RSI;
  a1.str = in_RDI;
  a0.len = local_28;
  sVar17 = runtime_concatstring2(local_30,a0,a1);
  sVar18.len = sVar17.len;
  sVar18.str = local_18;
  return sVar18;
}

