
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_sigpanic0(void)

{
  long lVar1;
  uint8 *puVar2;
  uint64 uVar3;
  bool bVar4;
  long extraout_RAX;
  long extraout_RAX_00;
  long extraout_RAX_01;
  long extraout_RAX_02;
  runtime__type *prVar5;
  long extraout_RAX_03;
  long lVar6;
  void *pvVar7;
  void *unaff_RBX;
  long in_FS_OFFSET;
  string err;
  interface___ e;
  string err_00;
  interface___ e_00;
  string err_01;
  interface___ e_01;
  string err_02;
  runtime_eface rVar8;
  interface___ e_02;
  string s;
  string s_00;
  string err_03;
  interface___ e_03;
  string err_04;
  interface___ e_04;
  string s_01;
  string s_02;
  string err_05;
  interface___ e_05;
  string s_03;
  string val;
  interface___ e_06;
  string s_04;
  runtime__type *prStack_48;
  undefined1 auStack_20 [24];
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  lVar6 = *(long *)(in_FS_OFFSET + -8);
  lVar1 = *(long *)(lVar6 + 0x30);
  if ((lVar6 == 0) || (*(long *)(lVar1 + 200) != lVar6)) {
    bVar4 = false;
  }
  else if ((((*(int *)(lVar1 + 0x110) == 0) && (*(int *)(lVar1 + 0xf8) == 0)) &&
           (*(int *)(lVar1 + 0xfc) == 0)) &&
          ((*(long *)(lVar1 + 0x108) == 0 && (*(int *)(lVar1 + 0x114) == 0)))) {
    if (((*(uint *)(lVar6 + 0x90) & 0xffffefff) == 2) && (*(long *)(lVar6 + 0x70) == 0)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    pvVar7 = (void *)(ulong)*(uint *)(lVar6 + 0xf0);
    if (*(uint *)(lVar6 + 0xf0) == 8) {
      if (*(long *)(lVar6 + 0x110) != 1) {
        if (*(long *)(lVar6 + 0x110) == 2) {
          err.len = (int)unaff_RBX;
          err.str = &DAT_0029d29d;
          runtime_panicCheck2(err);
          prVar5 = (runtime__type *)0x0;
          if (runtime_divideError.tab != (runtime_itab *)0x0) {
            prVar5 = (runtime_divideError.tab)->_type;
          }
          e.data = unaff_RBX;
          e._type = prVar5;
          runtime_gopanic(e);
        }
        err_00.len = (int)unaff_RBX;
        err_00.str = &DAT_0029bf46;
        runtime_panicCheck2(err_00);
        prVar5 = (runtime__type *)0x0;
        if (runtime_floatError.tab != (runtime_itab *)0x0) {
          prVar5 = (runtime_floatError.tab)->_type;
        }
        e_00.data = unaff_RBX;
        e_00._type = prVar5;
        runtime_gopanic(e_00);
      }
      err_01.len = (int)unaff_RBX;
      err_01.str = &DAT_00299915;
      runtime_panicCheck2(err_01);
      prVar5 = (runtime__type *)0x0;
      if (runtime_overflowError.tab != (runtime_itab *)0x0) {
        prVar5 = (runtime_overflowError.tab)->_type;
      }
      e_01.data = unaff_RBX;
      e_01._type = prVar5;
      pvVar7 = runtime_overflowError.data;
      runtime_gopanic(e_01);
      lVar6 = extraout_RAX;
    }
    if ((int)pvVar7 == 10) {
      if ((*(long *)(lVar6 + 0x110) != 2) || (0xfff < *(ulong *)(lVar6 + 0x118))) {
        if (*(char *)(lVar6 + 0xb5) != '\0') {
          puVar2 = *(uint8 **)(lVar6 + 0x118);
          err_02.len = (int)unaff_RBX;
          err_02.str = puVar2;
          runtime_panicCheck2(err_02);
          auStack_20._0_8_ = &DAT_002a9235;
          auStack_20._8_8_ = 0x31;
          auStack_20._16_8_ = puVar2;
          rVar8 = runtime_convT2E((runtime__type *)auStack_20,unaff_RBX);
          e_02.data = rVar8.data;
          e_02._type = prStack_48;
          runtime_gopanic(e_02);
          lVar6 = extraout_RAX_00;
          unaff_RBX = e_02.data;
        }
        uVar3 = *(uint64 *)(lVar6 + 0x118);
        runtime_printlock();
        s.len = (int)unaff_RBX;
        s.str = &DAT_0029ef97;
        runtime_printstring(s);
        runtime_printhex(uVar3);
        runtime_printnl();
        runtime_printunlock();
        s_00.len = (int)unaff_RBX;
        s_00.str = &DAT_00288d4f;
                    /* WARNING: Subroutine does not return */
        runtime_throw(s_00);
      }
      err_03.len = (int)unaff_RBX;
      err_03.str = &DAT_002a9235;
      runtime_panicCheck2(err_03);
      prVar5 = (runtime__type *)0x0;
      if (runtime_memoryError.tab != (runtime_itab *)0x0) {
        prVar5 = (runtime_memoryError.tab)->_type;
      }
      e_03.data = unaff_RBX;
      e_03._type = prVar5;
      pvVar7 = runtime_memoryError.data;
      runtime_gopanic(e_03);
      lVar6 = extraout_RAX_01;
    }
    if ((uint)pvVar7 == 0xb) {
      pvVar7 = *(void **)(lVar6 + 0x110);
      if (pvVar7 != (void *)0x0) goto LAB_004fe52e;
      do {
        if (0xfff < *(ulong *)(lVar6 + 0x118)) break;
        err_05.len = (int)unaff_RBX;
        err_05.str = &DAT_002a9235;
        runtime_panicCheck2(err_05);
        prVar5 = (runtime__type *)0x0;
        if (runtime_memoryError.tab != (runtime_itab *)0x0) {
          prVar5 = (runtime_memoryError.tab)->_type;
        }
        e_05.data = unaff_RBX;
        e_05._type = prVar5;
        pvVar7 = runtime_memoryError.data;
        runtime_gopanic(e_05);
        lVar6 = extraout_RAX_03;
LAB_004fe52e:
      } while ((pvVar7 == (void *)0x1) || (pvVar7 == (void *)0x2));
      if (*(char *)(lVar6 + 0xb5) != '\0') {
        puVar2 = *(uint8 **)(lVar6 + 0x118);
        err_04.len = (int)unaff_RBX;
        err_04.str = puVar2;
        runtime_panicCheck2(err_04);
        auStack_20._0_8_ = &DAT_002a9235;
        auStack_20._8_8_ = 0x31;
        auStack_20._16_8_ = puVar2;
        rVar8 = runtime_convT2E((runtime__type *)auStack_20,unaff_RBX);
        e_04.data = rVar8.data;
        e_04._type = prStack_48;
        runtime_gopanic(e_04);
        lVar6 = extraout_RAX_02;
        unaff_RBX = e_04.data;
      }
      uVar3 = *(uint64 *)(lVar6 + 0x118);
      runtime_printlock();
      s_01.len = (int)unaff_RBX;
      s_01.str = &DAT_0029ef97;
      runtime_printstring(s_01);
      runtime_printhex(uVar3);
      runtime_printnl();
      runtime_printunlock();
      s_02.len = (int)unaff_RBX;
      s_02.str = &DAT_00288d4f;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_02);
    }
    if (0x20 < (uint)pvVar7) {
      s_03.len = (int)unaff_RBX;
      s_03.str = &DAT_0029e0eb;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_03);
    }
    val.len = (int)unaff_RBX;
    val.str = runtime_sigtable[(long)pvVar7].name.str;
    runtime_convTstring(val);
    e_06.data = unaff_RBX;
    e_06._type = prStack_48;
    runtime_gopanic(e_06);
  }
  s_04.len = (int)unaff_RBX;
  s_04.str = &DAT_002a744f;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_04);
}

