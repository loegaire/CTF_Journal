
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strconv.ParseInt(string s, int base, int bitSize, int64 i, error
   err) */

multireturn_int64_error__conflict2 strconv_ParseInt(string s,int base,int bitSize)

{
  char cVar1;
  char *base_00;
  void *pvVar2;
  byte bVar3;
  runtime_itab *tab;
  undefined8 extraout_RAX;
  undefined8 uVar4;
  undefined8 *extraout_RAX_00;
  undefined8 *extraout_RAX_01;
  undefined8 *puVar5;
  undefined8 *extraout_RAX_02;
  undefined8 *extraout_RAX_03;
  undefined8 *extraout_RAX_04;
  undefined8 *extraout_RAX_05;
  runtime__type *iface;
  char *pcVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *unaff_RBP;
  runtime_itab *prVar11;
  int bitSize_00;
  long in_FS_OFFSET;
  string s_00;
  multireturn_int64_error__conflict2 mVar12;
  multireturn_int64_error__conflict2 mVar13;
  multireturn_int64_error__conflict2 mVar14;
  multireturn_int64_error__conflict2 mVar15;
  multireturn_int64_error__conflict2 mVar16;
  string s_spill;
  int base_spill;
  int bitSize_spill;
  
  puVar9 = (undefined1 *)s.len;
  do {
                    /* Unresolved local var: bool neg@[???]
                       Unresolved local var: uint64 un@[???]
                       Unresolved local var: uint64 cutoff@[???]
                       Unresolved local var: int64 n@[???]
                       Unresolved local var: string s0@[???] */
    puVar10 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar10 = (undefined1 *)((long)register0x00000020 + -0x70);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      lVar8 = *(long *)((long)register0x00000020 + 0x10);
      if (lVar8 == 0) {
        *(undefined **)((long)register0x00000020 + -0x70) = &DAT_00258d20;
        *(undefined8 *)((long)register0x00000020 + -0x78) = 0x5207f5;
        runtime_newobject((runtime__type *)&DAT_00258d20);
        puVar5 = *(undefined8 **)((long)register0x00000020 + -0x68);
        puVar5[1] = 8;
        *puVar5 = &DAT_0028bb52;
        puVar5[3] = *(undefined8 *)((long)register0x00000020 + 0x10);
        if (runtime_writeBarrier._0_4_ == 0) {
          puVar5[2] = *(undefined8 *)((long)register0x00000020 + 8);
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -0x78) = 0x52083b;
          runtime_gcWriteBarrierCX();
          puVar5 = extraout_RAX_04;
        }
        pvVar2 = strconv_ErrSyntax.data;
        puVar5[4] = strconv_ErrSyntax.tab;
        if (runtime_writeBarrier._0_4_ == 0) {
          puVar5[5] = pvVar2;
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -0x78) = 0x520865;
          runtime_gcWriteBarrierCX();
          puVar5 = extraout_RAX_05;
        }
        *(undefined8 *)((long)register0x00000020 + 0x28) = 0;
        *(undefined1 **)((long)register0x00000020 + 0x30) = go_itab__strconv_NumError_error;
        *(undefined8 **)((long)register0x00000020 + 0x38) = puVar5;
        mVar16.err.tab = (runtime_itab *)puVar9;
        mVar16.i = (int64)puVar5;
        mVar16.err.data = go_itab__strconv_NumError_error;
        return mVar16;
      }
      base_00 = *(char **)((long)register0x00000020 + 8);
      cVar1 = *base_00;
      if (cVar1 == '+') {
        lVar8 = lVar8 + -1;
        pcVar6 = base_00 + (-lVar8 >> 0x3f & 1);
        bitSize_00 = 0;
      }
      else {
        pcVar6 = base_00;
        if (cVar1 == '-') {
          lVar8 = lVar8 + -1;
          pcVar6 = base_00 + (-lVar8 >> 0x3f & 1);
        }
        bitSize_00 = CONCAT71((int7)((ulong)bitSize >> 8),cVar1 == '-');
      }
      *(char *)((long)register0x00000020 + -0x31) = (char)bitSize_00;
      *(char **)((long)register0x00000020 + -0x70) = pcVar6;
      *(long *)((long)register0x00000020 + -0x68) = lVar8;
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + 0x18);
      *(uint8 **)((long)register0x00000020 + -0x58) = *(uint8 **)((long)register0x00000020 + 0x20);
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x5204b6;
      s_00.len = (int)pcVar6;
      s_00.str = *(uint8 **)((long)register0x00000020 + 0x20);
      strconv_ParseUint(s_00,(int)base_00,bitSize_00);
      tab = *(runtime_itab **)((long)register0x00000020 + -0x50);
      bitSize = *(undefined8 *)((long)register0x00000020 + -0x40);
      iface = *(runtime__type **)((long)register0x00000020 + -0x48);
      uVar7 = *(undefined8 *)((long)register0x00000020 + -0x40);
      if (*(long *)((long)register0x00000020 + -0x48) == 0) {
        bVar3 = 0;
LAB_00520567:
        if (bVar3 == 0) {
          lVar8 = *(long *)((long)register0x00000020 + 0x20);
          if (lVar8 == 0) {
            lVar8 = 0x40;
          }
          prVar11 = (runtime_itab *)
                    (1L << ((byte)(lVar8 - 1U) & 0x3f) & -(ulong)(lVar8 - 1U < 0x40));
          *(runtime_itab **)((long)register0x00000020 + -0x28) = prVar11;
          if (*(char *)((long)register0x00000020 + -0x31) == '\0') {
            if (prVar11 <= tab) {
              *(undefined **)((long)register0x00000020 + -0x70) = &DAT_00258d20;
              *(undefined8 *)((long)register0x00000020 + -0x78) = 0x520745;
              runtime_newobject((runtime__type *)&DAT_00258d20);
              puVar5 = *(undefined8 **)((long)register0x00000020 + -0x68);
              puVar5[1] = 8;
              *puVar5 = &DAT_0028bb52;
              puVar5[3] = *(undefined8 *)((long)register0x00000020 + 0x10);
              if (runtime_writeBarrier._0_4_ == 0) {
                puVar5[2] = *(undefined8 *)((long)register0x00000020 + 8);
              }
              else {
                *(undefined8 *)((long)register0x00000020 + -0x78) = 0x52078a;
                runtime_gcWriteBarrierCX();
                puVar5 = extraout_RAX_02;
              }
              pvVar2 = strconv_ErrRange.data;
              puVar5[4] = strconv_ErrRange.tab;
              if (runtime_writeBarrier._0_4_ == 0) {
                puVar5[5] = pvVar2;
              }
              else {
                *(undefined8 *)((long)register0x00000020 + -0x78) = 0x5207b4;
                runtime_gcWriteBarrierCX();
                puVar5 = extraout_RAX_03;
              }
              *(long *)((long)register0x00000020 + 0x28) =
                   *(long *)((long)register0x00000020 + -0x28) + -1;
              *(undefined1 **)((long)register0x00000020 + 0x30) = go_itab__strconv_NumError_error;
              *(undefined8 **)((long)register0x00000020 + 0x38) = puVar5;
              mVar15.err.tab = (runtime_itab *)go_itab__strconv_NumError_error;
              mVar15.i = (int64)puVar5;
              mVar15.err.data = go_itab__strconv_NumError_error;
              return mVar15;
            }
          }
          else if (prVar11 < tab) {
            *(undefined **)((long)register0x00000020 + -0x70) = &DAT_00258d20;
            *(undefined8 *)((long)register0x00000020 + -0x78) = 0x520665;
            runtime_newobject((runtime__type *)&DAT_00258d20);
            puVar5 = *(undefined8 **)((long)register0x00000020 + -0x68);
            puVar5[1] = 8;
            *puVar5 = &DAT_0028bb52;
            puVar5[3] = *(undefined8 *)((long)register0x00000020 + 0x10);
            if (runtime_writeBarrier._0_4_ == 0) {
              puVar5[2] = *(undefined8 *)((long)register0x00000020 + 8);
            }
            else {
              *(undefined8 *)((long)register0x00000020 + -0x78) = 0x5206aa;
              runtime_gcWriteBarrierCX();
              puVar5 = extraout_RAX_00;
            }
            pvVar2 = strconv_ErrRange.data;
            puVar5[4] = strconv_ErrRange.tab;
            if (runtime_writeBarrier._0_4_ == 0) {
              puVar5[5] = pvVar2;
            }
            else {
              *(undefined8 *)((long)register0x00000020 + -0x78) = 0x5206d4;
              runtime_gcWriteBarrierCX();
              puVar5 = extraout_RAX_01;
            }
            *(long *)((long)register0x00000020 + 0x28) =
                 -*(long *)((long)register0x00000020 + -0x28);
            *(undefined1 **)((long)register0x00000020 + 0x30) = go_itab__strconv_NumError_error;
            *(undefined8 **)((long)register0x00000020 + 0x38) = puVar5;
            mVar13.err.tab = (runtime_itab *)go_itab__strconv_NumError_error;
            mVar13.i = (int64)puVar5;
            mVar13.err.data = go_itab__strconv_NumError_error;
            return mVar13;
          }
          mVar14.i = (runtime_itab *)-(long)tab;
          if (*(char *)((long)register0x00000020 + -0x31) != '\0') {
            tab = mVar14.i;
          }
          *(runtime_itab **)((long)register0x00000020 + 0x28) = tab;
          *(undefined8 *)((long)register0x00000020 + 0x30) = 0;
          *(undefined8 *)((long)register0x00000020 + 0x38) = 0;
          mVar14.err.tab = (runtime_itab *)go_itab__strconv_NumError_error;
          mVar14.err.data = tab;
          return mVar14;
        }
        if (iface == (runtime__type *)go_itab__strconv_NumError_error) {
          *(undefined8 *)(bitSize + 8) = 8;
          if (runtime_writeBarrier._0_4_ == 0) {
            *(undefined **)bitSize = &DAT_0028bb52;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -0x78) = 0x5205a5;
            runtime_gcWriteBarrier();
            uVar7 = extraout_RDX;
          }
          *(undefined8 *)(bitSize + 0x18) = *(undefined8 *)((long)register0x00000020 + 0x10);
          if (runtime_writeBarrier._0_4_ == 0) {
            uVar4 = *(undefined8 *)((long)register0x00000020 + 8);
            *(undefined8 *)(bitSize + 0x10) = uVar4;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -0x78) = 0x5205d3;
            runtime_gcWriteBarrier();
            uVar4 = extraout_RAX;
            uVar7 = extraout_RDX_00;
          }
          *(undefined8 *)((long)register0x00000020 + 0x28) = 0;
          *(runtime__type **)((long)register0x00000020 + 0x30) = iface;
          *(undefined8 *)((long)register0x00000020 + 0x38) = uVar7;
          mVar12.err.tab = (runtime_itab *)go_itab__strconv_NumError_error;
          mVar12.i = uVar4;
          mVar12.err.data = iface;
          return mVar12;
        }
        *(runtime__type **)((long)register0x00000020 + -0x70) = iface;
        *(undefined1 **)((long)register0x00000020 + -0x68) = &DAT_0023b700;
        *(undefined **)((long)register0x00000020 + -0x60) = &DAT_0023c640;
        *(undefined8 *)((long)register0x00000020 + -0x78) = 0x5208b3;
        runtime_panicdottypeI
                  ((runtime_itab *)&DAT_0023c640,(runtime__type *)go_itab__strconv_NumError_error,
                   iface);
      }
      else if (iface == (runtime__type *)go_itab__strconv_NumError_error) {
        prVar11 = *(runtime_itab **)(bitSize + 0x20);
        uVar4 = *(undefined8 *)(bitSize + 0x28);
        if (strconv_ErrRange.tab == prVar11) {
          *(int *)((long)register0x00000020 + -0x10) = bitSize;
          *(undefined1 **)((long)register0x00000020 + -0x18) = go_itab__strconv_NumError_error;
          *(runtime_itab **)((long)register0x00000020 + -0x30) = tab;
          *(undefined8 *)((long)register0x00000020 + -0x20) = uVar7;
          *(runtime_itab **)((long)register0x00000020 + -0x70) = prVar11;
          *(undefined8 *)((long)register0x00000020 + -0x68) = uVar4;
          *(void **)((long)register0x00000020 + -0x60) = strconv_ErrRange.data;
          *(undefined8 *)((long)register0x00000020 + -0x78) = 0x520537;
          runtime_ifaceeq(tab,go_itab__strconv_NumError_error,go_itab__strconv_NumError_error);
          bVar3 = *(byte *)((long)register0x00000020 + -0x58) ^ 1;
          iface = *(runtime__type **)((long)register0x00000020 + -0x18);
          uVar7 = *(undefined8 *)((long)register0x00000020 + -0x20);
          bitSize = *(undefined8 *)((long)register0x00000020 + -0x10);
          tab = *(runtime_itab **)((long)register0x00000020 + -0x30);
        }
        else {
          bVar3 = 1;
        }
        goto LAB_00520567;
      }
      puVar9 = go_itab__strconv_NumError_error;
      *(runtime__type **)((long)register0x00000020 + -0x70) = iface;
      *(undefined1 **)((long)register0x00000020 + -0x68) = &DAT_0023b700;
      *(undefined **)((long)register0x00000020 + -0x60) = &DAT_0023c640;
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x5208d4;
      runtime_panicdottypeI
                ((runtime_itab *)&DAT_0023c640,(runtime__type *)go_itab__strconv_NumError_error,
                 iface);
    }
    *(undefined8 *)(puVar10 + -8) = 0x5208da;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar10;
  } while( true );
}

