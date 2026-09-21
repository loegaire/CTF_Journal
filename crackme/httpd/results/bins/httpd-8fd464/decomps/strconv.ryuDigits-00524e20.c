
/* WARNING: Unknown calling convention */

void strconv_ryuDigits(strconv_decimalSlice *d,uint64 lower,uint64 central,uint64 upper,bool c0,
                      bool cup)

{
  strconv_decimalSlice *psVar1;
  ulong extraout_RAX;
  ulong uVar2;
  uint central_00;
  uint uVar3;
  uint32 uVar4;
  uint32 uVar5;
  ulong uVar6;
  strconv_decimalSlice *psVar7;
  bool cup_00;
  ulong endindex;
  long lVar9;
  long in_FS_OFFSET;
  strconv_decimalSlice *d_spill;
  uint64 lower_spill;
  uint64 central_spill;
  uint64 upper_spill;
  bool c0_spill;
  bool cup_spill;
  uint uVar8;
  
                    /* Unresolved local var: uint32 lhi@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  endindex = upper_spill % 1000000000;
  uVar3 = (uint)(upper_spill / 1000000000);
  cup_00 = SUB81(central_spill % 1000000000,0);
  uVar8 = (uint)(central_spill % 1000000000);
  uVar4 = (uint32)(lower_spill % 1000000000);
  uVar5 = (uint32)(central_spill / 1000000000);
  if (uVar3 == 0) {
    strconv_ryuDigits32(d_spill,uVar4,(uint)cup_spill,uVar5,false,cup_00,endindex);
  }
  else {
    central_00 = (uint)(lower_spill / 1000000000);
    if (central_00 < uVar3) {
      if (uVar4 != 0) {
        central_00 = central_00 + 1;
      }
      if (c0_spill) {
        psVar1 = (strconv_decimalSlice *)(ulong)(uVar8 == 0);
      }
      else {
        psVar1 = (strconv_decimalSlice *)0x0;
      }
      if (uVar8 < 0x1dcd6501) {
        uVar4 = (uint)CONCAT71((int7)(lower_spill % 1000000000 >> 8),uVar8 == 500000000) &
                (uint)cup_spill;
      }
      else {
        uVar4 = 1;
      }
      strconv_ryuDigits32(psVar1,uVar4,central_00,uVar5,SUB81(d_spill,0),cup_00,endindex);
      d_spill->dp = d_spill->dp + 9;
    }
    else {
                    /* Unresolved local var: uint n@[???] */
      d_spill->nd = 0;
      uVar2 = 9;
      uVar6 = central_spill / 1000000000;
                    /* Unresolved local var: uint32 v@[???] */
      while ((int)uVar6 != 0) {
        if ((ulong)(d_spill->d).len <= uVar2 - 1) goto LAB_0052511b;
                    /* Unresolved local var: uint32 v2@[???] */
        (d_spill->d).array[uVar2 - 1] = (char)uVar6 + (char)((uVar6 & 0xffffffff) / 10) * -10 + 0x30
        ;
        uVar2 = uVar2 - 1;
        uVar6 = (uVar6 & 0xffffffff) / 10;
      }
      uVar6 = (d_spill->d).len;
      if (uVar6 < uVar2) {
        runtime_panicSliceBU();
LAB_0052511b:
                    /* WARNING: Subroutine does not return */
        runtime_panicIndexU();
      }
      (d_spill->d).len = uVar6 - uVar2;
      lVar9 = (d_spill->d).cap - uVar2;
      (d_spill->d).cap = lVar9;
      psVar1 = d_spill;
      if (runtime_writeBarrier._0_4_ == 0) {
        (d_spill->d).array = (d_spill->d).array + (-lVar9 >> 0x3f & uVar2);
        uVar5 = 0;
      }
      else {
        psVar7 = d_spill;
        runtime_gcWriteBarrierCX();
        uVar5 = (uint32)psVar7;
        uVar2 = extraout_RAX;
      }
      psVar1->nd = -(uVar2 - 9);
      strconv_ryuDigits32((strconv_decimalSlice *)(-(uVar2 - 9) + 8),uVar4,(uint)cup_spill,uVar5,
                          SUB81(psVar1,0),SUB41(uVar8,0),endindex);
    }
  }
  while (lVar9 = d_spill->nd, 0 < lVar9) {
    if ((ulong)(d_spill->d).len <= lVar9 - 1U) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if ((d_spill->d).array[lVar9 + -1] != 0x30) break;
    d_spill->nd = lVar9 - 1U;
  }
  while( true ) {
    if (d_spill->nd < 1) {
      return;
    }
    if ((d_spill->d).len == 0) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if (*(d_spill->d).array != 0x30) {
      return;
    }
    d_spill->nd = d_spill->nd + -1;
    d_spill->dp = d_spill->dp + -1;
    lVar9 = (d_spill->d).len;
    if (lVar9 == 0) break;
    (d_spill->d).len = lVar9 + -1;
    lVar9 = (d_spill->d).cap + -1;
    (d_spill->d).cap = lVar9;
    if (runtime_writeBarrier._0_4_ == 0) {
      (d_spill->d).array = (d_spill->d).array + (-lVar9 >> 0x3f & 1);
    }
    else {
      runtime_gcWriteBarrierDX();
    }
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceB();
}

