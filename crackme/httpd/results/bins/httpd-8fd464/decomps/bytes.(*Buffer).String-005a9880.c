
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bytes.(*Buffer).String(bytes.Buffer * b, string ~r0) */

string bytes___Buffer__String(bytes_Buffer *b)

{
  ulong uVar1;
  uint8 *ptr;
  ulong uVar2;
  int unaff_RBX;
  long in_FS_OFFSET;
  string sVar3;
  string sVar4;
  bytes_Buffer *b_spill;
  uint8 *local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (b_spill != (bytes_Buffer *)0x0) {
    uVar1 = (b_spill->buf).len;
    ptr = (b_spill->buf).array;
    uVar2 = b_spill->off;
    if (uVar2 <= uVar1) {
      sVar3 = runtime_slicebytetostring
                        ((runtime_tmpBuf *)
                         (ptr + ((long)(uVar2 - (b_spill->buf).cap) >> 0x3f & uVar2)),ptr,
                         uVar1 - uVar2);
      sVar4.len = sVar3.len;
      sVar4.str = local_18;
      return sVar4;
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceB();
  }
  sVar3.len = unaff_RBX;
  sVar3.str = &DAT_002889bc;
  return sVar3;
}

