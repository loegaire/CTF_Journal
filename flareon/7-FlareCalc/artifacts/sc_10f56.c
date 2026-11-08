
ulong __stdcall fcn.00010f56(int64_t arg4,int64_t arg3,int64_t arg5,int64_t arg6)

{
    ulong uVar1;
    uint in_stack_00000028;
    int64_t *in_stack_00000030;
    uint *in_stack_00000038;
    int64_t iStack_68;
    uint32_t auStack_60 [2];
    int64_t iStack_58;
    uint uStack_50;
    uint uStack_4c;
    ulong uStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    int64_t iStack_30;
    ulong uStack_28;
    uchar auStack_20 [32];
    
    iStack_68 = 0;
    uStack_28 = 0;
    func_0x00009f6e(&iStack_68,0);
    if (iStack_68 == 0) {
        uVar1 = 0x490;
    }
    else {
        uStack_48 = 0;
        auStack_60[0] = 0;
        uStack_50 = 0;
        iStack_38 = func_0x0001159e(arg3,arg5 & 0xffffffff,&uStack_50);
        if (iStack_38 == 0) {
            uVar1 = 0x490;
        }
        else {
            iStack_30 = func_0x0000ff3a(iStack_38,uStack_50,arg4 & 0xffffffff,auStack_60);
            if (iStack_30 == 0) {
                uVar1 = 0x490;
            }
            else {
                *(iStack_68 + 0x1d1) = 0x4f87169f756bf4f9;
                (**(iStack_68 + 0xa9))(0);
                uStack_48 = *(iStack_68 + 0x9d);
                *(iStack_68 + 0x131) = uStack_48;
                iStack_58 = 0;
                *(iStack_68 + 0x131) = uStack_48;
                *(iStack_68 + 0x111) = auStack_60[0];
                *(iStack_68 + 0x1d1) = 0x4f8707eefdd993f6;
                (**(iStack_68 + 0xa9))(0);
                iStack_58 = *(iStack_68 + 0x9d);
                if (iStack_58 == 0) {
                    uVar1 = 8;
                }
                else {
                    func_0x00011876(iStack_58,iStack_30,auStack_60[0]);
                    func_0x000104b2(arg4 & 0xffffffff,arg6,in_stack_00000028,auStack_20);
                    func_0x0001036a(auStack_20,0x10,iStack_58,auStack_60[0]);
                    iStack_40 = 0;
                    *(iStack_68 + 0x199) = 0;
                    *(iStack_68 + 0x111) = auStack_60[0];
                    *(iStack_68 + 0x1c1) = 0x3000;
                    *(iStack_68 + 0x1c9) = 0x40;
                    *(iStack_68 + 0x1d1) = 0x54ab0664199dfa2c;
                    (**(iStack_68 + 0xa9))(0);
                    iStack_40 = *(iStack_68 + 0x9d);
                    if (iStack_40 == 0) {
                        func_0x00011722(iStack_58,0,auStack_60[0]);
                        *(iStack_68 + 0x131) = uStack_48;
                        *(iStack_68 + 0x121) = iStack_58;
                        *(iStack_68 + 0x1d1) = 0x91160d08d4a2c5;
                        (**(iStack_68 + 0xa9))(0);
                        uVar1 = 8;
                    }
                    else {
                        uStack_4c = 0;
                        func_0x000101e6(iStack_58,auStack_60[0],iStack_40,&uStack_4c,arg6,in_stack_00000028);
                        func_0x00011722(iStack_58,0,auStack_60[0]);
                        *(iStack_68 + 0x131) = uStack_48;
                        *(iStack_68 + 0x121) = iStack_58;
                        *(iStack_68 + 0x1d1) = 0x91160d08d4a2c5;
                        (**(iStack_68 + 0xa9))(0);
                        *in_stack_00000030 = iStack_40;
                        *in_stack_00000038 = uStack_4c;
                        uVar1 = 0;
                    }
                }
            }
        }
    }
    return uVar1;
}

