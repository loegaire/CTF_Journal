
undefined8 * FUN_1400010c0(undefined8 *param_1,ulonglong param_2,ulonglong param_3)

{
  DWORD nCount;
  HMODULE hInstance;
  HBITMAP h;
  HRSRC hResInfo;
  RGNDATA *lpData;
  HRGN pHVar1;
  HDC hdc;
  HGDIOBJ pvVar2;
  char *local_res8;
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  
  *(undefined1 *)((longlong)param_1 + 0x41) = 0;
  *param_1 = CSkin::vftable;
  param_1[1] = 0;
  hInstance = GetModuleHandleW((LPCWSTR)0x0);
  h = LoadBitmapW(hInstance,(LPCWSTR)(param_3 & 0xffff));
  param_1[5] = h;
  if (h != (HBITMAP)0x0) {
    GetObjectW(h,0x20,local_28);
    *(undefined4 *)(param_1 + 7) = local_24;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_20;
    hResInfo = FindResourceW(hInstance,(LPCWSTR)(param_2 & 0xffff),L"BINARY");
    if (hResInfo != (HRSRC)0x0) {
      lpData = LoadResource(hInstance,hResInfo);
      if (lpData != (RGNDATA *)0x0) {
        nCount = SizeofResource((HMODULE)0x0,hResInfo);
        pHVar1 = ExtCreateRegion((XFORM *)0x0,nCount,lpData);
        param_1[3] = pHVar1;
        FreeResource(lpData);
        if (param_1[3] != 0) {
          hdc = CreateCompatibleDC((HDC)0x0);
          param_1[4] = hdc;
          if (hdc != (HDC)0x0) {
            pvVar2 = SelectObject(hdc,(HGDIOBJ)param_1[5]);
            param_1[6] = pvVar2;
            return param_1;
          }
        }
      }
    }
  }
  local_res8 = "Unable to retrieve the skin.";
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&local_res8,(ThrowInfo *)&DAT_1400077c0);
}

