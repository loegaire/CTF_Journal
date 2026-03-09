
/* WARNING: Removing unreachable block (ram,0x00509d94) */
/* WARNING: Removing unreachable block (ram,0x00509d9d) */
/* WARNING: Removing unreachable block (ram,0x00509d72) */
/* WARNING: Removing unreachable block (ram,0x00509cc8) */
/* WARNING: Removing unreachable block (ram,0x00509cd1) */
/* WARNING: Removing unreachable block (ram,0x00509ca5) */
/* WARNING: Unknown calling convention */

void runtime_traceEventLocked
               (int extraBytes,runtime_m *mp,int32 pid,runtime_traceBufPtr *bufp,uint8 ev,int skip,
               __uint64 args)

{
  runtime_traceBufPtr rVar1;
  ulong uVar2;
  long lVar3;
  runtime_traceBufPtr rVar4;
  int iVar5;
  ulong uVar7;
  char *skip_00;
  long in_FS_OFFSET;
  string s;
  __uintptr buf;
  int extraBytes_spill;
  runtime_m *mp_spill;
  int32 pid_spill;
  runtime_traceBufPtr *bufp_spill;
  uint8 ev_spill;
  int skip_spill;
  __uint64 args_spill;
  ulong local_58;
  runtime_traceBufPtr local_48;
  ulong local_30;
  ulong uVar6;
  
                    /* Unresolved local var: runtime.traceBuf * buf@[???]
                       Unresolved local var: int maxSize@[???]
                       Unresolved local var: uint64 tickDiff@[???]
                       Unresolved local var: uint8 narg@[???]
                       Unresolved local var: int startPos@[???]
                       Unresolved local var: uint8 * lenp@[???]
                       Unresolved local var: int evSize@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  rVar1 = *bufp_spill;
  if ((rVar1 == 0) ||
     (rVar4 = rVar1, -(*(long *)(rVar1 + 0x10) + -0xfbe8) < extraBytes_spill + 0x34)) {
    runtime_traceFlush((ulong)(uint)pid_spill,(int32)rVar1);
    *bufp_spill = local_48;
    rVar4 = local_48;
    local_58 = rVar1;
  }
  runtime_cputicks();
  lVar3 = *(long *)(rVar4 + 8);
  *(ulong *)(rVar4 + 8) = local_58 >> 6;
  uVar2 = (local_58 >> 6) - lVar3;
  uVar6 = args_spill.len;
  if (-1 < skip_spill) {
    uVar6 = (ulong)((int)args_spill.len + 1);
  }
  iVar5 = (int)uVar6;
  if (3 < (byte)uVar6) {
    iVar5 = 3;
  }
  uVar6 = *(ulong *)(rVar4 + 0x10);
  if (0xfbe7 < uVar6) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  *(byte *)(rVar4 + 0x418 + uVar6) = (byte)(iVar5 << 6) | ev_spill;
  lVar3 = *(long *)(rVar4 + 0x10);
  uVar7 = lVar3 + 1;
  *(ulong *)(rVar4 + 0x10) = uVar7;
  if ((char)iVar5 == '\x03') {
    if (0xfbe7 < uVar7) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    *(undefined1 *)(rVar4 + 0x418 + uVar7) = 0;
    *(long *)(rVar4 + 0x10) = lVar3 + 2;
    skip_00 = (char *)(rVar4 + uVar7 + 0x418);
  }
  else {
    skip_00 = (char *)0x0;
  }
                    /* Unresolved local var: int pos@[???] */
  uVar7 = *(ulong *)(rVar4 + 0x10);
  for (; 0x7f < uVar2; uVar2 = uVar2 >> 7) {
    if (0xfbe7 < uVar7) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    *(byte *)(rVar4 + 0x418 + uVar7) = (byte)uVar2 | 0x80;
    uVar7 = uVar7 + 1;
  }
  if (uVar7 < 0xfbe8) {
    *(byte *)(rVar4 + 0x418 + uVar7) = (byte)uVar2;
    *(ulong *)(rVar4 + 0x10) = uVar7 + 1;
    lVar3 = 0;
    while( true ) {
      if (args_spill.len <= lVar3) {
        if (skip_spill == 0) {
                    /* Unresolved local var: int pos@[???] */
          uVar2 = *(ulong *)(rVar4 + 0x10);
          if (0xfbe7 < uVar2) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          *(undefined1 *)(rVar4 + 0x418 + uVar2) = 0;
          *(ulong *)(rVar4 + 0x10) = uVar2 + 1;
        }
        else if (0 < skip_spill) {
          buf.len = rVar4;
          buf.array = (uintptr *)args_spill.len;
          buf.cap = uVar6;
          runtime_traceStackID((runtime_m *)(rVar4 + 0x18),buf,(int)skip_00);
                    /* Unresolved local var: int pos@[???] */
          uVar2 = *(ulong *)(rVar4 + 0x10);
          while (0x7f < local_30) {
            if (0xfbe7 < uVar2) {
                    /* WARNING: Subroutine does not return */
              runtime_panicIndex();
            }
            *(byte *)(rVar4 + 0x418 + uVar2) = (byte)local_30 | 0x80;
            uVar2 = uVar2 + 1;
            local_30 = local_30 >> 7;
            args_spill.len = local_30;
          }
          if (0xfbe7 < uVar2) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          *(byte *)(rVar4 + 0x418 + uVar2) = (byte)local_30;
          *(ulong *)(rVar4 + 0x10) = uVar2 + 1;
        }
        lVar3 = *(long *)(rVar4 + 0x10) - uVar6;
        if (lVar3 <= extraBytes_spill + 0x34) {
          if (skip_00 != (char *)0x0) {
            *skip_00 = (char)lVar3 + -2;
          }
          return;
        }
        s.len = args_spill.len;
        s.str = (uint8 *)0x2a0df3;
                    /* WARNING: Subroutine does not return */
        runtime_throw(s);
      }
      uVar7 = *(ulong *)(rVar4 + 0x10);
      for (uVar2 = args_spill.array[lVar3]; 0x7f < uVar2; uVar2 = uVar2 >> 7) {
        if (0xfbe7 < uVar7) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        *(byte *)(rVar4 + 0x418 + uVar7) = (byte)uVar2 | 0x80;
        uVar7 = uVar7 + 1;
      }
      if (0xfbe7 < uVar7) break;
                    /* Unresolved local var: int pos@[???] */
      *(byte *)(rVar4 + 0x418 + uVar7) = (byte)uVar2;
      *(ulong *)(rVar4 + 0x10) = uVar7 + 1;
      lVar3 = lVar3 + 1;
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

