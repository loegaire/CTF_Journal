
/* adler_32(unsigned char const*, unsigned long) */

int adler_32(uchar *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  
  if (param_2 == 0) {
    uVar2 = 0;
    uVar1 = 1;
  }
  else {
    pbVar3 = param_1 + param_2;
    uVar2 = 0;
    uVar1 = 1;
    do {
      uVar1 = (*param_1 + uVar1) % 0xfff1;
      uVar2 = (uVar2 + uVar1) % 0xfff1;
      param_1 = param_1 + 1;
    } while (param_1 != pbVar3);
  }
  return uVar1 + uVar2 * 0x10000;
}

