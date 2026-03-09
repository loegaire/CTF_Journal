
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void syscall_copyenv(void)

{
  runtime_hmap *h;
  string *psVar1;
  int iVar2;
  string *psVar3;
  ulong uVar4;
  runtime_maptype *t;
  long in_FS_OFFSET;
  multireturn_void___bool_ mVar6;
  string ky;
  string s;
  map_string_int local_60;
  ulong *local_40;
  char local_38;
  runtime_maptype *prVar5;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_makemap_small();
  if (runtime_writeBarrier._0_4_ == 0) {
    syscall_env = local_60;
  }
  else {
    runtime_gcWriteBarrier();
  }
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: string s@[???] */
  iVar2 = syscall_envs.len;
  if (syscall_envs.len < 1) {
    return;
  }
  uVar4 = 0;
  psVar3 = syscall_envs.array;
  do {
    h = (runtime_hmap *)psVar3->str;
                    /* Unresolved local var: int j@[???] */
    for (t = (runtime_maptype *)0x0; (long)t < psVar3->len;
        t = (runtime_maptype *)((long)&(t->typ).size + 1)) {
      if (*(char *)((long)&(t->typ).size + (long)&h->count) == '=') {
        ky.len = (int)t;
        ky.str = (uint8 *)&DAT_00236320;
        prVar5 = t;
                    /* Unresolved local var: string key@[???] */
        mVar6 = runtime_mapaccess2_faststr((runtime_maptype *)syscall_env,h,ky);
        psVar1 = syscall_envs.array;
        if (local_38 == '\0') {
          s.len = (int)prVar5;
          s.str = (uint8 *)&DAT_00236320;
          runtime_mapassign_faststr(t,(runtime_hmap *)CONCAT71((int7)((ulong)h >> 8),mVar6.~r4),s);
          *local_40 = uVar4;
        }
        else {
          if ((ulong)syscall_envs.len <= uVar4) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          syscall_envs.array[uVar4].len = 0;
          if (runtime_writeBarrier._0_4_ == 0) {
            psVar1[uVar4].str = (uint8 *)0x0;
          }
          else {
            runtime_gcWriteBarrier();
          }
        }
        break;
      }
    }
    uVar4 = uVar4 + 1;
    if (iVar2 <= (long)uVar4) {
      return;
    }
    psVar3 = psVar3 + 1;
  } while( true );
}

