
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.parseNSSConf.func1([]uint8 line, error ~r1) */

error net_parseNSSConf_func1(__uint8 line)

{
  undefined1 *puVar1;
  runtime_maptype *cap;
  byte bVar2;
  uint8 uVar3;
  char cVar4;
  runtime_maptype *prVar5;
  runtime_maptype *ptr;
  runtime__type *extraout_RAX;
  runtime_maptype *prVar6;
  runtime_itab *prVar7;
  runtime_maptype *prVar8;
  uintptr uVar9;
  long in_RDX;
  runtime__type *prVar10;
  long extraout_RDX;
  runtime_itab *prVar11;
  runtime_maptype *prVar12;
  undefined8 uVar13;
  long in_FS_OFFSET;
  __uint8 x;
  error eVar14;
  error eVar15;
  error eVar16;
  string sVar17;
  error eVar18;
  error eVar19;
  string s;
  runtime_slice old;
  multireturn___net_nssCriterion_error_ mVar20;
  __uint8 line_spill;
  uint8 *local_130;
  runtime_maptype *local_118;
  runtime_maptype *local_110;
  runtime__type *local_108;
  uintptr local_100;
  void *local_f8;
  runtime_maptype *local_b0;
  runtime__type *local_a8;
  runtime_maptype *local_a0;
  runtime_itab *local_98;
  runtime_maptype *local_90;
  runtime_maptype *local_88;
  runtime_itab *local_80;
  runtime__type *local_78;
  runtime_itab *local_70;
  uintptr local_68;
  runtime_maptype *local_60;
  undefined8 local_58;
  long local_50;
  runtime_maptype *local_48;
  uint8 *local_40;
  runtime_itab *local_38;
  uintptr local_30;
  runtime_maptype *local_28;
  undefined8 uStack_20;
  runtime_maptype *local_18;
  runtime__type *prStack_10;
  
  ptr = local_110;
                    /* Unresolved local var: net.nssConf * conf@[DW_OP_reg0(RAX)]
                       Unresolved local var: int colon@[???]
                       Unresolved local var: string db@[???]
                       Unresolved local var: []uint8 srcs@[???] */
  while (&local_b0 <= *(runtime_maptype ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  local_50 = *(long *)(in_RDX + 8);
                    /* Unresolved local var: int i@[???] */
  internal_bytealg_IndexByte();
  if ((local_110 != (runtime_maptype *)0xffffffffffffffff) &&
     (line_spill.len = (int)local_110, (ulong)line_spill.cap < local_110)) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceAcap();
  }
  for (; prVar8 = (runtime_maptype *)line_spill.cap, 0 < line_spill.len;
      line_spill.len = (int)((long)&((runtime_maptype *)(line_spill.len + -0x58))->flags + 3)) {
    bVar2 = *(byte *)&((runtime_itab *)line_spill.array)->inter;
    prVar8 = (runtime_maptype *)(ulong)bVar2;
    if ((((bVar2 != 0x20) && (bVar2 != 9)) && (bVar2 != 10)) && (bVar2 != 0xd)) break;
    line_spill.cap = (long)&((runtime_maptype *)(line_spill.cap + -0x58))->flags + 3;
    line_spill.array =
         ((runtime_itab *)line_spill.array)->_ + ((-line_spill.cap >> 0x3f & 1U) - 0x14);
  }
  do {
    if (line_spill.len < 1) {
LAB_0059a903:
      if ((runtime_maptype *)line_spill.len == (runtime_maptype *)0x0) {
        eVar15.data = prVar8;
        eVar15.tab = (runtime_itab *)line_spill.array;
        return eVar15;
      }
      local_118 = (runtime_maptype *)CONCAT71(local_118._1_7_,0x3a);
      local_80 = (runtime_itab *)line_spill.array;
      internal_bytealg_IndexByte();
      if (local_110 == (runtime_maptype *)0xffffffffffffffff) {
        runtime_newobject((runtime__type *)&DAT_00241ea0);
        (((runtime_maptype *)line_spill.len)->typ).ptrdata = (uintptr)&DAT_00000010;
        (((runtime_maptype *)line_spill.len)->typ).size = (uintptr)&DAT_002999e5;
        eVar14.data = prVar8;
        eVar14.tab = (runtime_itab *)line_spill.len;
        return eVar14;
      }
      prVar11 = local_80;
      prVar8 = local_110;
      prVar12 = (runtime_maptype *)line_spill.cap;
      if ((ulong)line_spill.cap < local_110) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAcap();
      }
      while ((0 < (long)prVar8 &&
             (((uVar3 = *(uint8 *)&prVar11->inter, uVar3 == 0x20 || (uVar3 == 9)) ||
              ((uVar3 == 10 || (uVar3 == 0xd))))))) {
        prVar12 = (runtime_maptype *)((long)&prVar12[-1].flags + 3);
        prVar11 = (runtime_itab *)(prVar11->_ + ((-(long)prVar12 >> 0x3f & 1U) - 0x14));
        prVar8 = (runtime_maptype *)((long)&prVar8[-1].flags + 3);
      }
      local_88 = local_110;
      for (; (0 < (long)prVar8 &&
             ((((cVar4 = ((undefined1 *)((long)prVar11[-1].fun + 7))[(long)prVar8], cVar4 == ' ' ||
                (cVar4 == '\t')) || (cVar4 == '\n')) || (cVar4 == '\r'))));
          prVar8 = (runtime_maptype *)((long)&prVar8[-1].flags + 3)) {
      }
      runtime_slicebytetostring((runtime_tmpBuf *)prVar11,(uint8 *)local_110,(int)prVar8);
      prVar8 = (runtime_maptype *)((long)&(local_88->typ).size + 1);
                    /* Unresolved local var: int sp@[???]
                       Unresolved local var: string src@[???]
                       Unresolved local var: []net.nssCriterion criteria@[???] */
      if ((ulong)line_spill.len < prVar8) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceB();
      }
      local_60 = local_118;
      prVar12 = (runtime_maptype *)(line_spill.cap + (-1 - (long)local_88));
      local_70 = (runtime_itab *)(local_80->_ + (((ulong)prVar8 & -(long)prVar12 >> 0x3f) - 0x14));
      prVar11 = (runtime_itab *)(line_spill.len + (-1 - (long)local_88));
      do {
        for (; (0 < (long)prVar11 &&
               (((uVar3 = *(uint8 *)&local_70->inter, uVar3 == 0x20 || (uVar3 == 9)) ||
                ((uVar3 == 10 || (uVar3 == 0xd))))));
            local_70 = (runtime_itab *)(local_70->_ + ((-(long)prVar12 >> 0x3f & 1U) - 0x14))) {
          prVar12 = (runtime_maptype *)((long)&prVar12[-1].flags + 3);
          prVar11 = (runtime_itab *)((long)prVar11[-1].fun + 7);
        }
        for (; (0 < (long)prVar11 &&
               (((cVar4 = ((undefined1 *)((long)local_70[-1].fun + 7))[(long)prVar11], cVar4 == ' '
                 || (cVar4 == '\t')) || ((cVar4 == '\n' || (cVar4 == '\r'))))));
            prVar11 = (runtime_itab *)((long)prVar11[-1].fun + 7)) {
        }
        if (prVar11 == (runtime_itab *)0x0) {
          eVar16.data = ptr;
          eVar16.tab = local_70;
          return eVar16;
        }
        local_118 = (runtime_maptype *)CONCAT71(local_118._1_7_,0x20);
        internal_bytealg_IndexByte();
        if (local_110 == (runtime_maptype *)0xffffffffffffffff) {
          runtime_slicebytetostring((runtime_tmpBuf *)prVar11,(uint8 *)ptr,-1);
          prVar11 = (runtime_itab *)0x0;
          prVar12 = (runtime_maptype *)0x0;
          prVar7 = (runtime_itab *)0x0;
        }
        else {
          if (prVar12 < local_110) {
                    /* WARNING: Subroutine does not return */
            runtime_panicSliceAcap();
          }
          runtime_slicebytetostring((runtime_tmpBuf *)local_70,(uint8 *)ptr,(int)local_110);
          prVar7 = (runtime_itab *)((long)&(local_110->typ).size + 1);
          if (prVar11 < prVar7) {
                    /* WARNING: Subroutine does not return */
            runtime_panicSliceB();
          }
          prVar12 = (runtime_maptype *)((long)prVar12 + (-1 - (long)local_110));
          prVar11 = (runtime_itab *)((long)prVar11 - (long)local_110);
          for (prVar7 = (runtime_itab *)
                        (local_70->_ + (((ulong)prVar7 & -(long)prVar12 >> 0x3f) - 0x14));
              (prVar11 = (runtime_itab *)((long)prVar11[-1].fun + 7), 0 < (long)prVar11 &&
              ((((uVar3 = *(uint8 *)&prVar7->inter, uVar3 == 0x20 || (uVar3 == 9)) || (uVar3 == 10))
               || (uVar3 == 0xd))));
              prVar7 = (runtime_itab *)(prVar7->_ + ((-(long)prVar12 >> 0x3f & 1U) - 0x14))) {
            prVar12 = (runtime_maptype *)((long)&prVar12[-1].flags + 3);
          }
          while ((0 < (long)prVar11 &&
                 (((cVar4 = ((undefined1 *)((long)prVar11[-1].fun + 7))[(long)prVar7], cVar4 == ' '
                   || (cVar4 == '\t')) || ((cVar4 == '\n' || (cVar4 == '\r'))))))) {
            prVar11 = (runtime_itab *)((long)prVar11[-1].fun + 7);
          }
        }
        local_130 = (uint8 *)0x0;
        local_68 = (uintptr)local_118;
        if (((long)prVar11 < 1) || (*(uint8 *)&prVar7->inter != 0x5b)) {
          prVar8 = (runtime_maptype *)0x0;
          prVar10 = (runtime__type *)0x0;
          local_118._0_4_ = 0;
          local_118._4_1_ = 0;
          local_118._5_1_ = 0;
          local_118._6_1_ = 0;
          local_118._7_1_ = 0;
        }
        else {
                    /* Unresolved local var: int bclose@[???]
                       Unresolved local var: error err@[???] */
          local_118 = (runtime_maptype *)CONCAT71(local_118._1_7_,0x5d);
          local_98 = prVar11;
          local_90 = prVar12;
          local_38 = prVar7;
          internal_bytealg_IndexByte();
          if (local_110 == (runtime_maptype *)0xffffffffffffffff) {
            runtime_newobject((runtime__type *)&DAT_00241ea0);
            prVar11->_type = (runtime__type *)&DAT_0000001a;
            prVar11->inter = (runtime_interfacetype *)&DAT_0029f749;
            eVar19.data = (void *)0xffffffffffffffff;
            eVar19.tab = prVar11;
            return eVar19;
          }
          if (local_90 < local_110) {
                    /* WARNING: Subroutine does not return */
            runtime_panicSliceAcap();
          }
          if (local_110 == (runtime_maptype *)0x0) {
                    /* WARNING: Subroutine does not return */
            runtime_panicSliceB();
          }
          local_a0 = local_110;
          puVar1 = (undefined1 *)((long)&local_90[-1].flags + 3);
          x.array = local_38->_ + ((-(long)puVar1 >> 0x3f & 1U) - 0x14);
          local_88 = (runtime_maptype *)((long)&local_110[-1].flags + 3);
          x.len = (int)puVar1;
          x.cap = (int)local_110;
          local_40 = x.array;
          mVar20 = net_parseCriteria(x);
          sVar17.str = mVar20.c.len;
          if (local_100 != 0) {
            sVar17.len = (int)local_110;
            sVar17 = runtime_concatstring2((runtime_tmpBuf *)local_88,sVar17,(string)mVar20.err);
            eVar18.data = (void *)sVar17.len;
            local_78 = local_108;
            runtime_newobject(local_108);
            DAT_0029ac0a = local_100;
            if (runtime_writeBarrier._0_4_ == 0) {
              DAT_0029ac02 = local_78;
            }
            else {
              runtime_gcWriteBarrier();
            }
            eVar18.tab = (runtime_itab *)&go_itab__errors_errorString_error;
            return eVar18;
          }
          prVar11 = (runtime_itab *)((long)&(local_a0->typ).size + 1);
          if (local_98 < prVar11) {
                    /* WARNING: Subroutine does not return */
            runtime_panicSliceB();
          }
          prVar12 = (runtime_maptype *)((long)local_90 + (-1 - (long)local_a0));
          prVar7 = (runtime_itab *)
                   (local_38->_ + (((ulong)prVar11 & -(long)prVar12 >> 0x3f) - 0x14));
          prVar11 = (runtime_itab *)((long)local_98 + (-1 - (long)local_a0));
          prVar8 = local_110;
          prVar10 = local_108;
          local_130 = x.array;
        }
        uVar13 = local_118;
        local_70 = prVar7;
        if (*(long *)(local_50 + 0x10) == 0) {
          local_b0 = prVar8;
          local_a8 = prVar10;
          local_58 = local_118;
          runtime_makemap_small();
          if (runtime_writeBarrier._0_4_ == 0) {
            *(uint8 **)(local_50 + 0x10) = local_130;
            prVar8 = local_b0;
            prVar10 = local_a8;
            uVar13 = local_58;
          }
          else {
            runtime_gcWriteBarrier();
            prVar8 = local_b0;
            prVar10 = local_a8;
            uVar13 = local_58;
          }
        }
        local_118 = ptr;
        s.len = (int)prVar8;
        s.str = &DAT_00236140;
        local_30 = local_68;
        local_28 = local_110;
        uStack_20 = uVar13;
        local_18 = prVar8;
        prStack_10 = prVar10;
        runtime_mapassign_faststr(local_60,(runtime_hmap *)local_110,s);
        uVar9 = (local_110->typ).ptrdata;
        prVar5 = *(runtime_maptype **)&(local_110->typ).hash;
        cap = (runtime_maptype *)(uVar9 + 1);
        prVar6 = local_110;
        prVar10 = (runtime__type *)(local_110->typ).size;
        if (prVar5 < cap) {
          local_48 = local_110;
          old.len = uVar9;
          old.array = prVar5;
          old.cap = (int)prVar8;
          runtime_growslice((runtime__type *)&DAT_00252400,old,(int)cap);
          *(void **)&(local_48->typ).hash = local_f8;
          prVar6 = local_48;
          uVar9 = local_100;
          local_118 = prVar5;
          local_110 = cap;
          if (runtime_writeBarrier._0_4_ == 0) {
            (local_48->typ).size = (uintptr)local_108;
            prVar10 = local_108;
          }
          else {
            runtime_gcWriteBarrier();
            prVar10 = extraout_RAX;
          }
        }
        (prVar6->typ).ptrdata = uVar9 + 1;
        if (runtime_writeBarrier._0_4_ == 0) {
          (&prVar10->size)[uVar9 * 5] = local_30;
          (&prVar10->ptrdata)[uVar9 * 5] = (uintptr)local_28;
          *(undefined8 *)(&prVar10->hash + uVar9 * 10) = uStack_20;
          (&prVar10->equal)[uVar9 * 5] = (func_unsafe_Pointer__unsafe_Pointer__bool **)local_18;
          (&prVar10->gcdata)[uVar9 * 5] = (uint8 *)prStack_10;
        }
        else {
          runtime_typedmemmove
                    ((runtime__type *)&local_30,(void *)(uVar9 + 1),&prVar10->size + uVar9 * 5);
        }
      } while( true );
    }
    bVar2 = ((undefined1 *)((long)((runtime_itab *)((long)line_spill.array + -0x20))->fun + 7))
            [line_spill.len];
    prVar8 = (runtime_maptype *)(ulong)bVar2;
    if (((bVar2 != 0x20) && (bVar2 != 9)) && ((bVar2 != 10 && (bVar2 != 0xd)))) goto LAB_0059a903;
    line_spill.len = (long)&((runtime_maptype *)(line_spill.len + -0x58))->flags + 3;
  } while( true );
}

