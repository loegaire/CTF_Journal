
/* void std::__detail::__to_chars_10_impl<unsigned int>(char*, unsigned int, unsigned int) */

void std::__detail::__to_chars_10_impl<unsigned_int>(char *param_1,uint param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  char local_d8 [216];
  
  builtin_strncpy(local_d8,
                  "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                  ,0xc9);
  uVar5 = param_2 - 1;
  uVar2 = param_3;
  if (99 < param_3) {
    do {
      param_3 = uVar2 / 100;
      uVar3 = (uVar2 % 100) * 2;
      param_1[uVar5] = local_d8[uVar3 + 1];
      param_1[uVar5 - 1] = local_d8[uVar3];
      uVar5 = uVar5 - 2;
      bVar1 = 9999 < uVar2;
      uVar2 = param_3;
    } while (bVar1);
  }
  cVar4 = (char)param_3 + '0';
  if (9 < param_3) {
    param_1[1] = local_d8[param_3 * 2 + 1];
    cVar4 = local_d8[param_3 * 2];
  }
  *param_1 = cVar4;
  return;
}

