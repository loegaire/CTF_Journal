
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void indexbody(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 auVar3 [32];
  ulong in_RAX;
  undefined4 uVar4;
  undefined4 in_register_0000000c;
  ulong in_RDX;
  undefined1 (*pauVar5) [32];
  undefined1 (*in_RDI) [32];
  undefined1 (*in_R8) [32];
  ulong uVar6;
  long in_R10;
  long *in_R11;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (in_RDX < in_RAX) goto LAB_004b14a0;
  if ((in_RDX < 0x10) || (!internal_cpu_X86.HasSSE42)) {
LAB_004b1233:
    if (in_RAX < 3) {
      pauVar5 = in_RDI + -1;
      do {
        if (*(short *)*in_RDI == *(short *)*in_R8) goto LAB_004b150d;
        in_RDI = (undefined1 (*) [32])(*in_RDI + 1);
      } while (in_RDI < (undefined1 (*) [32])(*pauVar5 + in_RDX + 0x1f));
      goto LAB_004b14a0;
    }
    if (in_RAX < 4) {
      pauVar5 = in_RDI + -1;
      do {
        while (*(short *)*in_RDI == *(short *)*in_R8) {
          if (*(short *)(*in_RDI + 1) == *(short *)(*in_R8 + 1)) goto LAB_004b150d;
          in_RDI = (undefined1 (*) [32])(*in_RDI + 1);
          if ((undefined1 (*) [32])(*pauVar5 + in_RDX + 0x1e) <= in_RDI) goto LAB_004b14a0;
        }
        in_RDI = (undefined1 (*) [32])(*in_RDI + 1);
      } while (in_RDI < (undefined1 (*) [32])(*pauVar5 + in_RDX + 0x1e));
      goto LAB_004b14a0;
    }
    if (in_RAX < 5) {
      pauVar5 = in_RDI + -1;
      do {
        if (*(int *)*in_RDI == *(int *)*in_R8) goto LAB_004b150d;
        in_RDI = (undefined1 (*) [32])(*in_RDI + 1);
      } while (in_RDI < (undefined1 (*) [32])(*pauVar5 + in_RDX + 0x1d));
      goto LAB_004b14a0;
    }
    if (in_RAX < 8) {
      pauVar5 = (undefined1 (*) [32])((long)in_RDI + ((in_RDX + 1) - in_RAX));
      do {
        while (*(int *)*in_RDI == *(int *)*in_R8) {
          if (*(int *)(in_RDI[-1] + in_RAX + 0x1c) == *(int *)(in_R8[-1] + in_RAX + 0x1c))
          goto LAB_004b150d;
          in_RDI = (undefined1 (*) [32])(*in_RDI + 1);
          if (pauVar5 <= in_RDI) goto LAB_004b14a0;
        }
        in_RDI = (undefined1 (*) [32])(*in_RDI + 1);
      } while (in_RDI < pauVar5);
      goto LAB_004b14a0;
    }
    if (in_RAX < 9) {
      pauVar5 = in_RDI + -1;
      do {
        if (*(long *)*in_RDI == *(long *)*in_R8) goto LAB_004b150d;
        in_RDI = (undefined1 (*) [32])(*in_RDI + 1);
      } while (in_RDI < (undefined1 (*) [32])(*pauVar5 + in_RDX + 0x19));
      goto LAB_004b14a0;
    }
  }
  else if (in_RAX < 0xc) {
    if (((ulong)(*in_R8 + 0x10) & 0xff0) != 0) {
      pauVar5 = (undefined1 (*) [32])(in_RDI[-1] + in_RDX + 0x11);
      uVar6 = 0x10 - in_RAX;
      do {
        uVar4 = pcmpestri(*(undefined1 (*) [16])*in_R8,*(undefined1 (*) [16])*in_RDI,0xc);
        if (CONCAT44(in_register_0000000c,uVar4) <= uVar6) goto LAB_004b150a;
        in_RDI = (undefined1 (*) [32])((long)in_RDI + uVar6);
      } while (in_RDI < pauVar5);
      uVar4 = pcmpestri(*(undefined1 (*) [16])*in_R8,*(undefined1 (*) [16])(pauVar5[-1] + 0x1f),0xc)
      ;
      if (CONCAT44(in_register_0000000c,uVar4) <= uVar6) {
        in_RDI = (undefined1 (*) [32])(pauVar5[-1] + 0x1f);
LAB_004b150a:
        in_RDI = (undefined1 (*) [32])(*in_RDI + CONCAT44(in_register_0000000c,uVar4));
LAB_004b150d:
        *in_R11 = (long)in_RDI - in_R10;
        return;
      }
      goto LAB_004b14a0;
    }
    goto LAB_004b1233;
  }
  if (in_RAX < 0x10) {
    pauVar5 = (undefined1 (*) [32])((long)in_RDI + ((in_RDX + 1) - in_RAX));
    do {
      while (*(long *)*in_RDI == *(long *)*in_R8) {
        if (*(long *)(in_RDI[-1] + in_RAX + 0x18) == *(long *)(in_R8[-1] + in_RAX + 0x18))
        goto LAB_004b150d;
        in_RDI = (undefined1 (*) [32])(*in_RDI + 1);
        if (pauVar5 <= in_RDI) goto LAB_004b14a0;
      }
      in_RDI = (undefined1 (*) [32])(*in_RDI + 1);
    } while (in_RDI < pauVar5);
  }
  else if (in_RAX < 0x11) {
    pauVar5 = in_RDI + -1;
    do {
      auVar7[0] = -((*in_RDI)[0] == (*in_R8)[0]);
      auVar7[1] = -((*in_RDI)[1] == (*in_R8)[1]);
      auVar7[2] = -((*in_RDI)[2] == (*in_R8)[2]);
      auVar7[3] = -((*in_RDI)[3] == (*in_R8)[3]);
      auVar7[4] = -((*in_RDI)[4] == (*in_R8)[4]);
      auVar7[5] = -((*in_RDI)[5] == (*in_R8)[5]);
      auVar7[6] = -((*in_RDI)[6] == (*in_R8)[6]);
      auVar7[7] = -((*in_RDI)[7] == (*in_R8)[7]);
      auVar7[8] = -((*in_RDI)[8] == (*in_R8)[8]);
      auVar7[9] = -((*in_RDI)[9] == (*in_R8)[9]);
      auVar7[10] = -((*in_RDI)[10] == (*in_R8)[10]);
      auVar7[0xb] = -((*in_RDI)[0xb] == (*in_R8)[0xb]);
      auVar7[0xc] = -((*in_RDI)[0xc] == (*in_R8)[0xc]);
      auVar7[0xd] = -((*in_RDI)[0xd] == (*in_R8)[0xd]);
      auVar7[0xe] = -((*in_RDI)[0xe] == (*in_R8)[0xe]);
      auVar7[0xf] = -((*in_RDI)[0xf] == (*in_R8)[0xf]);
      if ((ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1
                   | (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
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
                   (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe | (ushort)(auVar7[0xf] >> 7) << 0xf
                  ) == 0xffff) goto LAB_004b150d;
      in_RDI = (undefined1 (*) [32])(*in_RDI + 1);
    } while (in_RDI < (undefined1 (*) [32])(*pauVar5 + in_RDX + 0x11));
  }
  else if (in_RAX < 0x20) {
    pauVar5 = (undefined1 (*) [32])((long)in_RDI + ((in_RDX + 1) - in_RAX));
    pcVar1 = in_R8[-1] + in_RAX + 0x10;
    do {
      while (auVar8[0] = -((*in_RDI)[0] == (*in_R8)[0]), auVar8[1] = -((*in_RDI)[1] == (*in_R8)[1]),
            auVar8[2] = -((*in_RDI)[2] == (*in_R8)[2]), auVar8[3] = -((*in_RDI)[3] == (*in_R8)[3]),
            auVar8[4] = -((*in_RDI)[4] == (*in_R8)[4]), auVar8[5] = -((*in_RDI)[5] == (*in_R8)[5]),
            auVar8[6] = -((*in_RDI)[6] == (*in_R8)[6]), auVar8[7] = -((*in_RDI)[7] == (*in_R8)[7]),
            auVar8[8] = -((*in_RDI)[8] == (*in_R8)[8]), auVar8[9] = -((*in_RDI)[9] == (*in_R8)[9]),
            auVar8[10] = -((*in_RDI)[10] == (*in_R8)[10]),
            auVar8[0xb] = -((*in_RDI)[0xb] == (*in_R8)[0xb]),
            auVar8[0xc] = -((*in_RDI)[0xc] == (*in_R8)[0xc]),
            auVar8[0xd] = -((*in_RDI)[0xd] == (*in_R8)[0xd]),
            auVar8[0xe] = -((*in_RDI)[0xe] == (*in_R8)[0xe]),
            auVar8[0xf] = -((*in_RDI)[0xf] == (*in_R8)[0xf]),
            (ushort)((ushort)(SUB161(auVar8 >> 7,0) & 1) |
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
                    (ushort)(auVar8[0xf] >> 7) << 0xf) != 0xffff) {
        in_RDI = (undefined1 (*) [32])(*in_RDI + 1);
        if (pauVar5 <= in_RDI) goto LAB_004b14a0;
      }
      pcVar2 = in_RDI[-1] + in_RAX + 0x10;
      auVar9[0] = -(*pcVar2 == *pcVar1);
      auVar9[1] = -(pcVar2[1] == pcVar1[1]);
      auVar9[2] = -(pcVar2[2] == pcVar1[2]);
      auVar9[3] = -(pcVar2[3] == pcVar1[3]);
      auVar9[4] = -(pcVar2[4] == pcVar1[4]);
      auVar9[5] = -(pcVar2[5] == pcVar1[5]);
      auVar9[6] = -(pcVar2[6] == pcVar1[6]);
      auVar9[7] = -(pcVar2[7] == pcVar1[7]);
      auVar9[8] = -(pcVar2[8] == pcVar1[8]);
      auVar9[9] = -(pcVar2[9] == pcVar1[9]);
      auVar9[10] = -(pcVar2[10] == pcVar1[10]);
      auVar9[0xb] = -(pcVar2[0xb] == pcVar1[0xb]);
      auVar9[0xc] = -(pcVar2[0xc] == pcVar1[0xc]);
      auVar9[0xd] = -(pcVar2[0xd] == pcVar1[0xd]);
      auVar9[0xe] = -(pcVar2[0xe] == pcVar1[0xe]);
      auVar9[0xf] = -(pcVar2[0xf] == pcVar1[0xf]);
      if ((ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) | (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1
                   | (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
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
                   (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe | (ushort)(auVar9[0xf] >> 7) << 0xf
                  ) == 0xffff) goto LAB_004b150d;
      in_RDI = (undefined1 (*) [32])(*in_RDI + 1);
    } while (in_RDI < pauVar5);
  }
  else if (in_RAX < 0x21) {
    pauVar5 = in_RDI + -1;
    do {
      auVar3 = vpcmpeqb_avx2(*in_RDI,*in_R8);
      if (((uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
           (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
           (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
           (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
           (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
           (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb
           | (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc |
           (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd | (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe
           | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf | (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
           (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
           (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
           (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
           (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
           (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
           (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 |
           (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 |
           (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19 |
           (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
           (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
           (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
           (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
           (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f)
          == 0xffffffff) goto LAB_004b150d;
      in_RDI = (undefined1 (*) [32])(*in_RDI + 1);
    } while (in_RDI < (undefined1 (*) [32])(*pauVar5 + in_RDX + 1));
  }
  else {
    pauVar5 = (undefined1 (*) [32])((long)in_RDI + ((in_RDX + 1) - in_RAX));
    do {
      while (auVar3 = vpcmpeqb_avx2(*in_RDI,*in_R8),
            ((uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
             (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
             (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
             (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
             (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
             (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 |
             (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
             (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc |
             (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd |
             (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf |
             (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
             (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
             (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
             (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
             (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
             (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
             (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 |
             (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 |
             (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19 |
             (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
             (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
             (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
             (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
             (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f)
            == 0xffffffff) {
        auVar3 = vpcmpeqb_avx2(*(undefined1 (*) [32])(in_RDI[-1] + in_RAX),
                               *(undefined1 (*) [32])(in_R8[-1] + in_RAX));
        if (((uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
             (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
             (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
             (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
             (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
             (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 |
             (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
             (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc |
             (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd |
             (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf |
             (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
             (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
             (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
             (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
             (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
             (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
             (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 |
             (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 |
             (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19 |
             (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
             (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
             (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
             (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
             (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f)
            == 0xffffffff) goto LAB_004b150d;
        in_RDI = (undefined1 (*) [32])(*in_RDI + 1);
        if (pauVar5 <= in_RDI) goto LAB_004b14a0;
      }
      in_RDI = (undefined1 (*) [32])(*in_RDI + 1);
    } while (in_RDI < pauVar5);
  }
LAB_004b14a0:
  *in_R11 = -1;
  return;
}

