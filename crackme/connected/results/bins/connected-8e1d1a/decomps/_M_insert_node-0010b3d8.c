
/* std::_Rb_tree<unsigned int, std::pair<unsigned int const, unsigned short>,
   std::_Select1st<std::pair<unsigned int const, unsigned short> >, std::less<unsigned int>,
   std::allocator<std::pair<unsigned int const, unsigned short> >
   >::_M_insert_node(std::_Rb_tree_node_base*, std::_Rb_tree_node_base*,
   std::_Rb_tree_node<std::pair<unsigned int const, unsigned short> >*) */

_Rb_tree_node * __thiscall
std::
_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
::_M_insert_node(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
                 *this,_Rb_tree_node_base *param_1,_Rb_tree_node_base *param_2,
                _Rb_tree_node *param_3)

{
  bool bVar1;
  
  bVar1 = true;
  if ((param_1 == (_Rb_tree_node_base *)0x0) && (param_2 != (_Rb_tree_node_base *)(this + 8))) {
    bVar1 = *(uint *)(param_3 + 0x20) < *(uint *)(param_2 + 0x20);
  }
  std::_Rb_tree_insert_and_rebalance
            (bVar1,(_Rb_tree_node_base *)param_3,param_2,(_Rb_tree_node_base *)(this + 8));
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  return param_3;
}

