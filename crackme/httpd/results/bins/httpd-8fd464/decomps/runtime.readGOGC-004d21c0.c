
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.readGOGC(int32 ~r0) */

int32 runtime_readGOGC(void)

{
  int iVar1;
  int unaff_RBX;
  long in_FS_OFFSET;
  string sVar2;
  string s;
  short *local_18;
  char local_10;
  undefined7 uStack_f;
  
                    /* Unresolved local var: string p@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  sVar2.len = unaff_RBX;
  sVar2.str = &DAT_00287ec9;
  sVar2 = runtime_gogetenv(sVar2);
  s.len = sVar2.len;
                    /* Unresolved local var: int n@[???] */
  if ((((uint8 *)CONCAT71(uStack_f,local_10) == (uint8 *)0x3) && (*local_18 == 0x666f)) &&
     ((char)local_18[1] == 'f')) {
    return 3;
  }
  s.str = (uint8 *)CONCAT71(uStack_f,local_10);
  runtime_atoi(s);
  iVar1 = (int)local_18;
  if ((local_18 == (short *)(long)iVar1) && (local_10 != '\0')) {
    return iVar1;
  }
  return iVar1;
}

