
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_mPark(void)

{
  runtime_note *n;
  uintptr uVar1;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: runtime.g * g@[???] */
  n = *(runtime_note **)(in_FS_OFFSET + -8);
  do {
    uVar1 = n[6].key;
    runtime_notesleep(n);
    *(undefined8 *)(n[6].key + 0x158) = 0;
    runtime_mDoFixup();
  } while ((char)uVar1 != -0x58);
  return;
}

