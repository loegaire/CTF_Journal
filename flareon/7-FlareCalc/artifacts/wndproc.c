size: 9417

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_bp_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h
//WARNING: Variable defined which should be unmapped: var_bp_38h

void fcn.140003b20(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t *puVar1;
    int iVar2;
    ulong *******pppppppuVar3;
    code *pcVar4;
    uint16_t *puVar5;
    ulong uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint16_t uVar13;
    uint64_t uVar14;
    uint32_t uVar15;
    uint64_t uVar16;
    uint16_t **ppuVar17;
    uchar *puVar18;
    ushort *puVar19;
    ulong uVar20;
    int64_t iVar21;
    ulong *puVar22;
    float8 fVar23;
    int64_t var_8h_2;
    int64_t var_10h_2;
    int64_t var_18h_2;
    int64_t var_78h_2;
    int64_t var_80h_2;
    int64_t var_88h;
    int64_t var_90h;
    int64_t var_98h;
    int64_t var_a0h;
    int64_t var_a8h;
    int64_t var_b0h;
    int64_t var_b8h;
    int64_t var_c0h;
    int64_t var_d0h;
    int64_t var_d8h;
    int64_t var_e0h;
    int64_t var_f0h;
    int64_t var_f8h;
    int64_t var_100h;
    int64_t var_118h;
    int64_t var_138h;
    int64_t var_158h;
    uchar auStack_2b8 [32];
    ulong uStack_298;
    int iStack_290;
    uint uStack_288;
    uint uStack_280;
    uint64_t uStack_278;
    int64_t iStack_270;
    uint64_t uStack_268;
    uint64_t uStack_260;
    uint uStack_258;
    char16_t *pcStack_250;
    uint32_t uStack_248;
    ulong uStack_238;
    int aiStack_230 [2];
    ulong uStack_228;
    uint uStack_220;
    ulong uStack_218;
    uint uStack_210;
    ulong uStack_208;
    uint uStack_200;
    char32_t *pcStack_1f8;
    uint uStack_1f0;
    char32_t *pcStack_1e8;
    uint uStack_1e0;
    char32_t *pcStack_1d8;
    uint uStack_1d0;
    char32_t *pcStack_1c8;
    uint uStack_1c0;
    char32_t *pcStack_1b8;
    uint uStack_1b0;
    char32_t *pcStack_1a8;
    uint uStack_1a0;
    char32_t *pcStack_198;
    uint uStack_190;
    char32_t *pcStack_188;
    uint uStack_180;
    char32_t *pcStack_178;
    uint uStack_170;
    char32_t *pcStack_168;
    uint uStack_160;
    char32_t *pcStack_158;
    uint uStack_150;
    char32_t *pcStack_148;
    uint uStack_140;
    char32_t *pcStack_138;
    uint uStack_130;
    ulong uStack_128;
    uint uStack_120;
    char32_t *pcStack_118;
    uint uStack_110;
    char32_t *pcStack_108;
    uint uStack_100;
    ulong ******ppppppuStack_f8;
    ulong uStack_f0;
    uint64_t uStack_e8;
    uint64_t uStack_e0;
    ulong ******ppppppuStack_d8;
    ulong uStack_d0;
    uint64_t uStack_c8;
    uint64_t uStack_c0;
    uint16_t *puStack_b8;
    uint16_t *puStack_b0;
    uint16_t *puStack_a8;
    uint16_t *puStack_a0;
    uint16_t *puStack_98;
    uint16_t *puStack_90;
    int64_t var_80h;
    int64_t var_78h;
    int64_t var_bp_70h;
    int64_t var_bp_68h;
    int64_t var_bp_60h;
    int64_t var_bp_58h;
    int64_t var_bp_50h;
    int64_t var_bp_48h;
    int64_t var_bp_40h;
    int64_t var_bp_38h;
    int64_t var_bp_30h;
    int64_t var_bp_28h;
    int64_t var_bp_20h;
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    
    var_bp_58h = *0x1400e2040 ^ auStack_2b8;
    uVar7 = arg2;
    if (uVar7 == (*0x1400e9228 + 0x24ac062aU ^ 0x24ac0660)) {
        uStack_248 = 0x32e;
        uVar15 = 0;
        uVar7 = uVar15;
        do {
            uStack_248 = uStack_248 ^ uVar7;
            uVar7 = uVar7 + 1;
        } while (uVar7 < 6);
        fcn.140070480();
        uStack_248 = 0x22;
        uVar7 = uVar15;
        do {
            uStack_248 = uStack_248 ^ uVar7;
            uVar7 = uVar7 + 1;
        } while (uVar7 < 5);
        if ((arg4 == 0) ||
           (uVar14 = *arg4, fcn.14005dc50(), uVar14 != (*0x1400e9228 + 0x2ef3157b536cabebU ^ 0x2ef3157b909d8160)))
        goto code_r0x000140005f82;
        iVar10 = *(arg4 + 0x10);
        *0x1400e8f20 = str._________________[0];
        *0x1400e8f21 = str._________________[1];
        *0x1400e8f22 = str._________________[2];
        *0x1400e8f23 = str._________________[3];
        *0x1400e8f24 = str._________________[4];
        *0x1400e8f25 = str._________________[5];
        *0x1400e8f26 = str._________________[6];
        *0x1400e8f27 = str._________________[7];
        *0x1400e8f28 = str._________________[8];
        *0x1400e8f29 = str._________________[9];
        *0x1400e8f2a = str._________________[10];
        *0x1400e8f2b = str._________________[0xb];
        *0x1400e8f2c = str._________________[0xc];
        *0x1400e8f2d = str._________________[0xd];
        *0x1400e8f2e = str._________________[0xe];
        *0x1400e8f2f = str._________________[0xf];
        fcn.1400724a0();
        fcn.1400b72d0();
        iVar21 = -1;
        do {
            iVar21 = iVar21 + 1;
        } while (*(iVar10 + iVar21) != '\0');
        fcn.140098210();
        iVar2 = iVar21;
        if (0x78 < iVar2) {
            iVar2 = 0x78;
        }
        iVar21 = iVar2;
        fcn.1400d2fa0(0x400e8f30,iVar10,iVar2);
        fcn.140045de0();
        uVar20 = str._________________._8_8_;
        uVar7 = uVar15;
        do {
            uVar7 = uVar7 + 1;
        } while (uVar7 < 0xc);
        uStack_248 = 0x303;
        uVar7 = uVar15;
        do {
            uStack_248 = uStack_248 ^ uVar7;
            uVar7 = uVar7 + 1;
        } while (uVar7 < 9);
        *(iVar21 + 0x1400e8f30) = str._________________._0_8_;
        *(iVar21 + 0x1400e8f38) = uVar20;
        fcn.140052ad0();
        fcn.140052ad0();
        fcn.140063c50();
        if (iVar21 + 0x20U < 0x100) {
            *(iVar21 + 0x1400e8f40) = 0;
            fcn.14001a770();
            fcn.140031800();
            uVar7 = uVar15;
            do {
                uVar7 = uVar7 + 1;
                uVar8 = uVar15;
            } while (uVar7 < 0xc);
            do {
                uVar8 = uVar8 + 1;
            } while (uVar8 < 8);
            uStack_248 = 0x28a;
            uVar7 = uVar15;
            do {
                uStack_248 = uStack_248 ^ uVar7;
                uVar7 = uVar7 + 1;
            } while (uVar7 < 10);
            *0x1400e8ec0 = 0;
            *0x1400e8f10 = iVar2 + 0x20;
            fcn.1400afaf0();
            *0x1400e8f00 = 1;
            uStack_248 = 0x1dc;
            uVar7 = uVar15;
            do {
                uStack_248 = uStack_248 ^ uVar7;
                uVar7 = uVar7 + 1;
            } while (uVar7 < 3);
            (*_sym.imp.USER32.dll_SetTimer)(arg1,3,0x96,0);
            uVar7 = uVar15;
            do {
                uVar7 = uVar7 + 1;
                uVar8 = uVar15;
            } while (uVar7 < 0xd);
            do {
                uVar8 = uVar8 + 1;
            } while (uVar8 < 10);
            uStack_248 = 0x26;
            do {
                uStack_248 = uStack_248 ^ uVar15;
                uVar15 = uVar15 + 1;
            } while (uVar15 < 0xb);
            goto code_r0x000140005f82;
        }
        goto code_r0x000140005fad;
    }
    if (uVar7 == 1) {
        uStack_268 = (*_sym.imp.KERNEL32.dll_GetModuleHandleW)(0);
        uVar16 = 0;
        uStack_260 = 0;
        iStack_270 = 100;
        uStack_280 = 0x28;
        uStack_288 = 0x104;
        iStack_290 = 10;
        uStack_298._0_4_ = 10;
        uStack_278 = arg1;
        *0x1400e9230 = (*_sym.imp.USER32.dll_CreateWindowExW)(0x200,L"EDIT",0x1400ddbb0,0x50000802);
        uVar14 = uVar16;
        do {
            uVar7 = uVar14 + 1;
            uVar14 = uVar7;
        } while (uVar7 < 0xd);
        uStack_248 = 0x3e;
        uVar14 = uVar16;
        do {
            uStack_248 = uStack_248 ^ uVar14;
            uVar7 = uVar14 + 1;
            uVar14 = uVar7;
        } while (uVar7 < 0xc);
        pcStack_250 = L"Arial";
        uStack_258 = 0;
        uStack_260 = uStack_260 & 0xffffffff00000000;
        uStack_268 = uStack_268 & 0xffffffff00000000;
        iStack_270 = CONCAT44(iStack_270._4_4_,4);
        uStack_278 = uStack_278 & 0xffffffff00000000;
        uStack_280 = 0;
        uStack_288 = 0;
        iStack_290 = 0;
        uStack_298 = uStack_298._4_4_ << 0x20;
        uVar20 = (*_sym.imp.GDI32.dll_CreateFontW)(0x1c,0,0,0);
        (*_sym.imp.USER32.dll_SendMessageW)(*0x1400e9230,0x30,uVar20,1);
        uStack_248 = 0x4a;
        uVar14 = uVar16;
        do {
            uStack_248 = uStack_248 ^ uVar14;
            uVar7 = uVar14 + 1;
            uVar14 = uVar7;
        } while (uVar7 < 6);
        fcn.14006c4e0();
        uStack_238 = 0x1400ddbd8;
        aiStack_230[0] = 300;
        uStack_228 = 0x1400ddbe0;
        uStack_220 = 0x12d;
        uStack_218 = 0x1400ddbe8;
        uStack_210 = 0x12e;
        uStack_208 = 0x1400ddbf0;
        uStack_200 = 0x12f;
        pcStack_1f8 = L"789/456*123-C=+";
        uStack_1f0 = 0xcf;
        pcStack_1e8 = L"89/456*123-C=+";
        uStack_1e0 = 0xd0;
        pcStack_1d8 = L"9/456*123-C=+";
        uStack_1d0 = 0xd1;
        pcStack_1c8 = L"/456*123-C=+";
        uStack_1c0 = 0xd5;
        pcStack_1b8 = L"456*123-C=+";
        uStack_1b0 = 0xcc;
        pcStack_1a8 = L"56*123-C=+";
        uStack_1a0 = 0xcd;
        pcStack_198 = L"6*123-C=+";
        uStack_190 = 0xce;
        pcStack_188 = L"*123-C=+";
        uStack_180 = 0xd4;
        pcStack_178 = L"123-C=+";
        uStack_170 = 0xc9;
        pcStack_168 = L"23-C=+";
        uStack_160 = 0xca;
        pcStack_158 = L"3-C=+";
        uStack_150 = 0xcb;
        pcStack_148 = L"-C=+";
        uStack_140 = 0xd3;
        pcStack_138 = L"C=+";
        uStack_130 = 0xd7;
        uStack_128 = 0x1400ddbb0;
        uStack_120 = 200;
        pcStack_118 = L"=+";
        uStack_110 = 0xd6;
        pcStack_108 = L"+";
        uStack_100 = 0xd2;
        puVar22 = &uStack_238;
        uVar14 = uVar16;
        do {
            uVar12 = uVar16;
            do {
                uVar7 = uVar12 + 1;
                uVar12 = uVar7;
            } while (uVar7 < 4);
            uVar12 = uVar16;
            do {
                uVar7 = uVar12 + 1;
                uVar12 = uVar7;
            } while (uVar7 < 0xf);
            uStack_248 = 0x2b4;
            uVar12 = uVar16;
            do {
                uStack_248 = uStack_248 ^ uVar12;
                uVar7 = uVar12 + 1;
                uVar12 = uVar7;
            } while (uVar7 < 7);
            fcn.14000fee0();
            uStack_248 = 0x3b;
            uVar12 = uVar16;
            do {
                uStack_248 = uStack_248 ^ uVar12;
                uVar7 = uVar12 + 1;
                uVar12 = uVar7;
            } while (uVar7 < 8);
            fcn.140042aa0();
            fcn.14007a010();
            fcn.14002f930();
            uStack_268 = (*_sym.imp.KERNEL32.dll_GetModuleHandleW)(0);
            iStack_270 = *(puVar22 + 1);
            iStack_290 = (uVar14 >> 2) * 0x37 + 0x3c;
            uStack_260 = 0;
            uStack_280 = 0x32;
            uStack_288 = 0x3c;
            uStack_278 = arg1;
            uStack_298._0_4_ = (uVar14 & 3) * 0x41 + 10;
            uVar20 = (*_sym.imp.USER32.dll_CreateWindowExW)(0,L"BUTTON",*puVar22,0x50000000);
            uStack_248 = 0x153;
            uVar12 = uVar16;
            do {
                uStack_248 = uStack_248 ^ uVar12;
                uVar7 = uVar12 + 1;
                uVar12 = uVar7;
            } while (uVar7 < 0xe);
            pcStack_250 = L"Arial";
            uStack_258 = 0;
            uStack_260 = uStack_260 & 0xffffffff00000000;
            uStack_268 = uStack_268 & 0xffffffff00000000;
            iStack_270 = CONCAT44(iStack_270._4_4_,4);
            uStack_278 = uStack_278 & 0xffffffff00000000;
            uStack_280 = 0;
            uStack_288 = 0;
            iStack_290 = 0;
            uStack_298 = CONCAT44(uStack_298._4_4_,700);
            uVar6 = (*_sym.imp.GDI32.dll_CreateFontW)(0x10,0,0,0);
            (*_sym.imp.USER32.dll_SendMessageW)(uVar20,0x30,uVar6,1);
            fcn.1400940f0();
            fcn.14006ec80();
            uStack_248 = 0x4a;
            uVar12 = uVar16;
            do {
                uStack_248 = uStack_248 ^ uVar12;
                uVar7 = uVar12 + 1;
                uVar12 = uVar7;
            } while (uVar7 < 10);
            uVar7 = uVar14 + 1;
            uVar14 = uVar7;
            puVar22 = puVar22 + 2;
        } while (uVar7 < 0x14);
        goto code_r0x000140005f82;
    }
    if (uVar7 == 2) {
        (*_sym.imp.USER32.dll_PostQuitMessage)(0);
        fcn.1400b41b0();
        fcn.140067500();
        fcn.14006b4e0();
        goto code_r0x000140005f82;
    }
    if (uVar7 != 0x111) {
        if (uVar7 == 0x113) {
            if ((arg3 == 3) && (*0x1400e8f00 != 0)) {
                uVar12 = 0;
                uVar14 = uVar12;
                uVar16 = uVar12;
                if (*0x1400e8f10 + -0x10 < *0x1400e8ec0) {
                    *0x1400e8ec0 = 0;
                    uStack_248 = 0x24d;
                    uVar11 = uVar12;
                    do {
                        uStack_248 = uStack_248 ^ uVar11;
                        uVar7 = uVar11 + 1;
                        uVar11 = uVar7;
                    } while (uVar7 < 0xd);
                }
                do {
                    *(&puStack_b8 + uVar16) = *(*0x1400e8ec0 + uVar14 + 0x1400e8f20);
                    fcn.14005dc50();
                    uStack_248 = 0x39c;
                    uVar11 = uVar12;
                    do {
                        uStack_248 = uStack_248 ^ uVar11;
                        uVar7 = uVar11 + 1;
                        uVar11 = uVar7;
                    } while (uVar7 < 0xc);
                    fcn.140052760();
                    uVar16 = uVar16 + 1;
                    uVar14 = uVar14 + 1;
                } while (uVar16 < 0x10);
                puStack_a8 = puStack_a8 & 0xffffffffffffff00;
                uStack_248 = 0x135;
                uVar14 = uVar12;
                do {
                    uStack_248 = uStack_248 ^ uVar14;
                    uVar7 = uVar14 + 1;
                    uVar14 = uVar7;
                } while (uVar7 < 7);
                fcn.1400af0b0();
                uStack_248 = 0xb8;
                do {
                    uStack_248 = uStack_248 ^ uVar12;
                    uVar7 = uVar12 + 1;
                    uVar12 = uVar7;
                } while (uVar7 < 8);
                (*_sym.imp.USER32.dll_SetWindowTextA)(*0x1400e9230,&puStack_b8);
                fcn.14003c890();
                ppuVar17 = &puStack_b8;
                for (iVar10 = 0x11; iVar10 != 0; iVar10 = iVar10 + -1) {
                    *ppuVar17 = 0;
                    ppuVar17 = ppuVar17 + 1;
                }
                *0x1400e8ec0 = *0x1400e8ec0 + 1;
            }
        }
        else {
            (*_sym.imp.USER32.dll_DefWindowProcW)();
        }
        goto code_r0x000140005f82;
    }
    uVar13 = arg3;
    if (*0x1400e8f00 != 0) {
        if (uVar13 == (*0x1400e9228 + 0x7dd7U ^ 32000)) {
            uVar15 = 0;
            *0x1400e8f00 = 0;
            fcn.14003b9c0();
            fcn.140099db0();
            (*_sym.imp.USER32.dll_KillTimer)(arg1,3);
            uStack_248 = 0xf9;
            uVar7 = 0;
            do {
                uStack_248 = uStack_248 ^ uVar7;
                uVar7 = uVar7 + 1;
            } while (uVar7 < 9);
            (*_sym.imp.USER32.dll_SetWindowTextA)(*0x1400e9230,0x1400ddc48);
            fcn.140043ab0();
            fcn.1400474c0();
            puVar18 = 0x1400e8f20;
            for (iVar10 = 0x100; iVar10 != 0; iVar10 = iVar10 + -1) {
                *puVar18 = 0;
                puVar18 = puVar18 + 1;
            }
            fcn.14002a700();
            uStack_248 = 0x168;
            uVar7 = 0;
            do {
                uStack_248 = uStack_248 ^ uVar7;
                uVar7 = uVar7 + 1;
            } while (uVar7 < 7);
            *0x1400e8ec0 = 0;
            fcn.14005cb50();
            fcn.14007a700();
            fcn.1400abaa0();
            *0x1400e8f10 = 0;
            uStack_248 = 0x1f1;
            do {
                uStack_248 = uStack_248 ^ uVar15;
                uVar15 = uVar15 + 1;
            } while (uVar15 < 0xf);
            fcn.1400a1ed0();
            fcn.14004dd50();
        }
        goto code_r0x000140005f82;
    }
    fcn.140057270();
    uStack_248 = 0x364;
    uVar15 = 0;
    uVar7 = uVar15;
    do {
        uStack_248 = uStack_248 ^ uVar7;
        uVar7 = uVar7 + 1;
    } while (uVar7 < 3);
    if (uVar13 - 200 < 10) {
        if ((*0x1400e8ec4 != '\0') || ((*0x1400e2a80 == 0x30 && (*0x1400e2a82 == 0)))) {
            *0x1400e2a80 = 0;
            fcn.14001a770();
            uVar7 = uVar15;
            do {
                uVar7 = uVar7 + 1;
            } while (uVar7 < 0xd);
            *0x1400e8ec4 = '\0';
            uVar7 = uVar15;
            do {
                uVar7 = uVar7 + 1;
                uVar8 = uVar15;
            } while (uVar7 < 3);
            do {
                uVar8 = uVar8 + 1;
            } while (uVar8 < 4);
        }
        uVar16 = 0xffffffffffffffff;
        uVar14 = 0xffffffffffffffff;
        do {
            uVar14 = uVar14 + 1;
        } while (*(uVar14 * 2 + 0x1400e2a80) != 0);
        uStack_248 = 0x30a;
        uVar7 = uVar15;
        do {
            uStack_248 = uStack_248 ^ uVar7;
            uVar7 = uVar7 + 1;
        } while (uVar7 < 6);
        fcn.1400a0120();
        uStack_248 = 0x34c;
        uVar7 = uVar15;
        do {
            uStack_248 = uStack_248 ^ uVar7;
            uVar7 = uVar7 + 1;
        } while (uVar7 < 6);
        if (0x3b < uVar14) {
code_r0x000140004260:
            do {
                uVar16 = uVar16 + 1;
                uVar7 = uVar15;
            } while (*(uVar16 * 2 + 0x1400e9020) != 0);
            do {
                uVar7 = uVar7 + 1;
                uVar8 = uVar15;
            } while (uVar7 < 0xb);
            do {
                uVar8 = uVar8 + 1;
            } while (uVar8 < 3);
            uStack_248 = 0x1ee;
            uVar7 = uVar15;
            do {
                uStack_248 = uStack_248 ^ uVar7;
                uVar7 = uVar7 + 1;
            } while (uVar7 < 8);
            if (uVar16 < 0xfa) {
                *(uVar16 * 2 + 0x1400e9020) = uVar13 - 0x98;
                uVar7 = uVar15;
                do {
                    uVar7 = uVar7 + 1;
                } while (uVar7 < 0xb);
                uStack_248 = 0x24b;
                uVar7 = uVar15;
                do {
                    uStack_248 = uStack_248 ^ uVar7;
                    uVar7 = uVar7 + 1;
                } while (uVar7 < 3);
                fcn.140018c30();
                if (0x1ff < uVar16 * 2 + 2) goto code_r0x000140005fad;
                *(uVar16 * 2 + 0x1400e9022) = 0;
                fcn.14005c7e0();
                fcn.140054aa0();
            }
            if (*0x1400e9230 != 0) {
                (*_sym.imp.USER32.dll_SetWindowTextW)(*0x1400e9230,0x1400e2a80);
                uVar7 = uVar15;
                do {
                    uVar7 = uVar7 + 1;
                    uVar8 = uVar15;
                } while (uVar7 < 0xe);
                do {
                    uVar8 = uVar8 + 1;
                    uVar7 = uVar15;
                } while (uVar8 < 0xf);
                do {
                    uVar7 = uVar7 + 1;
                } while (uVar7 < 3);
            }
            uStack_248 = 0x260;
            do {
                uStack_248 = uStack_248 ^ uVar15;
                uVar15 = uVar15 + 1;
            } while (uVar15 < 0xe);
code_r0x000140005f82:
            fcn.1400bb1b0(var_bp_58h ^ auStack_2b8);
            return;
        }
        *(uVar14 * 2 + 0x1400e2a80) = uVar13 - 0x98;
        fcn.140034ef0();
        uVar7 = uVar15;
        do {
            uVar7 = uVar7 + 1;
        } while (uVar7 < 6);
        uStack_248 = 0x24a;
        uVar7 = uVar15;
        do {
            uStack_248 = uStack_248 ^ uVar7;
            uVar7 = uVar7 + 1;
        } while (uVar7 < 0xc);
        if (uVar14 * 2 + 2 < 0x80) {
            *(uVar14 * 2 + 0x1400e2a82) = 0;
            fcn.140010a30();
            uVar7 = uVar15;
            do {
                uVar7 = uVar7 + 1;
            } while (uVar7 < 0xe);
            goto code_r0x000140004260;
        }
code_r0x000140005fad:
        fcn.1400bb2d8();
code_r0x000140005fb3:
        fcn.1400013e0();
    }
    else {
        if (uVar13 == 0xd7) {
            *0x1400e2a80 = 0x30;
            uVar7 = uVar15;
            do {
                uVar7 = uVar7 + 1;
                uVar8 = uVar15;
            } while (uVar7 < 0xb);
            do {
                uVar8 = uVar8 + 1;
                uVar7 = uVar15;
            } while (uVar8 < 2);
            do {
                uVar7 = uVar7 + 1;
            } while (uVar7 < 8);
            *0x1400e2a82 = 0;
            uStack_248 = 0x29a;
            uVar7 = uVar15;
            do {
                uStack_248 = uStack_248 ^ uVar7;
                uVar7 = uVar7 + 1;
            } while (uVar7 < 0xb);
            fcn.1400a79a0();
            uVar7 = uVar15;
            do {
                uVar7 = uVar7 + 1;
            } while (uVar7 < 4);
            *0x1400e8f08 = 0;
            uVar7 = uVar15;
            do {
                uVar7 = uVar7 + 1;
                uVar8 = uVar15;
            } while (uVar7 < 4);
            do {
                uVar8 = uVar8 + 1;
            } while (uVar8 < 3);
            *0x1400e8f04 = 0;
            uStack_248 = 0x15b;
            uVar7 = uVar15;
            do {
                uStack_248 = uStack_248 ^ uVar7;
                uVar7 = uVar7 + 1;
            } while (uVar7 < 0xb);
            fcn.1400adfa0();
            fcn.14003b530();
            *0x1400e8ec4 = '\0';
            uVar7 = uVar15;
            do {
                uVar7 = uVar7 + 1;
            } while (uVar7 < 0xf);
            *0x1400e9020 = 0;
            uStack_248 = 0x34c;
            uVar7 = uVar15;
            do {
                uStack_248 = uStack_248 ^ uVar7;
                uVar7 = uVar7 + 1;
            } while (uVar7 < 5);
            if (*0x1400e9230 != 0) {
                (*_sym.imp.USER32.dll_SetWindowTextW)(*0x1400e9230,0x1400e2a80);
                uVar7 = uVar15;
                do {
                    uVar7 = uVar7 + 1;
                    uVar8 = uVar15;
                } while (uVar7 < 0xe);
                do {
                    uVar8 = uVar8 + 1;
                } while (uVar8 < 0xf);
                uStack_248 = 0xa9;
                do {
                    uStack_248 = uStack_248 ^ uVar15;
                    uVar15 = uVar15 + 1;
                } while (uVar15 < 3);
            }
            fcn.140028a80();
            goto code_r0x000140005f82;
        }
        if ((uVar13 - 0xd2 < 4) || (uVar13 - 300 < 3)) {
            *0x1400e8f08 = fcn.1400c4d1c(0x1400e2a80);
            fcn.140009800();
            uVar7 = uVar15;
            do {
                uVar7 = uVar7 + 1;
            } while (uVar7 < 2);
            uStack_248 = 0x24e;
            uVar7 = uVar15;
            do {
                uStack_248 = uStack_248 ^ uVar7;
                uVar7 = uVar7 + 1;
            } while (uVar7 < 9);
            if (uVar13 == 0xd2) {
                *0x1400e8f04 = 0x2b;
            }
            else if (uVar13 == 0xd3) {
                *0x1400e8f04 = 0x2d;
            }
            else if (uVar13 == 0xd4) {
                *0x1400e8f04 = 0x2a;
            }
            else if (uVar13 == 0xd5) {
                *0x1400e8f04 = 0x2f;
            }
            else if (uVar13 == 300) {
                *0x1400e8f04 = 0x26;
            }
            else {
                *0x1400e8f04 = 0x5e;
                if (uVar13 == 0x12d) {
                    *0x1400e8f04 = 0x7c;
                }
            }
            fcn.1400706e0();
            uVar14 = 0xffffffffffffffff;
            do {
                uVar14 = uVar14 + 1;
            } while (*(uVar14 * 2 + 0x1400e9020) != 0);
            fcn.1400b5620();
            fcn.140089ff0();
            fcn.140033a90();
            if (uVar14 < 0xfa) {
                *(uVar14 * 2 + 0x1400e9020) = *0x1400e8f04;
                fcn.140034b90();
                fcn.1400495a0();
                if (0x1ff < uVar14 * 2 + 2) goto code_r0x000140005fad;
                *(uVar14 * 2 + 0x1400e9022) = 0;
                fcn.140097b30();
                fcn.140063a10();
            }
            *0x1400e8ec4 = '\x01';
            uVar7 = uVar15;
            do {
                uVar7 = uVar7 + 1;
                uVar8 = uVar15;
            } while (uVar7 < 4);
            do {
                uVar8 = uVar8 + 1;
            } while (uVar8 < 0xd);
            uStack_248 = 0x213;
            uVar7 = uVar15;
            do {
                uStack_248 = uStack_248 ^ uVar7;
                uVar7 = uVar7 + 1;
            } while (uVar7 < 0xb);
            *0x1400e2a80 = *0x1400e8f04;
            fcn.1400927d0();
            uVar7 = uVar15;
            do {
                uVar7 = uVar7 + 1;
                uVar8 = uVar15;
            } while (uVar7 < 6);
            do {
                uVar8 = uVar8 + 1;
            } while (uVar8 < 0xb);
            *0x1400e2a82 = 0;
            uStack_248 = 0x108;
            uVar7 = uVar15;
            do {
                uStack_248 = uStack_248 ^ uVar7;
                uVar7 = uVar7 + 1;
            } while (uVar7 < 7);
            fcn.140046260();
            if (*0x1400e9230 != 0) {
                (*_sym.imp.USER32.dll_SetWindowTextW)(*0x1400e9230,0x1400e2a80);
                uVar7 = uVar15;
                do {
                    uVar7 = uVar7 + 1;
                    uVar8 = uVar15;
                } while (uVar7 < 0xe);
                do {
                    uVar8 = uVar8 + 1;
                } while (uVar8 < 0xf);
                uStack_248 = 0xa9;
                uVar7 = uVar15;
                do {
                    uStack_248 = uStack_248 ^ uVar7;
                    uVar7 = uVar7 + 1;
                } while (uVar7 < 3);
            }
            fcn.140094fc0();
            uVar7 = uVar15;
            do {
                uVar7 = uVar7 + 1;
            } while (uVar7 < 0xb);
            uStack_248 = 0xbc;
            do {
                uStack_248 = uStack_248 ^ uVar15;
                uVar15 = uVar15 + 1;
            } while (uVar15 < 0xf);
            goto code_r0x000140005f82;
        }
        if (uVar13 == 0x12f) {
            fVar23 = fcn.1400c4d1c(0x1400e2a80);
            fcn.140073c90();
            uStack_248 = 0xdf;
            uVar7 = uVar15;
            do {
                uStack_248 = uStack_248 ^ uVar7;
                uVar7 = uVar7 + 1;
            } while (uVar7 < 9);
            fcn.140059a60();
            uStack_248 = 0x3b6;
            uVar7 = uVar15;
            do {
                uStack_248 = uStack_248 ^ uVar7;
                uVar7 = uVar7 + 1;
            } while (uVar7 < 7);
            fcn.1400010d0(0x1400e2a80,0x40,0x1400ddc50,~fVar23);
            uVar7 = uVar15;
            do {
                uVar7 = uVar7 + 1;
            } while (uVar7 < 4);
            uStack_248 = 0x3c5;
            uVar7 = uVar15;
            do {
                uStack_248 = uStack_248 ^ uVar7;
                uVar7 = uVar7 + 1;
            } while (uVar7 < 2);
            uVar14 = 0xffffffffffffffff;
            do {
                uVar14 = uVar14 + 1;
            } while (*(uVar14 * 2 + 0x1400e9020) != 0);
            fcn.1400b0090();
            if (uVar14 < 0xfa) {
                fcn.1400c4db0(0x400e9020,0x100,0x1400ddc5c);
                fcn.14009a920();
                fcn.140064e60();
            }
            if (*0x1400e9230 != 0) {
                (*_sym.imp.USER32.dll_SetWindowTextW)(*0x1400e9230,0x1400e2a80);
                uVar7 = uVar15;
                do {
                    uVar7 = uVar7 + 1;
                    uVar8 = uVar15;
                } while (uVar7 < 0xe);
                do {
                    uVar8 = uVar8 + 1;
                    uVar7 = uVar15;
                } while (uVar8 < 0xf);
                do {
                    uVar7 = uVar7 + 1;
                } while (uVar7 < 3);
            }
            uStack_248 = 0x19;
            do {
                uStack_248 = uStack_248 ^ uVar15;
                uVar15 = uVar15 + 1;
            } while (uVar15 < 0xb);
            goto code_r0x000140005f82;
        }
        if (uVar13 != 0xd6) goto code_r0x000140005f82;
        fcn.140032a90();
        uStack_f0 = 0;
        uStack_e8 = 0;
        uStack_e0 = 7;
        ppppppuStack_f8 = NULL;
        var_78h._0_4_ = 0x320035;
        var_78h._4_4_ = 0x2b0035;
        var_bp_70h._0_4_ = 0x390031;
        var_bp_70h._4_4_ = 0x33;
        var_bp_68h._0_4_ = 0x340037;
        var_bp_68h._4_4_ = 0x2a0032;
        var_bp_60h._0_4_ = 0x380031;
        var_bp_60h._4_4_ = 0x36;
        puStack_a0 = 0x2d003100330039;
        puStack_98 = 0x3200380034;
        puStack_b8 = 0x2a003300340038;
        puStack_b0 = 0x3200350039;
        ppppppuStack_d8 = NULL;
        uStack_d0 = 0;
        uStack_c8 = 0;
        uStack_c0 = 0;
        uVar16 = 0xffffffffffffffff;
        uVar14 = 0xffffffffffffffff;
        do {
            uVar14 = uVar14 + 1;
        } while (*(uVar14 * 2 + 0x1400e9020) != 0);
        if (0x7ffffffffffffffe < uVar14) goto code_r0x000140005fce;
        if (7 < uVar14) {
            uVar12 = uVar14 | 7;
            if (0x7ffffffffffffffe < uVar12) {
                uVar11 = 0x7fffffffffffffff;
                uVar12 = 0x7ffffffffffffffe;
code_r0x000140004977:
                pppppppuVar3 = fcn.140008140(uVar11 * 2);
                ppppppuStack_d8 = pppppppuVar3;
                uStack_c8 = uVar14;
                uStack_c0 = uVar12;
                fcn.1400d2fa0(pppppppuVar3,0x1400e9020,uVar14 * 2);
                *(pppppppuVar3 + uVar14 * 2) = 0;
                goto code_r0x0001400049ac;
            }
            if (uVar12 < 10) {
                uVar12 = 10;
            }
            uVar11 = uVar12 + 1;
            if (uVar11 < 0x8000000000000000) goto code_r0x000140004977;
            goto code_r0x000140005fb3;
        }
        uStack_c0 = 7;
        uStack_c8 = uVar14;
        fcn.1400d2fa0(&ppppppuStack_d8,0x1400e9020,uVar14 * 2);
        *(&ppppppuStack_d8 + uVar14 * 2) = 0;
code_r0x0001400049ac:
        uStack_248 = 600;
        uVar7 = uVar15;
        do {
            uStack_248 = uStack_248 ^ uVar7;
            uVar7 = uVar7 + 1;
        } while (uVar7 < 9);
        fcn.140027290();
        uStack_248 = 0x2c3;
        uVar7 = uVar15;
        do {
            uStack_248 = uStack_248 ^ uVar7;
            uVar7 = uVar7 + 1;
        } while (uVar7 < 3);
        uVar14 = 0xffffffffffffffff;
        do {
            uVar14 = uVar14 + 1;
        } while (*(&var_78h + uVar14 * 2) != 0);
        pppppppuVar3 = &ppppppuStack_d8;
        if (7 < uStack_c0) {
            pppppppuVar3 = ppppppuStack_d8;
        }
        if ((uStack_c8 != uVar14) ||
           ((uStack_c8 != 0 && (iVar2 = fcn.140001130(pppppppuVar3,&var_78h,uStack_c8), iVar2 != 0)))) {
            uVar14 = 0xffffffffffffffff;
            do {
                uVar14 = uVar14 + 1;
            } while (*(&var_bp_68h + uVar14 * 2) != 0);
            pppppppuVar3 = &ppppppuStack_d8;
            if (7 < uStack_c0) {
                pppppppuVar3 = ppppppuStack_d8;
            }
            if ((uStack_c8 == uVar14) &&
               ((uStack_c8 == 0 || (iVar2 = fcn.140001130(pppppppuVar3,&var_bp_68h,uStack_c8), iVar2 == 0)))) {
                puStack_b8 = NULL;
                puStack_b0 = NULL;
                puStack_a0 = 0x6f007100770076;
                puStack_98 = 0x730016006b0062;
                puStack_90 = 0x740063007c0071;
                var_80h._0_4_ = CONCAT22(var_80h._2_2_,0x7c);
                puVar5 = fcn.140008140(0x1a);
                puVar1 = puVar5 + 0xd;
                uVar20 = 0x1a;
                puStack_b8 = puVar5;
                puStack_a8 = puVar1;
                fcn.1400d2fa0(puVar5,&puStack_a0,0x1a);
                uVar7 = uVar15;
                do {
                    uVar7 = uVar7 + 1;
                } while (uVar7 < 10);
                uStack_248 = 0xd5;
                uVar7 = uVar15;
                do {
                    uStack_248 = uStack_248 ^ uVar7;
                    uVar7 = uVar7 + 1;
                } while (uVar7 < 8);
                puStack_b0 = puVar1;
                fcn.1400ad0a0();
                uVar14 = puVar1 - puVar5 >> 1;
                if (uStack_e8 < uVar14) {
                    uVar16 = uVar14 - uStack_e8;
                    if (uStack_e0 - uStack_e8 < uVar16) {
                        fcn.140007930(&ppppppuStack_f8,uVar16,uVar20,uVar16);
                    }
                    else {
                        pppppppuVar3 = &ppppppuStack_f8;
                        if (7 < uStack_e0) {
                            pppppppuVar3 = ppppppuStack_f8;
                        }
                        puVar19 = pppppppuVar3 + uStack_e8 * 2;
                        uStack_e8 = uVar14;
                        if (uVar16 != 0) {
                            for (; uVar16 != 0; uVar16 = uVar16 - 1) {
                                *puVar19 = 0;
                                puVar19 = puVar19 + 1;
                            }
                        }
                        *(pppppppuVar3 + uVar14 * 2) = 0;
                    }
                }
                else {
                    pppppppuVar3 = &ppppppuStack_f8;
                    if (7 < uStack_e0) {
                        pppppppuVar3 = ppppppuStack_f8;
                    }
                    uStack_e8 = uVar14;
                    *(pppppppuVar3 + uVar14 * 2) = 0;
                }
                fcn.1400432c0();
                uStack_248 = 0x23a;
                uVar7 = uVar15;
                do {
                    uStack_248 = uStack_248 ^ uVar7;
                    uVar7 = uVar7 + 1;
                } while (uVar7 < 0xc);
                fcn.1400aec20();
                pppppppuVar3 = &ppppppuStack_f8;
                if (7 < uStack_e0) {
                    pppppppuVar3 = ppppppuStack_f8;
                }
                if (puVar5 != puVar1) {
                    iVar10 = pppppppuVar3 - puVar5;
                    uVar7 = uVar15;
                    do {
                        iVar2 = uVar7 % 7;
                        uVar7 = uVar7 + 1;
                        pppppppuVar3 = &ppppppuStack_d8;
                        if (7 < uStack_c0) {
                            pppppppuVar3 = ppppppuStack_d8;
                        }
                        *(iVar10 + puVar5) = *puVar5 ^ *(pppppppuVar3 + iVar2 * 2);
                        puVar5 = puVar5 + 1;
                    } while (puVar5 != puVar1);
                }
                uStack_248 = 0x2ae;
                uVar7 = uVar15;
                do {
                    uStack_248 = uStack_248 ^ uVar7;
                    uVar7 = uVar7 + 1;
                } while (uVar7 < 8);
                fcn.14001ad20();
                fcn.1400af1d0();
                uVar7 = &puStack_b8;
                goto code_r0x00014000540f;
            }
            uVar14 = 0xffffffffffffffff;
            do {
                uVar14 = uVar14 + 1;
            } while (*(&puStack_a0 + uVar14 * 2) != 0);
            pppppppuVar3 = &ppppppuStack_d8;
            if (7 < uStack_c0) {
                pppppppuVar3 = ppppppuStack_d8;
            }
            if ((uStack_c8 == uVar14) &&
               ((uStack_c8 == 0 || (iVar2 = fcn.140001130(pppppppuVar3,&puStack_a0,uStack_c8), iVar2 == 0)))) {
                puStack_a0 = NULL;
                puStack_98 = NULL;
                puStack_b8 = 0x72006800760072;
                puStack_b0 = 0x70006200600071;
                puStack_a8 = CONCAT26(puStack_a8._6_2_,0x6900740061);
                puVar5 = fcn.140008140(0x16);
                puVar1 = puVar5 + 0xb;
                uVar20 = 0x16;
                puStack_a0 = puVar5;
                puStack_90 = puVar1;
                fcn.1400d2fa0(puVar5,&puStack_b8,0x16);
                uVar14 = uStack_e8;
                puStack_98 = puVar1;
                uStack_248 = 0x14a;
                uVar7 = uVar15;
                do {
                    uStack_248 = uStack_248 ^ uVar7;
                    uVar7 = uVar7 + 1;
                } while (uVar7 < 3);
                uVar16 = puVar1 - puVar5 >> 1;
                if (uStack_e8 < uVar16) {
                    uVar12 = uVar16 - uStack_e8;
                    if (uStack_e0 - uStack_e8 < uVar12) {
                        fcn.140007930(&ppppppuStack_f8,uVar12,uVar20,uVar12);
                    }
                    else {
                        uStack_e8 = uVar16;
                        pppppppuVar3 = &ppppppuStack_f8;
                        if (7 < uStack_e0) {
                            pppppppuVar3 = ppppppuStack_f8;
                        }
                        puVar19 = pppppppuVar3 + uVar14 * 2;
                        if (uVar12 != 0) {
                            for (; uVar12 != 0; uVar12 = uVar12 - 1) {
                                *puVar19 = 0;
                                puVar19 = puVar19 + 1;
                            }
                        }
                        *(pppppppuVar3 + uVar16 * 2) = 0;
                    }
                }
                else {
                    uStack_e8 = uVar16;
                    pppppppuVar3 = &ppppppuStack_f8;
                    if (7 < uStack_e0) {
                        pppppppuVar3 = ppppppuStack_f8;
                    }
                    *(pppppppuVar3 + uVar16 * 2) = 0;
                }
                uStack_248 = 0x2e8;
                uVar7 = uVar15;
                do {
                    uStack_248 = uStack_248 ^ uVar7;
                    uVar7 = uVar7 + 1;
                } while (uVar7 < 0xe);
                pppppppuVar3 = &ppppppuStack_f8;
                if (7 < uStack_e0) {
                    pppppppuVar3 = ppppppuStack_f8;
                }
                if (puVar5 != puVar1) {
                    iVar10 = pppppppuVar3 - puVar5;
                    uVar7 = uVar15;
                    do {
                        iVar2 = uVar7 % 7;
                        uVar7 = uVar7 + 1;
                        pppppppuVar3 = &ppppppuStack_d8;
                        if (7 < uStack_c0) {
                            pppppppuVar3 = ppppppuStack_d8;
                        }
                        *(iVar10 + puVar5) = *puVar5 ^ *(pppppppuVar3 + iVar2 * 2);
                        puVar5 = puVar5 + 1;
                    } while (puVar5 != puVar1);
                }
                fcn.140027b90();
                uVar7 = &puStack_a0;
                goto code_r0x00014000540f;
            }
            do {
                uVar16 = uVar16 + 1;
            } while (*(&puStack_b8 + uVar16 * 2) != 0);
            pppppppuVar3 = &ppppppuStack_d8;
            if (7 < uStack_c0) {
                pppppppuVar3 = ppppppuStack_d8;
            }
            if ((uStack_c8 != uVar16) ||
               ((uStack_c8 != 0 && (iVar2 = fcn.140001130(pppppppuVar3,&puStack_b8,uStack_c8), iVar2 != 0)))) {
                if (*0x1400e8f04 != 0) {
                    fcn.1400c4d1c(0x1400e2a80);
                    uVar7 = uVar15;
                    do {
                        uVar7 = uVar7 + 1;
                    } while (uVar7 < 10);
                    uStack_248 = 0x22;
                    uVar7 = uVar15;
                    do {
                        uStack_248 = uStack_248 ^ uVar7;
                        uVar7 = uVar7 + 1;
                    } while (uVar7 < 0xc);
                    fcn.1400148e0();
                    iVar10 = fcn.140003a20();
                    uStack_248 = 0x37d;
                    uVar7 = uVar15;
                    do {
                        uStack_248 = uStack_248 ^ uVar7;
                        uVar7 = uVar7 + 1;
                    } while (uVar7 < 3);
                    fcn.1400010d0(0x1400e2a80,0x40,0x1400ddc60,iVar10);
                    uStack_248 = 0x3a0;
                    uVar7 = uVar15;
                    do {
                        uStack_248 = uStack_248 ^ uVar7;
                        uVar7 = uVar7 + 1;
                    } while (uVar7 < 5);
                    *0x1400e8f04 = 0;
                    fcn.1400824a0();
                    *0x1400e8ec4 = '\x01';
                    uVar7 = uVar15;
                    do {
                        uVar7 = uVar7 + 1;
                    } while (uVar7 < 9);
                    *0x1400e9020 = 0;
                    uStack_248 = 0x2b9;
                    uVar7 = uVar15;
                    do {
                        uStack_248 = uStack_248 ^ uVar7;
                        uVar7 = uVar7 + 1;
                    } while (uVar7 < 9);
                    fcn.1400abd00();
                    uVar7 = uVar15;
                    if (*0x1400e9230 != 0) {
                        (*_sym.imp.USER32.dll_SetWindowTextW)(*0x1400e9230,0x1400e2a80);
                        uVar8 = uVar15;
                        do {
                            uVar8 = uVar8 + 1;
                            uVar9 = uVar15;
                        } while (uVar8 < 0xe);
                        do {
                            uVar9 = uVar9 + 1;
                            uVar8 = uVar15;
                        } while (uVar9 < 0xf);
                        do {
                            uVar8 = uVar8 + 1;
                        } while (uVar8 < 3);
                    }
                    do {
                        uVar7 = uVar7 + 1;
                    } while (uVar7 < 4);
                    uStack_248 = 0x228;
                    do {
                        uStack_248 = uStack_248 ^ uVar15;
                        uVar15 = uVar15 + 1;
                    } while (uVar15 < 0xf);
                    fcn.14006e360();
                }
                goto code_r0x000140005747;
            }
            iVar10 = *0x1400e9228;
            uStack_248 = 6;
            uVar7 = uVar15;
            do {
                uStack_248 = uStack_248 ^ uVar7;
                uVar7 = uVar7 + 1;
            } while (uVar7 < 0xb);
            iVar21 = (**(**0x1400e9268 + 0x30))(*0x1400e9268,*0x1400e9228);
            fcn.1400637d0();
            fcn.140079c90();
            uVar7 = uVar15;
            do {
                uVar7 = uVar7 + 1;
            } while (uVar7 < 2);
            iVar2 = iVar10;
            uVar7 = uVar15;
            do {
                uVar7 = uVar7 + 1;
            } while (uVar7 < 3);
            uVar7 = uVar15;
            do {
                uVar7 = uVar7 + 1;
            } while (uVar7 < 4);
            iVar10 = *((iVar2 + 0x35a41760 ^ 0x35a41740) +
                      ***((iVar2 + 0x9aa7b8a0 ^ 0x9aa7b880) + *((iVar2 - 0x54a628 ^ 0xffab59c0) + iVar21)));
            uStack_248 = 0x30c;
            uVar7 = uVar15;
            do {
                uStack_248 = uStack_248 ^ uVar7;
                uVar7 = uVar7 + 1;
            } while (uVar7 < 2);
            if (iVar10 != 0) {
                fcn.140037000();
                fcn.140051760();
                uStack_248 = 0x118;
                uVar7 = uVar15;
                do {
                    uStack_248 = uStack_248 ^ uVar7;
                    uVar7 = uVar7 + 1;
                } while (uVar7 < 0xe);
                pcVar4 = fcn.140001560(iVar10,iVar2 + 0x8c9937b7U ^ 0xa1959240);
                uStack_248 = 0x278;
                uVar7 = uVar15;
                do {
                    uStack_248 = uStack_248 ^ uVar7;
                    uVar7 = uVar7 + 1;
                } while (uVar7 < 2);
                fcn.140098a10();
                if (pcVar4 != NULL) {
                    (*pcVar4)(0x1400026b0,0,0);
                }
            }
            *0x1400e8f04 = 0;
            fcn.140057270();
            *0x1400e8ec4 = '\x01';
            fcn.140036380();
            *0x1400e9020 = 0;
            uVar7 = uVar15;
            do {
                uVar7 = uVar7 + 1;
            } while (uVar7 < 0xd);
            uStack_248 = 0x3bc;
            do {
                uStack_248 = uStack_248 ^ uVar15;
                uVar15 = uVar15 + 1;
            } while (uVar15 < 7);
            if (7 < uStack_c0) {
                if ((0xfff < uStack_c0 * 2 + 2) && (0x1f < ppppppuStack_d8 + (-8 - ppppppuStack_d8[-1])))
                goto code_r0x000140005fd4;
                fcn.1400bb7b4();
            }
            uStack_c8 = 0;
            uStack_c0 = 7;
            ppppppuStack_d8 = ppppppuStack_d8 & 0xffffffffffff0000;
            if (uStack_e0 < 8) goto code_r0x000140005f82;
            if (0xfff < uStack_e0 * 2 + 2) {
                uVar14 = ppppppuStack_f8 + (-8 - ppppppuStack_f8[-1]);
                goto joined_r0x000140004ddf;
            }
            goto code_r0x000140004de5;
        }
        puStack_b8 = NULL;
        puStack_b0 = NULL;
        puStack_a0 = 0x6c0074007e0073;
        puStack_98 = 0x76007a0077004a;
        puStack_90 = 0x63007f006a0077;
        var_80h._0_4_ = 0x4e0060;
        puVar5 = fcn.140008140(0x1c);
        puVar1 = puVar5 + 0xe;
        uVar20 = 0x1c;
        puStack_b8 = puVar5;
        puStack_a8 = puVar1;
        fcn.1400d2fa0(puVar5,&puStack_a0,0x1c);
        puStack_b0 = puVar1;
        fcn.14006fee0();
        uVar14 = uStack_e8;
        if (uStack_e8 < 0xe) {
            uVar16 = 0xe - uStack_e8;
            if (uStack_e0 - uStack_e8 < uVar16) {
                fcn.140007930(&ppppppuStack_f8,uVar16,uVar20,uVar16);
            }
            else {
                uStack_e8 = 0xe;
                pppppppuVar3 = &ppppppuStack_f8;
                if (7 < uStack_e0) {
                    pppppppuVar3 = ppppppuStack_f8;
                }
                puVar19 = pppppppuVar3 + uVar14 * 2;
                if (uVar16 != 0) {
                    for (; uVar16 != 0; uVar16 = uVar16 - 1) {
                        *puVar19 = 0;
                        puVar19 = puVar19 + 1;
                    }
                }
                *(pppppppuVar3 + 0x1c) = 0;
            }
        }
        else {
            uStack_e8 = 0xe;
            pppppppuVar3 = &ppppppuStack_f8;
            if (7 < uStack_e0) {
                pppppppuVar3 = ppppppuStack_f8;
            }
            *(pppppppuVar3 + 0x1c) = 0;
        }
        pppppppuVar3 = &ppppppuStack_f8;
        if (7 < uStack_e0) {
            pppppppuVar3 = ppppppuStack_f8;
        }
        if (puVar5 != puVar1) {
            iVar10 = pppppppuVar3 - puVar5;
            uVar7 = uVar15;
            do {
                iVar2 = uVar7 % 7;
                uVar7 = uVar7 + 1;
                pppppppuVar3 = &ppppppuStack_d8;
                if (7 < uStack_c0) {
                    pppppppuVar3 = ppppppuStack_d8;
                }
                *(iVar10 + puVar5) = *puVar5 ^ *(pppppppuVar3 + iVar2 * 2);
                puVar5 = puVar5 + 1;
            } while (puVar5 != puVar1);
        }
        uStack_248 = 0x3dc;
        uVar7 = uVar15;
        do {
            uStack_248 = uStack_248 ^ uVar7;
            uVar7 = uVar7 + 1;
        } while (uVar7 < 0xb);
        fcn.140012580();
        fcn.1400ad9e0();
        uVar7 = &puStack_b8;
code_r0x00014000540f:
        fcn.1400072d0(uVar7);
        pppppppuVar3 = &ppppppuStack_f8;
        if (7 < uStack_e0) {
            pppppppuVar3 = ppppppuStack_f8;
        }
        fcn.1400c7570(0x1400e2a80,0x40,pppppppuVar3,-1);
        fcn.14006cf00();
        uStack_248 = 0x3d1;
        uVar7 = uVar15;
        do {
            uStack_248 = uStack_248 ^ uVar7;
            uVar7 = uVar7 + 1;
        } while (uVar7 < 10);
        fcn.140054ce0();
        *0x1400e8f04 = 0;
        uStack_248 = 0x25c;
        uVar7 = uVar15;
        do {
            uStack_248 = uStack_248 ^ uVar7;
            uVar7 = uVar7 + 1;
        } while (uVar7 < 0xc);
        fcn.1400189f0();
        *0x1400e8ec4 = '\x01';
        fcn.1400a2d90();
        *0x1400e9020 = 0;
        uStack_248 = 0x25e;
        uVar7 = uVar15;
        do {
            uStack_248 = uStack_248 ^ uVar7;
            uVar7 = uVar7 + 1;
        } while (uVar7 < 10);
        fcn.1400618f0();
        fcn.140099910();
        if (*0x1400e9230 != 0) {
            (*_sym.imp.USER32.dll_SetWindowTextW)(*0x1400e9230,0x1400e2a80);
            uVar7 = uVar15;
            do {
                uVar7 = uVar7 + 1;
                uVar8 = uVar15;
            } while (uVar7 < 0xe);
            do {
                uVar8 = uVar8 + 1;
            } while (uVar8 < 0xf);
            uStack_248 = 0xa9;
            do {
                uStack_248 = uStack_248 ^ uVar15;
                uVar15 = uVar15 + 1;
            } while (uVar15 < 3);
        }
code_r0x000140005747:
        if (7 < uStack_c0) {
            if ((0xfff < uStack_c0 * 2 + 2) && (0x1f < ppppppuStack_d8 + (-8 - ppppppuStack_d8[-1]))) {
code_r0x000140005fd4:
                uStack_298 = 0;
                fcn.1400c0f8c(0,0,0,0);
                pcVar4 = swi(3);
                (*pcVar4)();
                return;
            }
            fcn.1400bb7b4();
        }
        uStack_c8 = 0;
        uStack_c0 = 7;
        ppppppuStack_d8 = ppppppuStack_d8 & 0xffffffffffff0000;
        if (uStack_e0 < 8) goto code_r0x000140005f82;
        if (uStack_e0 * 2 + 2 < 0x1000) {
code_r0x000140004de5:
            uStack_c0 = 7;
            uStack_c8 = 0;
            fcn.1400bb7b4();
            goto code_r0x000140005f82;
        }
        uVar14 = ppppppuStack_f8 + (-8 - ppppppuStack_f8[-1]);
joined_r0x000140004ddf:
        uStack_c0 = 7;
        uStack_c8 = 0;
        if (uVar14 < 0x20) goto code_r0x000140004de5;
    }
    uStack_298 = 0;
    fcn.1400c0f8c(0,0,0,0);
code_r0x000140005fce:
    fcn.140001480();
    pcVar4 = swi(3);
    (*pcVar4)();
    return;
}

