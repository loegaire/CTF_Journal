
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.stealWork(int64 now, runtime.g * gp, bool inheritTime,
   int64 rnow, int64 pollUntil, bool newWork) */

multireturn_runtime_g___bool_int64_int64_bool_ runtime_stealWork(int64 now)

{
  uint uVar1;
  uint32 uVar2;
  runtime_p *_p_;
  uint32 uVar3;
  runtime_p *prVar4;
  long lVar5;
  ulong uVar6;
  runtime_p *prVar7;
  long lVar8;
  long lVar9;
  byte bVar10;
  byte bVar11;
  ulong in_RDI;
  uint uVar12;
  long in_FS_OFFSET;
  multireturn_runtime_g___bool_ mVar13;
  multireturn_runtime_g___bool_int64_int64_bool_ mVar14;
  multireturn_runtime_g___bool_int64_int64_bool_ mVar15;
  multireturn_runtime_g___bool_int64_int64_bool_ mVar16;
  multireturn_runtime_g___bool_int64_int64_bool_ mVar17;
  int64 now_spill;
  undefined1 local_78;
  undefined7 uStack_77;
  long local_70;
  char local_68;
  uint32 local_28;
  uint local_20;
  
                    /* Unresolved local var: runtime.p * pp@[???]
                       Unresolved local var: bool ranTimer@[???] */
  while (&stack0xfffffffffffffff8 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  _p_ = *(runtime_p **)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8);
                    /* Unresolved local var: int i@[???] */
  lVar5 = 0;
  lVar9 = 0;
  bVar10 = 0;
  while( true ) {
    if (3 < lVar5) {
      mVar14.inheritTime = (undefined1)now_spill;
      mVar14.gp = (runtime_g *)lVar5;
      mVar14.rnow = lVar9;
      mVar14.newWork = (bool)bVar10;
      mVar14.pollUntil = in_RDI;
      return mVar14;
    }
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: uint32 s1@[???]
                       Unresolved local var: uint32 s0@[???] */
    lVar8 = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30);
    uVar12 = *(uint *)(lVar8 + 0x128);
    uVar1 = *(uint *)(lVar8 + 300);
    *(uint *)(lVar8 + 0x128) = uVar1;
    uVar12 = uVar12 << 0x11 ^ uVar12;
    uVar12 = uVar1 >> 0x10 ^ uVar12 >> 7 ^ uVar1 ^ uVar12;
    *(uint *)(lVar8 + 300) = uVar12;
    uVar3 = runtime_stealOrder.count;
    uVar12 = uVar12 + uVar1;
    if (runtime_stealOrder.count == 0) {
                    /* WARNING: Subroutine does not return */
      runtime_panicdivide();
    }
    in_RDI = (ulong)uVar12 % (ulong)runtime_stealOrder.count;
    if ((int)runtime_stealOrder.coprimes.len == 0) {
                    /* WARNING: Subroutine does not return */
      runtime_panicdivide();
    }
    uVar6 = (ulong)uVar12 % (runtime_stealOrder.coprimes.len & 0xffffffffU);
    if ((ulong)runtime_stealOrder.coprimes.len <= uVar6) break;
    uVar2 = runtime_stealOrder.coprimes.array[uVar6];
    local_28 = 0;
    local_20 = (uint)in_RDI;
    while (uVar3 != local_28) {
      if (runtime_sched.gcwaiting != 0) {
        mVar17.inheritTime = (undefined1)now_spill;
        mVar17.gp = (runtime_g *)uVar6;
        mVar17.rnow = lVar9;
        mVar17.newWork = (bool)bVar10;
        mVar17.pollUntil = in_RDI;
        return mVar17;
      }
      prVar7 = (runtime_p *)(ulong)local_20;
      if ((ulong)runtime_allp.len <= prVar7) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if (_p_ != runtime_allp.array[(long)prVar7]) {
        if (lVar5 == 3) {
          prVar7 = (runtime_p *)(ulong)(local_20 >> 5);
          if ((ulong)runtime_timerpMask.len <= prVar7) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          uVar6 = (ulong)CONCAT31((int3)(runtime_timerpMask.array[(long)prVar7] >> 8),
                                  (runtime_timerpMask.array[(long)prVar7] >> (local_20 & 0x1f) & 1)
                                  != 0);
        }
        else {
          uVar6 = 0;
        }
        prVar4 = (runtime_p *)now_spill;
        if ((char)uVar6 != '\0') {
          bVar11 = bVar10;
                    /* Unresolved local var: runtime.g * gp@[???] */
                    /* Unresolved local var: int64 tnow@[???]
                       Unresolved local var: int64 w@[???] */
          runtime_checkTimers(prVar7,now_spill);
          lVar8 = lVar9;
          if (((local_70 != 0) && (lVar8 = local_70, lVar9 != 0)) &&
             (lVar8 = lVar9, local_70 < lVar9)) {
            lVar8 = local_70;
          }
          lVar9 = lVar8;
          prVar4 = (runtime_p *)CONCAT71(uStack_77,local_78);
          if (local_68 != '\0') {
                    /* Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: bool inheritTime@[???] */
            mVar13 = runtime_runqget(_p_);
            mVar16.inheritTime = mVar13.inheritTime;
            if ((runtime_p *)now_spill != (runtime_p *)0x0) {
              mVar16.gp = (ulong)bVar10;
              mVar16.rnow._0_1_ = local_78;
              mVar16.rnow._1_7_ = 0;
              mVar16.newWork = (bool)bVar11;
              mVar16.pollUntil = uVar6;
              return mVar16;
            }
            bVar10 = 1;
          }
        }
        now_spill = (int64)prVar4;
        prVar7 = (runtime_p *)(ulong)(local_20 >> 5);
        if ((ulong)runtime_idlepMask.len <= prVar7) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        uVar6 = (ulong)runtime_idlepMask.array[(long)prVar7];
        if ((runtime_idlepMask.array[(long)prVar7] >> (local_20 & 0x1f) & 1) == 0) {
          local_78 = lVar5 == 3;
          lVar8 = lVar9;
          bVar11 = bVar10;
          runtime_runqsteal(prVar7,(runtime_p *)now_spill,SUB81(lVar9,0));
          if (local_70 != 0) {
            mVar15.gp = (ulong)bVar10;
            mVar15.inheritTime = (undefined1)now_spill;
            mVar15.rnow = lVar8;
            mVar15.newWork = (bool)bVar11;
            mVar15.pollUntil = uVar6;
            return mVar15;
          }
        }
      }
      local_28 = local_28 + 1;
      in_RDI = (ulong)uVar3;
      if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        runtime_panicdivide();
      }
      uVar6 = (local_20 + uVar2) / in_RDI;
      local_20 = (local_20 + uVar2) % uVar3;
    }
    lVar5 = lVar5 + 1;
                    /* Unresolved local var: runtime.randomEnum enum@[???]
                       Unresolved local var: runtime.p * p2@[???] */
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

