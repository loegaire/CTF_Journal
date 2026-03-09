
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void aeshashbody(void)

{
  undefined1 (*in_RAX) [16];
  ulong in_RCX;
  ulong uVar1;
  ulong *in_RDX;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 in_stack_00000010;
  
  auVar2._8_8_ = in_RCX & 0xffff;
  auVar2._0_8_ = in_stack_00000010;
  auVar2 = pshufhw(auVar2,auVar2,0);
  auVar3 = aesenc(auVar2 ^ runtime_aeskeysched._0_16_,auVar2 ^ runtime_aeskeysched._0_16_);
  if (in_RCX < 0x10) {
    if (in_RCX == 0) {
      auVar2 = aesenc(auVar3,auVar3);
      *in_RDX = auVar2._0_8_;
      return;
    }
    if (((ulong)(in_RAX + 1) & 0xff0) == 0) {
      auVar2 = pshufb(*(undefined1 (*) [16])(in_RAX[-1] + in_RCX),
                      *(undefined1 (*) [16])(shifts + in_RCX * 0x10));
    }
    else {
      auVar2 = *in_RAX & *(undefined1 (*) [16])(masks + in_RCX * 0x10);
    }
  }
  else {
    if (in_RCX != 0x10) {
      if (in_RCX < 0x21) {
        auVar2 = aesenc(auVar2 ^ runtime_aeskeysched._16_16_,auVar2 ^ runtime_aeskeysched._16_16_);
        auVar2 = *(undefined1 (*) [16])(in_RAX[-1] + in_RCX) ^ auVar2;
        auVar3 = aesenc(*in_RAX ^ auVar3,*in_RAX ^ auVar3);
        auVar4 = aesenc(auVar2,auVar2);
        auVar2 = aesenc(auVar3,auVar3);
        auVar3 = aesenc(auVar4,auVar4);
        auVar2 = aesenc(auVar2,auVar2);
        auVar3 = aesenc(auVar3,auVar3);
        *in_RDX = auVar2._0_8_ ^ auVar3._0_8_;
        return;
      }
      if (0x40 < in_RCX) {
        if (0x80 < in_RCX) {
          auVar4 = aesenc(auVar2 ^ runtime_aeskeysched._16_16_,auVar2 ^ runtime_aeskeysched._16_16_)
          ;
          auVar5 = aesenc(auVar2 ^ runtime_aeskeysched._32_16_,auVar2 ^ runtime_aeskeysched._32_16_)
          ;
          auVar6 = aesenc(auVar2 ^ runtime_aeskeysched._48_16_,auVar2 ^ runtime_aeskeysched._48_16_)
          ;
          auVar7 = aesenc(auVar2 ^ runtime_aeskeysched._64_16_,auVar2 ^ runtime_aeskeysched._64_16_)
          ;
          auVar8 = aesenc(auVar2 ^ runtime_aeskeysched._80_16_,auVar2 ^ runtime_aeskeysched._80_16_)
          ;
          auVar9 = aesenc(auVar2 ^ runtime_aeskeysched._96_16_,auVar2 ^ runtime_aeskeysched._96_16_)
          ;
          auVar2 = aesenc(auVar2 ^ runtime_aeskeysched._112_16_,
                          auVar2 ^ runtime_aeskeysched._112_16_);
          auVar3 = *(undefined1 (*) [16])(in_RAX[-8] + in_RCX) ^ auVar3;
          auVar4 = *(undefined1 (*) [16])(in_RAX[-7] + in_RCX) ^ auVar4;
          auVar5 = *(undefined1 (*) [16])(in_RAX[-6] + in_RCX) ^ auVar5;
          auVar6 = *(undefined1 (*) [16])(in_RAX[-5] + in_RCX) ^ auVar6;
          auVar7 = *(undefined1 (*) [16])(in_RAX[-4] + in_RCX) ^ auVar7;
          auVar8 = *(undefined1 (*) [16])(in_RAX[-3] + in_RCX) ^ auVar8;
          auVar9 = *(undefined1 (*) [16])(in_RAX[-2] + in_RCX) ^ auVar9;
          auVar2 = *(undefined1 (*) [16])(in_RAX[-1] + in_RCX) ^ auVar2;
          uVar1 = in_RCX - 1 >> 7;
          do {
            auVar3 = aesenc(auVar3,auVar3);
            auVar4 = aesenc(auVar4,auVar4);
            auVar5 = aesenc(auVar5,auVar5);
            auVar6 = aesenc(auVar6,auVar6);
            auVar7 = aesenc(auVar7,auVar7);
            auVar8 = aesenc(auVar8,auVar8);
            auVar9 = aesenc(auVar9,auVar9);
            auVar2 = aesenc(auVar2,auVar2);
            auVar3 = aesenc(auVar3,*in_RAX);
            auVar4 = aesenc(auVar4,in_RAX[1]);
            auVar5 = aesenc(auVar5,in_RAX[2]);
            auVar6 = aesenc(auVar6,in_RAX[3]);
            auVar7 = aesenc(auVar7,in_RAX[4]);
            auVar8 = aesenc(auVar8,in_RAX[5]);
            auVar9 = aesenc(auVar9,in_RAX[6]);
            auVar2 = aesenc(auVar2,in_RAX[7]);
            in_RAX = in_RAX + 8;
            uVar1 = uVar1 - 1;
          } while (uVar1 != 0);
          auVar3 = aesenc(auVar3,auVar3);
          auVar4 = aesenc(auVar4,auVar4);
          auVar5 = aesenc(auVar5,auVar5);
          auVar6 = aesenc(auVar6,auVar6);
          auVar7 = aesenc(auVar7,auVar7);
          auVar8 = aesenc(auVar8,auVar8);
          auVar9 = aesenc(auVar9,auVar9);
          auVar10 = aesenc(auVar2,auVar2);
          auVar2 = aesenc(auVar3,auVar3);
          auVar3 = aesenc(auVar4,auVar4);
          auVar4 = aesenc(auVar5,auVar5);
          auVar5 = aesenc(auVar6,auVar6);
          auVar6 = aesenc(auVar7,auVar7);
          auVar7 = aesenc(auVar8,auVar8);
          auVar8 = aesenc(auVar9,auVar9);
          auVar9 = aesenc(auVar10,auVar10);
          auVar2 = aesenc(auVar2,auVar2);
          auVar3 = aesenc(auVar3,auVar3);
          auVar4 = aesenc(auVar4,auVar4);
          auVar5 = aesenc(auVar5,auVar5);
          auVar6 = aesenc(auVar6,auVar6);
          auVar7 = aesenc(auVar7,auVar7);
          auVar8 = aesenc(auVar8,auVar8);
          auVar9 = aesenc(auVar9,auVar9);
          *in_RDX = auVar2._0_8_ ^ auVar6._0_8_ ^ auVar4._0_8_ ^ auVar8._0_8_ ^
                    auVar3._0_8_ ^ auVar7._0_8_ ^ auVar5._0_8_ ^ auVar9._0_8_;
          return;
        }
        auVar4 = aesenc(auVar2 ^ runtime_aeskeysched._16_16_,auVar2 ^ runtime_aeskeysched._16_16_);
        auVar5 = aesenc(auVar2 ^ runtime_aeskeysched._32_16_,auVar2 ^ runtime_aeskeysched._32_16_);
        auVar6 = aesenc(auVar2 ^ runtime_aeskeysched._48_16_,auVar2 ^ runtime_aeskeysched._48_16_);
        auVar7 = aesenc(auVar2 ^ runtime_aeskeysched._64_16_,auVar2 ^ runtime_aeskeysched._64_16_);
        auVar8 = aesenc(auVar2 ^ runtime_aeskeysched._80_16_,auVar2 ^ runtime_aeskeysched._80_16_);
        auVar9 = aesenc(auVar2 ^ runtime_aeskeysched._96_16_,auVar2 ^ runtime_aeskeysched._96_16_);
        auVar2 = aesenc(auVar2 ^ runtime_aeskeysched._112_16_,auVar2 ^ runtime_aeskeysched._112_16_)
        ;
        auVar7 = *(undefined1 (*) [16])(in_RAX[-4] + in_RCX) ^ auVar7;
        auVar8 = *(undefined1 (*) [16])(in_RAX[-3] + in_RCX) ^ auVar8;
        auVar9 = *(undefined1 (*) [16])(in_RAX[-2] + in_RCX) ^ auVar9;
        auVar2 = *(undefined1 (*) [16])(in_RAX[-1] + in_RCX) ^ auVar2;
        auVar3 = aesenc(*in_RAX ^ auVar3,*in_RAX ^ auVar3);
        auVar4 = aesenc(in_RAX[1] ^ auVar4,in_RAX[1] ^ auVar4);
        auVar5 = aesenc(in_RAX[2] ^ auVar5,in_RAX[2] ^ auVar5);
        auVar6 = aesenc(in_RAX[3] ^ auVar6,in_RAX[3] ^ auVar6);
        auVar7 = aesenc(auVar7,auVar7);
        auVar8 = aesenc(auVar8,auVar8);
        auVar9 = aesenc(auVar9,auVar9);
        auVar10 = aesenc(auVar2,auVar2);
        auVar2 = aesenc(auVar3,auVar3);
        auVar3 = aesenc(auVar4,auVar4);
        auVar4 = aesenc(auVar5,auVar5);
        auVar5 = aesenc(auVar6,auVar6);
        auVar6 = aesenc(auVar7,auVar7);
        auVar7 = aesenc(auVar8,auVar8);
        auVar8 = aesenc(auVar9,auVar9);
        auVar9 = aesenc(auVar10,auVar10);
        auVar2 = aesenc(auVar2,auVar2);
        auVar3 = aesenc(auVar3,auVar3);
        auVar4 = aesenc(auVar4,auVar4);
        auVar5 = aesenc(auVar5,auVar5);
        auVar6 = aesenc(auVar6,auVar6);
        auVar7 = aesenc(auVar7,auVar7);
        auVar8 = aesenc(auVar8,auVar8);
        auVar9 = aesenc(auVar9,auVar9);
        *in_RDX = auVar2._0_8_ ^ auVar6._0_8_ ^ auVar4._0_8_ ^ auVar8._0_8_ ^
                  auVar3._0_8_ ^ auVar7._0_8_ ^ auVar5._0_8_ ^ auVar9._0_8_;
        return;
      }
      auVar4 = aesenc(auVar2 ^ runtime_aeskeysched._16_16_,auVar2 ^ runtime_aeskeysched._16_16_);
      auVar5 = aesenc(auVar2 ^ runtime_aeskeysched._32_16_,auVar2 ^ runtime_aeskeysched._32_16_);
      auVar2 = aesenc(auVar2 ^ runtime_aeskeysched._48_16_,auVar2 ^ runtime_aeskeysched._48_16_);
      auVar5 = *(undefined1 (*) [16])(in_RAX[-2] + in_RCX) ^ auVar5;
      auVar2 = *(undefined1 (*) [16])(in_RAX[-1] + in_RCX) ^ auVar2;
      auVar3 = aesenc(*in_RAX ^ auVar3,*in_RAX ^ auVar3);
      auVar4 = aesenc(in_RAX[1] ^ auVar4,in_RAX[1] ^ auVar4);
      auVar5 = aesenc(auVar5,auVar5);
      auVar6 = aesenc(auVar2,auVar2);
      auVar2 = aesenc(auVar3,auVar3);
      auVar3 = aesenc(auVar4,auVar4);
      auVar4 = aesenc(auVar5,auVar5);
      auVar5 = aesenc(auVar6,auVar6);
      auVar2 = aesenc(auVar2,auVar2);
      auVar3 = aesenc(auVar3,auVar3);
      auVar4 = aesenc(auVar4,auVar4);
      auVar5 = aesenc(auVar5,auVar5);
      *in_RDX = auVar2._0_8_ ^ auVar4._0_8_ ^ auVar3._0_8_ ^ auVar5._0_8_;
      return;
    }
    auVar2 = *in_RAX;
  }
  auVar2 = aesenc(auVar2 ^ auVar3,auVar2 ^ auVar3);
  auVar2 = aesenc(auVar2,auVar2);
  auVar2 = aesenc(auVar2,auVar2);
  *in_RDX = auVar2._0_8_;
  return;
}

