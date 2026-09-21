
/* str_to_ip(std::__cxx11::string const&) */

uint str_to_ip(string *param_1)

{
  byte local_18 [4];
  uint local_14;
  uint local_10;
  int local_c [3];
  
  __isoc23_sscanf(*(undefined8 *)param_1,"%d.%d.%d.%d",local_c,&local_10,&local_14,local_18);
  return local_c[0] << 0x18 | (uint)local_18[0] | (local_10 & 0xff) << 0x10 | (local_14 & 0xff) << 8
  ;
}

