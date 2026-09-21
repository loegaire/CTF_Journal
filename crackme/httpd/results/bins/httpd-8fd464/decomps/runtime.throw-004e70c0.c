
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void runtime_throw(string s)

{
  long lVar1;
  long in_FS_OFFSET;
  string s_spill;
  
                    /* Unresolved local var: runtime.g * gp@[???] */
  runtime_systemstack();
  lVar1 = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30);
  if (*(int *)(lVar1 + 0xfc) == 0) {
    *(undefined4 *)(lVar1 + 0xfc) = 1;
  }
  runtime_fatalthrow();
  _DAT_00000000 = 0;
  return;
}

