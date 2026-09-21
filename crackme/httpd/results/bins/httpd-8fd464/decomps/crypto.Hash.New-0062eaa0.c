
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void crypto.Hash.New(crypto.Hash h, hash.Hash ~r0) */

hash_Hash crypto_Hash_New(crypto_Hash h)

{
  func___hash_Hash ***pppfVar1;
  func___hash_Hash ***base;
  int in_RSI;
  hash_Hash *in_RDI;
  uint8 *in_R8;
  int in_R9;
  long in_FS_OFFSET;
  hash_Hash hVar2;
  string sVar3;
  string val;
  interface___ e;
  string a0;
  string a2;
  crypto_Hash h_spill;
  runtime_itab *local_50;
  int local_38;
  uint8 *local_18;
  
  while (pppfVar1 = crypto_hashes.array,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  base = (func___hash_Hash ***)(h_spill - 1);
  if ((func___hash_Hash ***)(h_spill - 1) < (func___hash_Hash ***)0x13) {
                    /* Unresolved local var: func()_hash.Hash * * f@[???] */
    if ((ulong)crypto_hashes.len <= h_spill) goto LAB_0062eba5;
    base = crypto_hashes.array;
    if (crypto_hashes.array[h_spill] != (func___hash_Hash **)0x0) {
      (**crypto_hashes.array[h_spill])(in_RDI);
      hVar2.data = pppfVar1;
      hVar2.tab = local_50;
      return hVar2;
    }
  }
  sVar3 = strconv_FormatInt(h_spill,(int)base);
  a0.str = (uint8 *)sVar3.len;
  sVar3.len = in_RSI;
  sVar3.str = (uint8 *)in_RDI;
  a0.len = local_38;
  a2.len = in_R9;
  a2.str = in_R8;
  sVar3 = runtime_concatstring3((runtime_tmpBuf *)&DAT_00298542,a0,sVar3,a2);
  val.len = (void *)sVar3.len;
  val.str = local_18;
  runtime_convTstring(val);
  e.data = val.len;
  e._type = (runtime__type *)&DAT_00000021;
  runtime_gopanic(e);
LAB_0062eba5:
                    /* WARNING: Subroutine does not return */
  runtime_panicIndexU();
}

