
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void cmpbody(void)

{
  long lVar1;
  undefined1 auVar2 [32];
  uint uVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  ulong in_RDX;
  ulong unaff_RBX;
  undefined1 (*in_RSI) [32];
  undefined1 (*in_RDI) [32];
  ulong uVar7;
  long *in_R9;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if (in_RSI != in_RDI) {
    uVar7 = in_RDX;
    if ((long)unaff_RBX < (long)in_RDX) {
      uVar7 = unaff_RBX;
    }
    if (uVar7 < 8) {
      if (uVar7 * -8 != 0) {
        bVar5 = (byte)(uVar7 * -8);
        if ((byte)in_RSI < 0xf9) {
          uVar4 = *(ulong *)*in_RSI;
        }
        else {
          uVar4 = *(ulong *)(in_RSI[-1] + uVar7 + 0x18) >> (bVar5 & 0x3f);
        }
        uVar4 = uVar4 << (bVar5 & 0x3f);
        if ((byte)in_RDI < 0xf9) {
          uVar7 = *(ulong *)*in_RDI;
        }
        else {
          uVar7 = *(ulong *)(in_RDI[-1] + uVar7 + 0x18) >> (bVar5 & 0x3f);
        }
        uVar7 = uVar7 << (bVar5 & 0x3f);
        uVar4 = uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 |
                (uVar4 & 0xff0000000000) >> 0x18 | (uVar4 & 0xff00000000) >> 8 |
                (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 | (uVar4 & 0xff00) << 0x28 |
                uVar4 << 0x38;
        uVar7 = (uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                 (uVar7 & 0xff0000000000) >> 0x18 | (uVar7 & 0xff00000000) >> 8 |
                 (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 | (uVar7 & 0xff00) << 0x28 |
                uVar7 << 0x38) ^ uVar4;
        if (uVar7 != 0) {
          lVar1 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          *in_R9 = (uVar4 >> ((byte)lVar1 & 0x3f) & 1) * 2 + -1;
          return;
        }
      }
      goto LAB_004b0d54;
    }
    if (0x3f < uVar7) {
      if (internal_cpu_X86.HasAVX2) {
        do {
          auVar2 = vpcmpeqb_avx2(*in_RDI,*in_RSI);
          uVar3 = ((uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
                   (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 |
                   (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3 |
                   (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
                   (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 |
                   (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6 |
                   (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
                   (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 |
                   (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9 |
                   (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
                   (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
                   (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
                   (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
                   (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe |
                   (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
                   (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
                   (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
                   (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
                   (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
                   (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
                   (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
                   (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 |
                   (uint)SUB321(auVar2 >> 0xbf,0) << 0x17 |
                   (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
                   (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
                   (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
                   (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
                   (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
                   (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
                   (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e |
                  (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f) ^ 0xffffffff;
          uVar4 = (ulong)uVar3;
          if (uVar3 != 0) goto LAB_004b0c9d;
          auVar2 = vpcmpeqb_avx2(in_RDI[1],in_RSI[1]);
          uVar3 = ((uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
                   (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 |
                   (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3 |
                   (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
                   (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 |
                   (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6 |
                   (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
                   (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 |
                   (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9 |
                   (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
                   (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
                   (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
                   (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
                   (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe |
                   (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
                   (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
                   (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
                   (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
                   (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
                   (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
                   (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
                   (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 |
                   (uint)SUB321(auVar2 >> 0xbf,0) << 0x17 |
                   (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
                   (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
                   (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
                   (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
                   (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
                   (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
                   (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e |
                  (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f) ^ 0xffffffff;
          uVar4 = (ulong)uVar3;
          if (uVar3 != 0) goto LAB_004b0c8b;
          in_RSI = in_RSI + 2;
          in_RDI = in_RDI + 2;
          uVar7 = uVar7 - 0x40;
        } while (0x3f < uVar7);
      }
      else {
        do {
          auVar9[0] = -((*in_RDI)[0] == (*in_RSI)[0]);
          auVar9[1] = -((*in_RDI)[1] == (*in_RSI)[1]);
          auVar9[2] = -((*in_RDI)[2] == (*in_RSI)[2]);
          auVar9[3] = -((*in_RDI)[3] == (*in_RSI)[3]);
          auVar9[4] = -((*in_RDI)[4] == (*in_RSI)[4]);
          auVar9[5] = -((*in_RDI)[5] == (*in_RSI)[5]);
          auVar9[6] = -((*in_RDI)[6] == (*in_RSI)[6]);
          auVar9[7] = -((*in_RDI)[7] == (*in_RSI)[7]);
          auVar9[8] = -((*in_RDI)[8] == (*in_RSI)[8]);
          auVar9[9] = -((*in_RDI)[9] == (*in_RSI)[9]);
          auVar9[10] = -((*in_RDI)[10] == (*in_RSI)[10]);
          auVar9[0xb] = -((*in_RDI)[0xb] == (*in_RSI)[0xb]);
          auVar9[0xc] = -((*in_RDI)[0xc] == (*in_RSI)[0xc]);
          auVar9[0xd] = -((*in_RDI)[0xd] == (*in_RSI)[0xd]);
          auVar9[0xe] = -((*in_RDI)[0xe] == (*in_RSI)[0xe]);
          auVar9[0xf] = -((*in_RDI)[0xf] == (*in_RSI)[0xf]);
          uVar4 = (ulong)(ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) |
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
                                 (ushort)(auVar9[0xf] >> 7) << 0xf) ^ 0xffff;
          if (uVar4 != 0) goto LAB_004b0c9d;
          auVar10[0] = -((*in_RDI)[0x10] == (*in_RSI)[0x10]);
          auVar10[1] = -((*in_RDI)[0x11] == (*in_RSI)[0x11]);
          auVar10[2] = -((*in_RDI)[0x12] == (*in_RSI)[0x12]);
          auVar10[3] = -((*in_RDI)[0x13] == (*in_RSI)[0x13]);
          auVar10[4] = -((*in_RDI)[0x14] == (*in_RSI)[0x14]);
          auVar10[5] = -((*in_RDI)[0x15] == (*in_RSI)[0x15]);
          auVar10[6] = -((*in_RDI)[0x16] == (*in_RSI)[0x16]);
          auVar10[7] = -((*in_RDI)[0x17] == (*in_RSI)[0x17]);
          auVar10[8] = -((*in_RDI)[0x18] == (*in_RSI)[0x18]);
          auVar10[9] = -((*in_RDI)[0x19] == (*in_RSI)[0x19]);
          auVar10[10] = -((*in_RDI)[0x1a] == (*in_RSI)[0x1a]);
          auVar10[0xb] = -((*in_RDI)[0x1b] == (*in_RSI)[0x1b]);
          auVar10[0xc] = -((*in_RDI)[0x1c] == (*in_RSI)[0x1c]);
          auVar10[0xd] = -((*in_RDI)[0x1d] == (*in_RSI)[0x1d]);
          auVar10[0xe] = -((*in_RDI)[0x1e] == (*in_RSI)[0x1e]);
          auVar10[0xf] = -((*in_RDI)[0x1f] == (*in_RSI)[0x1f]);
          uVar4 = (ulong)(ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) |
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
                                 (ushort)(auVar10[0xf] >> 7) << 0xf) ^ 0xffff;
          if (uVar4 != 0) {
            in_RSI = (undefined1 (*) [32])(*in_RSI + 0x10);
            in_RDI = (undefined1 (*) [32])(*in_RDI + 0x10);
            goto LAB_004b0c9d;
          }
          auVar11[0] = -(in_RDI[1][0] == in_RSI[1][0]);
          auVar11[1] = -(in_RDI[1][1] == in_RSI[1][1]);
          auVar11[2] = -(in_RDI[1][2] == in_RSI[1][2]);
          auVar11[3] = -(in_RDI[1][3] == in_RSI[1][3]);
          auVar11[4] = -(in_RDI[1][4] == in_RSI[1][4]);
          auVar11[5] = -(in_RDI[1][5] == in_RSI[1][5]);
          auVar11[6] = -(in_RDI[1][6] == in_RSI[1][6]);
          auVar11[7] = -(in_RDI[1][7] == in_RSI[1][7]);
          auVar11[8] = -(in_RDI[1][8] == in_RSI[1][8]);
          auVar11[9] = -(in_RDI[1][9] == in_RSI[1][9]);
          auVar11[10] = -(in_RDI[1][10] == in_RSI[1][10]);
          auVar11[0xb] = -(in_RDI[1][0xb] == in_RSI[1][0xb]);
          auVar11[0xc] = -(in_RDI[1][0xc] == in_RSI[1][0xc]);
          auVar11[0xd] = -(in_RDI[1][0xd] == in_RSI[1][0xd]);
          auVar11[0xe] = -(in_RDI[1][0xe] == in_RSI[1][0xe]);
          auVar11[0xf] = -(in_RDI[1][0xf] == in_RSI[1][0xf]);
          uVar4 = (ulong)(ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(auVar11[0xf] >> 7) << 0xf) ^ 0xffff;
          if (uVar4 != 0) goto LAB_004b0c8b;
          auVar9 = *(undefined1 (*) [16])(in_RSI[1] + 0x10);
          auVar12[0] = -(in_RDI[1][0x10] == auVar9[0]);
          auVar12[1] = -(in_RDI[1][0x11] == auVar9[1]);
          auVar12[2] = -(in_RDI[1][0x12] == auVar9[2]);
          auVar12[3] = -(in_RDI[1][0x13] == auVar9[3]);
          auVar12[4] = -(in_RDI[1][0x14] == auVar9[4]);
          auVar12[5] = -(in_RDI[1][0x15] == auVar9[5]);
          auVar12[6] = -(in_RDI[1][0x16] == auVar9[6]);
          auVar12[7] = -(in_RDI[1][0x17] == auVar9[7]);
          auVar12[8] = -(in_RDI[1][0x18] == auVar9[8]);
          auVar12[9] = -(in_RDI[1][0x19] == auVar9[9]);
          auVar12[10] = -(in_RDI[1][0x1a] == auVar9[10]);
          auVar12[0xb] = -(in_RDI[1][0x1b] == auVar9[0xb]);
          auVar12[0xc] = -(in_RDI[1][0x1c] == auVar9[0xc]);
          auVar12[0xd] = -(in_RDI[1][0x1d] == auVar9[0xd]);
          auVar12[0xe] = -(in_RDI[1][0x1e] == auVar9[0xe]);
          auVar12[0xf] = -(in_RDI[1][0x1f] == auVar9[0xf]);
          uVar4 = (ulong)(ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(auVar12[0xf] >> 7) << 0xf) ^ 0xffff;
          if (uVar4 != 0) {
            in_RSI = (undefined1 (*) [32])(in_RSI[1] + 0x10);
            in_RDI = (undefined1 (*) [32])(in_RDI[1] + 0x10);
            goto LAB_004b0c9d;
          }
          in_RSI = in_RSI + 2;
          in_RDI = in_RDI + 2;
          uVar7 = uVar7 - 0x40;
        } while (0x40 < uVar7);
      }
    }
    for (; 0x10 < uVar7; uVar7 = uVar7 - 0x10) {
      auVar9 = *(undefined1 (*) [16])*in_RSI;
      auVar8[0] = -((*in_RDI)[0] == auVar9[0]);
      auVar8[1] = -((*in_RDI)[1] == auVar9[1]);
      auVar8[2] = -((*in_RDI)[2] == auVar9[2]);
      auVar8[3] = -((*in_RDI)[3] == auVar9[3]);
      auVar8[4] = -((*in_RDI)[4] == auVar9[4]);
      auVar8[5] = -((*in_RDI)[5] == auVar9[5]);
      auVar8[6] = -((*in_RDI)[6] == auVar9[6]);
      auVar8[7] = -((*in_RDI)[7] == auVar9[7]);
      auVar8[8] = -((*in_RDI)[8] == auVar9[8]);
      auVar8[9] = -((*in_RDI)[9] == auVar9[9]);
      auVar8[10] = -((*in_RDI)[10] == auVar9[10]);
      auVar8[0xb] = -((*in_RDI)[0xb] == auVar9[0xb]);
      auVar8[0xc] = -((*in_RDI)[0xc] == auVar9[0xc]);
      auVar8[0xd] = -((*in_RDI)[0xd] == auVar9[0xd]);
      auVar8[0xe] = -((*in_RDI)[0xe] == auVar9[0xe]);
      auVar8[0xf] = -((*in_RDI)[0xf] == auVar9[0xf]);
      uVar4 = (ulong)(ushort)((ushort)(SUB161(auVar8 >> 7,0) & 1) |
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
                             (ushort)(auVar8[0xf] >> 7) << 0xf) ^ 0xffff;
      if (uVar4 != 0) goto LAB_004b0c9d;
      in_RSI = (undefined1 (*) [32])(*in_RSI + 0x10);
      in_RDI = (undefined1 (*) [32])(*in_RDI + 0x10);
    }
    if (8 < uVar7) {
      uVar4 = *(ulong *)*in_RSI;
      uVar6 = *(ulong *)*in_RDI;
      if (uVar4 != uVar6) goto LAB_004b0cd9;
    }
    uVar4 = *(ulong *)(in_RSI[-1] + uVar7 + 0x18);
    uVar6 = *(ulong *)(in_RDI[-1] + uVar7 + 0x18);
    if (uVar4 != uVar6) {
LAB_004b0cd9:
      uVar7 = uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18
              | (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18
              | (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38;
      uVar4 = (uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 | (uVar6 & 0xff0000000000) >> 0x18
               | (uVar6 & 0xff00000000) >> 8 | (uVar6 & 0xff000000) << 8 |
               (uVar6 & 0xff0000) << 0x18 | (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38) ^ uVar7;
      lVar1 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      *in_R9 = (uVar7 >> ((byte)lVar1 & 0x3f) & 1) * 2 + -1;
      return;
    }
  }
LAB_004b0d54:
  *in_R9 = ((ulong)(unaff_RBX == in_RDX) - 1) +
           (ulong)(unaff_RBX != in_RDX && (long)in_RDX <= (long)unaff_RBX) * 2;
  return;
LAB_004b0c8b:
  in_RSI = in_RSI + 1;
  in_RDI = in_RDI + 1;
LAB_004b0c9d:
  lVar1 = 0;
  if (uVar4 != 0) {
    for (; (uVar4 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
    }
  }
  *in_R9 = (ulong)((byte)(*in_RDI)[lVar1] < (byte)(*in_RSI)[lVar1]) * 2 + -1;
  return;
}

