
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __scrt_initialize_onexit_tables
   
   Library: Visual Studio 2019 Release */

undefined8 __scrt_initialize_onexit_tables(uint param_1)

{
  code *pcVar1;
  bool bVar2;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar3;
  
  if (DAT_1400098d1 == '\0') {
    if (1 < param_1) {
      FUN_140004b1c(5);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    bVar2 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar2) == 0) || (param_1 != 0)) {
      in_RAX = 0xffffffffffffffff;
      DAT_1400098d8 = 0xffffffffffffffff;
      uRam00000001400098e0 = 0xffffffffffffffff;
      _DAT_1400098e8 = 0xffffffffffffffff;
      _DAT_1400098f0 = 0xffffffffffffffff;
      uRam00000001400098f8 = 0xffffffffffffffff;
      _DAT_140009900 = 0xffffffffffffffff;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_1400098d8);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_1400098f0), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_1400098d1 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}

