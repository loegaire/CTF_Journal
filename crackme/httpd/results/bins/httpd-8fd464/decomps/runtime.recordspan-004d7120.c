
/* WARNING: Unknown calling convention */

void runtime_recordspan(void *vh,void *p)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  uintptr n;
  uintptr uVar5;
  runtime_sysMemStat *sysStat;
  long in_FS_OFFSET;
  string s_00;
  runtime_mheap *h;
  runtime_mspan *s;
  runtime_mspan **local_30;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  lVar2 = (h->allspans).cap;
  if (lVar2 <= (h->allspans).len) {
                    /* Unresolved local var: int n@[???]
                       Unresolved local var: []*runtime.mspan oldAllspans@[???]
                       Unresolved local var: []*runtime.mspan new@[???] */
    n = (lVar2 * 3) / 2;
    uVar5 = 0x2000;
    if (0x2000 < (long)n) {
      uVar5 = n;
    }
    sysStat = &runtime_memstats.other_sys;
    runtime_sysAlloc(n,(runtime_sysMemStat *)h);
    if (local_30 == (runtime_mspan **)0x0) {
      s_00.len = (int)h;
      s_00.str = (uint8 *)0x2a209d;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_00);
    }
    iVar3 = (h->allspans).len;
    if ((0 < (h->allspans).len) && (local_30 != (h->allspans).array)) {
      runtime_memmove();
    }
    lVar2 = (h->allspans).len;
    (h->allspans).array = local_30;
    (h->allspans).len = iVar3;
    (h->allspans).cap = uVar5;
    if (lVar2 != 0) {
      runtime_sysFree(&runtime_memstats.other_sys,(uintptr)h,sysStat);
    }
  }
  uVar4 = (h->allspans).len;
  uVar1 = uVar4 + 1;
  if ((ulong)(h->allspans).cap < uVar1) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceAcap();
  }
  (h->allspans).len = uVar1;
  if (uVar4 < uVar1) {
    (h->allspans).array[uVar4] = s;
    return;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

