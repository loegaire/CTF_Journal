
/* WARNING: Unknown calling convention */

void runtime_unlock2(runtime_mutex *l)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  runtime_mutex *l_spill;
  
                    /* Unresolved local var: uint32 v@[???]
                       Unresolved local var: runtime.g * gp@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  LOCK();
  iVar2 = (int)l_spill->key;
  *(undefined4 *)&l_spill->key = 0;
  UNLOCK();
  if (iVar2 == 0) {
    s_00.len = unaff_RBX;
    s_00.str = &DAT_0029e119;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_00);
  }
  if (iVar2 == 2) {
    runtime_futexwakeup((uint32 *)0x2,(uint32)unaff_RBX);
  }
  lVar3 = *(long *)(in_FS_OFFSET + -8);
  piVar1 = (int *)(*(long *)(lVar3 + 0x30) + 0x110);
  *piVar1 = *piVar1 + -1;
  iVar2 = *(int *)(*(long *)(lVar3 + 0x30) + 0x110);
  if (-1 < iVar2) {
    if ((iVar2 == 0) && (*(char *)(lVar3 + 0xb1) != '\0')) {
      *(undefined8 *)(lVar3 + 0x10) = 0xfffffffffffffade;
    }
    return;
  }
  s.len = unaff_RBX;
  s.str = &DAT_0029ff2d;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}

