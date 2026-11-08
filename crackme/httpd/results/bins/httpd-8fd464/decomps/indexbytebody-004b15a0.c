
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void indexbytebody(void)

{
  undefined1 (*pauVar1) [32];
  char *pcVar2;
  uint uVar3;
  ushort uVar4;
  char in_AL;
  uint uVar5;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  undefined1 (*in_RSI) [32];
  undefined1 (*pauVar6) [32];
  ulong *in_R8;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  
  if (CONCAT44(unaff_0000001c,unaff_EBX) < 0x10) {
    if (CONCAT44(unaff_0000001c,unaff_EBX) != 0) {
      if (((ulong)(*in_RSI + 0x10) & 0xff0) == 0) {
        pcVar2 = in_RSI[-1] + CONCAT44(unaff_0000001c,unaff_EBX) + 0x10;
        auVar10[0] = -(*pcVar2 == in_AL);
        auVar10[1] = -(pcVar2[1] == in_AL);
        auVar10[2] = -(pcVar2[2] == in_AL);
        auVar10[3] = -(pcVar2[3] == in_AL);
        auVar10[4] = -(pcVar2[4] == in_AL);
        auVar10[5] = -(pcVar2[5] == in_AL);
        auVar10[6] = -(pcVar2[6] == in_AL);
        auVar10[7] = -(pcVar2[7] == in_AL);
        auVar10[8] = -(pcVar2[8] == in_AL);
        auVar10[9] = -(pcVar2[9] == in_AL);
        auVar10[10] = -(pcVar2[10] == in_AL);
        auVar10[0xb] = -(pcVar2[0xb] == in_AL);
        auVar10[0xc] = -(pcVar2[0xc] == in_AL);
        auVar10[0xd] = -(pcVar2[0xd] == in_AL);
        auVar10[0xe] = -(pcVar2[0xe] == in_AL);
        auVar10[0xf] = -(pcVar2[0xf] == in_AL);
        uVar5 = ((uint)(ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
                               (ushort)(auVar10[0xf] >> 7) << 0xf) << ((byte)unaff_EBX & 0x1f)) >>
                0x10;
        uVar3 = 0;
        if (uVar5 != 0) {
          for (; (uVar5 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        if (uVar5 != 0) {
          *in_R8 = (ulong)uVar3;
          return;
        }
      }
      else {
        auVar9[0] = -((*in_RSI)[0] == in_AL);
        auVar9[1] = -((*in_RSI)[1] == in_AL);
        auVar9[2] = -((*in_RSI)[2] == in_AL);
        auVar9[3] = -((*in_RSI)[3] == in_AL);
        auVar9[4] = -((*in_RSI)[4] == in_AL);
        auVar9[5] = -((*in_RSI)[5] == in_AL);
        auVar9[6] = -((*in_RSI)[6] == in_AL);
        auVar9[7] = -((*in_RSI)[7] == in_AL);
        auVar9[8] = -((*in_RSI)[8] == in_AL);
        auVar9[9] = -((*in_RSI)[9] == in_AL);
        auVar9[10] = -((*in_RSI)[10] == in_AL);
        auVar9[0xb] = -((*in_RSI)[0xb] == in_AL);
        auVar9[0xc] = -((*in_RSI)[0xc] == in_AL);
        auVar9[0xd] = -((*in_RSI)[0xd] == in_AL);
        auVar9[0xe] = -((*in_RSI)[0xe] == in_AL);
        auVar9[0xf] = -((*in_RSI)[0xf] == in_AL);
        uVar4 = (ushort)(SUB161(auVar9 >> 7,0) & 1) | (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe | (ushort)(auVar9[0xf] >> 7) << 0xf;
        uVar3 = 0;
        if (uVar4 != 0) {
          for (; (uVar4 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        if ((uVar4 != 0) && (uVar3 < unaff_EBX)) {
          *in_R8 = (ulong)uVar3;
          return;
        }
      }
    }
  }
  else {
    if ((0x20 < CONCAT44(unaff_0000001c,unaff_EBX)) && (internal_cpu_X86.HasAVX2)) {
      pauVar1 = (undefined1 (*) [32])(in_RSI[-1] + CONCAT44(unaff_0000001c,unaff_EBX));
      auVar11[1] = in_AL;
      auVar11[0] = in_AL;
      auVar11[2] = in_AL;
      auVar11[3] = in_AL;
      auVar11[4] = in_AL;
      auVar11[5] = in_AL;
      auVar11[6] = in_AL;
      auVar11[7] = in_AL;
      auVar11[8] = in_AL;
      auVar11[9] = in_AL;
      auVar11[10] = in_AL;
      auVar11[0xb] = in_AL;
      auVar11[0xc] = in_AL;
      auVar11[0xd] = in_AL;
      auVar11[0xe] = in_AL;
      auVar11[0xf] = in_AL;
      auVar11[0x10] = in_AL;
      auVar11[0x11] = in_AL;
      auVar11[0x12] = in_AL;
      auVar11[0x13] = in_AL;
      auVar11[0x14] = in_AL;
      auVar11[0x15] = in_AL;
      auVar11[0x16] = in_AL;
      auVar11[0x17] = in_AL;
      auVar11[0x18] = in_AL;
      auVar11[0x19] = in_AL;
      auVar11[0x1a] = in_AL;
      auVar11[0x1b] = in_AL;
      auVar11[0x1c] = in_AL;
      auVar11[0x1d] = in_AL;
      auVar11[0x1e] = in_AL;
      auVar11[0x1f] = in_AL;
      pauVar6 = in_RSI;
      do {
        auVar12 = vpcmpeqb_avx2(*pauVar6,auVar11);
        if (auVar12 != (undefined1  [32])0x0) goto LAB_004b16a3;
        pauVar6 = pauVar6 + 1;
      } while ((long)pauVar6 < (long)pauVar1);
      auVar12 = vpcmpeqb_avx2(*pauVar1,auVar11);
      pauVar6 = pauVar1;
      if (auVar12 == (undefined1  [32])0x0) {
        *in_R8 = 0xffffffffffffffff;
        return;
      }
LAB_004b16a3:
      uVar5 = (uint)(SUB321(auVar12 >> 7,0) & 1) | (uint)(SUB321(auVar12 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar12 >> 0x17,0) & 1) << 2 |
              (uint)(SUB321(auVar12 >> 0x1f,0) & 1) << 3 |
              (uint)(SUB321(auVar12 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar12 >> 0x2f,0) & 1) << 5 |
              (uint)(SUB321(auVar12 >> 0x37,0) & 1) << 6 |
              (uint)(SUB321(auVar12 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar12 >> 0x47,0) & 1) << 8 |
              (uint)(SUB321(auVar12 >> 0x4f,0) & 1) << 9 |
              (uint)(SUB321(auVar12 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar12 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar12 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar12 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar12 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar12 >> 0x7f,0) << 0xf
              | (uint)(SUB321(auVar12 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar12 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar12 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar12 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar12 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar12 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar12 >> 0xb7,0) & 1) << 0x16 |
              (uint)SUB321(auVar12 >> 0xbf,0) << 0x17 | (uint)(SUB321(auVar12 >> 199,0) & 1) << 0x18
              | (uint)(SUB321(auVar12 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar12 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar12 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar12 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar12 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar12 >> 0xf7,0) & 1) << 0x1e |
              (uint)(byte)(auVar12[0x1f] >> 7) << 0x1f;
      uVar3 = 0;
      if (uVar5 != 0) {
        for (; (uVar5 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
        }
      }
      *in_R8 = (long)pauVar6 + ((ulong)uVar3 - (long)in_RSI);
      return;
    }
    pauVar1 = (undefined1 (*) [32])(in_RSI[-1] + CONCAT44(unaff_0000001c,unaff_EBX) + 0x10);
    for (pauVar6 = in_RSI; pauVar6 < pauVar1; pauVar6 = (undefined1 (*) [32])(*pauVar6 + 0x10)) {
      auVar7[0] = -((*pauVar6)[0] == in_AL);
      auVar7[1] = -((*pauVar6)[1] == in_AL);
      auVar7[2] = -((*pauVar6)[2] == in_AL);
      auVar7[3] = -((*pauVar6)[3] == in_AL);
      auVar7[4] = -((*pauVar6)[4] == in_AL);
      auVar7[5] = -((*pauVar6)[5] == in_AL);
      auVar7[6] = -((*pauVar6)[6] == in_AL);
      auVar7[7] = -((*pauVar6)[7] == in_AL);
      auVar7[8] = -((*pauVar6)[8] == in_AL);
      auVar7[9] = -((*pauVar6)[9] == in_AL);
      auVar7[10] = -((*pauVar6)[10] == in_AL);
      auVar7[0xb] = -((*pauVar6)[0xb] == in_AL);
      auVar7[0xc] = -((*pauVar6)[0xc] == in_AL);
      auVar7[0xd] = -((*pauVar6)[0xd] == in_AL);
      auVar7[0xe] = -((*pauVar6)[0xe] == in_AL);
      auVar7[0xf] = -((*pauVar6)[0xf] == in_AL);
      uVar4 = (ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe | (ushort)(auVar7[0xf] >> 7) << 0xf;
      uVar3 = 0;
      if (uVar4 != 0) {
        for (; (uVar4 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
        }
      }
      if (uVar4 != 0) goto LAB_004b1602;
    }
    auVar8[0] = -((*pauVar1)[0] == in_AL);
    auVar8[1] = -((*pauVar1)[1] == in_AL);
    auVar8[2] = -((*pauVar1)[2] == in_AL);
    auVar8[3] = -((*pauVar1)[3] == in_AL);
    auVar8[4] = -((*pauVar1)[4] == in_AL);
    auVar8[5] = -((*pauVar1)[5] == in_AL);
    auVar8[6] = -((*pauVar1)[6] == in_AL);
    auVar8[7] = -((*pauVar1)[7] == in_AL);
    auVar8[8] = -((*pauVar1)[8] == in_AL);
    auVar8[9] = -((*pauVar1)[9] == in_AL);
    auVar8[10] = -((*pauVar1)[10] == in_AL);
    auVar8[0xb] = -((*pauVar1)[0xb] == in_AL);
    auVar8[0xc] = -((*pauVar1)[0xc] == in_AL);
    auVar8[0xd] = -((*pauVar1)[0xd] == in_AL);
    auVar8[0xe] = -((*pauVar1)[0xe] == in_AL);
    auVar8[0xf] = -((*pauVar1)[0xf] == in_AL);
    uVar4 = (ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe | (ushort)(auVar8[0xf] >> 7) << 0xf;
    uVar3 = 0;
    if (uVar4 != 0) {
      for (; (uVar4 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
    pauVar6 = pauVar1;
    if (uVar4 != 0) {
LAB_004b1602:
      *in_R8 = (long)pauVar6 + ((ulong)uVar3 - (long)in_RSI);
      return;
    }
  }
  *in_R8 = 0xffffffffffffffff;
  return;
}

