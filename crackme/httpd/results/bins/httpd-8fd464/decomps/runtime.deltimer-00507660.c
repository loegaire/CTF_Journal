
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.deltimer(runtime.timer * t, bool ~r1) */

bool runtime_deltimer(runtime_timer *t)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  runtime_puintptr rVar7;
  runtime_timer *extraout_RAX;
  runtime_timer *extraout_RAX_00;
  runtime_timer *extraout_RAX_01;
  runtime_timer *extraout_RAX_02;
  long in_FS_OFFSET;
  bool bVar8;
  runtime_timer *t_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    t = extraout_RAX_02;
  }
  do {
    while( true ) {
                    /* Unresolved local var: uint32 s@[???] */
      while (uVar3 = t_spill->status, 5 < uVar3) {
        if (uVar3 < 8) {
          if (uVar3 == 6) {
            runtime_osyield();
            t = extraout_RAX;
          }
          else {
                    /* Unresolved local var: runtime.g * _g_@[???] */
            lVar5 = *(long *)(in_FS_OFFSET + -8);
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: runtime.m * ~R0@[???] */
            piVar1 = (int *)(*(long *)(lVar5 + 0x30) + 0x110);
            *piVar1 = *piVar1 + 1;
            lVar5 = *(long *)(lVar5 + 0x30);
            LOCK();
            uVar2 = t_spill->status;
            bVar8 = uVar3 == uVar2;
            if (bVar8) {
              t_spill->status = 6;
              uVar2 = uVar3;
            }
            t = (runtime_timer *)(ulong)uVar2;
            UNLOCK();
            if (bVar8) {
                    /* Unresolved local var: runtime.p * tpp@[???] */
              rVar7 = t_spill->pp;
              LOCK();
              bVar8 = t_spill->status == 6;
              if (bVar8) {
                t_spill->status = 3;
              }
              UNLOCK();
              if (!bVar8) {
                runtime_badTimer();
                    /* Unresolved local var: runtime.g * _g_@[???] */
              }
              lVar6 = *(long *)(in_FS_OFFSET + -8);
              iVar4 = *(int *)(lVar5 + 0x110);
              *(int *)(lVar5 + 0x110) = iVar4 + -1;
              if ((iVar4 == 1) && (*(char *)(lVar6 + 0xb1) != '\0')) {
                *(undefined8 *)(lVar6 + 0x10) = 0xfffffffffffffade;
              }
              LOCK();
              piVar1 = (int *)(rVar7 + 0x26fc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + 1;
              UNLOCK();
              return SUB41(iVar4,0);
            }
                    /* Unresolved local var: runtime.g * _g_@[???] */
            lVar6 = *(long *)(in_FS_OFFSET + -8);
            iVar4 = *(int *)(lVar5 + 0x110);
            *(int *)(lVar5 + 0x110) = iVar4 + -1;
            if ((iVar4 == 1) && (*(char *)(lVar6 + 0xb1) != '\0')) {
              *(undefined8 *)(lVar6 + 0x10) = 0xfffffffffffffade;
            }
          }
        }
        else {
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: runtime.m * ~R0@[???] */
          if (uVar3 == 8) goto LAB_0050774d;
          if (uVar3 == 9) goto LAB_005077ca;
          runtime_badTimer();
          t = extraout_RAX_01;
        }
      }
      if (1 < uVar3) break;
      if (uVar3 == 0) {
        return SUB81(t,0);
      }
LAB_0050774d:
                    /* Unresolved local var: runtime.g * _g_@[???] */
      lVar5 = *(long *)(in_FS_OFFSET + -8);
      piVar1 = (int *)(*(long *)(lVar5 + 0x30) + 0x110);
      *piVar1 = *piVar1 + 1;
      lVar5 = *(long *)(lVar5 + 0x30);
      LOCK();
      uVar2 = t_spill->status;
      bVar8 = uVar3 == uVar2;
      if (bVar8) {
        t_spill->status = 6;
        uVar2 = uVar3;
      }
      t = (runtime_timer *)(ulong)uVar2;
      UNLOCK();
      if (bVar8) {
                    /* Unresolved local var: runtime.p * tpp@[???] */
        rVar7 = t_spill->pp;
        LOCK();
        bVar8 = t_spill->status == 6;
        if (bVar8) {
          t_spill->status = 3;
        }
        UNLOCK();
        if (!bVar8) {
          runtime_badTimer();
                    /* Unresolved local var: runtime.g * _g_@[???] */
        }
        lVar6 = *(long *)(in_FS_OFFSET + -8);
        iVar4 = *(int *)(lVar5 + 0x110);
        *(int *)(lVar5 + 0x110) = iVar4 + -1;
        if ((iVar4 == 1) && (*(char *)(lVar6 + 0xb1) != '\0')) {
          *(undefined8 *)(lVar6 + 0x10) = 0xfffffffffffffade;
        }
        LOCK();
        piVar1 = (int *)(rVar7 + 0x26fc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        return SUB41(iVar4,0);
      }
                    /* Unresolved local var: runtime.g * _g_@[???] */
      lVar6 = *(long *)(in_FS_OFFSET + -8);
      iVar4 = *(int *)(lVar5 + 0x110);
      *(int *)(lVar5 + 0x110) = iVar4 + -1;
      if ((iVar4 == 1) && (*(char *)(lVar6 + 0xb1) != '\0')) {
        *(undefined8 *)(lVar6 + 0x10) = 0xfffffffffffffade;
      }
    }
    if (uVar3 != 2) {
      return SUB81(t,0);
    }
LAB_005077ca:
    runtime_osyield();
    t = extraout_RAX_00;
  } while( true );
}

