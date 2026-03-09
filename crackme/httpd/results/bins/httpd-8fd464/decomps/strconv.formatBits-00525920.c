
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strconv.formatBits([]uint8 dst, uint64 u, int base, bool neg, bool
   append_, []uint8 d, string s) */

multireturn___uint8_string_ strconv_formatBits(__uint8 dst,uint64 u,int base,bool neg,bool append_)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  uint8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *unaff_RBP;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  uint8 *puVar11;
  long in_FS_OFFSET;
  string sVar12;
  interface___ e;
  runtime_slice old;
  multireturn___uint8_string_ mVar13;
  multireturn___uint8_string_ mVar14;
  __uint8 dst_spill;
  uint64 u_spill;
  uint64 b;
  bool neg_spill;
  bool append__spill;
  
  do {
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: uint8[65] a@[???] */
    puVar3 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) <
        (undefined1 *)((long)register0x00000020 + -0x28)) {
      puVar3 = (undefined1 *)((long)register0x00000020 + -0xa8);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      uVar10 = *(ulong *)((long)register0x00000020 + 0x28);
      if ((void *)(uVar10 - 2) < (void *)0x23) {
        *(undefined8 *)((long)register0x00000020 + -0x51) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x28) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x18) = 0;
        bVar1 = *(byte *)((long)register0x00000020 + 0x30);
        if (bVar1 == 0) {
          uVar7 = *(ulong *)((long)register0x00000020 + 0x20);
        }
        else {
          uVar7 = -*(long *)((long)register0x00000020 + 0x20);
        }
        if (uVar10 == 10) {
          uVar5 = 0x41;
          uVar9 = uVar7;
                    /* Unresolved local var: uint us@[???] */
          while (99 < uVar9) {
            uVar10 = uVar9 % 100;
            if (199 < uVar10 * 2 + 1) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x525e8f;
              runtime_panicIndexU();
            }
            if (0x40 < uVar5 - 1) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x525e85;
              runtime_panicIndex();
            }
            *(char *)((long)register0x00000020 + (uVar5 - 0x52)) =
                 "Maximum Response Code: %#x (%dms), Multicast Address: %s, Suppress Routerside Processing: %t, QRV: %#x, QQIC: %#x (%ds), Number of Source Address: %d (actual: %d), Source Addresses: %shttp2: TLSConfig.CipherSuites is missing an HTTP/2-required AES_128_GCM_SHA256 cipher (need at least one of TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256 or TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256)00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                 [uVar10 * 2 + 0x176];
            if (199 < uVar10 * 2) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x525e79;
              runtime_panicIndexU();
            }
            if (0x40 < uVar5 - 2) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x525e6f;
              runtime_panicIndex();
            }
            *(char *)((long)register0x00000020 + (uVar5 - 0x53)) =
                 "Maximum Response Code: %#x (%dms), Multicast Address: %s, Suppress Routerside Processing: %t, QRV: %#x, QQIC: %#x (%ds), Number of Source Address: %d (actual: %d), Source Addresses: %shttp2: TLSConfig.CipherSuites is missing an HTTP/2-required AES_128_GCM_SHA256 cipher (need at least one of TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256 or TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256)00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                 [uVar10 * 2 + 0x175];
            uVar5 = uVar5 - 2;
            uVar9 = uVar9 / 100;
          }
          if (199 < uVar9 * 2 + 1) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x525e65;
            runtime_panicIndexU();
          }
          uVar10 = uVar5 - 1;
          puVar11 = (uint8 *)0x2ad889;
          if (0x40 < uVar10) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x525e56;
            runtime_panicIndex();
          }
          *(char *)((long)register0x00000020 + (uVar5 - 0x52)) =
               "Maximum Response Code: %#x (%dms), Multicast Address: %s, Suppress Routerside Processing: %t, QRV: %#x, QQIC: %#x (%ds), Number of Source Address: %d (actual: %d), Source Addresses: %shttp2: TLSConfig.CipherSuites is missing an HTTP/2-required AES_128_GCM_SHA256 cipher (need at least one of TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256 or TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256)00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
               [uVar9 * 2 + 0x176];
          uVar7 = uVar10;
          if (9 < uVar9) {
            if (199 < uVar9 << 1) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x525e49;
              runtime_panicIndexU();
            }
            uVar10 = uVar5 - 2;
            if (0x40 < uVar10) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x525e3c;
              runtime_panicIndex();
            }
            *(char *)((long)register0x00000020 + (uVar5 - 0x53)) =
                 "Maximum Response Code: %#x (%dms), Multicast Address: %s, Suppress Routerside Processing: %t, QRV: %#x, QQIC: %#x (%ds), Number of Source Address: %d (actual: %d), Source Addresses: %shttp2: TLSConfig.CipherSuites is missing an HTTP/2-required AES_128_GCM_SHA256 cipher (need at least one of TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256 or TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256)00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                 [uVar9 * 2 + 0x175];
            uVar7 = uVar10;
          }
        }
        else if ((uVar10 & uVar10 - 1) == 0) {
          uVar5 = 0;
          if (uVar10 != 0) {
            for (; (uVar10 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
            }
          }
                    /* Unresolved local var: uint shift@[???]
                       Unresolved local var: uint m@[???] */
          puVar11 = (uint8 *)(uVar5 & 7);
          uVar5 = 0x41;
          for (; uVar10 <= uVar7; uVar7 = uVar7 >> (sbyte)puVar11) {
            uVar9 = uVar7 & uVar10 - 1;
            if (0x23 < uVar9) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x525cff;
              runtime_panicIndexU();
            }
            if (0x40 < uVar5 - 1) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x525cf2;
              runtime_panicIndex();
            }
            *(undefined *)((long)register0x00000020 + (uVar5 - 0x52)) = (&DAT_002a4825)[uVar9];
            uVar5 = uVar5 - 1;
          }
          uVar10 = uVar5 - 1;
          if (0x40 < uVar10) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x525ce5;
            runtime_panicIndex();
          }
          *(undefined *)((long)register0x00000020 + (uVar5 - 0x52)) = (&DAT_002a4825)[uVar7];
        }
        else {
          uVar5 = 0x41;
          while (uVar10 <= uVar7) {
            uVar9 = uVar7 - (uVar7 / uVar10) * uVar10;
            if (0x23 < uVar9) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x525c7d;
              runtime_panicIndexU();
            }
            if (0x40 < uVar5 - 1) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x525c70;
              runtime_panicIndex();
            }
                    /* Unresolved local var: uint64 q@[???] */
            *(undefined *)((long)register0x00000020 + (uVar5 - 0x52)) = (&DAT_002a4825)[uVar9];
            uVar5 = uVar5 - 1;
            uVar7 = uVar7 / uVar10;
          }
          uVar10 = uVar5 - 1;
          puVar11 = &DAT_002a4825;
          bVar2 = (&DAT_002a4825)[uVar7];
          if (0x40 < uVar10) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x525c66;
            runtime_panicIndex();
          }
          *(byte *)((long)register0x00000020 + (uVar5 - 0x52)) = bVar2;
          uVar7 = (ulong)bVar2;
        }
        if (bVar1 != 0) {
          if (0x40 < uVar10 - 1) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x525c59;
            runtime_panicIndex();
          }
          *(undefined1 *)((long)register0x00000020 + (uVar10 - 0x52)) = 0x2d;
          uVar10 = uVar10 - 1;
        }
        if (*(char *)((long)register0x00000020 + 0x31) == '\0') {
          if (0x41 < uVar10) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x525c45;
            runtime_panicSliceB();
          }
          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0;
          uVar5 = (long)(uVar10 - 0x41) >> 0x3f;
          *(runtime_tmpBuf **)((long)register0x00000020 + -0xa0) =
               (runtime_tmpBuf *)((long)register0x00000020 + ((uVar10 & uVar5) - 0x51));
          *(ulong *)((long)register0x00000020 + -0x98) = -(uVar10 - 0x41);
          *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x525bf3;
          sVar12 = runtime_slicebytetostring
                             ((runtime_tmpBuf *)
                              ((long)register0x00000020 + ((uVar10 & uVar5) - 0x51)),
                              (uint8 *)(ulong)bVar1,uVar5);
          mVar14.d.len = sVar12.len;
          *(undefined8 *)((long)register0x00000020 + 0x38) = 0;
          *(undefined8 *)((long)register0x00000020 + 0x40) = 0;
          *(undefined8 *)((long)register0x00000020 + 0x48) = 0;
          *(undefined8 *)((long)register0x00000020 + 0x50) =
               *(undefined8 *)((long)register0x00000020 + -0x90);
          *(int *)((long)register0x00000020 + 0x58) = *(int *)((long)register0x00000020 + -0x88);
          mVar14.d.array = (uint8 *)*(undefined8 *)((long)register0x00000020 + -0x90);
          mVar14.d.cap = *(int *)((long)register0x00000020 + -0x88);
          mVar14.s.len = uVar7;
          mVar14.s.str = puVar11;
          return mVar14;
        }
        if (0x41 < uVar10) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x525c4f;
          runtime_panicSliceB();
        }
        lVar6 = *(long *)((long)register0x00000020 + 0x10);
        old.len = (lVar6 - uVar10) + 0x41;
        *(ulong *)((long)register0x00000020 + -0x60) = old.len;
        lVar8 = uVar10 - 0x41;
        puVar3 = (undefined1 *)((long)register0x00000020 + ((uVar10 & lVar8 >> 0x3f) - 0x51));
        uVar10 = *(ulong *)((long)register0x00000020 + 0x18);
        if (uVar10 < old.len) {
          *(long *)((long)register0x00000020 + -0x68) = lVar8;
          *(undefined1 **)((long)register0x00000020 + -0x10) = puVar3;
          *(undefined **)((long)register0x00000020 + -0xa8) = &DAT_00225720;
          *(runtime__type **)((long)register0x00000020 + -0xa0) =
               *(runtime__type **)((long)register0x00000020 + 8);
          *(long *)((long)register0x00000020 + -0x98) = lVar6;
          *(ulong *)((long)register0x00000020 + -0x90) = uVar10;
          *(ulong *)((long)register0x00000020 + -0x88) = old.len;
          *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x525b2c;
          old.array = (void *)uVar10;
          old.cap = (int)puVar11;
          runtime_growslice(*(runtime__type **)((long)register0x00000020 + 8),old,lVar8);
          puVar11 = *(uint8 **)((long)register0x00000020 + -0x80);
          uVar10 = *(ulong *)((long)register0x00000020 + -0x70);
          lVar6 = *(long *)((long)register0x00000020 + 0x10);
          lVar8 = *(long *)((long)register0x00000020 + -0x68);
          puVar3 = *(undefined1 **)((long)register0x00000020 + -0x10);
        }
        else {
          puVar11 = *(uint8 **)((long)register0x00000020 + 8);
        }
        *(ulong *)((long)register0x00000020 + -0x68) = uVar10;
        *(uint8 **)((long)register0x00000020 + -0x10) = puVar11;
        puVar4 = puVar11 + lVar6;
        *(uint8 **)((long)register0x00000020 + -0xa8) = puVar4;
        *(undefined1 **)((long)register0x00000020 + -0xa0) = puVar3;
        lVar8 = -lVar8;
        *(long *)((long)register0x00000020 + -0x98) = lVar8;
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x525b78;
        runtime_memmove();
        *(undefined8 *)((long)register0x00000020 + 0x38) =
             *(undefined8 *)((long)register0x00000020 + -0x10);
        *(undefined8 *)((long)register0x00000020 + 0x40) =
             *(undefined8 *)((long)register0x00000020 + -0x60);
        *(undefined8 *)((long)register0x00000020 + 0x48) =
             *(undefined8 *)((long)register0x00000020 + -0x68);
        *(undefined8 *)((long)register0x00000020 + 0x50) = 0;
        *(undefined8 *)((long)register0x00000020 + 0x58) = 0;
        mVar13.d.len = uVar10;
        mVar13.d.array = (uint8 *)*(undefined8 *)((long)register0x00000020 + -0x68);
        mVar13.d.cap = (int)puVar4;
        mVar13.s.len = lVar8;
        mVar13.s.str = puVar11;
        return mVar13;
      }
      *(undefined **)((long)register0x00000020 + -0xa8) = &DAT_00225520;
      *(undefined1 **)((long)register0x00000020 + -0xa0) = strconv__stmp_19;
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x525eab;
      e.data = (void *)(uVar10 - 2);
      e._type = (runtime__type *)strconv__stmp_19;
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar3 + -8) = 0x525eb1;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar3;
  } while( true );
}

