
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

LRESULT FUN_140003500(HWND param_1,uint param_2,WPARAM param_3,LPARAM param_4)

{
  char cVar1;
  wchar_t wVar2;
  BOOL BVar3;
  int iVar4;
  LSTATUS LVar5;
  UINT UVar6;
  DWORD DVar7;
  HWND pHVar8;
  HDC pHVar9;
  HBRUSH hbr;
  HGDIOBJ pvVar10;
  HANDLE pvVar11;
  undefined8 uVar12;
  HDC pHVar13;
  HDC pHVar14;
  HBITMAP pHVar15;
  LRESULT LVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  wchar_t *pwVar22;
  ulonglong uVar23;
  int *piVar24;
  int *piVar25;
  char *pcVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  int *piVar29;
  int iVar30;
  longlong lVar31;
  bool bVar32;
  undefined1 auStackY_11a8 [32];
  HKEY local_1140;
  DWORD local_1138 [2];
  LARGE_INTEGER local_1130;
  tagRECT local_1128;
  RECT local_1118;
  LARGE_INTEGER local_1108;
  LARGE_INTEGER local_1100;
  LARGE_INTEGER local_10f8;
  tagRECT local_10f0;
  undefined1 local_10e0 [16];
  tagRECT local_10d0;
  undefined1 local_10c0 [24];
  tagPAINTSTRUCT local_10a8;
  _WIN32_FIND_DATAW local_1058;
  _WIN32_FIND_DATAW local_e08;
  uint local_bb8;
  undefined4 uStack_bb4;
  undefined4 uStack_bb0;
  undefined4 uStack_bac;
  undefined2 local_ba8;
  undefined1 local_ba6;
  wchar_t local_b98 [3];
  WCHAR local_b92 [253];
  char local_998 [256];
  WCHAR local_898 [264];
  WCHAR local_688 [264];
  WCHAR local_478 [264];
  WCHAR local_268 [264];
  ulonglong local_58;
  
  local_58 = DAT_140008000 ^ (ulonglong)auStackY_11a8;
  pHVar8 = GetDesktopWindow();
  IsWindow(pHVar8);
  pHVar8 = GetDesktopWindow();
  IsWindow(pHVar8);
  BVar3 = IsDebuggerPresent();
  uVar23 = 0;
  lVar31 = 5;
  if (BVar3 == 0) {
    pHVar8 = GetDesktopWindow();
    IsWindow(pHVar8);
  }
  else {
    local_1130.s.LowPart = 0;
    lVar19 = 5;
    do {
      local_1130.s.LowPart = local_1130.s.LowPart + 1;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
  if (param_2 < 0x112) {
    if (param_2 == 0x111) {
      uVar20 = (uint)param_3 & 0xffff;
      if (uVar20 == 0x68) {
        DialogBoxParamW(DAT_140008890,(LPCWSTR)0x67,param_1,FUN_1400043a0,0);
        return 0;
      }
      if (uVar20 == 0x69) {
        DestroyWindow(param_1);
        return 0;
      }
      LVar16 = DefWindowProcW(param_1,0x111,param_3,param_4);
      return LVar16;
    }
    if (param_2 < 0x15) {
      if (param_2 == 0x14) {
        return 1;
      }
      if (param_2 == 1) {
        return 0;
      }
      if (param_2 != 2) {
        if (param_2 == 0xf) {
          pHVar9 = BeginPaint(param_1,&local_10a8);
          GetClientRect(param_1,&local_1128);
          hbr = CreateSolidBrush(0);
          FillRect(DAT_140008978,&local_1128,hbr);
          DeleteObject(hbr);
          if (DAT_1400089a8 != (HGDIOBJ)0x0) {
            memset(local_b98,0,0x200);
            if (DAT_140008899 == '\0') {
              local_1138[0] = GetSystemMetrics(0);
              pwVar22 = L"Keep Calm and FLARE On";
              DVar7 = GetTickCount();
              local_1130.s.LowPart = DVar7 % 100 + 5;
              SetLastError(local_1130.s.LowPart);
            }
            else {
              pvVar10 = GetStockObject(0);
              iVar4 = GetObjectW(pvVar10,0x10,&local_10f0);
              if (iVar4 != 0) {
                local_10f0.left = 0;
              }
              LVar5 = RegOpenKeyExW((HKEY)0xffffffff80000001,L"Control Panel\\Desktop",0,0x20019,
                                    (PHKEY)&local_1108);
              if (LVar5 == 0) {
                RegCloseKey((HKEY)local_1108);
              }
              local_1118.left = 0;
              local_1118.top = 0;
              local_1138[0] = GetSystemMetrics(0);
              wcstombs_s((size_t *)&local_1118,local_998,0x100,u_Crackmes_one_140008080,
                         0xffffffffffffffff);
              UVar6 = GetWindowsDirectoryW(local_898,0x104);
              if (UVar6 != 0) {
                wcscat_s(local_898,0x104,L"*.dll");
                pvVar11 = FindFirstFileW(local_898,&local_1058);
                if (pvVar11 != (HANDLE)0xffffffffffffffff) {
                  FindClose(pvVar11);
                }
              }
              local_1130.s.LowPart = 0;
              lVar31 = 5;
              do {
                local_1130.s.LowPart = local_1130.s.LowPart + 1;
                lVar31 = lVar31 + -1;
              } while (lVar31 != 0);
              local_ba8 = DAT_140008290;
              local_bb8 = _DAT_140008280;
              uStack_bb4 = uRam0000000140008284;
              uStack_bb0 = uRam0000000140008288;
              uStack_bac = uRam000000014000828c;
              UVar6 = GetWindowsDirectoryW(local_688,0x104);
              if (UVar6 != 0) {
                wcscat_s(local_688,0x104,L"*.dll");
                pvVar11 = FindFirstFileW(local_688,&local_1058);
                if (pvVar11 != (HANDLE)0xffffffffffffffff) {
                  FindClose(pvVar11);
                }
              }
              uVar12 = FUN_140001010();
              FUN_1400010d0((byte *)&local_1058,(longlong)local_998,
                            (local_1118.left - (int)uVar12) + -1);
              UVar6 = GetWindowsDirectoryW(local_478,0x104);
              if (UVar6 != 0) {
                wcscat_s(local_478,0x104,L"*.dll");
                pvVar11 = FindFirstFileW(local_478,&local_e08);
                if (pvVar11 != (HANDLE)0xffffffffffffffff) {
                  FindClose(pvVar11);
                }
              }
              pHVar13 = GetDC((HWND)0x0);
              if (pHVar13 != (HDC)0x0) {
                pHVar14 = CreateCompatibleDC(pHVar13);
                pHVar15 = CreateCompatibleBitmap(pHVar13,0x10,0x10);
                if ((pHVar14 != (HDC)0x0) && (pHVar15 != (HBITMAP)0x0)) {
                  pvVar10 = SelectObject(pHVar14,pHVar15);
                  Rectangle(pHVar14,0,0,0x10,0x10);
                  Ellipse(pHVar14,2,2,0xe,0xe);
                  SelectObject(pHVar14,pvVar10);
                  DeleteObject(pHVar15);
                  DeleteDC(pHVar14);
                }
                ReleaseDC((HWND)0x0,pHVar13);
              }
              uVar27 = (ulonglong)local_1058.cFileName[0x6a]._1_1_;
              uVar21 = (ulonglong)(byte)local_1058.cFileName[0x6a];
              uVar28 = uVar23;
              do {
                local_1058.cFileName[0x6a]._0_1_ = (char)uVar21 + 1;
                lVar31 = 5;
                local_1130.s.LowPart = 0;
                do {
                  local_1130.s.LowPart = local_1130.s.LowPart + 1;
                  lVar31 = lVar31 + -1;
                } while (lVar31 != 0);
                pcVar26 = (char *)((longlong)local_1058.cFileName +
                                  ((ulonglong)(byte)local_1058.cFileName[0x6a] - 0x2c));
                local_1058.cFileName[0x6a]._1_1_ = (char)uVar27 + *pcVar26;
                uVar21 = (ulonglong)local_1058.cFileName[0x6a]._1_1_;
                pHVar8 = GetDesktopWindow();
                IsWindow(pHVar8);
                cVar1 = *pcVar26;
                *pcVar26 = *(char *)((longlong)local_1058.cFileName + (uVar21 - 0x2c));
                pvVar10 = GetStockObject(4);
                GetObjectW(pvVar10,0x10,local_10c0);
                *(char *)((longlong)local_1058.cFileName +
                         ((ulonglong)local_1058.cFileName[0x6a]._1_1_ - 0x2c)) = cVar1;
                uVar27 = (ulonglong)local_1058.cFileName[0x6a]._1_1_;
                uVar21 = (ulonglong)(byte)local_1058.cFileName[0x6a];
                *(byte *)((longlong)&local_bb8 + uVar28) =
                     *(byte *)((longlong)&local_bb8 + uVar28) ^
                     *(byte *)((longlong)local_1058.cFileName +
                              ((ulonglong)
                               (byte)(*(char *)((longlong)local_1058.cFileName + (uVar27 - 0x2c)) +
                                     *(char *)((longlong)local_1058.cFileName + (uVar21 - 0x2c))) -
                              0x2c));
                lVar31 = 5;
                local_1130.s.LowPart = 0;
                do {
                  local_1130.s.LowPart = local_1130.s.LowPart + 1;
                  lVar31 = lVar31 + -1;
                } while (lVar31 != 0);
                uVar28 = uVar28 + 1;
              } while ((longlong)uVar28 < 0x12);
              LVar5 = RegOpenKeyExW((HKEY)0xffffffff80000001,L"Control Panel\\Desktop",0,0x20019,
                                    (PHKEY)&local_1100);
              if (LVar5 == 0) {
                RegCloseKey((HKEY)local_1100);
              }
              uVar20 = (uint)DAT_140008898;
              local_ba6 = 0;
              if ((((local_bb8 & 0xff) == uVar20 + 0x45) &&
                  ((local_bb8 >> 8 & 0xff) == uVar20 + 0x4b)) &&
                 ((local_bb8 >> 0x10 & 0xff) == 0x53 - uVar20)) {
                local_1138[0] = GetSystemMetrics(0);
                mbstowcs_s((size_t *)&local_1118,local_b98,0x100,(char *)&local_bb8,
                           0xffffffffffffffff);
                pHVar13 = GetDC((HWND)0x0);
                pHVar14 = CreateCompatibleDC(pHVar13);
                pHVar15 = CreateCompatibleBitmap(pHVar13,1,1);
                DeleteObject(pHVar15);
                DeleteDC(pHVar14);
                ReleaseDC((HWND)0x0,pHVar13);
                pwVar22 = local_b92;
              }
              else {
                local_1138[0] = GetSystemMetrics(0);
                pwVar22 = L"Crackmes.one";
                QueryPerformanceCounter(&local_1130);
              }
            }
            QueryPerformanceCounter(&local_10f8);
            SetTextColor(DAT_140008978,0xd9588);
            LVar5 = RegOpenKeyExW((HKEY)0xffffffff80000001,L"Control Panel\\Desktop",0,0x20019,
                                  &local_1140);
            if (LVar5 == 0) {
              RegCloseKey(local_1140);
            }
            SetBkMode(DAT_140008978,1);
            UVar6 = GetWindowsDirectoryW(local_268,0x104);
            if (UVar6 != 0) {
              wcscat_s(local_268,0x104,L"*.dll");
              pvVar11 = FindFirstFileW(local_268,&local_e08);
              if (pvVar11 != (HANDLE)0xffffffffffffffff) {
                FindClose(pvVar11);
              }
            }
            pvVar10 = SelectObject(DAT_140008978,DAT_1400089a8);
            local_1130.s.LowPart = 0;
            lVar31 = 5;
            do {
              local_1130.s.LowPart = local_1130.s.LowPart + 1;
              lVar31 = lVar31 + -1;
            } while (lVar31 != 0);
            DrawTextW(DAT_140008978,pwVar22,-1,&local_1128,0x25);
            pHVar8 = GetDesktopWindow();
            IsWindow(pHVar8);
            SelectObject(DAT_140008978,pvVar10);
          }
          if (DAT_140008998 != (HGDIOBJ)0x0) {
            local_1130.s.LowPart = 0x100;
            BVar3 = GetComputerNameW(local_b98,(LPDWORD)&local_1130.QuadPart);
            if ((BVar3 != 0) && (local_1138[0] = 0, local_1130.s.LowPart != 0)) {
              pwVar22 = local_b98;
              uVar28 = (ulonglong)local_1130.s.LowPart;
              do {
                wVar2 = *pwVar22;
                pwVar22 = pwVar22 + 1;
                local_1138[0] = (ushort)wVar2 + local_1138[0];
                uVar28 = uVar28 - 1;
              } while (uVar28 != 0);
            }
            local_1138[0] = GetSystemMetrics(0);
            pHVar13 = CreateCompatibleDC(DAT_140008978);
            local_1138[0] = GetSystemMetrics(0);
            pvVar10 = SelectObject(pHVar13,DAT_140008998);
            local_1138[0] = GetSystemMetrics(0);
            if (0 < DAT_1400089a4) {
              piVar29 = &DAT_140008a80;
              do {
                local_1138[0] = 0;
                lVar31 = 5;
                do {
                  local_1138[0] = local_1138[0] + 1;
                  lVar31 = lVar31 + -1;
                } while (lVar31 != 0);
                TransparentBlt(DAT_140008978,*piVar29,piVar29[1],DAT_140008988,DAT_1400089a0,pHVar13
                               ,0,0,DAT_140008988,DAT_1400089a0,0xff00ff);
                uVar20 = (int)uVar23 + 1;
                uVar23 = (ulonglong)uVar20;
                piVar29 = piVar29 + 4;
              } while ((int)uVar20 < DAT_1400089a4);
            }
            local_1138[0] = GetSystemMetrics(0);
            SelectObject(pHVar13,pvVar10);
            QueryPerformanceCounter(&local_10f8);
            DeleteDC(pHVar13);
          }
          pvVar10 = GetStockObject(4);
          GetObjectW(pvVar10,0x10,local_10e0);
          BitBlt(pHVar9,0,0,local_1128.right,local_1128.bottom,DAT_140008978,0,0,0xcc0020);
          pvVar10 = GetStockObject(4);
          GetObjectW(pvVar10,0x10,&local_10d0);
          EndPaint(param_1,&local_10a8);
          return 0;
        }
        goto LAB_140003f62;
      }
      KillTimer(param_1,1);
      if (DAT_140008998 != (HGDIOBJ)0x0) {
        DeleteObject(DAT_140008998);
        DAT_140008998 = (HGDIOBJ)0x0;
      }
      if (DAT_1400089a8 != (HGDIOBJ)0x0) {
        DeleteObject(DAT_1400089a8);
        DAT_1400089a8 = (HGDIOBJ)0x0;
      }
      if (DAT_140008978 != (HDC)0x0) {
        SelectObject(DAT_140008978,DAT_140008990);
        DeleteObject(DAT_140008968);
        DeleteDC(DAT_140008978);
      }
      goto LAB_140003ebe;
    }
    if (param_2 == 0x100) goto LAB_140003ebe;
    bVar32 = param_2 == 0x104;
  }
  else {
    if (param_2 == 0x113) {
      local_1130.s.LowPart = GetSystemMetrics(1);
      if (0 < (int)local_1130.s.LowPart) {
        local_1130.s.LowPart = local_1130.s.LowPart + 1;
      }
      DAT_140008970 = DAT_140008970 + 1;
      lVar19 = 5;
      local_1138[0] = 0;
      do {
        local_1138[0] = local_1138[0] + 1;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      GetClientRect(param_1,&local_10f0);
      local_1138[0] = 0;
      do {
        local_1138[0] = local_1138[0] + 1;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      piVar29 = &DAT_140008a80;
      if (0 < DAT_1400089a4) {
        piVar25 = &DAT_140008a80;
        uVar28 = uVar23;
        do {
          *piVar25 = *piVar25 + piVar25[2];
          local_1138[0] = 0x20;
          BVar3 = GetComputerNameW((LPWSTR)&local_10a8,local_1138);
          if (BVar3 != 0) {
            local_1130.s.LowPart = (DWORD)(ushort)local_10a8.hdc;
          }
          piVar25[1] = piVar25[1] + piVar25[3];
          iVar4 = *piVar25;
          if ((iVar4 < 0) || (local_10f0.right < iVar4 + DAT_140008988)) {
            iVar17 = local_10f0.right - DAT_140008988;
            iVar30 = iVar17;
            if (iVar4 < iVar17) {
              iVar30 = iVar4;
            }
            iVar18 = 0;
            if ((-1 < iVar30) && (iVar18 = iVar17, iVar4 < iVar17)) {
              iVar18 = iVar4;
            }
            *piVar25 = iVar18;
            pHVar8 = GetDesktopWindow();
            IsWindow(pHVar8);
            piVar25[2] = -piVar25[2];
          }
          iVar4 = piVar25[1];
          if ((iVar4 < 0) || (local_10f0.bottom < iVar4 + DAT_1400089a0)) {
            iVar17 = local_10f0.bottom - DAT_1400089a0;
            iVar30 = iVar17;
            if (iVar4 < iVar17) {
              iVar30 = iVar4;
            }
            if (iVar30 < 0) {
              iVar17 = 0;
            }
            else if (iVar4 < iVar17) {
              iVar17 = iVar4;
            }
            piVar25[1] = iVar17;
            pHVar9 = GetDC((HWND)0x0);
            pHVar13 = CreateCompatibleDC(pHVar9);
            pHVar15 = CreateCompatibleBitmap(pHVar9,1,1);
            DeleteObject(pHVar15);
            DeleteDC(pHVar13);
            ReleaseDC((HWND)0x0,pHVar9);
            piVar25[3] = -piVar25[3];
          }
          uVar20 = (int)uVar28 + 1;
          uVar28 = (ulonglong)uVar20;
          piVar25 = piVar25 + 4;
        } while ((int)uVar20 < DAT_1400089a4);
      }
      if ((600 < DAT_140008970) && (DAT_140008899 == '\0')) {
        local_1138[0] = 0x100;
        BVar3 = GetComputerNameW(local_b98,local_1138);
        if ((BVar3 != 0) && (local_1130.s.LowPart = 0, local_1138[0] != 0)) {
          pwVar22 = local_b98;
          uVar28 = (ulonglong)local_1138[0];
          do {
            wVar2 = *pwVar22;
            pwVar22 = pwVar22 + 1;
            local_1130.s.LowPart = local_1130.s.LowPart + (ushort)wVar2;
            uVar28 = uVar28 - 1;
          } while (uVar28 != 0);
        }
        iVar4 = DAT_1400089a4;
        if (0 < DAT_1400089a4) {
          do {
            iVar30 = (int)uVar23 + 1;
            piVar25 = piVar29;
            if (iVar30 < iVar4) {
              do {
                piVar24 = piVar25 + 4;
                local_1118.left = piVar29[0];
                local_1118.top = piVar29[1];
                local_1118.right = *piVar29 + DAT_140008988;
                local_1118.bottom = DAT_1400089a0 + piVar29[1];
                LVar5 = RegOpenKeyExW((HKEY)0xffffffff80000001,L"Control Panel\\Desktop",0,0x20019,
                                      &local_1140);
                if (LVar5 == 0) {
                  RegCloseKey(local_1140);
                }
                local_1128.left = *piVar24;
                local_1128.top = piVar25[5];
                local_1128.right = local_1128.left + DAT_140008988;
                local_1128.bottom = DAT_1400089a0 + local_1128.top;
                BVar3 = IntersectRect(&local_10d0,&local_1118,&local_1128);
                if (BVar3 != 0) {
                  DAT_140008984 = DAT_140008984 + 1;
                  iVar4 = piVar29[2];
                  pvVar10 = GetStockObject(4);
                  GetObjectW(pvVar10,0x10,local_10e0);
                  iVar17 = piVar29[3];
                  piVar29[2] = piVar25[6];
                  piVar29[3] = piVar25[7];
                  piVar25[6] = iVar4;
                  DVar7 = GetTickCount();
                  local_1130.s.LowPart = DVar7 % 100 + 5;
                  SetLastError(local_1130.s.LowPart);
                  piVar25[7] = iVar17;
                  *piVar29 = *piVar29 + piVar29[2];
                  piVar29[1] = piVar29[1] + piVar29[3];
                  QueryPerformanceCounter(&local_10f8);
                  *piVar24 = *piVar24 + piVar25[6];
                  piVar25[5] = piVar25[5] + piVar25[7];
                  QueryPerformanceCounter(&local_1100);
                  if (2999 < DAT_140008984) {
                    DAT_140008899 = '\x01';
                    goto LAB_14000435b;
                  }
                }
                iVar30 = iVar30 + 1;
                iVar4 = DAT_1400089a4;
                piVar25 = piVar24;
              } while (iVar30 < DAT_1400089a4);
            }
            if (DAT_140008899 != '\0') break;
            uVar20 = (int)uVar23 + 1;
            uVar23 = (ulonglong)uVar20;
            piVar29 = piVar29 + 4;
          } while ((int)uVar20 < iVar4);
        }
      }
LAB_14000435b:
      QueryPerformanceCounter(&local_1108);
      InvalidateRect(param_1,(RECT *)0x0,0);
      return 0;
    }
    if (param_2 == 0x200) {
      if (DAT_140008980 == 0) {
        return 0;
      }
      if (DAT_140008e40 != 0) {
        PostQuitMessage(0);
      }
      DAT_140008e40 = 1;
      return 0;
    }
    if ((param_2 == 0x201) || (param_2 == 0x204)) goto LAB_140003ebe;
    bVar32 = param_2 == 0x207;
  }
  if (!bVar32) {
LAB_140003f62:
    LVar16 = DefWindowProcW(param_1,param_2,param_3,param_4);
    return LVar16;
  }
LAB_140003ebe:
  PostQuitMessage(0);
  return 0;
}

