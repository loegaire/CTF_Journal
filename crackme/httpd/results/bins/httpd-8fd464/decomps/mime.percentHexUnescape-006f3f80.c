
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void mime.percentHexUnescape(string s, string ~r1, error ~r2) */

multireturn_string_error_ mime_percentHexUnescape(string s)

{
  uint8 uVar1;
  undefined1 auVar2 [16];
  uint8 *puVar3;
  long lVar4;
  void *pvVar5;
  uint8 *puVar6;
  ulong uVar7;
  void *in_RDI;
  void *pvVar8;
  byte bVar9;
  byte bVar10;
  long in_FS_OFFSET;
  string format;
  string sVar12;
  __interface___ a;
  multireturn_string_error_ mVar13;
  multireturn_string_error_ mVar14;
  multireturn_string_error_ mVar15;
  string s_spill;
  runtime_tmpBuf *local_40;
  runtime_itab *local_38;
  uint8 *local_30;
  runtime_itab *local_28;
  undefined *local_18;
  undefined8 uStack_10;
  error eVar11;
  
                    /* Unresolved local var: int percents@[???]
                       Unresolved local var: int j@[???]
                       Unresolved local var: []uint8 t@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: int i@[???] */
  puVar3 = (uint8 *)0x0;
  lVar4 = 0;
  while( true ) {
    while( true ) {
      if (s_spill.len <= (long)puVar3) {
        if (lVar4 == 0) {
          mVar14.~r1.len = (int)s_spill.str;
          mVar14.~r1.str = puVar3;
          auVar2._8_8_ = 0;
          auVar2._0_8_ = in_RDI;
          mVar14.~r2 = (error)(auVar2 << 0x40);
          return mVar14;
        }
        pvVar5 = (void *)(s_spill.len + lVar4 * -2);
        runtime_makeslice((runtime__type *)&DAT_00225720,(int)s_spill.str,lVar4 * 2);
                    /* Unresolved local var: int i@[???] */
        uVar7 = 0;
        pvVar8 = (void *)0x0;
        while( true ) {
          while( true ) {
            if (s_spill.len <= (long)uVar7) {
              sVar12 = runtime_slicebytetostring(local_40,(uint8 *)s_spill.len,(int)s_spill.str);
              mVar15.~r1.len = sVar12.len;
              mVar15.~r1.str = *local_40;
              mVar15.~r2.data = pvVar8;
              mVar15.~r2.tab = local_38;
              return mVar15;
            }
            if ((ulong)s_spill.len <= uVar7) {
                    /* WARNING: Subroutine does not return */
              runtime_panicIndex();
            }
            if (s_spill.str[uVar7] == 0x25) break;
            if (pvVar5 <= pvVar8) {
                    /* WARNING: Subroutine does not return */
              runtime_panicIndex();
            }
            (*local_40)[(long)pvVar8] = s_spill.str[uVar7];
            pvVar8 = (void *)((long)pvVar8 + 1);
            uVar7 = uVar7 + 1;
          }
          if ((ulong)s_spill.len <= uVar7 + 1) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          uVar1 = s_spill.str[uVar7 + 1];
          bVar9 = uVar1 - 0x30;
          if (9 < bVar9) {
            if ((byte)(uVar1 + 0x9f) < 6) {
              bVar9 = uVar1 + 0xa9;
            }
            else if ((byte)(uVar1 + 0xbf) < 6) {
              bVar9 = uVar1 - 0x37;
            }
            else {
              bVar9 = 0;
            }
          }
          if ((ulong)s_spill.len <= uVar7 + 2) break;
          uVar1 = s_spill.str[uVar7 + 2];
          bVar10 = uVar1 - 0x30;
          if (9 < bVar10) {
            if ((byte)(uVar1 + 0x9f) < 6) {
              bVar10 = uVar1 + 0xa9;
            }
            else if ((byte)(uVar1 + 0xbf) < 6) {
              bVar10 = uVar1 - 0x37;
            }
            else {
              bVar10 = 0;
            }
          }
          if (pvVar5 <= pvVar8) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          (*local_40)[(long)pvVar8] = bVar9 << 4 | bVar10;
          pvVar8 = (void *)((long)pvVar8 + 1);
          uVar7 = uVar7 + 3;
        }
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if ((ulong)s_spill.len <= puVar3) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if (s_spill.str[(long)puVar3] == 0x25) break;
      puVar3 = puVar3 + 1;
    }
    puVar6 = puVar3 + 2;
    if (s_spill.len <= (long)puVar6) break;
    if ((ulong)s_spill.len <= puVar3 + 1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    bVar9 = (s_spill.str + 1)[(long)puVar3];
    if (((9 < (byte)(bVar9 - 0x30)) && (5 < (byte)(bVar9 + 0x9f))) &&
       (in_RDI = (void *)(ulong)(bVar9 - 0x41), 5 < (byte)(bVar9 - 0x41))) break;
    if ((ulong)s_spill.len <= puVar6) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    bVar9 = (s_spill.str + 2)[(long)puVar3];
    in_RDI = (void *)(ulong)(bVar9 - 0x30);
    if (((9 < (byte)(bVar9 - 0x30)) &&
        (in_RDI = (void *)(ulong)(bVar9 - 0x61), 5 < (byte)(bVar9 - 0x61))) &&
       (puVar6 = (uint8 *)(ulong)(bVar9 - 0x41), 5 < (byte)(bVar9 - 0x41))) break;
    lVar4 = lVar4 + 1;
    puVar3 = puVar3 + 3;
  }
  sVar12.str = s_spill.str + ((ulong)puVar3 & -(s_spill.len - (long)puVar3) >> 0x3f);
  local_18 = (undefined *)0x0;
  uStack_10 = 0;
  sVar12.len = (int)s_spill.str;
  runtime_convTstring(sVar12);
  local_18 = &DAT_00225520;
  format.len = (int)s_spill.str;
  format.str = (uint8 *)&local_18;
  a.len = (int)in_RDI;
  a.array = (interface___ *)&DAT_00225520;
  a.cap = (int)puVar6;
  eVar11 = fmt_Errorf(format,a);
  mVar13.~r1.len = eVar11.data;
  mVar13.~r1.str = local_30;
  mVar13.~r2.data = in_RDI;
  mVar13.~r2.tab = local_28;
  return mVar13;
}

