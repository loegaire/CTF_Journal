
/* std::__format::_Spec<char>::_S_parse_width_or_precision(char const*, char const*, unsigned
   short&, bool&, std::basic_format_parse_context<char>&) */

char * std::__format::_Spec<char>::_S_parse_width_or_precision
                 (char *param_1,char *param_2,ushort *param_3,bool *param_4,
                 basic_format_parse_context *param_5)

{
  byte bVar1;
  long lVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  void *pvVar6;
  long *plVar7;
  long *plVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  long *unaff_R12;
  long *unaff_R13;
  
  if ((byte)__detail::__from_chars_alnum_to_val_table<false>::value[(byte)*param_1] < 10) {
    uVar5 = 0;
    iVar11 = 0x10;
    pcVar10 = param_1;
    do {
      bVar1 = *pcVar10 - 0x30;
      if (9 < bVar1) break;
      iVar11 = iVar11 + -4;
      if (iVar11 < 0) {
        uVar4 = (ushort)((uint)uVar5 * 10);
        if (((short)((uint)uVar5 * 10 >> 0x10) != 0) ||
           (uVar5 = bVar1 + uVar4, CARRY2((ushort)bVar1,uVar4))) goto LAB_0010958a;
      }
      else {
        uVar5 = (ushort)bVar1 + uVar5 * 10;
      }
      pcVar10 = pcVar10 + 1;
    } while (param_2 != pcVar10);
    if (param_1 != pcVar10) {
      *param_3 = uVar5;
      return pcVar10;
    }
    goto LAB_00109593;
  }
  if (*param_1 != 0x7b) {
    return param_1;
  }
  *param_4 = true;
  pcVar10 = param_1 + 1;
  if (pcVar10 == param_2) {
                    /* WARNING: Subroutine does not return */
    __throw_format_error("format error: unmatched \'{\' in format string");
  }
  cVar3 = param_1[1];
  pcVar9 = pcVar10;
  if (cVar3 == '}') {
    if (*(int *)(param_5 + 0x10) != 1) {
      *(undefined4 *)(param_5 + 0x10) = 2;
      lVar2 = *(long *)(param_5 + 0x18);
      *(long *)(param_5 + 0x18) = lVar2 + 1;
      *param_3 = (ushort)lVar2;
      goto LAB_001095de;
    }
    cVar3 = __conflicting_indexing_in_format_string();
    pcVar9 = pcVar10;
  }
  if (cVar3 == '0') {
    pcVar10 = param_1 + 2;
    uVar5 = 0;
    goto LAB_00109635;
  }
  if (8 < (byte)(cVar3 - 0x31U)) goto LAB_001096b5;
  pcVar10 = param_1 + 2;
  if (param_2 == pcVar10) goto LAB_001096b5;
  if ((byte)(param_1[2] - 0x30U) < 10) {
    uVar5 = 0;
    iVar11 = 0x10;
    param_1 = pcVar9;
    do {
      bVar1 = *param_1 - 0x30;
      pcVar10 = param_1;
      if (9 < bVar1) goto LAB_001096ba;
      iVar11 = iVar11 + -4;
      if (iVar11 < 0) {
        uVar4 = (ushort)((uint)uVar5 * 10);
        if (((short)((uint)uVar5 * 10 >> 0x10) != 0) ||
           (uVar5 = uVar4 + bVar1, CARRY2(uVar4,(ushort)bVar1))) {
          do {
            param_1 = param_1 + 1;
            if (param_2 == param_1) goto LAB_001096b5;
            if (9 < (byte)(*param_1 - 0x30U)) goto LAB_001096b5;
          } while( true );
        }
      }
      else {
        uVar5 = (ushort)bVar1 + uVar5 * 10;
      }
      pcVar10 = param_1 + 1;
      param_1 = pcVar10;
      if (param_2 == pcVar10) goto LAB_001096ba;
    } while( true );
  }
  uVar5 = (short)cVar3 - 0x30;
  while (pcVar9 = pcVar10, *pcVar10 != '}') {
LAB_001096b5:
    do {
      do {
        uVar5 = __invalid_arg_id_in_format_string();
        pcVar10 = param_1;
LAB_001096ba:
        param_1 = pcVar10;
      } while (pcVar9 == pcVar10);
LAB_00109635:
      pcVar9 = pcVar10;
    } while ((param_2 == pcVar10) || (pcVar10 == (char *)0x0));
  }
  if (*(int *)(param_5 + 0x10) == 2) {
    __conflicting_indexing_in_format_string();
    plVar7 = (long *)(pcVar10 + 1);
    pcVar10 = pcVar10 + 3;
    pcVar9 = (char *)0x8;
    if ((char *)0x7 < pcVar10) {
      pcVar9 = pcVar10;
    }
    *(char **)(param_2 + 8) = pcVar9;
    if ((ulong)pcVar10 >> 0x3c == 0) {
      pvVar6 = operator_new((long)pcVar9 << 3);
      *(void **)param_2 = pvVar6;
      plVar8 = (long *)((long)pvVar6 + ((ulong)(*(long *)(param_2 + 8) - (long)plVar7) >> 1) * 8);
      unaff_R12 = plVar8 + (long)plVar7;
      unaff_R13 = plVar8;
      if (plVar8 < unaff_R12) goto LAB_00109744;
    }
    else {
      if ((ulong)pcVar10 >> 0x3d != 0) {
        std::__throw_bad_array_new_length();
      }
      pvVar6 = (void *)std::__throw_bad_alloc();
      while( true ) {
        *plVar7 = (long)pvVar6;
        plVar8 = plVar7 + 1;
        if (unaff_R12 <= plVar8) break;
LAB_00109744:
        pvVar6 = operator_new(0x4b6);
        plVar7 = plVar8;
      }
    }
    *(long **)(param_2 + 0x28) = unaff_R13;
    lVar2 = *unaff_R13;
    *(long *)(param_2 + 0x18) = lVar2;
    *(long *)(param_2 + 0x20) = lVar2 + 0x4b6;
    *(long **)(param_2 + 0x48) = unaff_R12 + -1;
    pcVar10 = (char *)unaff_R12[-1];
    *(char **)(param_2 + 0x38) = pcVar10;
    *(char **)(param_2 + 0x40) = pcVar10 + 0x4b6;
    *(long *)(param_2 + 0x10) = lVar2;
    *(char **)(param_2 + 0x30) = pcVar10;
    return pcVar10;
  }
  *(undefined4 *)(param_5 + 0x10) = 1;
  *param_3 = uVar5;
LAB_001095de:
  return pcVar10 + 1;
  while ((byte)(*pcVar10 - 0x30U) < 10) {
LAB_0010958a:
    pcVar10 = pcVar10 + 1;
    if (param_2 == pcVar10) break;
  }
LAB_00109593:
                    /* WARNING: Subroutine does not return */
  __throw_format_error("format error: invalid width or precision in format-spec");
}

