
/* WARNING: Unknown calling convention */

void strconv_ryuDigits32(strconv_decimalSlice *d,uint32 lower,uint32 central,uint32 upper,bool c0,
                        bool cup,int endindex)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  strconv_decimalSlice *d_spill;
  uint32 lower_spill;
  uint32 central_spill;
  uint32 upper_spill;
  bool c0_spill;
  bool cup_spill;
  int endindex_spill;
  
                    /* Unresolved local var: int trimmed@[???]
                       Unresolved local var: int cNextDigit@[???]
                       Unresolved local var: uint32 v@[???]
                       Unresolved local var: int n@[???] */
  if (upper_spill == 0) {
    d_spill->dp = endindex_spill + 1;
    return;
  }
  lVar2 = 0;
  uVar3 = 0;
  while (upper_spill != 0) {
    uVar8 = lower_spill + 9;
    lower_spill = uVar8 / 10;
    uVar7 = central_spill % 10;
    uVar8 = uVar8 / 10;
    if (upper_spill / 10 < uVar8) break;
    uVar4 = central_spill / 10 + 1;
    uVar1 = central_spill / 10;
    if ((uVar8 == uVar4) && (central_spill / 10 < upper_spill / 10)) {
      uVar7 = 0;
      cup_spill = false;
      uVar1 = uVar4;
    }
    central_spill = uVar1;
    c0_spill = c0_spill != false && uVar3 == 0;
                    /* Unresolved local var: uint32 c@[???]
                       Unresolved local var: uint32 cdigit@[???] */
    lVar2 = lVar2 + 1;
    uVar3 = uVar7;
    upper_spill = upper_spill / 10;
  }
  if (lVar2 < 1) goto LAB_00525240;
  if (uVar3 < 6) {
    if (uVar3 == 5) {
      if (c0_spill == false) goto LAB_00525226;
      if (c0_spill != false) {
        cup_spill = (bool)((byte)central_spill & 1);
        goto LAB_00525240;
      }
    }
    cup_spill = false;
  }
  else {
LAB_00525226:
    cup_spill = true;
  }
LAB_00525240:
  if ((central_spill < upper_spill) && (cup_spill != false)) {
    central_spill = central_spill + 1;
  }
  uVar5 = endindex_spill - lVar2;
  uVar6 = uVar5;
  while( true ) {
    if ((long)uVar6 <= d_spill->nd) {
      if (uVar6 == d_spill->nd) {
        if ((ulong)(d_spill->d).len <= uVar6) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        (d_spill->d).array[uVar6] = (char)central_spill + 0x30;
      }
      d_spill->nd = uVar5 + 1;
      d_spill->dp = uVar5 + lVar2 + 1;
      return;
    }
    uVar9 = (ulong)((central_spill % 100) * 2 + 1);
    if (199 < uVar9) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if ((ulong)(d_spill->d).len <= uVar6) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    (d_spill->d).array[uVar6] =
         "Maximum Response Code: %#x (%dms), Multicast Address: %s, Suppress Routerside Processing: %t, QRV: %#x, QQIC: %#x (%ds), Number of Source Address: %d (actual: %d), Source Addresses: %shttp2: TLSConfig.CipherSuites is missing an HTTP/2-required AES_128_GCM_SHA256 cipher (need at least one of TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256 or TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256)00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
         [uVar9 + 0x175];
    uVar9 = (ulong)((central_spill % 100) * 2);
    if (199 < uVar9) break;
    if ((ulong)(d_spill->d).len <= uVar6 - 1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
                    /* Unresolved local var: uint32 v2@[???] */
    (d_spill->d).array[uVar6 - 1] =
         "Maximum Response Code: %#x (%dms), Multicast Address: %s, Suppress Routerside Processing: %t, QRV: %#x, QQIC: %#x (%ds), Number of Source Address: %d (actual: %d), Source Addresses: %shttp2: TLSConfig.CipherSuites is missing an HTTP/2-required AES_128_GCM_SHA256 cipher (need at least one of TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256 or TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256)00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
         [uVar9 + 0x175];
    uVar6 = uVar6 - 2;
    central_spill = central_spill / 100;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

