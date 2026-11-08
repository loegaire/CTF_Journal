
/* WARNING: Removing unreachable block (ram,0x004c9d1a) */
/* WARNING: Unknown calling convention */

void runtime_SetFinalizer(interface___ obj,interface___ finalizer)

{
  ushort uVar1;
  ulong *puVar2;
  long *plVar3;
  runtime__type *t;
  runtime_uncommontype *prVar4;
  long lVar5;
  uint uVar6;
  runtime_moduledata *prVar7;
  ulong uVar8;
  long lVar9;
  int in_RSI;
  long lVar10;
  runtime__type *prVar11;
  uint8 *puVar12;
  runtime__type *prVar13;
  char cVar14;
  uint8 *in_R8;
  ulong uVar15;
  int in_R9;
  ulong uVar16;
  uint8 *in_R10;
  int in_R11;
  long in_FS_OFFSET;
  multireturn_uintptr_runtime_mspan___uintptr_ mVar17;
  runtime_iface rVar18;
  string sVar19;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  string s_05;
  string s_06;
  string a1;
  string a1_00;
  string a1_01;
  string a1_02;
  string a1_03;
  runtime_eface e;
  string a0;
  string a0_00;
  string a0_01;
  string a0_02;
  string a0_03;
  string a2;
  string a2_00;
  string a2_01;
  string a2_02;
  string a2_03;
  string a3;
  string a3_00;
  string a3_01;
  interface___ obj_spill;
  interface___ finalizer_spill;
  runtime__type *t_00;
  void *pvStack_d0;
  runtime__type *local_c8;
  uint8 *local_a8;
  uint8 *local_98;
  uint8 *local_88;
  runtime__type *local_60;
  runtime__type *local_58;
  runtime__type *local_50;
  code *local_48;
  interface___ *piStack_40;
  code *local_38;
  interface___ *piStack_30;
  interface___ *local_28;
  ulong uStack_20;
  runtime__type *local_18;
  runtime__type *prStack_10;
  
  puVar12 = finalizer.data;
  sVar19.len = obj.data;
                    /* Unresolved local var: runtime.eface * e@[???]
                       Unresolved local var: runtime._type * etyp@[???]
                       Unresolved local var: runtime.ptrtype * ot@[???]
                       Unresolved local var: uintptr base@[???]
                       Unresolved local var: runtime.eface * f@[???]
                       Unresolved local var: runtime._type * ftyp@[???]
                       Unresolved local var: runtime.functype * ft@[???]
                       Unresolved local var: runtime._type * fint@[???]
                       Unresolved local var: uintptr nret@[???] */
  while (&local_60 <= *(runtime__type ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (runtime_debug.sbrk != 0) {
    return;
  }
  if (obj_spill._type == (runtime__type *)0x0) {
    s_06.len = (int)sVar19.len;
    s_06.str = &DAT_002a77d3;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_06);
  }
  uVar6 = (obj_spill._type)->kind & 0x1f;
  if ((char)uVar6 != '\x16') {
    sVar19 = runtime____type__string(obj_spill._type);
    a0_03.str = (uint8 *)sVar19.len;
    a1_03.len = in_RSI;
    a1_03.str = puVar12;
    a0_03.len = (int)pvStack_d0;
    a2_03.len = in_R9;
    a2_03.str = in_R8;
    sVar19 = runtime_concatstring3((runtime_tmpBuf *)&DAT_0029459f,a0_03,a1_03,a2_03);
    s_05.len = sVar19.len;
    s_05.str = local_a8;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_05);
  }
  if (obj_spill._type[1].size == 0) {
    sVar19.str = &DAT_002979fd;
                    /* WARNING: Subroutine does not return */
    runtime_throw(sVar19);
  }
  local_58 = obj_spill._type;
  t_00 = (runtime__type *)0x0;
  pvStack_d0 = (void *)0x0;
  mVar17 = runtime_findObject((uintptr)obj_spill.data,(uintptr)sVar19.len,(ulong)uVar6);
  s_04.len = mVar17.s;
  if (local_c8 == (runtime__type *)0x0) {
    if (obj_spill.data == &runtime_zerobase) {
      return;
    }
    prVar7 = &runtime_firstmoduledata;
    while( true ) {
      if (prVar7 == (runtime_moduledata *)0x0) {
        s_04.str = &DAT_002a9c6b;
                    /* WARNING: Subroutine does not return */
        runtime_throw(s_04);
      }
      if ((((((void *)prVar7->noptrdata <= obj_spill.data) &&
            (obj_spill.data < (void *)prVar7->enoptrdata)) ||
           (((void *)prVar7->data <= obj_spill.data && (obj_spill.data < (void *)prVar7->edata))))
          || (((void *)prVar7->bss <= obj_spill.data && (obj_spill.data < (void *)prVar7->ebss))))
         || (((void *)prVar7->noptrbss <= obj_spill.data &&
             (obj_spill.data < (void *)prVar7->enoptrbss)))) break;
                    /* Unresolved local var: runtime.moduledata * datap@[???] */
      prVar7 = prVar7->next;
    }
    return;
  }
  if ((obj_spill.data != local_c8) &&
     (((puVar2 = (ulong *)local_58[1].size, puVar2 == (ulong *)0x0 || (puVar2[1] != 0)) ||
      (0xf < *puVar2)))) {
    s_03.len = (int)obj_spill.data;
    s_03.str = &DAT_002abb6e;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_03);
  }
  if (finalizer_spill._type == (runtime__type *)0x0) {
    local_48 = runtime_SetFinalizer_func1;
    piStack_40 = &obj_spill;
    runtime_systemstack();
    return;
  }
  uVar6 = (finalizer_spill._type)->kind & 0x1f;
  puVar12 = (uint8 *)(ulong)uVar6;
  if ((char)uVar6 != '\x13') {
    sVar19 = runtime____type__string(local_c8);
    a0_02.str = sVar19.len;
    a1_02.len = (int)finalizer_spill._type;
    a1_02.str = puVar12;
    a0_02.len = 0;
    a2_02.len = in_R9;
    a2_02.str = in_R8;
    sVar19 = runtime_concatstring3((runtime_tmpBuf *)&DAT_00299275,a0_02,a1_02,a2_02);
    s_02.len = sVar19.len;
    s_02.str = local_a8;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_02);
  }
  uVar1 = *(ushort *)((long)&finalizer_spill._type[1].size + 2);
  puVar12 = (uint8 *)(ulong)uVar1;
  if ((uVar1 & 0x8000) != 0) {
    runtime____type__string(local_c8);
    local_50 = t_00;
    sVar19 = runtime____type__string(t_00);
    a0_01.str = sVar19.len;
    a1_01.len = (int)finalizer_spill._type;
    a1_01.str = puVar12;
    a0_01.len = 0;
    a2_01.len = in_R9;
    a2_01.str = in_R8;
    a3_01.len = in_R11;
    a3_01.str = in_R10;
    sVar19 = runtime_concatstring5
                       ((runtime_tmpBuf *)&DAT_0029a48e,a0_01,a1_01,a2_01,a3_01,
                        (string)(ZEXT816(0x2a3dee) << 0x40));
    s_01.len = sVar19.len;
    s_01.str = local_88;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_01);
  }
  if ((short)finalizer_spill._type[1].size != 1) {
    runtime____type__string(local_c8);
    local_50 = t_00;
    sVar19 = runtime____type__string(t_00);
    a0_00.str = sVar19.len;
    a1_00.len = (int)finalizer_spill._type;
    a1_00.str = puVar12;
    a0_00.len = 0;
    a2_00.len = in_R9;
    a2_00.str = in_R8;
    a3_00.len = in_R11;
    a3_00.str = in_R10;
    sVar19 = runtime_concatstring4((runtime_tmpBuf *)t_00,a0_00,a1_00,a2_00,a3_00);
    s_00.len = sVar19.len;
    s_00.str = local_98;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_00);
  }
                    /* Unresolved local var: uintptr uadd@[???] */
  if (((finalizer_spill._type)->tflag & 1) == 0) {
    t = (runtime__type *)&DAT_00000038;
  }
  else {
    t = (runtime__type *)&DAT_00000048;
  }
  prVar13 = *(runtime__type **)((long)&t->size + (long)&(finalizer_spill._type)->size);
  local_60 = prVar13;
  if (prVar13 != local_58) {
    uVar6 = prVar13->kind & 0x1f;
    puVar12 = (uint8 *)(ulong)uVar6;
    cVar14 = (char)uVar6;
    if (cVar14 == '\x16') {
      runtime____type__uncommon(t);
      if (t_00 == (runtime__type *)0x0) {
        t = (runtime__type *)0x1;
      }
      else {
        prVar4 = runtime____type__uncommon(local_58);
        t = (runtime__type *)CONCAT71((int7)((ulong)prVar4 >> 8),t_00 == (runtime__type *)0x0);
      }
      if (((char)t != '\0') && (local_58[1].size == local_60[1].size)) goto LAB_004c9abb;
    }
    else {
                    /* Unresolved local var: runtime.interfacetype * ityp@[???] */
      if (cVar14 == '\x14') {
        lVar5._0_4_ = prVar13[1].hash;
        lVar5._4_1_ = prVar13[1].tflag;
        lVar5._5_1_ = prVar13[1].align;
        lVar5._6_1_ = prVar13[1].fieldAlign;
        lVar5._7_1_ = prVar13[1].kind;
        if (lVar5 != 0) {
          pvStack_d0 = obj_spill.data;
          e.data._0_2_ = 1;
          e._type = obj_spill.data;
          e.data._2_6_ = 0;
          rVar18 = runtime_assertE2I2((runtime_interfacetype *)obj_spill._type,e);
          t = (runtime__type *)rVar18.tab;
          t_00 = obj_spill._type;
          if (local_c8 == (runtime__type *)0x0) goto LAB_004c9c4f;
        }
        goto LAB_004c9abb;
      }
    }
LAB_004c9c4f:
    prVar11 = local_58;
    runtime____type__string(t);
    local_50 = t_00;
    sVar19 = runtime____type__string(t_00);
    a0.str = (uint8 *)sVar19.len;
    a1.len = (int)prVar11;
    a1.str = (uint8 *)prVar13;
    a0.len = (int)pvStack_d0;
    a2.len = in_R9;
    a2.str = puVar12;
    a3.len = in_R11;
    a3.str = in_R10;
    sVar19 = runtime_concatstring4((runtime_tmpBuf *)t_00,a0,a1,a2,a3);
    s.len = sVar19.len;
    s.str = local_98;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
LAB_004c9abb:
  if (((finalizer_spill._type)->tflag & 1) == 0) {
    lVar5 = 0x38;
  }
  else {
    lVar5 = 0x48;
  }
  uVar1 = (ushort)finalizer_spill._type[1].size;
  uVar15 = (ulong)uVar1;
  uVar8 = (ulong)((*(ushort *)((long)&finalizer_spill._type[1].size + 2) & 0x7fff) + (uint)uVar1 &
                 0xffff);
  if (uVar15 <= uVar8) {
    lVar10 = 0;
                    /* Unresolved local var: runtime._type * t@[???] */
    for (lVar9 = 0; lVar9 < (long)(uVar8 - uVar15); lVar9 = lVar9 + 1) {
      plVar3 = *(long **)((long)&(finalizer_spill._type)->size +
                         lVar9 * 8 + (uVar15 << 3 & (long)(uVar15 - 0x100000) >> 0x3f) + lVar5);
      uVar16 = (ulong)*(byte *)((long)plVar3 + 0x15);
      lVar10 = ((lVar10 + uVar16) - 1 & -uVar16) + *plVar3;
    }
    runtime_createfing();
    local_38 = runtime_SetFinalizer_func2;
    piStack_30 = &obj_spill;
    local_28 = &finalizer_spill;
    uStack_20 = lVar10 + 7U & 0xfffffffffffffff8;
    local_18 = local_60;
    prStack_10 = local_58;
    runtime_systemstack();
    return;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceB();
}

