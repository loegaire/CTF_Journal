
/* _FUN(net_pc*, packet*) */

void main::{lambda(net_pc*,packet*)#1}::_FUN(net_pc *param_1,packet *param_2)

{
  ostream *poVar1;
  
  std::__ostream_insert<char,std::char_traits<char>>
            ((ostream *)std::cout," \x1b[1;36mreceived:\x1b[0m ",0x16);
  poVar1 = std::__ostream_insert<char,std::char_traits<char>>
                     ((ostream *)std::cout,*(char **)(param_2 + 0x10),*(long *)(param_2 + 0x18));
  std::__ostream_insert<char,std::char_traits<char>>(poVar1,"\n",1);
  return;
}

