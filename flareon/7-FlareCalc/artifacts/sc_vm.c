
uint __stdcall fcn.0001076a(int64_t arg4,int64_t arg3)

{
    int64_t iVar1;
    ulong *puVar2;
    int64_t iStack_288;
    uint uStack_280;
    int iStack_27c;
    int64_t iStack_278;
    int *piStack_270;
    ulong uStack_268;
    int iStack_260;
    ulong uStack_258;
    int64_t iStack_250;
    int64_t iStack_248;
    int64_t iStack_240;
    int64_t iStack_238;
    ulong uStack_230;
    int64_t iStack_228;
    uchar auStack_218 [528];
    
    uStack_280 = 0;
    iStack_288 = 0;
    uStack_230 = 0;
    func_0x00009f6e(&iStack_288,0);
    if (iStack_288 == 0) {
        uStack_280 = 0x490;
    }
    else {
        iStack_248 = 0;
        iStack_238 = 0;
        iStack_228 = 0;
        puVar2 = &uStack_268;
        for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar2 = 0;
            puVar2 = puVar2 + 1;
        }
        iStack_27c = 0;
        iStack_278 = -1;
        uStack_258 = 0;
        piStack_270 = NULL;
        iStack_250 = 0;
        iStack_240 = 0;
        iStack_260 = 0;
        *(iStack_288 + 0xe9) = auStack_218;
        *(iStack_288 + 0x1d1) = 0x6a58db63647e15f9;
        (**(iStack_288 + 0xa9))(0);
        if (*(iStack_288 + 0x9d) == 0) {
            *(iStack_288 + 0x1d1) = 0x4c834ea45a5d993c;
            (**(iStack_288 + 0xa9))(0);
            uStack_280 = *(iStack_288 + 0x9d);
        }
        else {
            *(iStack_288 + 0x1d1) = 0x4c8bb1238d6d1401;
            (**(iStack_288 + 0xa9))(0);
            iStack_248 = *(iStack_288 + 0x9d);
            iStack_228 = iStack_248 + *(iStack_248 + 0x3c);
            uStack_268 = *(iStack_228 + 0x88 + (uStack_230 + 0xecce164U ^ 0xecce160) * 8);
            iStack_240 = iStack_248;
            iStack_238 = iStack_248;
            if ((uStack_268 == 0) || (uStack_268._4_4_ = uStack_268 >> 0x20, uStack_268._4_4_ == 0)) {
                uStack_280 = 0x490;
            }
            else {
                *(iStack_288 + 0xe9) = auStack_218;
                *(iStack_288 + 0x1d1) = 0x4583522c693333c0;
                (**(iStack_288 + 0xa9))(0);
                iStack_278 = *(iStack_288 + 0x9d);
                *(iStack_288 + 0x119) = iStack_278;
                if (iStack_278 == -1) {
                    *(iStack_288 + 0x1d1) = 0x4c834ea45a5d993c;
                    (**(iStack_288 + 0xa9))(0);
                    uStack_280 = *(iStack_288 + 0x9d);
                }
                else {
                    *(iStack_288 + 0x119) = iStack_278;
                    *(iStack_288 + 0x109) = uStack_268 & 0xffffffff;
                    *(iStack_288 + 0x1d1) = 0x4c8b427f362fb476;
                    (**(iStack_288 + 0xa9))(0);
                    iStack_260 = *(iStack_288 + 0x9d);
                    if (iStack_260 == -1) {
                        *(iStack_288 + 0x1d1) = 0x4c834ea45a5d993c;
                        (**(iStack_288 + 0xa9))(0);
                        uStack_280 = *(iStack_288 + 0x9d);
                    }
                    else {
                        *(iStack_288 + 0x1d1) = 0x4f87169f756bf4f9;
                        (**(iStack_288 + 0xa9))(0);
                        uStack_258 = *(iStack_288 + 0x9d);
                        *(iStack_288 + 0x131) = uStack_258;
                        *(iStack_288 + 0x131) = uStack_258;
                        *(iStack_288 + 0x111) = uStack_268 >> 0x20;
                        *(iStack_288 + 0x1d1) = 0x4f8707eefdd993f6;
                        (**(iStack_288 + 0xa9))(0);
                        piStack_270 = *(iStack_288 + 0x9d);
                        if (piStack_270 == NULL) {
                            uStack_280 = 8;
                        }
                        else {
                            *(iStack_288 + 0x2e9) = 0;
                            *(iStack_288 + 0x119) = iStack_278;
                            *(iStack_288 + 0x121) = piStack_270;
                            *(iStack_288 + 0x111) = uStack_268 >> 0x20;
                            *(iStack_288 + 0x1d1) = 0xa5160c48d26645;
                            (**(iStack_288 + 0xa9))(0);
                            if (*(iStack_288 + 0x9d) == 0) {
                                *(iStack_288 + 0x1d1) = 0x4c834ea45a5d993c;
                                (**(iStack_288 + 0xa9))(0);
                                uStack_280 = *(iStack_288 + 0x9d);
                            }
                            else if (*(iStack_288 + 0x2e9) < 8) {
                                uStack_280 = 0xd;
                            }
                            else {
                                iStack_27c = *piStack_270;
                                *(iStack_288 + 0x131) = uStack_258;
                                *(iStack_288 + 0x111) = iStack_27c - 8;
                                *(iStack_288 + 0x1d1) = 0x4f8707eefdd993f6;
                                (**(iStack_288 + 0xa9))(0);
                                iStack_250 = *(iStack_288 + 0x9d);
                                if (iStack_250 == 0) {
                                    uStack_280 = 8;
                                }
                                else {
                                    func_0x00011876(iStack_250,piStack_270 + 2,iStack_27c + -8);
                                    *arg4 = iStack_250;
                                    *arg3 = iStack_27c + -8;
                                }
                            }
                        }
                    }
                }
            }
        }
        if (iStack_278 != -1) {
            *(iStack_288 + 0x119) = iStack_278;
            *(iStack_288 + 0x1d1) = 0x4fa7164419d1372b;
            (**(iStack_288 + 0xa9))(0);
        }
        if (piStack_270 != NULL) {
            *(iStack_288 + 0x131) = uStack_258;
            *(iStack_288 + 0x121) = piStack_270;
            *(iStack_288 + 0x1d1) = 0x91160d08d4a2c5;
            (**(iStack_288 + 0xa9))(0);
        }
    }
    return uStack_280;
}


