
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.step([]uint8 p, uintptr * pc, int32 * val, bool first,
   []uint8 newp, bool ok) */

multireturn___uint8_bool_ runtime_step(__uint8 p,uintptr *pc,int32 *val,bool first)

{
  byte *pbVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  multireturn___uint8_bool_ mVar11;
  multireturn___uint8_bool_ mVar12;
  __uint8 p_spill;
  uintptr *pc_spill;
  int32 *val_spill;
  bool first_spill;
  
                    /* Unresolved local var: uint32 uvdelta@[???]
                       Unresolved local var: uint32 n@[???]
                       Unresolved local var: uint32 pcdelta@[???] */
  mVar11.newp.array = p.array;
  if (p_spill.len == 0) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  bVar8 = *p_spill.array;
  uVar4 = (ulong)bVar8;
  if ((bVar8 == 0) && (!first_spill)) {
    mVar11.newp.len = 0;
    mVar11.ok = SUB81(pc,0);
    mVar11.newp.cap = p_spill.len;
    return mVar11;
  }
  if ((char)bVar8 < '\0') {
    uVar3 = 0;
    uVar4 = 0;
    bVar8 = 0;
                    /* Unresolved local var: uint32 v@[???]
                       Unresolved local var: uint32 shift@[???]
                       Unresolved local var: uint32 n@[???]
                       Unresolved local var: uint8 b@[???] */
    while( true ) {
      if ((ulong)p_spill.len <= uVar3) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      pbVar1 = p_spill.array + uVar3;
      uVar9 = (int)uVar3 + 1;
      uVar3 = (ulong)uVar9;
      uVar4 = (ulong)((uint)uVar4 | (*pbVar1 & 0x7f) << (bVar8 & 0x1f));
      if ((*pbVar1 & 0x80) == 0) break;
      bVar8 = bVar8 + 7;
    }
    uVar3 = (ulong)uVar9;
  }
  else {
    uVar3 = 1;
  }
  *val_spill = *val_spill + (-((uint)uVar4 & 1) ^ (uint)(uVar4 >> 1));
  if (uVar3 <= (ulong)p_spill.len) {
    uVar7 = p_spill.len - uVar3;
    uVar4 = uVar3 & (long)-(p_spill.cap - uVar3) >> 0x3f;
    if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    uVar5 = (ulong)p_spill.array[uVar4];
    if ((char)p_spill.array[uVar4] < '\0') {
      uVar5 = 0;
      uVar9 = 0;
      bVar8 = 0;
                    /* Unresolved local var: uint32 v@[???]
                       Unresolved local var: uint32 shift@[???]
                       Unresolved local var: uint32 n@[???]
                       Unresolved local var: uint8 b@[???] */
      while( true ) {
        if (uVar7 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        lVar2 = uVar5 + uVar4;
        uVar10 = (int)uVar5 + 1;
        uVar5 = (ulong)uVar10;
        uVar9 = (p_spill.array[lVar2] & 0x7f) << (bVar8 & 0x1f) | uVar9;
        if ((p_spill.array[lVar2] & 0x80) == 0) break;
        bVar8 = bVar8 + 7;
      }
      uVar6 = (ulong)uVar10;
      uVar5 = (ulong)uVar9;
    }
    else {
      uVar6 = 1;
    }
    if (uVar6 <= uVar7) {
      *pc_spill = *pc_spill + uVar5;
      mVar12.newp.len =
           p_spill.array + ((long)-((p_spill.cap - uVar3) - uVar6) >> 0x3f & uVar6) + uVar4;
      mVar12.newp.cap = uVar7 - uVar6;
      mVar12.newp.array = (uint8 *)uVar6;
      mVar12.ok = SUB81(pc_spill,0);
      return mVar12;
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceB();
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceB();
}

