
/* std::map<unsigned int, unsigned short, std::less<unsigned int>, std::allocator<std::pair<unsigned
   int const, unsigned short> > >::operator[](unsigned int&&) */

_Rb_tree_node_base * __thiscall
std::
map<unsigned_int,unsigned_short,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
::operator[](map<unsigned_int,unsigned_short,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
             *this,uint *param_1)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node *p_Var2;
  undefined1 auVar3 [16];
  
  p_Var1 = (_Rb_tree_node_base *)
           _Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
           ::_M_lower_bound((_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
                             *)this,*(_Rb_tree_node **)(this + 0x10),
                            (_Rb_tree_node_base *)(this + 8),param_1);
  if (((_Rb_tree_node_base *)(this + 8) == p_Var1) || (*param_1 < *(uint *)(p_Var1 + 0x20))) {
    p_Var2 = operator_new(0x28);
    *(uint *)(p_Var2 + 0x20) = *param_1;
    *(undefined2 *)(p_Var2 + 0x24) = 0;
    auVar3 = _Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
             ::_M_get_insert_hint_unique_pos
                       ((_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
                         *)this,p_Var1,p_Var2 + 0x20);
    p_Var1 = auVar3._0_8_;
    if (auVar3._8_8_ == (_Rb_tree_node_base *)0x0) {
      operator_delete(p_Var2,0x28);
    }
    else {
      p_Var1 = (_Rb_tree_node_base *)
               _Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
               ::_M_insert_node((_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
                                 *)this,p_Var1,auVar3._8_8_,p_Var2);
    }
  }
  return p_Var1 + 0x24;
}

