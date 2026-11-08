int64_t __stdcall fcn.0001159e(int64_t arg4,int64_t arg3,int64_t arg5)
{
    int iVar1;
    int64_t iVar2;
    uint32_t uStack_38;
    uint32_t uStack_34;
    uint8_t *puStack_30;
    uchar uStack_28;
    uchar uStack_27;
    uchar uStack_26;
    uchar uStack_25;
    uchar uStack_24;
    uchar uStack_23;
    uchar uStack_22;
    uchar uStack_21;
    uint8_t *puStack_20;
    uint8_t *puStack_18;
    uint8_t *puStack_10;
    uStack_28 = 0x2b;
    uStack_27 = 6;
    uStack_26 = 1;
    uStack_25 = 4;
    uStack_24 = 1;
    uStack_23 = 0x8a;
    uStack_22 = 0x39;
    uStack_21 = 1;
    puStack_18 = arg4 + (arg3 & 0xffffffffU);
    puStack_10 = NULL;
    puStack_30 = arg4;
    puStack_20 = arg4;
    do {
        if (puStack_18 + -8 < puStack_20) {
code_r0x0001164f:
            if ((puStack_10 != NULL) && (puStack_30 = puStack_10 + 8, puStack_30 < puStack_18)) {
                if (*puStack_30 == 1) {
                    puStack_30 = puStack_10 + 0xb;
                }
                if (puStack_30 < puStack_18) {
                    uStack_34 = *puStack_30;
                    puStack_30 = puStack_30 + 1;
                    if (uStack_34 == 4) {
                        uStack_38 = 0;
                        iVar2 = func_0x0000fe4e(puStack_30,puStack_18,&uStack_38);
                        if ((iVar2 != 0) && (iVar2 + uStack_38 <= puStack_18)) {
                            *arg5 = uStack_38;
                            return iVar2;
                        }
                        return 0;
                    }
                }
            }
            return 0;
        }
        iVar1 = func_0x0001177e(puStack_20,&uStack_28,8);
        if (iVar1 == 0) {
            puStack_10 = puStack_20;
            goto code_r0x0001164f;
        }
        puStack_20 = puStack_20 + 1;
    } while( true );
}
int64_t __stdcall fcn.0000ff3a(int64_t arg4,int64_t arg3,int64_t arg5,int64_t arg6)
{
    uint8_t *puVar1;
    int64_t iVar2;
    uint8_t *puStack_48;
    uint32_t uStack_40;
    uint32_t uStack_3c;
    uint32_t uStack_38;
    uint32_t uStack_34;
    uint32_t uStack_30;
    uint32_t uStack_2c;
    uint8_t *puStack_28;
    uint8_t *puStack_20;
    uint32_t uStack_18;
    uint32_t uStack_14;
    uint32_t uStack_10;
    uint32_t uStack_c;
    puStack_28 = arg4 + (arg3 & 0xffffffffU);
    if (arg4 < puStack_28) {
        uStack_18 = *arg4;
        if (uStack_18 == 0x30) {
            uStack_40 = 0;
            puStack_48 = func_0x0000fe4e(arg4 + 1,puStack_28,&uStack_40);
            if ((puStack_48 == NULL) || (puStack_28 < puStack_48 + uStack_40)) {
                return 0;
            }
            puStack_28 = puStack_48 + uStack_40;
            while( true ) {
                if (puStack_28 <= puStack_48) {
                    return 0;
                }
                uStack_14 = *puStack_48;
                if (uStack_14 != 0x30) {
                    return 0;
                }
                uStack_3c = 0;
                puVar1 = func_0x0000fe4e(puStack_48 + 1,puStack_28,&uStack_3c);
                if ((puVar1 == NULL) || (puStack_28 < puVar1 + uStack_3c)) {
                    return 0;
                }
                puStack_20 = puVar1 + uStack_3c;
                uStack_10 = *puVar1;
                if (uStack_10 != 2) {
                    return 0;
                }
                uStack_38 = 0;
                puStack_48 = func_0x0000fe4e(puVar1 + 1,puStack_20,&uStack_38);
                if ((puStack_48 == NULL) || (puStack_20 < puStack_48 + uStack_38)) break;
                uStack_30 = 0;
                for (uStack_34 = 0; uStack_34 < uStack_38; uStack_34 = uStack_34 + 1) {
                    uStack_30 = uStack_30 << 8 | *puStack_48;
                    puStack_48 = puStack_48 + 1;
                }
                uStack_c = *puStack_48;
                if (uStack_c != 4) {
                    return 0;
                }
                uStack_2c = 0;
                iVar2 = func_0x0000fe4e(puStack_48 + 1,puStack_20,&uStack_2c);
                if ((iVar2 == 0) || (puStack_20 < iVar2 + uStack_2c)) {
                    return 0;
                }
                if (uStack_30 == arg5) {
                    *arg6 = uStack_2c;
                    return iVar2;
                }
                puStack_48 = puStack_20;
            }
            return 0;
        }
    }
    return 0;
}
void __stdcall fcn.000104b2(int64_t arg4,int64_t arg3,int64_t arg5,int64_t arg6)
{
    int64_t iStack_138;
    uint64_t uStack_130;
    ushort uStack_128;
    ushort uStack_126;
    ushort uStack_124;
    ushort uStack_122;
    uint32_t uStack_120;
    ulong uStack_118;
    uint auStack_108 [66];
    iStack_138 = 0;
    uStack_118 = 0;
    func_0x00009f6e(&iStack_138,0);
    if (iStack_138 != 0) {
        uStack_130 = arg5 & 0xffffffff;
        if (0x80 < uStack_130) {
            uStack_130 = 0x80;
        }
        func_0x00011876(auStack_108,arg3,uStack_130);
        *(auStack_108 + uStack_130) = arg4;
        uStack_120 = uStack_130 + 4;
        uStack_128 = 0x4d;
        uStack_126 = 0x44;
        uStack_124 = 0x35;
        uStack_122 = 0;
        *(iStack_138 + 0x299) = &uStack_128;
        *(iStack_138 + 0x2a1) = auStack_108;
        *(iStack_138 + 0x2a9) = uStack_120;
        *(iStack_138 + 0x2b1) = arg6;
        *(iStack_138 + 0x2b9) = 0x10;
        *(iStack_138 + 0x1d1) = 0x4584b64f28ff5207;
        (**(iStack_138 + 0xa9))(0);
        *(iStack_138 + 0x1d1) = 0x528b8bb2eeaa7ee9;
        (**(iStack_138 + 0xa9))(0);
        *(iStack_138 + 0x1d1) = 0x5491069e9ccac0a9;
        (**(iStack_138 + 0xa9))(0);
        *(iStack_138 + 0x1d1) = 0x499dabab1eaa7eeb;
        (**(iStack_138 + 0xa9))(0);
        *(iStack_138 + 0x1d1) = 0x53ebd1c8661afaea;
        (**(iStack_138 + 0xa9))(0);
        *(iStack_138 + 0x1d1) = 0x14c3d3d387721f3;
        (**(iStack_138 + 0xa9))(0);
    }
    return;
}
void __stdcall fcn.0001036a(int64_t arg4,int64_t arg3,int64_t arg5,int64_t arg6)
{
    uint8_t uVar1;
    uint uStack_28;
    uint uStack_24;
    uVar1 = 0;
    for (uStack_24 = 0; uStack_24 < arg3; uStack_24 = uStack_24 + 1) {
        uVar1 = uVar1 * '\x1f' + *(arg4 + uStack_24);
    }
    for (uStack_28 = 0; uStack_28 < arg6; uStack_28 = uStack_28 + 1) {
        uVar1 = uVar1 * 'm' + 0x39;
        *(arg5 + uStack_28) = *(arg5 + uStack_28) ^ uVar1;
    }
    return;
}
