
//WARNING: Removing unreachable block (ram,0x00009739)
//WARNING: Removing unreachable block (ram,0x00009741)
//WARNING: Removing unreachable block (ram,0x0000977a)
//WARNING: Removing unreachable block (ram,0x000097ae)

void __stdcall fcn.00006d3a(int64_t arg4,int64_t arg3)

{
    uint *puVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    uint64_t uVar6;
    int64_t iStack_518;
    char cStack_510;
    uchar auStack_50f [7];
    int64_t iStack_508;
    uint32_t uStack_500;
    uint uStack_4fc;
    int64_t iStack_4f8;
    char cStack_4f0;
    char cStack_4ef;
    uchar uStack_4ee;
    uchar uStack_4ed;
    int iStack_4ec;
    int64_t iStack_4e8;
    uint32_t uStack_4e0;
    uint32_t uStack_4dc;
    ulong uStack_4d8;
    int64_t iStack_4d0;
    ushort uStack_4c8;
    int iStack_4c4;
    int64_t iStack_4c0;
    uint8_t auStack_4b8 [24];
    uint32_t uStack_4a0;
    uint32_t uStack_49c;
    int iStack_498;
    uint8_t auStack_494 [12];
    uint8_t auStack_488 [16];
    uint8_t auStack_478 [48];
    int64_t iStack_448;
    int iStack_440;
    int iStack_43c;
    uint uStack_438;
    uint uStack_434;
    uint32_t uStack_430;
    int64_t iStack_428;
    uint64_t uStack_420;
    ulong uStack_418;
    int64_t iStack_410;
    uint32_t uStack_408;
    uint uStack_404;
    uint32_t uStack_400;
    uint32_t uStack_3fc;
    uint32_t uStack_3f8;
    uint uStack_3f4;
    int iStack_3f0;
    uint uStack_3ec;
    uint uStack_3e8;
    ulong uStack_3e0;
    int64_t iStack_3d8;
    code *pcStack_3d0;
    code *pcStack_3c8;
    uint32_t uStack_3c0;
    uint uStack_3bc;
    uint32_t uStack_3b8;
    char acStack_3b0 [32];
    ulong uStack_390;
    int64_t iStack_388;
    int64_t iStack_380;
    int64_t iStack_378;
    int64_t iStack_370;
    ulong uStack_368;
    ulong uStack_360;
    uint8_t *puStack_358;
    uchar auStack_350 [16];
    uint64_t uStack_340;
    int iStack_338;
    int64_t iStack_330;
    uchar auStack_328 [16];
    uchar auStack_318 [256];
    uchar auStack_218 [16];
    uchar auStack_208 [256];
    uchar auStack_108 [264];
    
    iStack_508 = 0;
    iStack_518 = 0;
    func_0x000097be(&iStack_518,0);
    if (iStack_518 != 0) {
        uStack_4d8 = 0;
        *(iStack_518 + 0x1d1) = 0x4f87169f756bf4f9;
        (**(iStack_518 + 0xa9))(0);
        uStack_4d8 = *(iStack_518 + 0x9d);
        *(iStack_518 + 0x131) = uStack_4d8;
        iStack_4f8 = 0;
        uStack_4fc = 0;
        iStack_4c4 = func_0x0001076a(&iStack_4f8,&uStack_4fc);
        if (iStack_4c4 == 0) {
            uVar6 = arg4 >> (iStack_508 - 0x20U & 0x3f);
            uStack_3bc = uVar6;
            uStack_3b8 = arg4 & (iStack_508 + 0x8fdc8fdfU ^ 0x70237020);
            uStack_408 = arg3 & (iStack_508 + 0x425e607fU ^ 0xbda19f80);
            uStack_500 = func_0x00011a7e(uVar6 & 0xffffffff,uStack_3b8,uStack_408,acStack_3b0);
            iVar5 = iStack_508;
            if (uStack_500 == (iVar5 + 0xf39a5d00U ^ 0xf39a5d00)) {
                if (iStack_4f8 != 0) {
                    *(iStack_518 + 0x131) = uStack_4d8;
                    *(iStack_518 + 0x121) = iStack_4f8;
                    *(iStack_518 + 0x1d1) = 0x91160d08d4a2c5;
                    (**(iStack_518 + 0xa9))(0);
                }
            }
            else {
                uStack_49c = iVar5 + 0xad0a2357U ^ 0xad0a0760;
                uStack_3c0 = iVar5 + 0xfa8836c7U ^ 0xfa8836c0;
                for (uStack_4a0 = 0; uStack_4a0 < uStack_500; uStack_4a0 = uStack_4a0 + 1) {
                    uStack_49c = (uStack_49c << (uStack_3c0 & 0x1f)) + uStack_49c + acStack_3b0[uStack_4a0];
                }
                *(iStack_518 + 0xa5) = uStack_49c;
                iStack_380 = 1;
                iStack_4ec = func_0x000113ae(iVar5 + 0x1761e6eU ^ 0x1761080,iStack_4f8,uStack_4fc,acStack_3b0,
                                             uStack_500,iStack_518,0,0,&iStack_380);
                if ((iStack_4ec == 0) && (iStack_380 == 0)) {
                    (**(iStack_518 + 0xb1))(auStack_318,0,0x100);
                    *(iStack_518 + 0x159) = auStack_318;
                    *(iStack_518 + 0x159) = auStack_318;
                    *(iStack_518 + 0x1d1) = 0x54913e9d49d078a7;
                    (**(iStack_518 + 0xa9))(0);
                    *(iStack_518 + 0x9d) = *(iStack_518 + 0x9d);
                    if (*(iStack_518 + 0x9d) == -1) {
                        if (iStack_4f8 != 0) {
                            *(iStack_518 + 0x131) = uStack_4d8;
                            *(iStack_518 + 0x121) = iStack_4f8;
                            *(iStack_518 + 0x1d1) = 0x91160d08d4a2c5;
                            (**(iStack_518 + 0xa9))(0);
                        }
                    }
                    else {
                        (**(iStack_518 + 0xb1))(iStack_518 + 0x4ab,0,0x30);
                        *(iStack_518 + 0x4af) = 2;
                        *(iStack_518 + 0x4b3) = 3;
                        *(iStack_518 + 0x159) = auStack_318;
                        *(iStack_518 + 0x1d1) = 0x548312252933b531;
                        (**(iStack_518 + 0xa9))(0);
                        *(iStack_518 + 0x9d) = *(iStack_518 + 0x9d);
                        if (*(iStack_518 + 0x9d) == 0) {
                            cStack_4f0 = '\0';
                            for (iStack_428 = *(iStack_518 + 0x301); iStack_428 != 0; iStack_428 = *(iStack_428 + 0x28))
                            {
                                if (*(iStack_428 + 4) == 2) {
                                    puVar1 = *(iStack_428 + 0x20);
                                    uVar2 = puVar1[1];
                                    uVar3 = puVar1[2];
                                    uVar4 = puVar1[3];
                                    *(iStack_518 + 0x4db) = *puVar1;
                                    *(iStack_518 + 0x4df) = uVar2;
                                    *(iStack_518 + 0x4e3) = uVar3;
                                    *(iStack_518 + 0x4e7) = uVar4;
                                    cStack_4f0 = '\x01';
                                    break;
                                }
                            }
                            *(iStack_518 + 0x1d1) = 0x45831225293c77f1;
                            (**(iStack_518 + 0xa9))(0);
                            if (cStack_4f0 != '\0') {
code_r0x0000750f:
                                do {
                                    while( true ) {
                                        while( true ) {
                                            while( true ) {
                                                while( true ) {
                                                    iStack_4d0 = 0xffffffffffffffff;
                                                    *(iStack_518 + 0x1c1) = *(iStack_518 + 0x239);
                                                    *(iStack_518 + 0x1c9) = *(iStack_518 + 0x241);
                                                    *(iStack_518 + 0x1d1) = 0x29cf872e2d4;
                                                    (**(iStack_518 + 0xa9))(0);
                                                    iStack_4d0 = *(iStack_518 + 0x9d);
                                                    *(iStack_518 + 0x139) = iStack_4d0;
                                                    if (iStack_4d0 != -1) break;
                                                    *(iStack_518 + 0x1d1) = 0x5399162d0;
                                                    (**(iStack_518 + 0xa9))(0);
                                                }
                                                *(iStack_518 + 0x4dd) = 0;
                                                *(iStack_518 + 0x139) = iStack_4d0;
                                                iStack_440 = 0;
                                                *(iStack_518 + 0x139) = iStack_4d0;
                                                *(iStack_518 + 0x1d1) = 0x8526744;
                                                (**(iStack_518 + 0xa9))(0);
                                                iStack_440 = *(iStack_518 + 0x9d);
                                                if (iStack_440 != -1) break;
                                                *(iStack_518 + 0x139) = iStack_4d0;
                                                *(iStack_518 + 0x1d1) = 0x4fa7169cf872f3ba;
                                                (**(iStack_518 + 0xa9))(0);
                                                *(iStack_518 + 0x1d1) = 0x5399162d0;
                                                (**(iStack_518 + 0xa9))(0);
                                            }
                                            (**(iStack_518 + 0xb1))(auStack_328,0,0x10);
                                            *(iStack_518 + 0x169) = auStack_328;
                                            uStack_368 = 0;
                                            *(iStack_518 + 0x1d1) = 0x499d16a5f9d527d0;
                                            (**(iStack_518 + 0xa9))(0);
                                            uStack_368 = *(iStack_518 + 0x9d);
                                            *(iStack_518 + 0x4fb) = *(iStack_518 + 0x251);
                                            iStack_43c = 0;
                                            *(iStack_518 + 0x139) = iStack_4d0;
                                            *(iStack_518 + 0x139) = iStack_4d0;
                                            *(iStack_518 + 0x1d1) = 0xaf4e0c99f0ea4c;
                                            (**(iStack_518 + 0xa9))(0);
                                            iStack_43c = *(iStack_518 + 0x9d);
                                            if (iStack_43c != -1) break;
                                            *(iStack_518 + 0x139) = iStack_4d0;
                                            *(iStack_518 + 0x1d1) = 0x4fa7169cf872f3ba;
                                            (**(iStack_518 + 0xa9))(0);
                                            *(iStack_518 + 0x1d1) = 0x5399162d0;
                                            (**(iStack_518 + 0xa9))(0);
                                        }
                                        uStack_3e8 = 0x10000;
                                        iStack_448 = 0;
                                        *(iStack_518 + 0x131) = uStack_4d8;
                                        *(iStack_518 + 0x111) = 0x10000;
                                        *(iStack_518 + 0x1d1) = 0x4f8707eefdd993f6;
                                        (**(iStack_518 + 0xa9))(0);
                                        iStack_448 = *(iStack_518 + 0x9d);
                                        if (iStack_448 != 0) break;
                                        *(iStack_518 + 0x139) = iStack_4d0;
                                        *(iStack_518 + 0x1d1) = 0x4fa7169cf872f3ba;
                                        (**(iStack_518 + 0xa9))(0);
                                        *(iStack_518 + 0x1d1) = 0x5399162d0;
                                        (**(iStack_518 + 0xa9))(0);
                                    }
                                    uStack_438 = 0;
                                    uStack_4c8 = 0;
                                    cStack_4ef = '\0';
                                    do {
                                        do {
                                            uStack_3e0 = 0;
                                            iStack_4ec = func_0x000113ae(iStack_508 + 0xb2b203efU ^ 0xb2b20d00,
                                                                         iStack_4f8,uStack_4fc,acStack_3b0,uStack_500
                                                                         ,iStack_518,iStack_4d0,iStack_448,
                                                                         &uStack_3e0);
                                            if (iStack_4ec != 0) goto code_r0x00007c31;
                                        } while (uStack_3e0 < 1);
                                        iStack_410 = 0;
                                        iStack_4ec = func_0x000113ae(iStack_508 + 0x6c21b990U ^ 0x6c21b760,iStack_4f8,
                                                                     uStack_4fc,acStack_3b0,uStack_500,iStack_518,
                                                                     iStack_448,uStack_3e0,&iStack_410);
                                    } while ((iStack_4ec != 0) || (iStack_410 == 0));
                                    uStack_438 = iStack_410 >> 0x20;
                                    uStack_4c8 = iStack_410;
                                    cStack_4ef = '\x01';
code_r0x00007c31:
                                    if (iStack_448 != 0) {
                                        *(iStack_518 + 0x131) = uStack_4d8;
                                        *(iStack_518 + 0x121) = iStack_448;
                                        *(iStack_518 + 0x1d1) = 0x91160d08d4a2c5;
                                        (**(iStack_518 + 0xa9))(0);
                                    }
                                    *(iStack_518 + 0x139) = iStack_4d0;
                                    *(iStack_518 + 0x1d1) = 0x4fa7169cf872f3ba;
                                    (**(iStack_518 + 0xa9))(0);
                                    if (cStack_4ef == '\0') {
                                        *(iStack_518 + 0x1d1) = 0x5399162d0;
                                        (**(iStack_518 + 0xa9))(0);
                                        goto code_r0x0000750f;
                                    }
                                    (**(iStack_518 + 0xb1))(auStack_350,0,0x10);
                                    uStack_3ec = uStack_438;
                                    *(iStack_518 + 0x161) = &uStack_3ec;
                                    *(iStack_518 + 0x169) = auStack_350;
                                    uStack_360 = 0;
                                    *(iStack_518 + 0x1d1) = 0x499d16a5f9d527d0;
                                    (**(iStack_518 + 0xa9))(0);
                                    uStack_360 = *(iStack_518 + 0x9d);
                                    iStack_378 = 1;
                                    iStack_4ec = func_0x000113ae(iStack_508 + 0x24d9e0879f5e9eb1U ^ 0x24d9e0879f5e9040,
                                                                 iStack_4f8,uStack_4fc,acStack_3b0,uStack_500,
                                                                 iStack_518,auStack_350,uStack_4c8,&iStack_378);
                                    if ((iStack_4ec == 0) && (iStack_378 == 0)) {
                                        iStack_4e8 = 0xffffffffffffffff;
                                        *(iStack_518 + 0x1c1) = *(iStack_518 + 0x229);
                                        *(iStack_518 + 0x1c9) = *(iStack_518 + 0x231);
                                        *(iStack_518 + 0x1d1) = 0x29cf872e2d4;
                                        (**(iStack_518 + 0xa9))(0);
                                        iStack_4e8 = *(iStack_518 + 0x9d);
                                        *(iStack_518 + 0x139) = iStack_4e8;
                                        if (iStack_4e8 == -1) {
                                            *(iStack_518 + 0x1d1) = 0x5399162d0;
                                            (**(iStack_518 + 0xa9))(0);
                                        }
                                        else {
                                            iStack_370 = 1;
                                            iStack_4ec = func_0x000113ae(iStack_508 + 0x774188b2U ^ 0x77418640,
                                                                         iStack_4f8,uStack_4fc,acStack_3b0,uStack_500
                                                                         ,iStack_518,iStack_4e8,0,&iStack_370);
                                            if ((iStack_4ec == 0) && (iStack_370 == 0)) {
                                                cStack_510 = '\0';
                                                while( true ) {
                                                    *(iStack_518 + 0x139) = iStack_4e8;
                                                    *(iStack_518 + 0x179) = &cStack_510;
                                                    *(iStack_518 + 0x171) = 1;
                                                    *(iStack_518 + 0x139) = iStack_4e8;
                                                    *(iStack_518 + 0x179) = &cStack_510;
                                                    *(iStack_518 + 0x171) = 1;
                                                    *(iStack_518 + 0x1d1) = 0xa5161d6;
                                                    (**(iStack_518 + 0xa9))(0);
                                                    *(iStack_518 + 0x9d) = *(iStack_518 + 0x9d);
                                                    iStack_3f0 = *(iStack_518 + 0x9d);
                                                    if (iStack_3f0 < 1) break;
                                                    if (cStack_510 == '\x01') {
                                                        (**(iStack_518 + 0xb1))(auStack_218,0,0x210);
                                                        func_0x000113ae(iStack_508 + 0x3e8cead3U ^ 0x3e8ce420,
                                                                        iStack_4f8,uStack_4fc,acStack_3b0,uStack_500
                                                                        ,iStack_518,auStack_108,0x100,0);
                                                        func_0x000113ae(iStack_508 + 0x8c0b1d74U ^ 0x8c0b1380,
                                                                        iStack_4f8,uStack_4fc,acStack_3b0,uStack_500
                                                                        ,iStack_518,auStack_218,auStack_208,0);
                                                        func_0x000113ae(iStack_508 + 0xd9894c15U ^ 0xd98942e0,
                                                                        iStack_4f8,uStack_4fc,acStack_3b0,uStack_500
                                                                        ,iStack_518,iStack_4e8,auStack_218,0);
                                                    }
                                                    else if (cStack_510 == '\x10') {
                                                        *(iStack_518 + 0x49) = iStack_508 + 0xf82cb1aU ^ 0xf820060;
                                                        (**(iStack_518 + 0xb1))(iStack_518 + 0x29,0,0x20);
                                                        uStack_4ee = 0;
                                                        *(iStack_518 + 0x139) = iStack_4e8;
                                                        *(iStack_518 + 0x179) = &uStack_4ee;
                                                        *(iStack_518 + 0x171) = 1;
                                                        uStack_3f4 = 0;
                                                        *(iStack_518 + 0x139) = iStack_4e8;
                                                        *(iStack_518 + 0x179) = &uStack_4ee;
                                                        *(iStack_518 + 0x171) = 1;
                                                        *(iStack_518 + 0x1d1) = 0xa716744;
                                                        (**(iStack_518 + 0xa9))(0);
                                                        uStack_3f4 = *(iStack_518 + 0x9d);
                                                    }
                                                    else if (cStack_510 == '3') {
                                                        auStack_50f[0] = 0;
                                                        *(iStack_518 + 0x139) = iStack_4e8;
                                                        *(iStack_518 + 0x179) = auStack_50f;
                                                        *(iStack_518 + 0x171) = 1;
                                                        *(iStack_518 + 0x139) = iStack_4e8;
                                                        *(iStack_518 + 0x179) = auStack_50f;
                                                        *(iStack_518 + 0x171) = 1;
                                                        *(iStack_518 + 0x1d1) = 0xa5161d6;
                                                        (**(iStack_518 + 0xa9))(0);
                                                        *(iStack_518 + 0x9d) = *(iStack_518 + 0x9d);
                                                        if (*(iStack_518 + 0x9d) < 1) break;
                                                        if (*(iStack_518 + 0x49) == 0) {
                                                            *(iStack_518 + 0x49) = iStack_508 + 0xb85ad9daU ^ 0xb85a12a0
                                                            ;
                                                        }
                                                        uStack_390 = 0;
                                                        iStack_4ec = func_0x000113ae(*(iStack_518 + 0x49),iStack_4f8,
                                                                                     uStack_4fc,acStack_3b0,uStack_500
                                                                                     ,auStack_50f[0],iStack_518 + 0x29
                                                                                     ,0,&uStack_390);
                                                        if (iStack_4ec == 0) {
                                                            *(iStack_518 + 0x49) = uStack_390;
                                                        }
                                                        if (*(iStack_518 + 0x49) ==
                                                            (iStack_508 + 0x71c9ac85U ^ 0x71c9bd00)) {
                                                            uStack_418 = 0;
                                                            iStack_498 = 0;
                                                            iStack_4c4 = func_0x00010f56(iStack_508 + 0xf5408ee6U ^
                                                                                         0xf540a9e0,iStack_4f8,
                                                                                         uStack_4fc,acStack_3b0,
                                                                                         uStack_500,&uStack_418,
                                                                                         &iStack_498);
                                                            if (iStack_4c4 == 0) {
                                                                iStack_4c0 = 0;
                                                                *(iStack_518 + 0x131) = uStack_4d8;
                                                                *(iStack_518 + 0x111) = iStack_498 + 1;
                                                                *(iStack_518 + 0x1d1) = 0x4f8707eefdd993f6;
                                                                (**(iStack_518 + 0xa9))(0);
                                                                iStack_4c0 = *(iStack_518 + 0x9d);
                                                                if (iStack_4c0 != 0) {
                                                                    uStack_420 = 0;
                                                                    iStack_4c4 = func_0x000113ae(iStack_508 +
                                                                                                 0xfece6ac4aeb045c5U ^
                                                                                                 0xfece6ac4aeb05440,
                                                                                                 iStack_4f8,uStack_4fc
                                                                                                 ,acStack_3b0,
                                                                                                 uStack_500,iStack_4c0
                                                                                                 ,uStack_418,
                                                                                                 iStack_518 + 0x29,
                                                                                                 &uStack_420);
                                                                    if (iStack_4c4 == 0) {
                                                                        *(iStack_4c0 + uStack_420) = 0;
                                                                        pcStack_3d0 = NULL;
                                                                        pcStack_3c8 = NULL;
                                                                        iStack_3d8 = func_0x0000d68a(iStack_508 +
                                                                                                     0xe9945d7b7bec4d99U
                                                                                                     ^ 
                                                            0xc048d159e26add20);
                                                            if (iStack_3d8 != 0) {
                                                                func_0x0000d7ea(iStack_3d8,
                                                                                iStack_508 + 0xaa382007ff77667bU ^
                                                                                0xe4b17e4b17e49b00,&pcStack_3d0,
                                                                                iStack_508);
                                                                func_0x0000d7ea(iStack_3d8,
                                                                                iStack_508 + 0xb27ec25e8a9d2dceU ^
                                                                                0xf6e5d4c3b2a179f0,&pcStack_3c8,
                                                                                iStack_508);
                                                            }
                                                            if ((pcStack_3d0 != NULL) && (pcStack_3c8 != NULL)) {
                                                                auStack_494[0] = 0;
                                                                auStack_494[1] = 0x89;
                                                                auStack_494[2] = 0x78;
                                                                auStack_494[3] = 3;
                                                                auStack_494[4] = 0x2d;
                                                                auStack_494[5] = 0xaf;
                                                                auStack_478[0] = 0x46;
                                                                auStack_478[1] = 0x89;
                                                                auStack_478[2] = 0x14;
                                                                auStack_478[3] = 3;
                                                                auStack_478[4] = 0x4c;
                                                                auStack_478[5] = 0xaf;
                                                                auStack_478[6] = 0x72;
                                                                auStack_478[7] = 0x89;
                                                                auStack_478[8] = 0x1d;
                                                                auStack_478[9] = 3;
                                                                auStack_478[10] = 0;
                                                                auStack_478[0xb] = 0xaf;
                                                                auStack_478[0xc] = 0x4f;
                                                                auStack_478[0xd] = 0x89;
                                                                auStack_478[0xe] = 0x16;
                                                                auStack_478[0xf] = 3;
                                                                auStack_478[0x10] = 0x6e;
                                                                auStack_478[0x11] = 0xaf;
                                                                auStack_478[0x12] = 0x61;
                                                                auStack_478[0x13] = 0x89;
                                                                auStack_478[0x14] = 0x14;
                                                                auStack_478[0x15] = 3;
                                                                auStack_478[0x16] = 0x4e;
                                                                auStack_478[0x17] = 0xaf;
                                                                auStack_478[0x18] = 0x75;
                                                                auStack_478[0x19] = 0x89;
                                                                auStack_478[0x1a] = 0x14;
                                                                auStack_478[0x1b] = 3;
                                                                auStack_478[0x1c] = 0x4c;
                                                                auStack_478[0x1d] = 0xaf;
                                                                auStack_478[0x1e] = 0x74;
                                                                auStack_478[0x1f] = 0x89;
                                                                auStack_478[0x20] = 0x17;
                                                                auStack_478[0x21] = 3;
                                                                auStack_478[0x22] = 0x5f;
                                                                auStack_478[0x23] = 0xaf;
                                                                auStack_478[0x24] = 0x43;
                                                                auStack_478[0x25] = 0x89;
                                                                auStack_478[0x26] = 0x14;
                                                                auStack_478[0x27] = 3;
                                                                auStack_478[0x28] = 0x4c;
                                                                auStack_478[0x29] = 0xaf;
                                                                auStack_478[0x2a] = 0x73;
                                                                auStack_478[0x2b] = 0x89;
                                                                auStack_478[0x2c] = 0xb;
                                                                auStack_478[0x2d] = 3;
                                                                auStack_478[0x2e] = 0x2d;
                                                                auStack_478[0x2f] = 0xaf;
                                                                puStack_358 = auStack_478;
                                                                for (uStack_4e0 = 0; uStack_4e0 < 0x30;
                                                                    uStack_4e0 = uStack_4e0 + 1) {
                                                                    uStack_3f8 = auStack_478[uStack_4e0];
                                                                    auStack_478[uStack_4e0] =
                                                                         auStack_478[uStack_4e0] ^
                                                                         auStack_494[uStack_4e0 % 6];
                                                                }
                                                                iStack_388 = (*pcStack_3d0)(auStack_478,0);
                                                                if (iStack_388 != 0) {
                                                                    uStack_340 = iStack_508 + 0x77ac44b0e27e838bU ^
                                                                                 0x77ac44b0218fa900;
                                                                    iStack_338 = uStack_420 + 1;
                                                                    iStack_330 = iStack_4c0;
                                                                    (*pcStack_3c8)(iStack_388,
                                                                                   iStack_508 + 0xa0a376aU ^ 0xa0a3720,
                                                                                   0,&uStack_340);
                                                                }
                                                            }
                                                            *(iStack_518 + 0x139) = iStack_4e8;
                                                            *(iStack_518 + 0x179) = iStack_4c0;
                                                            *(iStack_518 + 0x171) = uStack_420 & 0xffffffff;
                                                            uStack_434 = 0;
                                                            *(iStack_518 + 0x139) = iStack_4e8;
                                                            *(iStack_518 + 0x179) = iStack_4c0;
                                                            *(iStack_518 + 0x171) = uStack_420 & 0xffffffff;
                                                            *(iStack_518 + 0x1d1) = 0xa716744;
                                                            (**(iStack_518 + 0xa9))(0);
                                                            uStack_434 = *(iStack_518 + 0x9d);
                                                            uStack_4ed = 10;
                                                            *(iStack_518 + 0x139) = iStack_4e8;
                                                            *(iStack_518 + 0x179) = &uStack_4ed;
                                                            *(iStack_518 + 0x171) = 1;
                                                            *(iStack_518 + 0x139) = iStack_4e8;
                                                            *(iStack_518 + 0x179) = &uStack_4ed;
                                                            *(iStack_518 + 0x171) = 1;
                                                            *(iStack_518 + 0x1d1) = 0xa716744;
                                                            (**(iStack_518 + 0xa9))(0);
                                                            uStack_434 = *(iStack_518 + 0x9d);
                                                            }
                                                            (**(iStack_518 + 0xb1))(iStack_4c0,0,iStack_498 + 1);
                                                            *(iStack_518 + 0x121) = iStack_4c0;
                                                            *(iStack_518 + 0x131) = uStack_4d8;
                                                            *(iStack_518 + 0x121) = iStack_4c0;
                                                            *(iStack_518 + 0x1d1) = 0x91160d08d4a2c5;
                                                            (**(iStack_518 + 0xa9))(0);
                                                            }
                                                            (**(iStack_518 + 0xb1))(uStack_418,0,iStack_498);
                                                            uStack_3fc = 0;
                                                            *(iStack_518 + 0x199) = uStack_418;
                                                            *(iStack_518 + 0x111) = 0;
                                                            *(iStack_518 + 0x1c1) = 0x8000;
                                                            *(iStack_518 + 0x1d1) = 0x52a9560cc8d4b869;
                                                            (**(iStack_518 + 0xa9))(0);
                                                            uStack_430 = *(iStack_518 + 0x9d) != 0;
                                                            uStack_3fc = uStack_430;
                                                            }
                                                            *(iStack_518 + 0x49) = iStack_508 + 0x4dde635aU ^ 0x4ddea820
                                                            ;
                                                            (**(iStack_518 + 0xb1))(iStack_518 + 0x29,0,0x20);
                                                        }
                                                    }
                                                    else {
                                                        *(iStack_518 + 0x49) = iStack_508 + 0xd1555e7aU ^ 0xd1559500;
                                                        (**(iStack_518 + 0xb1))(iStack_518 + 0x29,0,0x20);
                                                        auStack_488[0] = 0x47;
                                                        auStack_488[1] = 0x3c;
                                                        auStack_488[2] = 0xfc;
                                                        auStack_488[3] = 0x70;
                                                        auStack_488[4] = 0xc5;
                                                        auStack_488[5] = 0xfe;
                                                        auStack_488[6] = 0x4d;
                                                        auStack_488[7] = 0x1f;
                                                        auStack_488[8] = 0x2e;
                                                        auStack_488[9] = 0xdb;
                                                        auStack_488[10] = 0xb3;
                                                        auStack_488[0xb] = 0x44;
                                                        auStack_488[0xc] = 0x8a;
                                                        auStack_4b8[0] = 0x1c;
                                                        auStack_4b8[1] = 0x11;
                                                        auStack_4b8[2] = 0xa1;
                                                        auStack_4b8[3] = 0x50;
                                                        auStack_4b8[4] = 0x90;
                                                        auStack_4b8[5] = 0x90;
                                                        auStack_4b8[6] = 0x26;
                                                        auStack_4b8[7] = 0x71;
                                                        auStack_4b8[8] = 0x41;
                                                        auStack_4b8[9] = 0xac;
                                                        auStack_4b8[10] = 0xdd;
                                                        auStack_4b8[0xb] = 100;
                                                        auStack_4b8[0xc] = 0xe9;
                                                        auStack_4b8[0xd] = 0x28;
                                                        auStack_4b8[0xe] = 0x51;
                                                        auStack_4b8[0xf] = 0x91;
                                                        auStack_4b8[0x10] = 0x11;
                                                        auStack_4b8[0x11] = 0xab;
                                                        auStack_4b8[0x12] = 0x9a;
                                                        auStack_4b8[0x13] = 99;
                                                        auStack_4b8[0x14] = 0x15;
                                                        auStack_4b8[0x15] = 0x2e;
                                                        for (uStack_4dc = 0; uStack_4dc < 0x16;
                                                            uStack_4dc = uStack_4dc + 1) {
                                                            uStack_400 = auStack_4b8[uStack_4dc];
                                                            auStack_4b8[uStack_4dc] =
                                                                 auStack_4b8[uStack_4dc] ^ auStack_488[uStack_4dc % 0xd]
                                                            ;
                                                        }
                                                        *(iStack_518 + 0x139) = iStack_4e8;
                                                        *(iStack_518 + 0x179) = auStack_4b8;
                                                        iVar5 = (**(iStack_518 + 0xc1))(auStack_4b8,0x400);
                                                        *(iStack_518 + 0x171) = iVar5;
                                                        uStack_404 = 0;
                                                        *(iStack_518 + 0x139) = iStack_4e8;
                                                        *(iStack_518 + 0x179) = auStack_4b8;
                                                        iVar5 = (**(iStack_518 + 0xc1))(auStack_4b8,0x400);
                                                        *(iStack_518 + 0x171) = iVar5;
                                                        *(iStack_518 + 0x1d1) = 0xa716744;
                                                        (**(iStack_518 + 0xa9))(0);
                                                        uStack_404 = *(iStack_518 + 0x9d);
                                                    }
                                                }
                                                *(iStack_518 + 0x139) = iStack_4e8;
                                                *(iStack_518 + 0x1d1) = 0x4fa7169cf872f3ba;
                                                (**(iStack_518 + 0xa9))(0);
                                            }
                                            else {
                                                *(iStack_518 + 0x139) = iStack_4e8;
                                                *(iStack_518 + 0x1d1) = 0x4fa7169cf872f3ba;
                                                (**(iStack_518 + 0xa9))(0);
                                                *(iStack_518 + 0x1d1) = 0x5399162d0;
                                                (**(iStack_518 + 0xa9))(0);
                                            }
                                        }
                                    }
                                    else {
                                        *(iStack_518 + 0x1d1) = 0x5399162d0;
                                        (**(iStack_518 + 0xa9))(0);
                                    }
                                } while( true );
                            }
                            if (iStack_4f8 != 0) {
                                *(iStack_518 + 0x131) = uStack_4d8;
                                *(iStack_518 + 0x121) = iStack_4f8;
                                *(iStack_518 + 0x1d1) = 0x91160d08d4a2c5;
                                (**(iStack_518 + 0xa9))(0);
                            }
                        }
                        else if (iStack_4f8 != 0) {
                            *(iStack_518 + 0x131) = uStack_4d8;
                            *(iStack_518 + 0x121) = iStack_4f8;
                            *(iStack_518 + 0x1d1) = 0x91160d08d4a2c5;
                            (**(iStack_518 + 0xa9))(0);
                        }
                    }
                }
                else if (iStack_4f8 != 0) {
                    *(iStack_518 + 0x131) = uStack_4d8;
                    *(iStack_518 + 0x121) = iStack_4f8;
                    *(iStack_518 + 0x1d1) = 0x91160d08d4a2c5;
                    (**(iStack_518 + 0xa9))(0);
                }
            }
        }
    }
    return;
}

