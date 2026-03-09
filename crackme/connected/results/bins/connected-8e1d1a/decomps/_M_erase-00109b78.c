
/* std::_Rb_tree<unsigned int, std::pair<unsigned int const, unsigned short>,
   std::_Select1st<std::pair<unsigned int const, unsigned short> >, std::less<unsigned int>,
   std::allocator<std::pair<unsigned int const, unsigned short> >
   >::_M_erase(std::_Rb_tree_node<std::pair<unsigned int const, unsigned short> >*) */

void __thiscall
std::
_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
::_M_erase(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
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

