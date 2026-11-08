
void fcn.140001000(void)

{
    int iVar1;
    
    //[00] -r-x section size 868352 named .text
    iVar1 = 0;
    *0x1094 = *0x1094 & 0xfffffdff;
    return;


void fcn.140001560(int64_t arg1,int64_t arg2)

{
    int iVar1;
    char *pcVar2;
    char cVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    uint32_t *puVar8;
    int iVar9;
    ulong uVar10;
    int64_t iVar11;
    int64_t iVar12;
    uint32_t *arg1_00;
    int iVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    uint32_t *puVar16;
    char *pcVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    int iVar21;
    uchar auStack_98 [32];
    uint32_t uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    uint32_t *puStack_50;
    uint32_t *puStack_48;
    uint32_t *puStack_40;
    uint64_t uStack_38;
    
    uVar10 = (****0x1400e9268)(*0x1400e9268,arg1,*0x1400e9228);
    uStack_78 = 0x36c;
    iVar11 = (**(**0x1400e9268 + 8))(*0x1400e9268,arg1,uVar10,*0x1400e9228);
    uStack_78 = 0x262;
    iVar12 = (**(**0x1400e9268 + 0x18))(*0x1400e9268,arg1,iVar11);
    uStack_78 = 0x187;
    uStack_78 = 0x27;
    uStack_68 = (**(**0x1400e9268 + 0x20))(*0x1400e9268,arg1,iVar11);
    uStack_78 = 0x328;
    uStack_70 = (**(**0x1400e9268 + 0x28))(*0x1400e9268,arg1,iVar11);
    uStack_78 = 0x38e;
    uVar14 = *(iVar11 + 0x18);
    puStack_40 = NULL;
    puStack_50 = NULL;
    puStack_48 = NULL;
    if (uVar14 == 0) {
        arg1_00 = NULL;
    else {
        arg1_00 = fcn.140008140(uVar14 * 4);
        puStack_50 = arg1_00;
        puStack_40 = arg1_00 + uVar14;
        fcn.1400d2be0(arg1_00,0,uVar14 * 4);
        puStack_48 = arg1_00 + uVar14;
    puVar8 = puStack_48;
    iVar7 = *0x1400ddecc;
    iVar6 = *0x1400ddec8;
    iVar5 = *0x1400ddec4;
    iVar4 = *0x1400ddec0;
    uStack_78 = 0x2eb;
    uVar20 = puVar8 - arg1_00 >> 2;
    puVar16 = arg1_00;
    if (uVar20 < 0x80000000) {
        if ((uVar14 != 0) && (uVar19 = 0, 0xf < uVar14)) {
            uVar15 = uVar14 & 0x8000000f;
            if (uVar15 < 0) {
                uVar15 = (uVar15 - 1 | 0xfffffff0) + 1;
            puVar16 = arg1_00 + 8;
            iVar21 = 8;
                iVar9 = iVar21 + -4;
                iVar13 = uVar19;
                puVar16[-8] = iVar13 + iVar4;
                puVar16[-7] = iVar13 + iVar5;
                puVar16[-6] = iVar13 + iVar6;
                puVar16[-5] = iVar13 + iVar7;
                iVar1 = iVar21 + 4;
                uVar19 = iVar13 + 0x10U;
                puVar16[-4] = iVar9 + iVar4;
                puVar16[-3] = iVar9 + iVar5;
                puVar16[-2] = iVar9 + iVar6;
                puVar16[-1] = iVar9 + iVar7;
                *puVar16 = iVar21 + iVar4;
                puVar16[1] = iVar21 + iVar5;
                puVar16[2] = iVar21 + iVar6;
                puVar16[3] = iVar21 + iVar7;
                puVar16[4] = iVar1 + iVar4;
                puVar16[5] = iVar1 + iVar5;
                puVar16[6] = iVar1 + iVar6;
                puVar16[7] = iVar1 + iVar7;
                puVar16 = puVar16 + 0x10;
                iVar21 = iVar21 + 0x10;
        for (iVar11 = uVar19; iVar11 != uVar14; iVar11 = iVar11 + 1) {
            arg1_00[iVar11] = uVar19;
    else {
        for (; puVar16 != puVar8; puVar16 = puVar16 + 1) {
            *puVar16 = uVar19;
    for (; arg1_00 != puVar8; arg1_00 = arg1_00 + 1) {
        pcVar17 = *(iVar12 + *arg1_00 * 4) + arg1;
        uStack_78 = 0x179;
        uStack_78 = 0x278;
        cVar3 = *pcVar17;
        while (cVar3 != '\0') {
            cVar3 = pcVar17[uVar19];
        pcVar2 = pcVar17 + uVar19;
        uVar14 = *0x1400e9228 + 0xeb66ba25U ^ 0xeb66af20;
        for (; pcVar17 != pcVar2; pcVar17 = pcVar17 + 1) {
            uVar14 = uVar14 * 0x21 + *pcVar17;
        if (uVar14 == arg2) break;
    fcn.140007410(&puStack_50);
    fcn.1400bb1b0(uStack_38 ^ auStack_98);
    return;


void fcn.1400019d0(ulong noname_0,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    uint *puVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int iVar8;
    uint64_t uVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    uchar auStack_288 [32];
    ulong uStack_268;
    uint32_t uStack_260;
    ulong uStack_258;
    uint32_t uStack_248;
    uint32_t auStack_244 [3];
    uchar auStack_238 [528];
    uint64_t uStack_28;
    
    uVar11 = *0x1400e9228 + 0xfb70ae735e4603e0U ^ 0xfb70ae735e4603e0;
    uStack_248 = 0x6d;
    uVar9 = *0x1400e9228 + 0x7aa5c6a9f94262a0U ^ 0x7aa5c6a9f94262a0;
    if (arg2 != 0) {
        uVar11 = *arg2;
        uStack_248 = 0x98;
        uVar9 = *(arg2 + 8);
        fcn.1400bb7b4(arg2,0x10);
    (**((*0x1400e9228 + -0x2edaa760 ^ 0xffffffffd12558a0U) * 8 + 0x1400e8ec8))
              (0,auStack_238,*0x1400e9228 + 0xd12559a4U ^ 0xd12558a0);
    uStack_248 = 0x298;
    iVar1 = (**(**0x1400e9268 + 0x30))(*0x1400e9268,*0x1400e9228);
    iVar1 = *((*0x1400e9228 + 0x5b8a1f58 ^ 0x5b8a1f40) + iVar1);
    uStack_248 = 0x3cb;
    iVar8 = *0x1400e9228;
    iVar1 = *(iVar1 + (iVar8 + 0x4404ad40 ^ 0x4404ad60));
    uVar2 = *(iVar1 + 0x20);
    uStack_248 = 0x3cc;
    uVar2 = (****0x1400e9268)(*0x1400e9268,uVar2,*0x1400e9228);
    uStack_248 = 0xd4;
    puVar3 = (**(**0x1400e9268 + 0x10))(*0x1400e9268,uVar2,*0x1400e9228);
    uStack_248 = 0x296;
    iVar8 = *0x1400e9228;
    uStack_258 = 0;
    iVar1 = (**((iVar8 + 0x51e060e1 ^ 0x51e060e0U) * 8 + 0x1400e8ec8))
                      (auStack_238,iVar8 + 0x6cdcbfa0U ^ 0xecdcbfa0,iVar8 + 0x3a5aef01U ^ 0x3a5aef00,0);
    if (iVar1 != -1) {
        (**((*0x1400e9228 + -0x59b395fe ^ 0xffffffffa64c6a00U) * 8 + 0x1400e8ec8))
                  (iVar1,*puVar3,0,*0x1400e9228 + 0xa64c6a00U ^ 0xa64c6a00);
        uStack_248 = 0x38d;
        iVar8 = *0x1400e9228;
        iVar4 = (**((iVar8 + 0x77418644 ^ 0x77418640U) * 8 + 0x1400e8ec8))
                          (0,*0x1400dde5c,iVar8 + 0x5fbc2460U ^ 0x5fbc1460,iVar8 + 0xad3a4380U ^ 0xad3a43c0);
        uStack_248 = 0xe8;
        if (iVar4 == 0) {
            (**((*0x1400e9228 + 0x56125605 ^ 0x56125600U) * 8 + 0x1400e8ec8))(iVar1);
        else {
            auStack_244[0] = *0x1400e9228 + 0x7e2f6000U ^ 0x7e2f6000;
            uStack_268 = 0;
            (**((*0x1400e9228 + 0x192bbec3 ^ 0x192bbec0U) * 8 + 0x1400e8ec8))(iVar1,iVar4,*0x1400dde5c,auStack_244);
            (**((*0x1400e9228 + 0x1a64ce5 ^ 0x1a64ce0U) * 8 + 0x1400e8ec8))(iVar1);
            uStack_248 = 0x12e;
            uVar5 = *0x1400dde58;
            (*(iVar4 + uVar5))(uVar11,uVar9);
            uStack_248 = 0x27f;
    fcn.1400bb1b0(uStack_28 ^ auStack_288);
    return;

