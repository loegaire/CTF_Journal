
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_runfinq(void)

{
  runtime_finblock *prVar1;
  runtime_g *prVar2;
  runtime_mutex *l;
  runtime_interfacetype *inter;
  undefined8 *puVar3;
  undefined8 *puVar4;
  runtime_finblock *unaff_RBX;
  uint uVar5;
  ulong in_RSI;
  runtime_g **in_RDI;
  long lVar7;
  undefined4 uVar8;
  runtime__type *prVar9;
  byte bVar10;
  long in_FS_OFFSET;
  string s;
  string s_00;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_68;
  runtime_mutex *local_60;
  runtime_finblock *local_58;
  runtime_finblock *local_50;
  runtime_mutex *local_48;
  runtime_mutex *local_40;
  long local_38;
  runtime_interfacetype *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  ulong uVar6;
  
                    /* Unresolved local var: void * frame@[???]
                       Unresolved local var: uintptr framecap@[???] */
  while (&local_18 <= *(undefined8 ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  l = (runtime_mutex *)0x0;
  puVar3 = (undefined8 *)0x0;
  do {
    while( true ) {
      local_60 = l;
      local_20 = puVar3;
      runtime_lock2(l);
      prVar1 = runtime_finq;
      runtime_finq = (runtime_finblock *)0x0;
      if (prVar1 != (runtime_finblock *)0x0) break;
                    /* Unresolved local var: runtime.g * gp@[???] */
      prVar2 = *(runtime_g **)(in_FS_OFFSET + -8);
      if (runtime_writeBarrier._0_4_ != 0) {
        in_RDI = &runtime_fing;
        runtime_gcWriteBarrier();
        prVar2 = runtime_fing;
      }
      runtime_fing = prVar2;
      runtime_fingwait = true;
      local_88 = (undefined8 *)CONCAT62(local_88._2_6_,0x1410);
      local_80 = (undefined8 *)0x1;
      runtime_gopark((func__runtime_g__unsafe_Pointer__bool **)&PTR_runtime_parkunlock_c_002b39a0,
                     unaff_RBX,0xe8,(uint8)in_RDI,in_RSI);
      l = local_60;
      puVar3 = local_20;
    }
    local_58 = prVar1;
    local_30 = (runtime_interfacetype *)runtime_intArgRegs;
    runtime_unlock2((runtime_mutex *)runtime_intArgRegs);
    puVar3 = local_20;
    l = local_60;
    unaff_RBX = local_58;
    while (unaff_RBX != (runtime_finblock *)0x0) {
      uVar5 = unaff_RBX->cnt;
      local_58 = unaff_RBX;
      while (in_RSI = (ulong)uVar5, uVar5 != 0) {
        uVar5 = uVar5 - 1;
        uVar6 = (ulong)uVar5;
        if (100 < uVar6) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        local_38 = uVar6 * 5;
        if ((long)local_30 < 1) {
          local_60 = (runtime_mutex *)(unaff_RBX->fin[uVar6].nret + 0x10);
        }
        else {
          local_60 = (runtime_mutex *)unaff_RBX->fin[uVar6].nret;
        }
        puVar4 = puVar3;
        local_68._4_4_ = uVar5;
        if (l < local_60) {
          local_88 = (undefined8 *)CONCAT71(local_88._1_7_,1);
          runtime_mallocgc((uintptr)local_30,(runtime__type *)unaff_RBX,SUB81(puVar3,0));
          puVar4 = local_80;
          l = local_60;
          unaff_RBX = local_58;
        }
        inter = local_30;
        lVar7 = local_38;
        uVar8 = SUB84(local_60,0);
        if ((&unaff_RBX->fin[0].fint)[local_38] == (runtime__type *)0x0) {
          s_00.len = (int)unaff_RBX;
          s_00.str = &DAT_0029dddd;
                    /* WARNING: Subroutine does not return */
          runtime_throw(s_00);
        }
        if ((long)local_30 < 1) {
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar3 = puVar4;
        }
        else {
          puVar3 = &local_68;
        }
        prVar9 = (&unaff_RBX->fin[0].fint)[local_38];
        bVar10 = prVar9->kind & 0x1f;
        local_40 = l;
        local_10 = puVar4;
        if (bVar10 == 0x14) {
          if (runtime_writeBarrier._0_4_ == 0) {
            *puVar3 = (&unaff_RBX->fin[0].ot)[local_38];
          }
          else {
            runtime_gcWriteBarrier();
          }
          if (runtime_writeBarrier._0_4_ == 0) {
            puVar3[1] = (&unaff_RBX->fin[0].arg)[lVar7];
          }
          else {
            runtime_gcWriteBarrier();
            inter = local_30;
          }
          lVar7._0_4_ = prVar9[1].hash;
          lVar7._4_1_ = prVar9[1].tflag;
          lVar7._5_1_ = prVar9[1].align;
          lVar7._6_1_ = prVar9[1].fieldAlign;
          lVar7._7_1_ = prVar9[1].kind;
          if (lVar7 != 0) {
            local_28 = puVar3;
            runtime_assertE2I(inter,(runtime__type *)unaff_RBX);
            if (runtime_writeBarrier._0_4_ == 0) {
              *local_28 = local_88;
            }
            else {
              runtime_gcWriteBarrier();
            }
            uVar8 = SUB84(local_60,0);
            puVar4 = local_10;
          }
        }
        else {
          if (bVar10 != 0x16) {
            s.len = (int)unaff_RBX;
            s.str = &DAT_0029b3e8;
                    /* WARNING: Subroutine does not return */
            runtime_throw(s);
          }
          if (runtime_writeBarrier._0_4_ == 0) {
            *puVar3 = (&unaff_RBX->fin[0].arg)[local_38];
          }
          else {
            runtime_gcWriteBarrier();
          }
        }
        runtime_fingRunning = true;
        local_80 = (undefined8 *)CONCAT44(uVar8,uVar8);
        runtime_reflectcall();
        runtime_fingRunning = false;
        in_RDI = (runtime_g **)(&local_58->fin[0].ot + local_38);
        unaff_RBX = local_58;
        if (runtime_writeBarrier._0_4_ == 0) {
          (&local_58->fin[0].fn)[local_38] = (runtime_funcval *)0x0;
          (&local_58->fin[0].arg)[local_38] = (void *)0x0;
          (&local_58->fin[0].ot)[local_38] = (runtime_ptrtype *)0x0;
          in_RDI = (runtime_g **)(&local_58->fin[0].fn + local_38);
        }
        else {
          runtime_gcWriteBarrierSI();
          runtime_gcWriteBarrierDX();
          runtime_gcWriteBarrierBX();
        }
        LOCK();
        unaff_RBX->cnt = local_68._4_4_;
        UNLOCK();
        puVar3 = local_10;
        l = local_40;
        uVar5 = local_68._4_4_;
        local_88 = puVar4;
      }
      local_50 = unaff_RBX->next;
      local_48 = l;
      local_18 = puVar3;
      runtime_lock2((runtime_mutex *)local_50);
      local_58->next = runtime_finc;
      runtime_finc = local_58;
      runtime_unlock2(&runtime_finlock);
      puVar3 = local_18;
      l = local_48;
      unaff_RBX = local_50;
    }
  } while( true );
}

