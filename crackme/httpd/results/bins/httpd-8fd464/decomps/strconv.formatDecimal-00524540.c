
/* WARNING: Unknown calling convention */

void strconv_formatDecimal(strconv_decimalSlice *d,uint64 m,bool trunc,bool roundUp,int prec)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  strconv_decimalSlice *d_spill;
  uint64 m_spill;
  bool trunc_spill;
  bool roundUp_spill;
  uint n;
  
                    /* Unresolved local var: uint64 max@[???]
                       Unresolved local var: int trimmed@[???]
                       Unresolved local var: uint64 v@[???] */
  if (0x13 < n) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  uVar3 = (uint)roundUp_spill;
  lVar2 = 0;
  while (strconv_uint64pow10[n] <= m_spill) {
    uVar4 = m_spill % 10;
    if (uVar4 < 6) {
      if (uVar4 < 5) {
        uVar3 = 0;
      }
      else if (trunc_spill == false) {
        uVar3 = (uint)(m_spill / 10) & 1;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 1;
    }
                    /* Unresolved local var: uint64 b@[???] */
    lVar2 = lVar2 + 1;
    trunc_spill = (bool)(trunc_spill | uVar4 != 0);
    m_spill = m_spill / 10;
  }
  if ((char)uVar3 != '\0') {
    m_spill = m_spill + 1;
  }
  if (strconv_uint64pow10[n] <= m_spill) {
    m_spill = m_spill / 10;
    lVar2 = lVar2 + 1;
  }
  d_spill->nd = n;
  while( true ) {
    if (m_spill < 100) {
      if (m_spill != 0) {
        if (199 < m_spill * 2 + 1) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndexU();
        }
        if ((ulong)(d_spill->d).len <= n - 1) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndexU();
        }
        (d_spill->d).array[n - 1] =
             "Maximum Response Code: %#x (%dms), Multicast Address: %s, Suppress Routerside Processing: %t, QRV: %#x, QQIC: %#x (%ds), Number of Source Address: %d (actual: %d), Source Addresses: %shttp2: TLSConfig.CipherSuites is missing an HTTP/2-required AES_128_GCM_SHA256 cipher (need at least one of TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256 or TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256)00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
             [m_spill * 2 + 0x176];
        n = n - 1;
      }
      if (9 < m_spill) {
        if (199 < m_spill << 1) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndexU();
        }
        if ((ulong)(d_spill->d).len <= n - 1) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndexU();
        }
        (d_spill->d).array[n - 1] =
             "Maximum Response Code: %#x (%dms), Multicast Address: %s, Suppress Routerside Processing: %t, QRV: %#x, QQIC: %#x (%ds), Number of Source Address: %d (actual: %d), Source Addresses: %shttp2: TLSConfig.CipherSuites is missing an HTTP/2-required AES_128_GCM_SHA256 cipher (need at least one of TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256 or TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256)00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
             [m_spill * 2 + 0x175];
      }
      while( true ) {
        lVar1 = d_spill->nd;
        if ((ulong)(d_spill->d).len <= lVar1 - 1U) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        if ((d_spill->d).array[lVar1 + -1] != 0x30) break;
        d_spill->nd = lVar1 - 1U;
        lVar2 = lVar2 + 1;
      }
      d_spill->dp = lVar2 + lVar1;
      return;
    }
    if (m_spill >> 0x20 == 0) {
      uVar4 = (m_spill & 0xffffffff) / 100;
      uVar5 = (ulong)(uint)((int)m_spill + (int)uVar4 * -100);
    }
    else {
      uVar4 = m_spill / 100;
      uVar5 = m_spill % 100;
    }
    if (199 < uVar5 * 2 + 1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
    if ((ulong)(d_spill->d).len <= n - 1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
    (d_spill->d).array[n - 1] =
         "Maximum Response Code: %#x (%dms), Multicast Address: %s, Suppress Routerside Processing: %t, QRV: %#x, QQIC: %#x (%ds), Number of Source Address: %d (actual: %d), Source Addresses: %shttp2: TLSConfig.CipherSuites is missing an HTTP/2-required AES_128_GCM_SHA256 cipher (need at least one of TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256 or TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256)00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
         [uVar5 * 2 + 0x176];
    if (199 < uVar5 << 1) break;
    if ((ulong)(d_spill->d).len <= n - 2) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
                    /* Unresolved local var: uint64 v1@[???]
                       Unresolved local var: uint64 v2@[???] */
    (d_spill->d).array[n - 2] =
         "Maximum Response Code: %#x (%dms), Multicast Address: %s, Suppress Routerside Processing: %t, QRV: %#x, QQIC: %#x (%ds), Number of Source Address: %d (actual: %d), Source Addresses: %shttp2: TLSConfig.CipherSuites is missing an HTTP/2-required AES_128_GCM_SHA256 cipher (need at least one of TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256 or TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256)00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
         [uVar5 * 2 + 0x175];
    m_spill = uVar4;
    n = n - 2;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndexU();
}

