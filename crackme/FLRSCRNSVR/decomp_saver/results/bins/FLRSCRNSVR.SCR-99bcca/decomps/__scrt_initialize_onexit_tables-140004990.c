
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
  
  if (DAT_140008821 == '\0') {
    if (1 < param_1) {
      FUN_140004c80(5);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    bVar2 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar2) == 0) || (param_1 != 0)) {
      in_RAX = 0xffffffffffffffff;
      DAT_140008828 = 0xffffffffffffffff;
      uRam0000000140008830 = 0xffffffffffffffff;
      _DAT_140008838 = 0xffffffffffffffff;
      _DAT_140008840 = 0xffffffffffffffff;
      uRam0000000140008848 = 0xffffffffffffffff;
      _DAT_140008850 = 0xffffffffffffffff;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_140008828);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_140008840), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_140008821 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}

