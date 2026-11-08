
/* std::__format::_Scanner<char>::_M_scan() */

void __thiscall std::__format::_Scanner<char>::_M_scan(_Scanner<char> *this)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  char cVar4;
  ushort uVar5;
  void *pvVar6;
  size_t sVar7;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcVar12;
  int iVar13;
  size_t __n;
  ulong unaff_R13;
  ulong unaff_R14;
  long lVar14;
  
  pcVar9 = *(char **)(this + 8);
  __n = *(long *)(this + 0x10) - (long)pcVar9;
  if (__n == 2) {
    if ((*pcVar9 == '{') && (pcVar9[1] == '}')) {
      pcVar9 = pcVar9 + 1;
      *(char **)(this + 8) = pcVar9;
      pcVar2 = *(code **)(*(long *)this + 8);
      if (*(int *)(this + 0x18) != 1) {
        *(undefined4 *)(this + 0x18) = 2;
        *(long *)(this + 0x20) = *(long *)(this + 0x20) + 1;
        (*pcVar2)();
        return;
      }
      sVar7 = __conflicting_indexing_in_format_string();
      goto LAB_00107e17;
    }
  }
  else if (__n == 0) {
    return;
  }
  pvVar6 = memchr(pcVar9,0x7b,__n);
  unaff_R13 = (long)pvVar6 - (long)pcVar9;
  if (pvVar6 == (void *)0x0) {
    unaff_R13 = 0xffffffffffffffff;
  }
  pvVar6 = memchr(pcVar9,0x7d,__n);
  unaff_R14 = (long)pvVar6 - (long)pcVar9;
  if (pvVar6 == (void *)0x0) {
    unaff_R14 = 0xffffffffffffffff;
  }
