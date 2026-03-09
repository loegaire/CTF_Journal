
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.StructTag.Lookup(reflect.StructTag tag, string key, string
   value, bool ok) */

multireturn_string_bool__conflict2 reflect_StructTag_Lookup(reflect_StructTag tag,string key)

{
  uint8 *puVar1;
  uint8 *puVar2;
  uint8 *puVar3;
  byte bVar4;
  uint8 *puVar5;
  uint8 *extraout_RAX;
  uint8 *extraout_RAX_00;
  uint8 *puVar6;
  uint8 *puVar7;
  long in_FS_OFFSET;
  string s;
  multireturn_string_bool__conflict2 mVar8;
  multireturn_string_bool__conflict2 mVar9;
  multireturn_string_error_ mVar10;
  reflect_StructTag tag_spill;
  string key_spill;
  bool local_40;
  long local_38;
  
  puVar7 = key.str;
  puVar5 = tag.str;
  while (puVar1 = tag_spill.str,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    puVar5 = extraout_RAX_00;
  }
  do {
    s.len = puVar1;
    if ((uint8 *)tag_spill.len == (uint8 *)0x0) goto LAB_0053679a;
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: string name@[???]
                       Unresolved local var: string qvalue@[???] */
    for (puVar5 = (uint8 *)0x0; ((long)puVar5 < tag_spill.len && (s.len[(long)puVar5] == 0x20));
        puVar5 = puVar5 + 1) {
    }
    if ((ulong)tag_spill.len < puVar5) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    puVar7 = (uint8 *)(tag_spill.len + -(long)puVar5);
    puVar5 = (uint8 *)((ulong)puVar5 & -(long)puVar7 >> 0x3f);
    s.len = s.len + (long)puVar5;
    if (puVar7 == (uint8 *)0x0) goto LAB_0053679a;
    for (puVar5 = (uint8 *)0x0;
        ((((long)puVar5 < (long)puVar7 && (bVar4 = puVar5[(long)s.len], 0x20 < bVar4)) &&
         (bVar4 != 0x3a)) && ((bVar4 != 0x22 && (bVar4 != 0x7f)))); puVar5 = puVar5 + 1) {
    }
    if ((puVar5 == (uint8 *)0x0) || (puVar1 = puVar5 + 1, (long)puVar7 <= (long)puVar1))
    goto LAB_0053679a;
    if (puVar7 <= puVar5) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if (puVar5[(long)s.len] != 0x3a) goto LAB_0053679a;
    if (puVar7 <= puVar1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if ((puVar5 + 1)[(long)s.len] != 0x22) goto LAB_0053679a;
    puVar7 = puVar7 + -(long)puVar5;
    puVar2 = puVar7 + -1;
    puVar1 = s.len + (-(long)puVar2 >> 0x3f & (ulong)puVar1);
    puVar6 = (uint8 *)0x1;
    while( true ) {
      if ((long)puVar2 <= (long)puVar6) goto LAB_0053679a;
      if (puVar2 <= puVar6) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if (puVar6[(long)puVar1] == 0x22) break;
      if (puVar6[(long)puVar1] == 0x5c) {
        puVar6 = puVar6 + 1;
      }
      puVar6 = puVar6 + 1;
    }
    if ((long)puVar2 <= (long)puVar6) goto LAB_0053679a;
    puVar3 = puVar6 + 1;
    if (puVar2 < puVar3) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAlen();
    }
    puVar7 = puVar7 + -(long)puVar6;
    tag_spill.len = (int)(puVar7 + -2);
    puVar1 = puVar1 + (-tag_spill.len >> 0x3f & (ulong)puVar3);
  } while (((uint8 *)key_spill.len != puVar5) ||
          (runtime_memequal(), puVar5 = extraout_RAX, local_40 == false));
  s.str = puVar3;
                    /* Unresolved local var: string value@[???] */
  mVar10 = strconv_Unquote(s);
  mVar9.value.len = mVar10.~r1.len;
  puVar7 = (uint8 *)(ulong)local_40;
  puVar5 = (uint8 *)key_spill.len;
  s.len = mVar9.value.len;
  if (local_38 == 0) {
    mVar9.value.str = (uint8 *)key_spill.len;
    mVar9.ok = local_40;
    return mVar9;
  }
LAB_0053679a:
  mVar8.value.len = (int)s.len;
  mVar8.value.str = puVar5;
  mVar8.ok = SUB81(puVar7,0);
  return mVar8;
}

