
/* is_same_subnet(unsigned int, unsigned int) */

bool is_same_subnet(uint param_1,uint param_2)

{
  return (param_1 ^ param_2) < 0x100;
}

