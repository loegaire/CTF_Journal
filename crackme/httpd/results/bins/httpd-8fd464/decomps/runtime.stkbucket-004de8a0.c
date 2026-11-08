
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.stkbucket(runtime.bucketType typ, uintptr size, []uintptr
   stk, bool alloc, runtime.bucket * ~r4) */

runtime_bucket * runtime_stkbucket(runtime_bucketType typ,uintptr size,__uintptr stk,bool alloc)

{
  long lVar1;
  runtime_bucket *typ_00;
  ulong uVar2;
  runtime_bucket *prVar3;
  runtime_bucket *prVar4;
  long in_FS_OFFSET;
  __uintptr x;
  __uintptr y;
  string s;
  runtime_bucketType typ_spill;
  uintptr size_spill;
  __uintptr stk_spill;
  bool alloc_spill;
  runtime_bucket *local_50;
  char local_30;
  
                    /* Unresolved local var: uintptr h@[???]
                       Unresolved local var: int i@[???]
                       Unresolved local var: runtime.bucket * b@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (runtime_buckhash == (runtime_bucket *(*) [179999])0x0) {
    runtime_sysAlloc(0xd025a0,(runtime_sysMemStat *)size);
    if (runtime_writeBarrier._0_4_ == 0) {
      runtime_buckhash = &local_50->next;
    }
    else {
      runtime_gcWriteBarrier();
    }
    if (runtime_buckhash == (runtime_bucket *(*) [179999])0x0) {
      s.len = size;
      s.str = (uint8 *)0x2a209d;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s);
    }
  }
                    /* Unresolved local var: uintptr pc@[???] */
  uVar2 = 0;
  for (lVar1 = 0; lVar1 < stk_spill.len; lVar1 = lVar1 + 1) {
    uVar2 = (stk_spill.array[lVar1] + uVar2) * 0x401;
    uVar2 = uVar2 >> 6 ^ uVar2;
  }
                    /* Unresolved local var: runtime.bucket * b@[???] */
  uVar2 = (uVar2 + size_spill) * 0x401;
  uVar2 = (uVar2 >> 6 ^ uVar2) * 9;
  prVar4 = (runtime_bucket *)(uVar2 >> 0xb ^ uVar2);
  typ_00 = (runtime_bucket *)((ulong)prVar4 % 179999);
  if (typ_00 < (runtime_bucket *)0x2bf1f) {
    for (prVar3 = (*runtime_buckhash)[(long)typ_00]; prVar3 != (runtime_bucket *)0x0;
        prVar3 = prVar3->next) {
      if (((prVar3->typ == typ_spill) && ((runtime_bucket *)prVar3->hash == prVar4)) &&
         (prVar3->size == size_spill)) {
        local_50 = (runtime_bucket *)prVar3->nstk;
        if ((runtime_bucket *)&DAT_00000020 < local_50) goto LAB_004deb9e;
        x.len = size;
        x.array = stk_spill.array;
        x.cap = (int)prVar3;
        y.len = (int)stk_spill.array;
        y.array = (uintptr *)stk_spill.len;
        y.cap = typ_spill;
        runtime_eqslice(x,y);
        if (local_30 != '\0') {
          return prVar3;
        }
      }
    }
    if (!alloc_spill) {
      return typ_00;
    }
    runtime_newBucket((runtime_bucketType)typ_00,size);
                    /* Unresolved local var: uintptr[32] * stk@[???] */
    if ((runtime_bucket *)local_50->nstk < (runtime_bucket *)&DAT_00000021) {
      if ((runtime_bucket *)stk_spill.array != local_50 + 1) {
        runtime_memmove();
      }
      local_50->hash = (uintptr)prVar4;
      local_50->size = size_spill;
      local_50->next = (*runtime_buckhash)[(long)typ_00];
      (*runtime_buckhash)[(long)typ_00] = local_50;
      if (typ_spill == 1) {
        local_50->allnext = runtime_mbuckets;
        runtime_mbuckets = local_50;
      }
      else if (typ_spill == 3) {
        local_50->allnext = runtime_xbuckets;
        runtime_xbuckets = local_50;
      }
      else {
        local_50->allnext = runtime_bbuckets;
        runtime_bbuckets = local_50;
      }
      return local_50;
    }
    runtime_panicSlice3AlenU();
LAB_004deb9e:
    runtime_panicSlice3AlenU();
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

