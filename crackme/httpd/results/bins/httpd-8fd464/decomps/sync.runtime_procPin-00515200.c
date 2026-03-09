
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void sync.runtime_procPin(int ~r0) */

int sync_runtime_procPin(void)

{
  int *piVar1;
  long lVar2;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: runtime.g * _g_@[???]
                       Unresolved local var: runtime.m * mp@[???] */
  lVar2 = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30);
  piVar1 = (int *)(lVar2 + 0x110);
  *piVar1 = *piVar1 + 1;
  return (long)**(int **)(lVar2 + 0xd8);
}

