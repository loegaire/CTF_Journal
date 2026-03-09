
/* std::_Rb_tree<unsigned short, std::pair<unsigned short const, unsigned char>,
   std::_Select1st<std::pair<unsigned short const, unsigned char> >, std::less<unsigned short>,
   std::allocator<std::pair<unsigned short const, unsigned char> >
   >::_M_erase(std::_Rb_tree_node<std::pair<unsigned short const, unsigned char> >*) */

void __thiscall
std::
_Rb_tree<unsigned_short,std::pair<unsigned_short_const,unsigned_char>,std::_Select1st<std::pair<unsigned_short_const,unsigned_char>>,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,unsigned_char>>>
::_M_erase(_Rb_tree<unsigned_short,std::pair<unsigned_short_const,unsigned_char>,std::_Select1st<std::pair<unsigned_short_const,unsigned_char>>,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,unsigned_char>>>
           *this,_Rb_tree_node *param_1)

{
  _Rb_tree_node *p_Var1;
  
  while (param_1 != (_Rb_tree_node *)0x0) {
    _M_erase(this,*(_Rb_tree_node **)(param_1 + 0x18));
    p_Var1 = *(_Rb_tree_node **)(param_1 + 0x10);
    operator_delete(param_1,0x28);
    param_1 = p_Var1;
  }
  return;
}

