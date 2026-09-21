
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140002310(longlong *param_1,longlong param_2,uint param_3)

{
  ulonglong uVar1;
  byte *pbVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 ***pppuVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 ****ppppuVar11;
  longlong lVar12;
  undefined1 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 ****_Memory;
  longlong lVar16;
  byte bVar17;
  ulonglong uVar18;
  undefined1 auStackY_b8 [32];
  uint local_88;
  ulonglong local_80;
  undefined8 ***local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_140009000 ^ (ulonglong)auStackY_b8;
  iVar7 = _Mtx_lock(param_1 + 0x2d);
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (*(int *)((longlong)param_1 + 0x1b4) == 0x7fffffff) {
    *(undefined4 *)((longlong)param_1 + 0x1b4) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(6);
  }
  if (*param_1 != 0) {
    uVar18 = 0;
    local_88 = 0;
    if (param_3 != 0) {
      do {
        if (*(char *)((longlong)param_1 + 0x1d) == '\0') {
          uVar13 = *(undefined1 *)(param_1[2] + *param_1);
          lVar12 = (longlong)(int)param_1[3] + param_1[2];
          param_1[2] = lVar12;
          if (lVar12 < 0) {
            param_1[2] = (ulonglong)(*(uint *)(param_1 + 1) - 1);
          }
          else if ((longlong)(ulonglong)*(uint *)(param_1 + 1) <= lVar12) {
            param_1[2] = 0;
          }
          param_1[4] = param_1[4] + 1;
        }
        else {
          uVar8 = FUN_140001e20(param_1);
          uVar13 = (undefined1)uVar8;
        }
        *(undefined1 *)(uVar18 + param_2) = uVar13;
        if ((((char)param_1[0x26] + (char)param_1[0x25] & 0xfU) == 0) &&
           ((ulonglong)param_1[0x24] <= param_1[0x26] + 0x10U >> 4)) {
          FUN_1400028e0((longlong)(param_1 + 0x22),1);
        }
        param_1[0x25] = param_1[0x25] & param_1[0x24] * 0x10 - 1U;
        lVar16 = param_1[0x26];
        lVar4 = param_1[0x25];
        uVar14 = (ulonglong)(lVar16 + lVar4) >> 4;
        lVar12 = (param_1[0x24] - 1U & uVar14) * 8;
        if (*(longlong *)(lVar12 + param_1[0x23]) == 0) {
          uVar10 = FUN_1400042c4(0x10);
          *(undefined8 *)(lVar12 + param_1[0x23]) = uVar10;
        }
        *(undefined1 *)
         ((ulonglong)((uint)(lVar16 + lVar4) & 0xf) +
         *(longlong *)(param_1[0x23] + (param_1[0x24] - 1U & uVar14) * 8)) = uVar13;
        lVar12 = param_1[0x26];
        param_1[0x26] = lVar12 + 1U;
        lVar16 = param_1[0x27];
        if ((ulonglong)(param_1[0x28] - lVar16) < lVar12 + 1U) {
          param_1[0x26] = lVar12;
          if (lVar12 == 0) {
            param_1[0x25] = 0;
          }
          else {
            param_1[0x25] = param_1[0x25] + 1;
          }
        }
        if ((param_1[0x21] != 0) && (param_1[0x26] == param_1[0x28] - lVar16)) {
          uStack_60 = 0;
          local_58 = 0;
          local_50 = 0xf;
          local_68 = (undefined8 ****)0x0;
          local_80 = 0;
          if (param_1[0x28] != lVar16) {
            do {
              uVar14 = local_50;
              uVar18 = local_58;
              bVar17 = *(byte *)(*(longlong *)
                                  (param_1[0x23] +
                                  (param_1[0x25] + local_80 >> 4 & param_1[0x24] - 1U) * 8) +
                                (ulonglong)((uint)(param_1[0x25] + local_80) & 0xf)) ^
                       *(byte *)(lVar16 + local_80);
              if (local_58 < local_50) {
                ppppuVar11 = &local_68;
                if (0xf < local_50) {
                  ppppuVar11 = (undefined8 ****)local_68;
                }
                pbVar2 = (byte *)((longlong)ppppuVar11 + local_58);
                local_58 = local_58 + 1;
                *pbVar2 = bVar17;
                *(undefined1 *)((longlong)ppppuVar11 + uVar18 + 1) = 0;
              }
              else {
                if (local_58 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                  FUN_140002be0();
                }
                uVar1 = local_58 + 1;
                uVar15 = uVar1 | 0xf;
                if (uVar15 < 0x8000000000000000) {
                  if (0x7fffffffffffffff - (local_50 >> 1) < local_50) {
                    uVar15 = 0x7fffffffffffffff;
                  }
                  else {
                    uVar3 = (local_50 >> 1) + local_50;
                    if (uVar15 < uVar3) {
                      uVar15 = uVar3;
                    }
                  }
                }
                else {
                  uVar15 = 0x7fffffffffffffff;
                }
                ppppuVar11 = (undefined8 ****)FUN_140001650(uVar15 + 1);
                pppuVar6 = local_68;
                local_58 = uVar1;
                local_50 = uVar15;
                if (uVar14 < 0x10) {
                  memcpy(ppppuVar11,&local_68,uVar18);
                  *(byte *)(uVar18 + (longlong)ppppuVar11) = bVar17;
                  *(undefined1 *)(uVar18 + 1 + (longlong)ppppuVar11) = 0;
                  local_68 = ppppuVar11;
                }
                else {
                  memcpy(ppppuVar11,local_68,uVar18);
                  *(byte *)(uVar18 + (longlong)ppppuVar11) = bVar17;
                  *(undefined1 *)(uVar18 + 1 + (longlong)ppppuVar11) = 0;
                  _Memory = (undefined8 ****)pppuVar6;
                  if ((0xfff < uVar14 + 1) &&
                     (_Memory = (undefined8 ****)pppuVar6[-1],
                     0x1f < (ulonglong)((longlong)pppuVar6 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                  free(_Memory);
                  local_68 = ppppuVar11;
                }
              }
              local_80 = local_80 + 1;
              lVar16 = param_1[0x27];
            } while (local_80 < (ulonglong)(param_1[0x28] - lVar16));
            uVar18 = (ulonglong)local_88;
          }
          ppppuVar11 = &local_68;
          if (0xf < local_50) {
            ppppuVar11 = (undefined8 ****)local_68;
          }
          uVar8 = *(uint *)(param_1 + 0x2a);
          uVar9 = FUN_140001030((longlong)param_1 + 0x154,(longlong)ppppuVar11,local_58);
          if (uVar9 == uVar8) {
            plVar5 = (longlong *)param_1[0x21];
            if (plVar5 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::_Xbad_function_call();
            }
            (**(code **)(*plVar5 + 0x10))(plVar5,&local_68);
          }
          if (0xf < local_50) {
            ppppuVar11 = (undefined8 ****)local_68;
            if ((0xfff < local_50 + 1) &&
               (ppppuVar11 = (undefined8 ****)local_68[-1],
               0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)ppppuVar11)))) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
            free(ppppuVar11);
          }
        }
        local_88 = (int)uVar18 + 1;
        uVar18 = (ulonglong)local_88;
      } while (local_88 < param_3);
    }
  }
  _Mtx_unlock(param_1 + 0x2d);
  return;
}

