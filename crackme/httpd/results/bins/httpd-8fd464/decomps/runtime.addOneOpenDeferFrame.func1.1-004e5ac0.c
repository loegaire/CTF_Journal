
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.addOneOpenDeferFrame.func1.1(runtime.stkframe * frame,
   void * unused, bool ~r2) */

bool runtime_addOneOpenDeferFrame_func1_1(runtime_stkframe *frame,void *unused)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  runtime__func *prVar4;
  bool bVar5;
  long extraout_RAX;
  long extraout_RAX_00;
  long extraout_RAX_01;
  long extraout_RAX_02;
  long extraout_RAX_03;
  long lVar6;
  long in_RDX;
  byte *pbVar7;
  byte *pbVar8;
  long extraout_RDX;
  uint8 *puVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  string s;
  interface___ e;
  string s_00;
  string s_01;
  runtime_stkframe *frame_spill;
  void *unused_spill;
  long local_40;
  
                    /* Unresolved local var: runtime._defer * prevDefer@[???]
                       Unresolved local var: runtime.g * gp@[DW_OP_reg0(RAX)]
                       Unresolved local var: void * fd@[???]
                       Unresolved local var: runtime._defer * d@[???]
                       Unresolved local var: runtime._defer * prev@[???]
                       Unresolved local var: uint32 maxargsize@[???]
                       Unresolved local var: runtime._defer * d1@[???]
                       Unresolved local var: void * ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  lVar3 = *(long *)(in_RDX + 0x10);
  bVar5 = SUB81(lVar3,0);
  if ((*(long *)(in_RDX + 8) != 0) && (frame_spill->sp == *(uintptr *)(*(long *)(in_RDX + 8) + 8)))
  {
    return bVar5;
  }
  prVar4 = (frame_spill->fn)._func;
                    /* Unresolved local var: void * p@[???] */
  if (prVar4->nfuncdata < 5) {
    pbVar7 = (byte *)0x0;
  }
  else {
    uVar2 = prVar4->npcdata;
    puVar9 = prVar4->_ + (ulong)uVar2 * 4 + 2;
    if (((uint)puVar9 >> 2 & 1) != 0) {
      if (((uint)prVar4 >> 2 & 1) != 0) {
        runtime_printlock();
        local_40 = 0x19;
        s.len = (int)frame_spill;
        s.str = &DAT_0029ee6b;
        runtime_printstring(s);
        runtime_printpointer(prVar4);
        runtime_printnl();
        runtime_printunlock();
                    /* Unresolved local var: uintptr dsp@[???] */
      }
      puVar9 = prVar4[1]._ + (ulong)uVar2 * 4 + -0x2a;
    }
    pbVar7 = *(byte **)(puVar9 + 0x20);
  }
  if (pbVar7 == (byte *)0x0) {
    return bVar5;
  }
  lVar6 = 0;
  for (lVar10 = *(long *)(lVar3 + 0x28);
      (lVar10 != 0 && (*(ulong *)(lVar10 + 8) <= frame_spill->sp));
      lVar10 = *(long *)(lVar10 + 0x28)) {
    if (frame_spill->sp == *(ulong *)(lVar10 + 8)) {
      if (*(char *)(lVar10 + 6) == '\0') {
        s_01.len = (int)frame_spill;
        s_01.str = &DAT_0029d1ab;
                    /* WARNING: Subroutine does not return */
        runtime_throw(s_01);
      }
      return bVar5;
    }
    lVar6 = lVar10;
  }
  if (((frame_spill->fn)._func)->deferreturn == 0) {
    s_00.len = (int)frame_spill;
    s_00.str = &DAT_0029b635;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_00);
  }
  iVar11 = 0;
  uVar12 = 0;
  pbVar8 = pbVar7;
                    /* Unresolved local var: uint32 r@[???]
                       Unresolved local var: int shift@[???]
                       Unresolved local var: uint8 b@[???] */
  while( true ) {
    bVar1 = *pbVar8;
    if (bVar1 < 0x80) {
      if ((long)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        runtime_panicshift();
      }
      runtime_newdefer(iVar11 + ((uint)bVar1 << ((byte)uVar12 & 0x1f) & -(uint)(uVar12 < 0x20)));
      *(undefined1 *)(local_40 + 6) = 1;
      if (runtime_writeBarrier._0_4_ == 0) {
        *(undefined8 *)(local_40 + 0x20) = 0;
      }
      else {
        runtime_gcWriteBarrierCX();
        local_40 = extraout_RAX;
      }
      prVar4 = (frame_spill->fn)._func;
      *(ulong *)(local_40 + 0x10) = (ulong)prVar4->deferreturn + prVar4->entry;
      *(uintptr *)(local_40 + 0x38) = frame_spill->varp;
      if (runtime_writeBarrier._0_4_ == 0) {
        *(byte **)(local_40 + 0x30) = pbVar7;
      }
      else {
        runtime_gcWriteBarrierDX();
        local_40 = extraout_RAX_00;
      }
      *(uintptr *)(local_40 + 0x40) = frame_spill->pc;
      *(uintptr *)(local_40 + 8) = frame_spill->sp;
      if (runtime_writeBarrier._0_4_ == 0) {
        *(long *)(local_40 + 0x28) = lVar10;
      }
      else {
        runtime_gcWriteBarrierCX();
        local_40 = extraout_RAX_01;
      }
      if (lVar6 == 0) {
        if (runtime_writeBarrier._0_4_ == 0) {
          *(long *)(lVar3 + 0x28) = local_40;
        }
        else {
          runtime_gcWriteBarrier();
          local_40 = extraout_RAX_03;
        }
      }
      else if (runtime_writeBarrier._0_4_ == 0) {
        *(long *)(lVar6 + 0x28) = local_40;
      }
      else {
        runtime_gcWriteBarrier();
        local_40 = extraout_RAX_02;
      }
      return SUB81(local_40,0);
    }
    if ((long)uVar12 < 0) break;
    iVar11 = iVar11 + ((bVar1 & 0xffffff7f) << ((byte)uVar12 & 0x1f) & -(uint)(uVar12 < 0x20));
    uVar12 = uVar12 + 7;
    if (0x1c < (long)uVar12) {
      e.data = frame_spill;
      e._type = (runtime__type *)runtime__stmp_90;
      runtime_gopanic(e);
      break;
    }
    pbVar8 = pbVar8 + 1;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicshift();
}

