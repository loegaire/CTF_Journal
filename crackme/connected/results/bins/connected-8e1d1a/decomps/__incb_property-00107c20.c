
/* std::__unicode::__v15_1_0::__incb_property(char32_t) */

uint std::__unicode::__v15_1_0::__incb_property(wchar32 param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  
  if (0xc01 < (uint)(param_1 << 2)) {
    puVar3 = __incb_edges;
    lVar2 = 0x185;
    while (lVar1 = lVar2, 0 < lVar1) {
      lVar2 = lVar1 >> 1;
      if (*(uint *)((long)puVar3 + lVar2 * 4) < (uint)(param_1 << 2 | 3U)) {
        puVar3 = (undefined1 *)((uint *)((long)puVar3 + lVar2 * 4) + 1);
        lVar2 = (lVar1 - lVar2) + -1;
      }
    }
    return *(uint *)((long)puVar3 + -4) & 3;
  }
  return 0;
}