//WARNING: Removing unreachable block (ram,0x000114b7)

int __stdcall fcn.000113ae(int64_t arg4,int64_t arg3,int64_t arg5,int64_t arg6)

{
    int iVar1;
    uint in_stack_00000028;
    ulong in_stack_00000030;
    ulong in_stack_00000038;
    ulong in_stack_00000040;
    ulong *in_stack_00000048;
    int64_t iStack_40;
    uint auStack_38 [2];
    code *pcStack_30;
    uint uStack_28;
    ulong uStack_20;
    code *pcStack_18;
    ulong uStack_10;
    
    iStack_40 = 0;
    uStack_20 = 0;
    func_0x00009f6e(&iStack_40,0);
    if (iStack_40 == 0) {
        iVar1 = 0x490;
    }
    else {
        pcStack_30 = NULL;
        auStack_38[0] = 0;
        iVar1 = func_0x00010f56(arg4 & 0xffffffff,arg3,arg5 & 0xffffffff,arg6,in_stack_00000028,&pcStack_30,
                                auStack_38);
        if (iVar1 == 0) {
            pcStack_18 = pcStack_30;
            uStack_10 = (*pcStack_30)(in_stack_00000030,in_stack_00000038,in_stack_00000040);
            if (in_stack_00000048 != NULL) {
                *in_stack_00000048 = uStack_10;
            }
            func_0x00011722(pcStack_30,0,auStack_38[0]);
            uStack_28 = 0;
            *(iStack_40 + 0x199) = pcStack_30;
            *(iStack_40 + 0x111) = 0;
            *(iStack_40 + 0x1c1) = 0x8000;
            *(iStack_40 + 0x1d1) = 0x52a9560cc8d4b869;
            (**(iStack_40 + 0xa9))(0);
        }
    }
    return iVar1;
}

