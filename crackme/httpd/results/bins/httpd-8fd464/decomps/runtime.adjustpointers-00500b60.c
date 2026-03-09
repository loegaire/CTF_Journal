
/* WARNING: Unknown calling convention */

void runtime_adjustpointers
               (void *scanp,runtime_bitvector *bv,runtime_adjustinfo *adjinfo,runtime_funcInfo f)

{
  long lVar1;
  ulong *p;
  runtime_moduledata *prVar2;
  int iVar3;
  runtime_moduledata *prVar4;
  runtime_moduledata *prVar5;
  uintptr uVar6;
  void *pvVar7;
  runtime_moduledata *v;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  long in_FS_OFFSET;
  runtime_funcInfo f_00;
  string s;
  string s_00;
  string s_01;
  string s_02;
  void *scanp_spill;
  runtime_bitvector *bv_spill;
  runtime_adjustinfo *adjinfo_spill;
  runtime_funcInfo f_spill;
  uint8 *local_40;
  string sVar11;
  
                    /* Unresolved local var: uintptr minp@[???]
                       Unresolved local var: uintptr maxp@[???]
                       Unresolved local var: uintptr delta@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  prVar4 = (runtime_moduledata *)(adjinfo_spill->old).lo;
  prVar5 = (runtime_moduledata *)(adjinfo_spill->old).hi;
  uVar6 = adjinfo_spill->delta;
  iVar3 = bv_spill->n;
  pvVar7 = (void *)adjinfo_spill->sghi;
                    /* Unresolved local var: uintptr i@[???] */
  uVar9 = 0;
  do {
    if ((ulong)(long)iVar3 <= uVar9) {
      return;
    }
                    /* Unresolved local var: uint8 b@[???] */
    uVar10 = (uint)bv_spill->bytedata[uVar9 >> 3];
LAB_00500bed:
    if ((char)uVar10 != '\0') {
                    /* Unresolved local var: uintptr j@[???]
                       Unresolved local var: uintptr * pp@[???]
                       Unresolved local var: uintptr p@[???]
                       Unresolved local var: void * ~R0@[???] */
      uVar8 = 0;
      if (uVar10 != 0) {
        for (; (uVar10 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
        }
      }
      uVar10 = uVar10 & uVar10 - 1;
      lVar1 = uVar8 + uVar9;
      p = (ulong *)((long)scanp_spill + lVar1 * 8);
      do {
        v = *(runtime_moduledata **)((long)scanp_spill + lVar1 * 8);
        if (((f_spill._func != (runtime__func *)0x0) &&
            ((undefined1 *)((long)&v[-1].next + 7U) < (undefined1 *)0xfff)) &&
           (runtime_debug.invalidptr != 0)) {
          *(undefined1 *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0x131) = 2;
          f_00.datap = prVar5;
          f_00._func = (runtime__func *)f_spill.datap;
          sVar11 = runtime_funcname(f_00);
          runtime_printlock();
          sVar11.str = (uint8 *)0x2a1a00;
          runtime_printstring(sVar11);
          s.len = sVar11.len;
          s.str = local_40;
          runtime_printstring(s);
          s_00.len = sVar11.len;
          s_00.str = &DAT_00287da5;
          runtime_printstring(s_00);
          runtime_printpointer(p);
          s_01.len = sVar11.len;
          s_01.str = &DAT_002877a3;
          runtime_printstring(s_01);
          runtime_printhex((uint64)v);
          runtime_printnl();
          runtime_printunlock();
          s_02.len = sVar11.len;
          s_02.str = (uint8 *)0x2a18b6;
                    /* WARNING: Subroutine does not return */
          runtime_throw(s_02);
        }
        if ((v < prVar4) || (prVar5 <= v)) break;
        if (pvVar7 <= scanp_spill) {
          *(uintptr *)((long)scanp_spill + lVar1 * 8) = (long)&v->pcHeader + uVar6;
          break;
        }
                    /* Unresolved local var: void * * ppu@[???] */
        LOCK();
        prVar2 = (runtime_moduledata *)*p;
        if (v == prVar2) {
          *p = (long)&v->pcHeader + uVar6;
        }
        UNLOCK();
      } while (v != prVar2);
      goto LAB_00500bed;
    }
    uVar9 = uVar9 + 8;
  } while( true );
}

