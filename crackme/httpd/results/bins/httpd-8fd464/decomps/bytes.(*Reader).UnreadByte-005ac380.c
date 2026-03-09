
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bytes.(*Reader).UnreadByte(bytes.Reader * r, error ~r0) */

error bytes___Reader__UnreadByte(bytes_Reader *r)

{
  void *unaff_RBX;
  long in_FS_OFFSET;
  error eVar1;
  error eVar2;
  bytes_Reader *r_spill;
  runtime_itab *local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (r_spill->i < 1) {
    runtime_newobject((runtime__type *)&DAT_00241ea0);
    local_10->_type = (runtime__type *)&DAT_0000002e;
    local_10->inter = (runtime_interfacetype *)&DAT_002a8402;
    eVar1.data = unaff_RBX;
    eVar1.tab = local_10;
    return eVar1;
  }
  r_spill->prevRune = -1;
  r_spill->i = r_spill->i + -1;
  eVar2.data = unaff_RBX;
  eVar2.tab = (runtime_itab *)r_spill;
  return eVar2;
}

