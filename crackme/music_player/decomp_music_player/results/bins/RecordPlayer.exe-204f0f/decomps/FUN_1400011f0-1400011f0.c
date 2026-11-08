
void FUN_1400011f0(undefined8 *param_1)

{
  *param_1 = CSkin::vftable;
  FUN_1400015c0((longlong)param_1);
  if ((HDC)param_1[4] != (HDC)0x0) {
    SelectObject((HDC)param_1[4],(HGDIOBJ)param_1[6]);
    DeleteDC((HDC)param_1[4]);
    param_1[4] = 0;
  }
  if ((HGDIOBJ)param_1[5] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[5]);
    param_1[5] = 0;
  }
  if ((HGDIOBJ)param_1[3] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[3]);
    param_1[3] = 0;
  }
  return;
}

