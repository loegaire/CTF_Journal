
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.goDebugString(string key, string ~r1) */

string net_goDebugString(string key)

{
  uint8 *puVar1;
  ulong uVar2;
  uint8 *puVar3;
  ulong uVar4;
  byte bVar5;
  uint8 *k;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint8 *puVar10;
  long in_FS_OFFSET;
  string key_00;
  string sVar11;
  string s;
  string sVar12;
  string sVar13;
  string key_spill;
  uint8 *local_60;
  uint local_58;
  undefined4 uStack_54;
  uint8 *local_50;
  
  key_00.len = key.len;
                    /* Unresolved local var: string s@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  key_00.str = &DAT_0028a549;
  os_Getenv(key_00);
                    /* Unresolved local var: int i@[???] */
  uVar4 = CONCAT44(uStack_54,local_58);
                    /* Unresolved local var: string afterKey@[???]
                       Unresolved local var: string val@[???] */
  uVar6 = 0;
  do {
    if ((long)((uVar4 - key_spill.len) + -1) <= (long)uVar6) {
      sVar11.len = uVar6;
      sVar11.str = local_60;
      return sVar11;
    }
    if ((long)uVar6 < 1) {
LAB_0059c9d9:
      uVar2 = uVar6 + key_spill.len;
      if (uVar4 < uVar2) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceB();
      }
      lVar8 = uVar4 - uVar2;
      uVar9 = -lVar8 >> 0x3f & uVar2;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if (local_60[uVar9] == 0x3d) {
        if (uVar2 < uVar6) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceB();
        }
        runtime_memequal();
        bVar5 = (byte)local_58 ^ 1;
      }
      else {
        bVar5 = 1;
      }
      if (bVar5 == 0) {
        puVar1 = (uint8 *)(lVar8 - 1);
        puVar3 = local_60 + (-(long)puVar1 >> 0x3f & 1U) + uVar9;
        puVar10 = (uint8 *)0x0;
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int32 b@[???] */
        do {
          k = puVar10;
          if ((long)puVar1 <= (long)k) {
            sVar13.len = (int)puVar3;
            sVar13.str = puVar1;
            return sVar13;
          }
          if (puVar3[(long)k] < 0x80) {
            puVar10 = k + 1;
            uVar7 = (uint)puVar3[(long)k];
          }
          else {
            s.len = (int)puVar3;
            s.str = puVar1;
            runtime_decoderune(s,(int)k);
            puVar10 = local_50;
            uVar7 = local_58;
          }
        } while (uVar7 != 0x2c);
        if (puVar1 < k) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceAlen();
        }
        sVar12.len = (int)puVar3;
        sVar12.str = puVar1;
        return sVar12;
      }
    }
    else {
      if (uVar4 <= uVar6 - 1) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if (local_60[uVar6 - 1] == 0x2c) goto LAB_0059c9d9;
    }
    uVar6 = uVar6 + 1;
  } while( true );
}

