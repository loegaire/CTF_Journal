
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void countbody(void)

{
  undefined1 (*pauVar1) [32];
  char *pcVar2;
  undefined1 auVar3 [32];
  char in_AL;
  byte bVar4;
  ulong unaff_RBX;
  undefined1 (*in_RSI) [32];
  ulong *in_R8;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [32];
  
  bVar4 = (byte)unaff_RBX;
  if ((long)unaff_RBX < 0x10) {
    if (unaff_RBX == 0) {
      *in_R8 = 0;
      return;
    }
    if (((ulong)(*in_RSI + 0x10) & 0xff0) != 0) {
      auVar8[0] = -((*in_RSI)[0] == in_AL);
      auVar8[1] = -((*in_RSI)[1] == in_AL);
      auVar8[2] = -((*in_RSI)[2] == in_AL);
      auVar8[3] = -((*in_RSI)[3] == in_AL);
      auVar8[4] = -((*in_RSI)[4] == in_AL);
      auVar8[5] = -((*in_RSI)[5] == in_AL);
      auVar8[6] = -((*in_RSI)[6] == in_AL);
      auVar8[7] = -((*in_RSI)[7] == in_AL);
      auVar8[8] = -((*in_RSI)[8] == in_AL);
      auVar8[9] = -((*in_RSI)[9] == in_AL);
      auVar8[10] = -((*in_RSI)[10] == in_AL);
      auVar8[0xb] = -((*in_RSI)[0xb] == in_AL);
      auVar8[0xc] = -((*in_RSI)[0xc] == in_AL);
      auVar8[0xd] = -((*in_RSI)[0xd] == in_AL);
      auVar8[0xe] = -((*in_RSI)[0xe] == in_AL);
      auVar8[0xf] = -((*in_RSI)[0xf] == in_AL);
      *in_R8 = (ulong)(uint)POPCOUNT((uint)(ushort)((ushort)(SUB161(auVar8 >> 7,0) & 1) |
                                                    (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
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
                                                    (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe |
                                                   (ushort)(auVar8[0xf] >> 7) << 0xf) &
                                     (int)(1L << (bVar4 & 0x3f)) - 1U);
      return;
    }
    pcVar2 = in_RSI[-1] + unaff_RBX + 0x10;
    auVar9[0] = -(*pcVar2 == in_AL);
    auVar9[1] = -(pcVar2[1] == in_AL);
    auVar9[2] = -(pcVar2[2] == in_AL);
    auVar9[3] = -(pcVar2[3] == in_AL);
    auVar9[4] = -(pcVar2[4] == in_AL);
    auVar9[5] = -(pcVar2[5] == in_AL);
    auVar9[6] = -(pcVar2[6] == in_AL);
    auVar9[7] = -(pcVar2[7] == in_AL);
    auVar9[8] = -(pcVar2[8] == in_AL);
    auVar9[9] = -(pcVar2[9] == in_AL);
    auVar9[10] = -(pcVar2[10] == in_AL);
    auVar9[0xb] = -(pcVar2[0xb] == in_AL);
    auVar9[0xc] = -(pcVar2[0xc] == in_AL);
    auVar9[0xd] = -(pcVar2[0xd] == in_AL);
    auVar9[0xe] = -(pcVar2[0xe] == in_AL);
    auVar9[0xf] = -(pcVar2[0xf] == in_AL);
    *in_R8 = (ulong)(uint)POPCOUNT((uint)(ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) |
                                                  (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
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
                                                  (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe |
                                                 (ushort)(auVar9[0xf] >> 7) << 0xf) &
                                   (uint)((0xffffL >> (0x10 - bVar4 & 0x3f)) <<
                                         (0x10 - bVar4 & 0x3f)));
    return;
  }
  uVar5 = 0;
  if ((unaff_RBX < 0x21) || (!internal_cpu_X86.HasAVX2)) {
    pauVar1 = (undefined1 (*) [32])(in_RSI[-1] + unaff_RBX + 0x10);
    for (; in_RSI <= pauVar1; in_RSI = (undefined1 (*) [32])(*in_RSI + 0x10)) {
      auVar6[0] = -((*in_RSI)[0] == in_AL);
      auVar6[1] = -((*in_RSI)[1] == in_AL);
      auVar6[2] = -((*in_RSI)[2] == in_AL);
      auVar6[3] = -((*in_RSI)[3] == in_AL);
      auVar6[4] = -((*in_RSI)[4] == in_AL);
      auVar6[5] = -((*in_RSI)[5] == in_AL);
      auVar6[6] = -((*in_RSI)[6] == in_AL);
      auVar6[7] = -((*in_RSI)[7] == in_AL);
      auVar6[8] = -((*in_RSI)[8] == in_AL);
      auVar6[9] = -((*in_RSI)[9] == in_AL);
      auVar6[10] = -((*in_RSI)[10] == in_AL);
      auVar6[0xb] = -((*in_RSI)[0xb] == in_AL);
      auVar6[0xc] = -((*in_RSI)[0xc] == in_AL);
      auVar6[0xd] = -((*in_RSI)[0xd] == in_AL);
      auVar6[0xe] = -((*in_RSI)[0xe] == in_AL);
      auVar6[0xf] = -((*in_RSI)[0xf] == in_AL);
      uVar5 = uVar5 + (uint)POPCOUNT((uint)(ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) |
                                                    (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
                                                    (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                                                    (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                                                    (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                                                    (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                                                    (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                                                    (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                                                    (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
                                                    (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                                                    (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                                                    (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                                                    (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
                                                    (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
                                                    (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
                                                   (ushort)(auVar6[0xf] >> 7) << 0xf));
    }
    if ((unaff_RBX & 0xf) != 0) {
      bVar4 = 0x10 - (char)(unaff_RBX & 0xf);
      auVar7[0] = -((*pauVar1)[0] == in_AL);
      auVar7[1] = -((*pauVar1)[1] == in_AL);
      auVar7[2] = -((*pauVar1)[2] == in_AL);
      auVar7[3] = -((*pauVar1)[3] == in_AL);
      auVar7[4] = -((*pauVar1)[4] == in_AL);
      auVar7[5] = -((*pauVar1)[5] == in_AL);
      auVar7[6] = -((*pauVar1)[6] == in_AL);
      auVar7[7] = -((*pauVar1)[7] == in_AL);
      auVar7[8] = -((*pauVar1)[8] == in_AL);
      auVar7[9] = -((*pauVar1)[9] == in_AL);
      auVar7[10] = -((*pauVar1)[10] == in_AL);
      auVar7[0xb] = -((*pauVar1)[0xb] == in_AL);
      auVar7[0xc] = -((*pauVar1)[0xc] == in_AL);
      auVar7[0xd] = -((*pauVar1)[0xd] == in_AL);
      auVar7[0xe] = -((*pauVar1)[0xe] == in_AL);
      auVar7[0xf] = -((*pauVar1)[0xf] == in_AL);
      uVar5 = uVar5 + (uint)POPCOUNT((uint)(ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) |
                                                    (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
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
                                                    (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe |
                                                   (ushort)(auVar7[0xf] >> 7) << 0xf) &
                                     (uint)((0xffffL >> (bVar4 & 0x3f)) << (bVar4 & 0x3f)));
    }
    *in_R8 = uVar5;
    return;
  }
  pauVar1 = (undefined1 (*) [32])(in_RSI[-1] + unaff_RBX);
  auVar10[1] = in_AL;
  auVar10[0] = in_AL;
  auVar10[2] = in_AL;
  auVar10[3] = in_AL;
  auVar10[4] = in_AL;
  auVar10[5] = in_AL;
  auVar10[6] = in_AL;
  auVar10[7] = in_AL;
  auVar10[8] = in_AL;
  auVar10[9] = in_AL;
  auVar10[10] = in_AL;
  auVar10[0xb] = in_AL;
  auVar10[0xc] = in_AL;
  auVar10[0xd] = in_AL;
  auVar10[0xe] = in_AL;
  auVar10[0xf] = in_AL;
  auVar10[0x10] = in_AL;
  auVar10[0x11] = in_AL;
  auVar10[0x12] = in_AL;
  auVar10[0x13] = in_AL;
  auVar10[0x14] = in_AL;
  auVar10[0x15] = in_AL;
  auVar10[0x16] = in_AL;
  auVar10[0x17] = in_AL;
  auVar10[0x18] = in_AL;
  auVar10[0x19] = in_AL;
  auVar10[0x1a] = in_AL;
  auVar10[0x1b] = in_AL;
  auVar10[0x1c] = in_AL;
  auVar10[0x1d] = in_AL;
  auVar10[0x1e] = in_AL;
  auVar10[0x1f] = in_AL;
  do {
    auVar3 = vpcmpeqb_avx2(*in_RSI,auVar10);
    uVar5 = uVar5 + (uint)POPCOUNT((uint)(SUB321(auVar3 >> 7,0) & 1) |
                                   (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
                                   (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 |
                                   (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
                                   (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 |
                                   (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
                                   (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 |
                                   (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
                                   (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 |
                                   (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
                                   (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 |
                                   (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
                                   (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc |
                                   (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd |
                                   (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe |
                                   (uint)SUB321(auVar3 >> 0x7f,0) << 0xf |
                                   (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
                                   (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
                                   (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
                                   (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
                                   (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
                                   (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
                                   (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 |
                                   (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 |
                                   (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 |
                                   (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19 |
                                   (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
                                   (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
                                   (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
                                   (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
                                   (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e |
                                   (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f);
    in_RSI = in_RSI + 1;
  } while ((long)in_RSI <= (long)pauVar1);
  if (in_RSI != pauVar1) {
    auVar10 = vpcmpeqb_avx2(*pauVar1,auVar10);
    bVar4 = 0x20 - (bVar4 & 0x1f);
    *in_R8 = uVar5 + (uint)POPCOUNT(((uint)(SUB321(auVar10 >> 7,0) & 1) |
                                     (uint)(SUB321(auVar10 >> 0xf,0) & 1) << 1 |
                                     (uint)(SUB321(auVar10 >> 0x17,0) & 1) << 2 |
                                     (uint)(SUB321(auVar10 >> 0x1f,0) & 1) << 3 |
                                     (uint)(SUB321(auVar10 >> 0x27,0) & 1) << 4 |
                                     (uint)(SUB321(auVar10 >> 0x2f,0) & 1) << 5 |
                                     (uint)(SUB321(auVar10 >> 0x37,0) & 1) << 6 |
                                     (uint)(SUB321(auVar10 >> 0x3f,0) & 1) << 7 |
                                     (uint)(SUB321(auVar10 >> 0x47,0) & 1) << 8 |
                                     (uint)(SUB321(auVar10 >> 0x4f,0) & 1) << 9 |
                                     (uint)(SUB321(auVar10 >> 0x57,0) & 1) << 10 |
                                     (uint)(SUB321(auVar10 >> 0x5f,0) & 1) << 0xb |
                                     (uint)(SUB321(auVar10 >> 0x67,0) & 1) << 0xc |
                                     (uint)(SUB321(auVar10 >> 0x6f,0) & 1) << 0xd |
                                     (uint)(SUB321(auVar10 >> 0x77,0) & 1) << 0xe |
                                     (uint)SUB321(auVar10 >> 0x7f,0) << 0xf |
                                     (uint)(SUB321(auVar10 >> 0x87,0) & 1) << 0x10 |
                                     (uint)(SUB321(auVar10 >> 0x8f,0) & 1) << 0x11 |
                                     (uint)(SUB321(auVar10 >> 0x97,0) & 1) << 0x12 |
                                     (uint)(SUB321(auVar10 >> 0x9f,0) & 1) << 0x13 |
                                     (uint)(SUB321(auVar10 >> 0xa7,0) & 1) << 0x14 |
                                     (uint)(SUB321(auVar10 >> 0xaf,0) & 1) << 0x15 |
                                     (uint)(SUB321(auVar10 >> 0xb7,0) & 1) << 0x16 |
                                     (uint)SUB321(auVar10 >> 0xbf,0) << 0x17 |
                                     (uint)(SUB321(auVar10 >> 199,0) & 1) << 0x18 |
                                     (uint)(SUB321(auVar10 >> 0xcf,0) & 1) << 0x19 |
                                     (uint)(SUB321(auVar10 >> 0xd7,0) & 1) << 0x1a |
                                     (uint)(SUB321(auVar10 >> 0xdf,0) & 1) << 0x1b |
                                     (uint)(SUB321(auVar10 >> 0xe7,0) & 1) << 0x1c |
                                     (uint)(SUB321(auVar10 >> 0xef,0) & 1) << 0x1d |
                                     (uint)(SUB321(auVar10 >> 0xf7,0) & 1) << 0x1e |
                                    (uint)(byte)(auVar10[0x1f] >> 7) << 0x1f) &
                                    (uint)((0xffffffffL >> (bVar4 & 0x3f)) << (bVar4 & 0x3f)));
    return;
  }
  *in_R8 = uVar5;
  return;
}

