
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.isDomainName(string s, bool ~r1) */

bool net_isDomainName(string s)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  long in_stack_00000008;
  int l;
  
                    /* Unresolved local var: uint8 last@[???]
                       Unresolved local var: bool nonNumeric@[???]
                       Unresolved local var: int partlen@[???] */
  bVar2 = SUB81(l,0);
  if (((l == 0) || (0xfe < l)) || ((l == 0xfe && (*(char *)(in_stack_00000008 + 0xfd) != '.')))) {
    return bVar2;
  }
  lVar3 = 0;
  lVar5 = 0;
  cVar4 = '.';
  do {
    if (l <= lVar3) {
      if ((cVar4 != '-') && (lVar5 < 0x40)) {
        return bVar2;
      }
      return bVar2;
    }
    cVar1 = *(char *)(in_stack_00000008 + lVar3);
    if ((((byte)(cVar1 + 0x9fU) < 0x1a) || ((byte)(cVar1 + 0xbfU) < 0x1a)) || (cVar1 == '_')) {
      lVar5 = lVar5 + 1;
    }
    else if ((byte)(cVar1 - 0x30U) < 10) {
      lVar5 = lVar5 + 1;
    }
    else if (cVar1 == '-') {
      if (cVar4 == '.') {
        return bVar2;
      }
      lVar5 = lVar5 + 1;
    }
    else {
      if (cVar1 != '.') {
        return bVar2;
      }
      if ((cVar4 == '.') || (cVar4 == '-')) {
        return bVar2;
      }
      if ((0x3f < lVar5) || (lVar5 == 0)) {
        return bVar2;
      }
      lVar5 = 0;
    }
    lVar3 = lVar3 + 1;
    cVar4 = cVar1;
  } while( true );
}

