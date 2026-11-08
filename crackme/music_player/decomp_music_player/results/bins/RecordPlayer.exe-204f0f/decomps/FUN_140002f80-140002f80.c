
LRESULT FUN_140002f80(HWND param_1,UINT param_2,ulonglong param_3,LPARAM param_4)

{
  char cVar1;
  undefined8 *puVar2;
  LRESULT LVar3;
  LPARAM lParam;
  longlong lVar4;
  tagTRACKMOUSEEVENT local_28;
  
  puVar2 = (undefined8 *)GetWindowLongPtrW(param_1,-0x15);
  if (puVar2 == (undefined8 *)0x0) {
    LVar3 = DefWindowProcW(param_1,param_2,param_3,param_4);
    return LVar3;
  }
  if (param_2 == 0x200) {
    if (*(char *)((longlong)puVar2 + 0x32) == '\0') {
      local_28.cbSize = 0x18;
      local_28.dwFlags = 2;
      local_28.dwHoverTime = 0;
      local_28.hwndTrack = param_1;
      TrackMouseEvent(&local_28);
      *(undefined1 *)((longlong)puVar2 + 0x32) = 1;
    }
    cVar1 = *(char *)((longlong)puVar2 + 0x31);
    if ((cVar1 != '\0') && ((param_3 & 1) == 0)) {
      *(undefined1 *)((longlong)puVar2 + 0x31) = 0;
      cVar1 = '\0';
    }
    if (*(char *)(puVar2 + 6) == '\0') {
      *(undefined1 *)(puVar2 + 6) = 1;
      lVar4 = 0x28;
      if (cVar1 == '\0') {
        lVar4 = 0x20;
      }
      SendMessageW((HWND)*puVar2,0x172,0,*(LPARAM *)(lVar4 + (longlong)puVar2));
    }
LAB_140003121:
    LVar3 = CallWindowProcW((WNDPROC)puVar2[3],param_1,param_2,param_3,param_4);
    return LVar3;
  }
  if (param_2 == 0x201) {
    *(undefined2 *)(puVar2 + 6) = 0x101;
    if (*(char *)((longlong)puVar2 + 0x32) == '\0') {
      local_28.cbSize = 0x18;
      local_28.dwFlags = 2;
      local_28.dwHoverTime = 0;
      local_28.hwndTrack = param_1;
      TrackMouseEvent(&local_28);
      *(undefined1 *)((longlong)puVar2 + 0x32) = 1;
    }
    if ((*(char *)((longlong)puVar2 + 0x31) != '\0') && (*(char *)(puVar2 + 6) != '\0')) {
      lParam = puVar2[5];
      goto LAB_140002ffc;
    }
  }
  else {
    if (param_2 == 0x202) {
      if (*(char *)((longlong)puVar2 + 0x31) != '\0') {
        *(undefined1 *)((longlong)puVar2 + 0x31) = 0;
        SendMessageW((HWND)*puVar2,0x172,0,puVar2[4]);
        if (*(char *)(puVar2 + 6) != '\0') {
          SendMessageW((HWND)puVar2[1],0x111,(ulonglong)*(uint *)(puVar2 + 2),(LPARAM)param_1);
        }
      }
      return 0;
    }
    if (param_2 != 0x2a3) goto LAB_140003121;
    *(undefined1 *)((longlong)puVar2 + 0x32) = 0;
    *(undefined1 *)(puVar2 + 6) = 0;
  }
  lParam = puVar2[4];
LAB_140002ffc:
  SendMessageW((HWND)*puVar2,0x172,0,lParam);
  return 0;
}