LAB_00107e8b:
  do {
    while( true ) {
      if (unaff_R14 == unaff_R13) {
        (*(code *)**(undefined8 **)this)(this,*(undefined8 *)(this + 0x10));
        *(undefined8 *)(this + 8) = *(undefined8 *)(this + 0x10);
        return;
      }
      if (unaff_R13 < unaff_R14) break;
      sVar7 = unaff_R14 + 1;
      if ((sVar7 == __n) || (pcVar9[unaff_R14 + 1] != '}')) {
                    /* WARNING: Subroutine does not return */
        __throw_format_error("format error: unmatched \'}\' in format string");
      }
      lVar14 = *(long *)(this + 8);
      (*(code *)**(undefined8 **)this)(this,sVar7 + lVar14);
      pcVar9 = (char *)(sVar7 + lVar14 + 1);
      *(char **)(this + 8) = pcVar9;
      if (unaff_R13 != 0xffffffffffffffff) {
        unaff_R13 = (unaff_R13 - 1) - sVar7;
      }
      __n = *(long *)(this + 0x10) - (long)pcVar9;
      if (__n == 0) {
        return;
      }
      pvVar6 = memchr(pcVar9,0x7d,__n);
      unaff_R14 = (long)pvVar6 - (long)pcVar9;
      if (pvVar6 == (void *)0x0) {
        unaff_R14 = 0xffffffffffffffff;
      }
    }
    sVar7 = unaff_R13 + 1;
    if (sVar7 == __n) {
LAB_00107e48:
                    /* WARNING: Subroutine does not return */
      __throw_format_error("format error: unmatched \'{\' in format string");
    }
    if (unaff_R14 == 0xffffffffffffffff) {
LAB_00107e17:
      if (pcVar9[sVar7] != '{') goto LAB_00107e48;
      lVar14 = (pcVar9[sVar7] == '{') + unaff_R13 + *(long *)(this + 8);
      (*(code *)**(undefined8 **)this)(this,lVar14);
      pcVar9 = (char *)(lVar14 + 1);
      *(char **)(this + 8) = pcVar9;
      pcVar8 = *(char **)(this + 0x10);
LAB_00107e5b:
      __n = (long)pcVar8 - (long)pcVar9;
      if (__n == 0) {
        return;
      }
      pvVar6 = memchr(pcVar9,0x7b,__n);
      unaff_R13 = (long)pvVar6 - (long)pcVar9;
      if (pvVar6 == (void *)0x0) {
        unaff_R13 = 0xffffffffffffffff;
      }
      goto LAB_00107e8b;
    }
    cVar4 = pcVar9[unaff_R13 + 1];
    lVar14 = (cVar4 == '{') + unaff_R13 + *(long *)(this + 8);
    (*(code *)**(undefined8 **)this)(this,lVar14);
    pcVar9 = (char *)(lVar14 + 1);
    *(char **)(this + 8) = pcVar9;
    pcVar8 = *(char **)(this + 0x10);
    if (cVar4 == '{') {
      unaff_R14 = (unaff_R14 - 2) - unaff_R13;
      goto LAB_00107e5b;
    }
    cVar4 = *(char *)(lVar14 + 1);
    if (cVar4 == '}') {
      if (*(int *)(this + 0x18) == 1) {
        __conflicting_indexing_in_format_string();
LAB_00107fb3:
        cVar4 = __conflicting_indexing_in_format_string();
        goto LAB_00107fb8;
      }
      *(undefined4 *)(this + 0x18) = 2;
      uVar10 = *(ulong *)(this + 0x20);
      *(ulong *)(this + 0x20) = uVar10 + 1;
    }
    else if (cVar4 == ':') {
      if (*(int *)(this + 0x18) == 1) goto LAB_00107fb3;
      *(undefined4 *)(this + 0x18) = 2;
      uVar10 = *(ulong *)(this + 0x20);
      *(ulong *)(this + 0x20) = uVar10 + 1;
      *(long *)(this + 8) = lVar14 + 2;
    }
    else {
LAB_00107fb8:
      pcVar12 = (char *)(lVar14 + 2);
      uVar10 = 0;
      if (cVar4 != '0') {
        if (8 < (byte)(cVar4 - 0x31U)) goto LAB_00108093;
        uVar10 = (ulong)((ushort)(short)cVar4 - 0x30);
        pcVar12 = (char *)(lVar14 + 2);
        if ((pcVar12 != pcVar8) && ((byte)(*(char *)(lVar14 + 2) - 0x30U) < 10)) {
          iVar13 = 0x10;
          uVar11 = 0;
          pcVar12 = pcVar9;
          do {
            bVar1 = *pcVar12 - 0x30;
            uVar10 = uVar11;
            if (9 < bVar1) goto LAB_00108098;
            iVar13 = iVar13 + -4;
            if (iVar13 < 0) {
              iVar3 = (uint)(ushort)uVar11 * 10;
              uVar5 = (ushort)iVar3;
              if (((short)((uint)iVar3 >> 0x10) != 0) ||
                 (uVar10 = (ulong)(ushort)(bVar1 + uVar5), CARRY2((ushort)bVar1,uVar5))) {
                do {
                  pcVar12 = pcVar12 + 1;
                  uVar10 = uVar11;
                  if (pcVar8 == pcVar12) goto LAB_00108093;
                  if (9 < (byte)(*pcVar12 - 0x30U)) goto LAB_00108093;
                } while( true );
              }
            }
            else {
              uVar10 = (ulong)((uint)bVar1 + (int)uVar11 * 10);
            }
            pcVar12 = pcVar12 + 1;
            uVar11 = uVar10;
            if (pcVar8 == pcVar12) goto LAB_00108098;
          } while( true );
        }
      }
      while ((*pcVar12 != '}' && (*pcVar12 != ':'))) {
LAB_00108093:
        do {
          __invalid_arg_id_in_format_string();
LAB_00108098:
        } while (pcVar9 == pcVar12);
      }
      uVar10 = uVar10 & 0xffff;
      if (*(int *)(this + 0x18) == 2) {
        __conflicting_indexing_in_format_string();
        goto LAB_001080a8;
      }
      *(undefined4 *)(this + 0x18) = 1;
      *(char **)(this + 8) = pcVar12 + (*pcVar12 == ':');
    }
    (**(code **)(*(long *)this + 8))(this,uVar10);
    pcVar9 = *(char **)(this + 8);
    if ((pcVar9 == *(char **)(this + 0x10)) || (*pcVar9 != '}')) {
LAB_001080a8:
                    /* WARNING: Subroutine does not return */
      __throw_format_error("format error: unmatched \'{\' in format string");
    }
    pcVar9 = pcVar9 + 1;
    *(char **)(this + 8) = pcVar9;
    __n = (long)*(char **)(this + 0x10) - (long)pcVar9;
    if (__n == 0) {
      return;
    }
    pvVar6 = memchr(pcVar9,0x7b,__n);
    unaff_R13 = (long)pvVar6 - (long)pcVar9;
    if (pvVar6 == (void *)0x0) {
      unaff_R13 = 0xffffffffffffffff;
    }
    pvVar6 = memchr(pcVar9,0x7d,__n);
    unaff_R14 = (long)pvVar6 - (long)pcVar9;
    if (pvVar6 == (void *)0x0) {
      unaff_R14 = 0xffffffffffffffff;
    }
  } while( true );
}

