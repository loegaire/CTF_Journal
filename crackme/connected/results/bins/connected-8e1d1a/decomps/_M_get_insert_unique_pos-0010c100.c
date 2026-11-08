
/* std::_Rb_tree<unsigned short, std::pair<unsigned short const, unsigned char>,
   std::_Select1st<std::pair<unsigned short const, unsigned char> >, std::less<unsigned short>,
   std::allocator<std::pair<unsigned short const, unsigned char> >
   >::_M_get_insert_unique_pos(unsigned short const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<unsigned_short,std::pair<unsigned_short_const,unsigned_char>,std::_Select1st<std::pair<unsigned_short_const,unsigned_char>>,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,unsigned_char>>>
::_M_get_insert_unique_pos
          (_Rb_tree<unsigned_short,std::pair<unsigned_short_const,unsigned_char>,std::_Select1st<std::pair<unsigned_short_const,unsigned_char>>,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,unsigned_char>>>
           *this,ushort *param_1)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node_base *p_Var2;
  undefined1 auVar3 [16];
  
  if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
    p_Var1 = (_Rb_tree_node_base *)(this + 8);
LAB_0010c126:
    if (*(_Rb_tree_node_base **)(this + 0x18) == p_Var1) {
      p_Var2 = (_Rb_tree_node_base *)0x0;
      goto LAB_0010c173;
    }
    p_Var2 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var1);
  }
  else {
    p_Var2 = *(_Rb_tree_node_base **)(this + 0x10);
    do {
      p_Var1 = p_Var2;
      if (*(ushort *)(p_Var1 + 0x20) <= *param_1) {
        p_Var2 = *(_Rb_tree_node_base **)(p_Var1 + 0x18);
      }
      else {
        p_Var2 = *(_Rb_tree_node_base **)(p_Var1 + 0x10);
      }
    } while (p_Var2 != (_Rb_tree_node_base *)0x0);
    p_Var2 = p_Var1;
    if (*(ushort *)(p_Var1 + 0x20) > *param_1) goto LAB_0010c126;
  }
  if (*(ushort *)(p_Var2 + 0x20) < *param_1) {
    p_Var2 = (_Rb_tree_node_base *)0x0;
  }
  else {
    p_Var1 = (_Rb_tree_node_base *)0x0;
  }
LAB_0010c173:
  auVar3._8_8_ = p_Var1;
  auVar3._0_8_ = p_Var2;
  return auVar3;
}

