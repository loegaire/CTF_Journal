
ulonglong FUN_140001f50(undefined8 *param_1,ushort param_2)

{
  longlong lVar1;
  longlong lVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  DWORD DVar9;
  int iVar10;
  uint uVar11;
  HRSRC hResInfo;
  HGLOBAL hResData;
  LPVOID pvVar12;
  undefined4 extraout_var;
  ulonglong uVar13;
  void *pvVar14;
  
  hResInfo = FindResourceW((HMODULE)0x0,(LPCWSTR)(ulonglong)param_2,L"SOUND");
  uVar13 = 0;
  if (hResInfo != (HRSRC)0x0) {
    hResData = LoadResource((HMODULE)0x0,hResInfo);
    uVar13 = 0;
    if (hResData != (HGLOBAL)0x0) {
      pvVar12 = LockResource(hResData);
      DVar9 = SizeofResource((HMODULE)0x0,hResInfo);
      uVar13 = CONCAT44(extraout_var,DVar9);
      if (((pvVar12 != (LPVOID)0x0) && (DVar9 != 0)) && (*(short *)((longlong)pvVar12 + 0x14) == 1))
      {
        *(undefined2 *)(param_1 + 6) = 1;
        uVar3 = *(ushort *)((longlong)pvVar12 + 0x16);
        *(ushort *)((longlong)param_1 + 0x32) = uVar3;
        iVar5 = *(int *)((longlong)pvVar12 + 0x18);
        *(int *)((longlong)param_1 + 0x34) = iVar5;
        uVar4 = *(ushort *)((longlong)pvVar12 + 0x22);
        *(ushort *)((longlong)param_1 + 0x3e) = uVar4;
        iVar10 = (uint)uVar4 * (uint)uVar3;
        uVar11 = (int)(iVar10 + (iVar10 >> 0x1f & 7U)) >> 3;
        *(short *)((longlong)param_1 + 0x3c) = (short)uVar11;
        *(undefined2 *)(param_1 + 8) = 0;
        uVar13 = 0xc;
        *(uint *)(param_1 + 7) = (uVar11 & 0xffff) * iVar5;
        if (0xc < (ulonglong)DVar9 - 8) {
          do {
            if (*(int *)(uVar13 + (longlong)pvVar12) == 0x61746164) {
              lVar2 = uVar13 + 7;
              lVar1 = uVar13 + 8;
              lVar6 = uVar13 + 6;
              lVar7 = uVar13 + 5;
              lVar8 = uVar13 + 4;
              uVar13 = 0;
              *(uint *)(param_1 + 1) =
                   CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar2 + (longlong)pvVar12),
                                              *(undefined1 *)((longlong)pvVar12 + lVar6)),
                                     *(undefined1 *)((longlong)pvVar12 + lVar7)),
                            *(undefined1 *)((longlong)pvVar12 + lVar8));
              if (lVar1 != 0) {
                if ((void *)*param_1 != (void *)0x0) {
                  free((void *)*param_1);
                }
                pvVar14 = (void *)thunk_FUN_1400042c4((ulonglong)*(uint *)(param_1 + 1));
                *param_1 = pvVar14;
                pvVar14 = memcpy(pvVar14,(void *)(lVar1 + (longlong)pvVar12),
                                 (ulonglong)*(uint *)(param_1 + 1));
                return CONCAT71((int7)((ulonglong)pvVar14 >> 8),1);
              }
              break;
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < (ulonglong)DVar9 - 8);
        }
      }
    }
  }
  return uVar13 & 0xffffffffffffff00;
}

