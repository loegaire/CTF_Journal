
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strconv.FormatInt(int64 i, int base, string ~r2) */

string strconv_FormatInt(int64 i,int base)

{
  ulong uVar1;
  uint8 *puVar2;
  int in_RCX;
  int in_RSI;
  uint64 in_RDI;
  undefined1 in_R8B;
  undefined1 in_R9B;
  long in_FS_OFFSET;
  string sVar3;
  string sVar4;
  __uint8 dst;
  multireturn___uint8_string_ mVar5;
  int64 i_spill;
  int base_spill;
  uint8 *local_18;
  
                    /* Unresolved local var: string s@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((99 < (ulong)i_spill) || (base_spill != 10)) {
    dst.len = base_spill;
    dst.array = (uint8 *)i_spill;
    dst.cap = in_RCX;
    mVar5 = strconv_formatBits(dst,in_RDI,in_RSI,(bool)in_R8B,(bool)in_R9B);
    sVar4.len = mVar5.d.len;
    sVar4.str = local_18;
    return sVar4;
  }
  if (i_spill < 10) {
    if (i_spill + 1U < (ulong)i_spill) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    puVar2 = &DAT_002a4825 + i_spill;
  }
  else {
    uVar1 = i_spill * 2 + 2;
    if (200 < uVar1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAlen();
    }
    if (uVar1 < (ulong)(i_spill << 1)) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    puVar2 = (uint8 *)(
                      "Maximum Response Code: %#x (%dms), Multicast Address: %s, Suppress Routerside Processing: %t, QRV: %#x, QQIC: %#x (%ds), Number of Source Address: %d (actual: %d), Source Addresses: %shttp2: TLSConfig.CipherSuites is missing an HTTP/2-required AES_128_GCM_SHA256 cipher (need at least one of TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256 or TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256)00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                      + i_spill * 2 + 0x175);
  }
  sVar3.len = 10;
  sVar3.str = puVar2;
  return sVar3;
}

