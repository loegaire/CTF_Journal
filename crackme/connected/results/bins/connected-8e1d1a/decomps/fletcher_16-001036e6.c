
/* fletcher_16(unsigned char const*, unsigned long) */

uint fletcher_16(uchar *param_1,ulong param_2)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    uVar1 = 0;
    uVar3 = 0;
  }
  else {
    pbVar2 = param_1 + param_2;
    uVar1 = 0;
    uVar3 = 0;
    do {
      uVar3 = (*param_1 + uVar3) % 0xff;
      uVar1 = (uVar1 + uVar3) % 0xff;
      param_1 = param_1 + 1;
    } while (param_1 != pbVar2);
  }
  return uVar1 << 8 | uVar3;
}

