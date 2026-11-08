
/* WARNING: Variable defined which should be unmapped: i */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.typehash(runtime._type * t, void * p, uintptr h, uintptr
   ~r3) */

uintptr runtime_typehash(runtime__type *t,void *p,uintptr h)

{
  long lVar1;
  ulong uVar2;
  uintptr extraout_RAX;
  long lVar3;
  byte bVar4;
  uintptr uVar5;
  int in_RSI;
  runtime_name n;
  uint8 *in_RDI;
  long in_FS_OFFSET;
  string sVar6;
  interface___ e;
  string a1;
  string a0;
  runtime_interfacetype *i;
  void *p_spill;
  uintptr h_spill;
  runtime_tmpBuf *local_78;
  uintptr local_70;
  void *local_68;
  uint8 *local_58;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (((i->typ).tflag & 8) != 0) {
    uVar5 = (i->typ).size;
    if (uVar5 == 4) {
      runtime_memhash32();
      return local_70;
    }
    if (uVar5 == 8) {
      runtime_memhash64();
      return local_70;
    }
    runtime_memhash();
    return (uintptr)local_68;
  }
  bVar4 = (i->typ).kind & 0x1f;
  if (bVar4 < 0x11) {
    if (0xe < bVar4) {
      if (bVar4 == 0xf) {
        runtime_c64hash((void *)h_spill,(uintptr)p);
        return local_70;
      }
      runtime_c128hash((void *)h_spill,(uintptr)p);
      return local_70;
    }
    if (bVar4 == 0xd) {
      runtime_f32hash((void *)h_spill,(uintptr)p);
      return local_70;
    }
    if (bVar4 == 0xe) {
      runtime_f64hash((void *)h_spill,(uintptr)p);
      return local_70;
    }
  }
  else if (bVar4 < 0x15) {
    if (bVar4 == 0x11) {
                    /* Unresolved local var: uintptr i@[???] */
      for (uVar5 = 0; uVar5 < (ulong)(i->mhdr).len; uVar5 = uVar5 + 1) {
        runtime_typehash(&i->typ,p_spill,uVar5);
      }
      return (uintptr)i;
    }
    if (bVar4 == 0x14) {
      if ((i->mhdr).len == 0) {
        runtime_nilinterhash((void *)h_spill,(uintptr)p);
        return local_70;
      }
      runtime_interhash((void *)h_spill,(uintptr)p);
      return local_70;
    }
  }
  else {
    if (bVar4 == 0x18) {
      runtime_strhash();
      return local_70;
    }
    if (bVar4 == 0x19) {
                    /* Unresolved local var: runtime.structfield f@[???] */
      lVar1 = (i->mhdr).len;
      n.bytes = (uint8 *)(i->mhdr).array;
      if (lVar1 < 1) {
        return h_spill;
      }
      lVar3 = 0;
      while( true ) {
        uVar2 = *(ulong *)(n.bytes + 0x10);
        runtime_name_isBlank(n);
        if ((char)local_78 == '\0') {
          local_78 = (runtime_tmpBuf *)((uVar2 >> 1) + (long)p_spill);
          runtime_typehash(p_spill,(void *)h_spill,h_spill);
          h_spill = (uintptr)local_68;
        }
        lVar3 = lVar3 + 1;
        if (lVar1 <= lVar3) break;
        n.bytes = n.bytes + 0x18;
      }
      return (uintptr)(void *)h_spill;
    }
  }
  sVar6 = runtime____type__string(&i->typ);
  a0.str = (uint8 *)sVar6.len;
  a1.len = in_RSI;
  a1.str = in_RDI;
  a0.len = local_70;
  sVar6 = runtime_concatstring2(local_78,a0,a1);
  sVar6.str = local_58;
  runtime_convTstring(sVar6);
  e.data = sVar6.len;
  e._type = (runtime__type *)&DAT_00000018;
  runtime_gopanic(e);
  return extraout_RAX;
}

