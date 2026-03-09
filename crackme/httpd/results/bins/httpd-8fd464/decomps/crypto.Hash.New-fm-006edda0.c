
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void crypto.Hash.New-fm(hash.Hash ~r0) */

hash_Hash crypto_Hash_New_fm(void)

{
  long *plVar1;
  long in_RDX;
  long extraout_RDX;
  long in_FS_OFFSET;
  hash_Hash hVar2;
  crypto_Hash local_20;
  runtime_itab *local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
  if ((plVar1 != (long *)0x0) && ((undefined1 *)*plVar1 == &stack0x00000008)) {
    *plVar1 = (long)&local_20;
  }
  local_20 = *(crypto_Hash *)(in_RDX + 8);
  hVar2 = crypto_Hash_New(local_20);
  hVar2.tab = local_18;
  return hVar2;
}

