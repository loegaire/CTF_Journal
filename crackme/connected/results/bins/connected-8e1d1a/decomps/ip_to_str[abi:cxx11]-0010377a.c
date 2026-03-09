
/* ip_to_str[abi:cxx11](unsigned int) */

long * ip_to_str_abi_cxx11_(uint param_1)

{
  ulong uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  uint *puVar6;
  uint uVar7;
  ulong uVar8;
  uint in_ESI;
  undefined4 in_register_0000003c;
  long *plVar9;
  undefined8 local_348;
  uint *local_340;
  undefined ***local_338;
  locale local_330 [8];
  char local_328;
  undefined **local_318;
  undefined *local_310;
  undefined *local_308;
  undefined4 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined1 *local_2e8;
  uint local_2d8 [4];
  uint local_2c8;
  uint local_2b8;
  uint local_2a8;
  undefined **local_298;
  undefined1 *local_290;
  undefined8 local_288;
  undefined1 *local_280;
  undefined1 local_278 [256];
  undefined ***local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined **local_158;
  char *local_150;
  undefined8 local_148;
  char *local_140;
  char local_138 [256];
  uint *local_38;
  undefined8 local_30;
  uint local_28;
  undefined4 uStack_24;
  
  plVar9 = (long *)CONCAT44(in_register_0000003c,param_1);
  local_2e8 = (undefined1 *)&local_348;
  local_2d8[0] = in_ESI >> 0x18;
  local_2c8 = in_ESI >> 0x10 & 0xff;
  local_2b8 = in_ESI >> 8 & 0xff;
  local_2a8 = in_ESI & 0xff;
  local_338 = &local_158;
  local_150 = local_138;
  local_148 = 0x100;
  local_158 = &PTR__M_overflow_0011dbb8;
  local_38 = &local_28;
  local_30 = 0;
  local_28 = local_28 & 0xffffff00;
  local_290 = local_278;
  local_288 = 0x100;
  local_298 = &PTR__M_overflow_0011dc28;
  local_170 = 0xffffffffffffffff;
  local_168 = 0;
  local_348 = 0x210844;
  local_340 = local_2d8;
  local_330[0] = (locale)0x0;
  local_328 = '\0';
  local_310 = &DAT_00117041;
  local_308 = &DAT_0011704c;
  local_300 = 0;
  local_2f8 = 0;
  local_2f0 = 0xffffffffffffffff;
  local_318 = &PTR__M_on_chars_0011dc50;
  local_280 = local_290;
  local_178 = local_338;
  local_140 = local_150;
                    /* try { // try from 001038e7 to 001038eb has its CatchHandler @ 00103960 */
  std::__format::_Scanner<char>::_M_scan((_Scanner<char> *)&local_318);
  if (local_328 != '\0') {
    std::locale::~locale(local_330);
  }
  if (local_150 == local_140) {
    *plVar9 = (long)(plVar9 + 2);
    if (local_38 == &local_28) {
LAB_00103aeb:
      puVar6 = (uint *)(plVar9 + 2);
      uVar8 = local_30 + 1;
      uVar7 = (uint)uVar8;
      if (uVar7 < 8) {
        if ((uVar8 & 4) == 0) {
          if (uVar7 != 0) {
            *(undefined1 *)puVar6 = (undefined1)local_28;
            if ((uVar8 & 2) != 0) {
              *(undefined2 *)((long)plVar9 + (uVar8 & 0xffffffff) + 0xe) =
                   *(undefined2 *)((long)&local_30 + (uVar8 & 0xffffffff) + 6);
            }
          }
        }
        else {
          *puVar6 = local_28;
          *(undefined4 *)((long)plVar9 + (uVar8 & 0xffffffff) + 0xc) =
               *(undefined4 *)((long)&local_30 + (uVar8 & 0xffffffff) + 4);
        }
      }
      else {
        *(long *)puVar6 = CONCAT44(uStack_24,local_28);
        *(undefined8 *)((long)plVar9 + (uVar8 & 0xffffffff) + 8) =
             *(undefined8 *)((long)&local_30 + (uVar8 & 0xffffffff));
        lVar5 = (long)puVar6 - ((ulong)(plVar9 + 3) & 0xfffffffffffffff8);
        uVar7 = uVar7 + (int)lVar5 & 0xfffffff8;
        if (7 < uVar7) {
          uVar2 = 0;
          do {
            *(undefined8 *)(((ulong)(plVar9 + 3) & 0xfffffffffffffff8) + (ulong)uVar2) =
                 *(undefined8 *)((long)&local_28 + ((ulong)uVar2 - lVar5));
            uVar2 = uVar2 + 8;
          } while (uVar2 < uVar7);
        }
      }
      goto LAB_0010393b;
    }
  }
  else {
    uVar8 = (long)local_140 - (long)local_150;
    if (0x7fffffffffffffff - local_30 < uVar8) {
                    /* try { // try from 001039fc to 00103a77 has its CatchHandler @ 00103a01 */
      uVar3 = std::__throw_length_error("basic_string::append");
      local_158 = &PTR__M_overflow_0011dbb8;
      std::__cxx11::string::_M_dispose((string *)&local_38);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar3);
                    /* catch() { ... } // from try @ 001039fc with catch @ 00103a01 */
    }
    uVar1 = uVar8 + local_30;
    if (local_38 == &local_28) {
      uVar4 = 0xf;
    }
    else {
      uVar4 = CONCAT44(uStack_24,local_28);
    }
    if (uVar4 < uVar1) {
      std::__cxx11::string::_M_mutate((string *)&local_38,local_30,0,local_150,uVar8);
    }
    else if (uVar8 == 1) {
      *(char *)((long)local_38 + local_30) = *local_150;
    }
    else {
      memcpy((char *)((long)local_38 + local_30),local_150,uVar8);
    }
    local_30 = uVar1;
    *(undefined1 *)((long)local_38 + uVar1) = 0;
    *plVar9 = (long)(plVar9 + 2);
    if (local_38 == &local_28) goto LAB_00103aeb;
  }
  *plVar9 = (long)local_38;
  plVar9[2] = CONCAT44(uStack_24,local_28);
LAB_0010393b:
  plVar9[1] = local_30;
  return plVar9;
}

