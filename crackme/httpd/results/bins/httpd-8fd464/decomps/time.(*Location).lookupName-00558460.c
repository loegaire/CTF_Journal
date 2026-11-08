
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.(*Location).lookupName(time.Location * l, string name, int64
   unix, int offset, bool ok) */

multireturn_int_bool__conflict4 time___Location__lookupName(time_Location *l,string name,int64 unix)

{
  long lVar1;
  time_Location *l_00;
  long lVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  multireturn_int_bool__conflict4 mVar4;
  multireturn_int_bool__conflict4 mVar5;
  multireturn_int_bool__conflict4 mVar6;
  time_Location *l_spill;
  string name_spill;
  int64 unix_spill;
  long local_70;
  char local_60;
  undefined7 uStack_5f;
  int local_58;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  time___Location__get(l_spill);
                    /* Unresolved local var: int i@[???] */
  lVar1 = *(long *)(local_70 + 0x18);
  uVar3 = 0;
  do {
    if (lVar1 <= (long)uVar3) {
                    /* Unresolved local var: int i@[???] */
      lVar1 = *(long *)(local_70 + 0x18);
      uVar3 = 0;
      while( true ) {
        mVar5.ok = SUB81(lVar1,0);
        if (lVar1 <= (long)uVar3) {
          mVar6.ok = mVar5.ok;
          mVar6.offset = local_70;
          return mVar6;
        }
        lVar2 = *(long *)(local_70 + 0x10);
        if (*(ulong *)(local_70 + 0x18) <= uVar3) break;
        if ((name_spill.len == *(long *)(uVar3 * 0x20 + 8 + lVar2)) &&
           (runtime_memequal(), local_60 != '\0')) {
          mVar5.offset = *(int *)(uVar3 * 0x20 + 0x10 + lVar2);
          return mVar5;
        }
        uVar3 = uVar3 + 1;
      }
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    l_00 = *(time_Location **)(local_70 + 0x10);
    if (*(ulong *)(local_70 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if ((name_spill.len == (&l_00->name)[uVar3 * 2].len) && (runtime_memequal(), local_60 != '\0'))
    {
                    /* Unresolved local var: int offset@[???]
                       Unresolved local var: string nam@[???] */
      time___Location__lookup(l_00,local_70);
      lVar2 = (&l_00->name)[uVar3 * 2].len;
      if ((lVar2 == CONCAT71(uStack_5f,local_60)) && (runtime_memequal(), local_60 != '\0')) {
        mVar4.ok = SUB81(lVar2,0);
        mVar4.offset = local_58;
        return mVar4;
      }
    }
    uVar3 = uVar3 + 1;
  } while( true );
}

