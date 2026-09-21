
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*_type).textOff(runtime._type * t, runtime.textOff off,
   void * ~r1) */

void * runtime____type__textOff(runtime__type *t,runtime_textOff off)

{
  runtime_textsect *prVar1;
  long lVar2;
  runtime_mutex *l;
  uint64 v;
  uint64 uVar3;
  ulong uVar4;
  runtime_moduledata *prVar5;
  undefined4 unaff_0000001c;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  string s_05;
  string s_06;
  string s_07;
  string s_08;
  runtime__type *t_spill;
  runtime_textOff off_spill;
  undefined8 *local_38;
  
  s.len = (runtime_hmap *)CONCAT44(unaff_0000001c,off);
                    /* Unresolved local var: uintptr base@[???]
                       Unresolved local var: runtime.moduledata * md@[???]
                       Unresolved local var: uintptr res@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (off_spill == -1) {
    return runtime_unreachableMethod;
  }
                    /* Unresolved local var: runtime.moduledata * next@[???] */
  for (prVar5 = &runtime_firstmoduledata; prVar5 != (runtime_moduledata *)0x0; prVar5 = prVar5->next
      ) {
    if (((runtime__type *)prVar5->types <= t_spill) && (t_spill < (runtime__type *)prVar5->etypes))
    goto LAB_005102c0;
  }
  prVar5 = (runtime_moduledata *)0x0;
LAB_005102c0:
  if (prVar5 == (runtime_moduledata *)0x0) {
                    /* Unresolved local var: void * res@[???] */
    runtime_lock2(&runtime_reflectOffs.lock);
    runtime_mapaccess1_fast32((runtime_maptype *)(ulong)(uint)off_spill,s.len,0x235900);
    l = (runtime_mutex *)*local_38;
    runtime_unlock2(l);
    if (l != (runtime_mutex *)0x0) {
      return l;
    }
    runtime_printlock();
    s.str = &DAT_0029a35b;
    runtime_printstring(s);
    runtime_printhex((long)off_spill);
    s_00.len = (int)s.len;
    s_00.str = &DAT_002893ba;
    runtime_printstring(s_00);
    runtime_printhex((uint64)t_spill);
    s_01.len = (int)s.len;
    s_01.str = &DAT_00299255;
    runtime_printstring(s_01);
    runtime_printunlock();
                    /* Unresolved local var: runtime.moduledata * next@[???] */
    for (prVar5 = &runtime_firstmoduledata; prVar5 != (runtime_moduledata *)0x0;
        prVar5 = prVar5->next) {
      uVar3 = prVar5->types;
      v = prVar5->etypes;
      runtime_printlock();
      s_02.len = (int)s.len;
      s_02.str = &DAT_0028a772;
      runtime_printstring(s_02);
      runtime_printhex(uVar3);
      s_03.len = (int)s.len;
      s_03.str = &DAT_0028b85a;
      runtime_printstring(s_03);
      runtime_printhex(v);
      runtime_printnl();
      runtime_printunlock();
    }
    s_04.len = (int)s.len;
    s_04.str = &DAT_002a8658;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_04);
  }
  prVar1 = (prVar5->textsectmap).array;
  lVar2 = (prVar5->textsectmap).len;
  if (lVar2 < 2) {
    uVar4 = (long)off_spill + prVar5->text;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    for (lVar6 = 0; lVar6 < lVar2; lVar6 = lVar6 + 1) {
                    /* Unresolved local var: uintptr sectaddr@[???]
                       Unresolved local var: uintptr sectlen@[???] */
      uVar4 = prVar1[lVar6].vaddr;
      uVar7 = (ulong)off_spill;
      if ((uVar4 <= uVar7) && (uVar7 < prVar1[lVar6].length + uVar4)) {
        uVar4 = (prVar1[lVar6].baseaddr + uVar7) - uVar4;
        goto LAB_00510498;
      }
    }
    uVar4 = 0;
  }
LAB_00510498:
  uVar7 = prVar5->etext;
  if (uVar7 < uVar4) {
    uVar3 = prVar5->text;
    runtime_printlock();
    s_05.len = uVar7;
    s_05.str = &DAT_0029a35b;
    runtime_printstring(s_05);
    runtime_printhex((long)off_spill);
    s_06.len = uVar7;
    s_06.str = &DAT_002964a9;
    runtime_printstring(s_06);
    runtime_printhex(uVar3);
    s_07.len = uVar7;
    s_07.str = &DAT_0028787c;
    runtime_printstring(s_07);
    runtime_printhex(uVar7);
    runtime_printnl();
    runtime_printunlock();
    s_08.len = uVar7;
    s_08.str = (uint8 *)0x2a3388;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_08);
  }
  return (void *)(ulong)(uint)off_spill;
}

