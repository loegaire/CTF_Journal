
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void memeqbody(void)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *in_RAX;
  byte bVar5;
  ulong unaff_RBX;
  undefined1 (*in_RSI) [32];
  ulong uVar6;
  undefined1 (*in_RDI) [32];
  ulong uVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if (unaff_RBX < 8) {
    bVar8 = unaff_RBX == 0;
    if (!bVar8) {
      bVar5 = (byte)(unaff_RBX * -8);
      if ((byte)in_RSI < 0xf9) {
        uVar6 = *(ulong *)*in_RSI;
      }
      else {
        uVar6 = *(ulong *)(in_RSI[-1] + unaff_RBX + 0x18) >> (bVar5 & 0x3f);
      }
      if ((byte)in_RDI < 0xf9) {
        uVar7 = *(ulong *)*in_RDI;
      }
      else {
        uVar7 = *(ulong *)(in_RDI[-1] + unaff_RBX + 0x18) >> (bVar5 & 0x3f);
      }
      bVar8 = (unaff_RBX * -8 & 0x3f) != 0;
      bVar8 = !bVar8 && uVar7 - uVar6 == 0 || bVar8 && uVar7 - uVar6 << (bVar5 & 0x3f) == 0;
    }
    *in_RAX = bVar8;
    return;
  }
  if (0x3f < unaff_RBX) {
    if (internal_cpu_X86.HasAVX2) {
      while (0x3f < unaff_RBX) {
        auVar1 = vpcmpeqb_avx2(*in_RSI,*in_RDI);
        auVar2 = vpcmpeqb_avx2(in_RDI[1],in_RSI[1]);
        auVar1 = vpand_avx2(auVar2,auVar1);
        in_RSI = in_RSI + 2;
        in_RDI = in_RDI + 2;
        unaff_RBX = unaff_RBX - 0x40;
        if (((uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
             (uint)(SUB321(auVar1 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar1 >> 0x1f,0) & 1) << 3 |
             (uint)(SUB321(auVar1 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar1 >> 0x2f,0) & 1) << 5 |
             (uint)(SUB321(auVar1 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar1 >> 0x3f,0) & 1) << 7 |
             (uint)(SUB321(auVar1 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar1 >> 0x4f,0) & 1) << 9 |
             (uint)(SUB321(auVar1 >> 0x57,0) & 1) << 10 |
             (uint)(SUB321(auVar1 >> 0x5f,0) & 1) << 0xb |
             (uint)(SUB321(auVar1 >> 0x67,0) & 1) << 0xc |
             (uint)(SUB321(auVar1 >> 0x6f,0) & 1) << 0xd |
             (uint)(SUB321(auVar1 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar1 >> 0x7f,0) << 0xf |
             (uint)(SUB321(auVar1 >> 0x87,0) & 1) << 0x10 |
             (uint)(SUB321(auVar1 >> 0x8f,0) & 1) << 0x11 |
             (uint)(SUB321(auVar1 >> 0x97,0) & 1) << 0x12 |
             (uint)(SUB321(auVar1 >> 0x9f,0) & 1) << 0x13 |
             (uint)(SUB321(auVar1 >> 0xa7,0) & 1) << 0x14 |
             (uint)(SUB321(auVar1 >> 0xaf,0) & 1) << 0x15 |
             (uint)(SUB321(auVar1 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar1 >> 0xbf,0) << 0x17 |
             (uint)(SUB321(auVar1 >> 199,0) & 1) << 0x18 |
             (uint)(SUB321(auVar1 >> 0xcf,0) & 1) << 0x19 |
             (uint)(SUB321(auVar1 >> 0xd7,0) & 1) << 0x1a |
             (uint)(SUB321(auVar1 >> 0xdf,0) & 1) << 0x1b |
             (uint)(SUB321(auVar1 >> 0xe7,0) & 1) << 0x1c |
             (uint)(SUB321(auVar1 >> 0xef,0) & 1) << 0x1d |
             (uint)(SUB321(auVar1 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f)
            != 0xffffffff) {
          *in_RAX = 0;
          return;
        }
      }
    }
    else {
      while (0x3f < unaff_RBX) {
        auVar10 = *(undefined1 (*) [16])*in_RDI;
        auVar11 = *(undefined1 (*) [16])(*in_RDI + 0x10);
        auVar12 = *(undefined1 (*) [16])in_RDI[1];
        auVar9[0] = -((*in_RSI)[0] == auVar10[0]);
        auVar9[1] = -((*in_RSI)[1] == auVar10[1]);
        auVar9[2] = -((*in_RSI)[2] == auVar10[2]);
        auVar9[3] = -((*in_RSI)[3] == auVar10[3]);
        auVar9[4] = -((*in_RSI)[4] == auVar10[4]);
        auVar9[5] = -((*in_RSI)[5] == auVar10[5]);
        auVar9[6] = -((*in_RSI)[6] == auVar10[6]);
        auVar9[7] = -((*in_RSI)[7] == auVar10[7]);
        auVar9[8] = -((*in_RSI)[8] == auVar10[8]);
        auVar9[9] = -((*in_RSI)[9] == auVar10[9]);
        auVar9[10] = -((*in_RSI)[10] == auVar10[10]);
        auVar9[0xb] = -((*in_RSI)[0xb] == auVar10[0xb]);
        auVar9[0xc] = -((*in_RSI)[0xc] == auVar10[0xc]);
        auVar9[0xd] = -((*in_RSI)[0xd] == auVar10[0xd]);
        auVar9[0xe] = -((*in_RSI)[0xe] == auVar10[0xe]);
        auVar9[0xf] = -((*in_RSI)[0xf] == auVar10[0xf]);
        auVar10[0] = -((*in_RSI)[0x10] == auVar11[0]);
        auVar10[1] = -((*in_RSI)[0x11] == auVar11[1]);
        auVar10[2] = -((*in_RSI)[0x12] == auVar11[2]);
        auVar10[3] = -((*in_RSI)[0x13] == auVar11[3]);
        auVar10[4] = -((*in_RSI)[0x14] == auVar11[4]);
        auVar10[5] = -((*in_RSI)[0x15] == auVar11[5]);
        auVar10[6] = -((*in_RSI)[0x16] == auVar11[6]);
        auVar10[7] = -((*in_RSI)[0x17] == auVar11[7]);
        auVar10[8] = -((*in_RSI)[0x18] == auVar11[8]);
        auVar10[9] = -((*in_RSI)[0x19] == auVar11[9]);
        auVar10[10] = -((*in_RSI)[0x1a] == auVar11[10]);
        auVar10[0xb] = -((*in_RSI)[0x1b] == auVar11[0xb]);
        auVar10[0xc] = -((*in_RSI)[0x1c] == auVar11[0xc]);
        auVar10[0xd] = -((*in_RSI)[0x1d] == auVar11[0xd]);
        auVar10[0xe] = -((*in_RSI)[0x1e] == auVar11[0xe]);
        auVar10[0xf] = -((*in_RSI)[0x1f] == auVar11[0xf]);
        auVar11[0] = -(in_RSI[1][0] == auVar12[0]);
        auVar11[1] = -(in_RSI[1][1] == auVar12[1]);
        auVar11[2] = -(in_RSI[1][2] == auVar12[2]);
        auVar11[3] = -(in_RSI[1][3] == auVar12[3]);
        auVar11[4] = -(in_RSI[1][4] == auVar12[4]);
        auVar11[5] = -(in_RSI[1][5] == auVar12[5]);
        auVar11[6] = -(in_RSI[1][6] == auVar12[6]);
        auVar11[7] = -(in_RSI[1][7] == auVar12[7]);
        auVar11[8] = -(in_RSI[1][8] == auVar12[8]);
        auVar11[9] = -(in_RSI[1][9] == auVar12[9]);
        auVar11[10] = -(in_RSI[1][10] == auVar12[10]);
        auVar11[0xb] = -(in_RSI[1][0xb] == auVar12[0xb]);
        auVar11[0xc] = -(in_RSI[1][0xc] == auVar12[0xc]);
        auVar11[0xd] = -(in_RSI[1][0xd] == auVar12[0xd]);
        auVar11[0xe] = -(in_RSI[1][0xe] == auVar12[0xe]);
        auVar11[0xf] = -(in_RSI[1][0xf] == auVar12[0xf]);
        auVar12[0] = -(in_RSI[1][0x10] == in_RDI[1][0x10]);
        auVar12[1] = -(in_RSI[1][0x11] == in_RDI[1][0x11]);
        auVar12[2] = -(in_RSI[1][0x12] == in_RDI[1][0x12]);
        auVar12[3] = -(in_RSI[1][0x13] == in_RDI[1][0x13]);
        auVar12[4] = -(in_RSI[1][0x14] == in_RDI[1][0x14]);
        auVar12[5] = -(in_RSI[1][0x15] == in_RDI[1][0x15]);
        auVar12[6] = -(in_RSI[1][0x16] == in_RDI[1][0x16]);
        auVar12[7] = -(in_RSI[1][0x17] == in_RDI[1][0x17]);
        auVar12[8] = -(in_RSI[1][0x18] == in_RDI[1][0x18]);
        auVar12[9] = -(in_RSI[1][0x19] == in_RDI[1][0x19]);
        auVar12[10] = -(in_RSI[1][0x1a] == in_RDI[1][0x1a]);
        auVar12[0xb] = -(in_RSI[1][0x1b] == in_RDI[1][0x1b]);
        auVar12[0xc] = -(in_RSI[1][0x1c] == in_RDI[1][0x1c]);
        auVar12[0xd] = -(in_RSI[1][0x1d] == in_RDI[1][0x1d]);
        auVar12[0xe] = -(in_RSI[1][0x1e] == in_RDI[1][0x1e]);
        auVar12[0xf] = -(in_RSI[1][0x1f] == in_RDI[1][0x1f]);
        auVar10 = auVar9 & auVar10 & auVar11 & auVar12;
        in_RSI = in_RSI + 2;
        in_RDI = in_RDI + 2;
        unaff_RBX = unaff_RBX - 0x40;
        if ((ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) |
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
                    (ushort)(byte)(auVar10[0xf] >> 7) << 0xf) != 0xffff) {
          *in_RAX = 0;
          return;
        }
      }
    }
  }
  do {
    if (unaff_RBX < 9) {
      *in_RAX = *(long *)(in_RSI[-1] + unaff_RBX + 0x18) == *(long *)(in_RDI[-1] + unaff_RBX + 0x18)
      ;
      return;
    }
    puVar3 = *in_RSI;
    puVar4 = *in_RDI;
    in_RSI = (undefined1 (*) [32])(*in_RSI + 8);
    in_RDI = (undefined1 (*) [32])(*in_RDI + 8);
    unaff_RBX = unaff_RBX - 8;
  } while (*(long *)puVar3 == *(long *)puVar4);
  *in_RAX = 0;
  return;
}

