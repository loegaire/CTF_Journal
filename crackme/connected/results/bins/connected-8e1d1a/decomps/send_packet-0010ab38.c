
/* net_pc::send_packet(packet) */

void __thiscall net_pc::send_packet(net_pc *this,undefined8 *param_2)

{
  uint *puVar1;
  _Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
  *this_00;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  _Rb_tree_node_base *p_Var5;
  net_pc *pnVar6;
  _Rb_tree_node_base *p_Var7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  net_pc *unaff_R13;
  _Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
  *unaff_R15;
  byte bVar14;
  uint local_9bc;
  undefined1 local_9b8 [11];
  undefined3 uStack_9ad;
  undefined8 uStack_9aa;
  undefined8 local_9a2;
  undefined8 uStack_99a;
  undefined8 local_992;
  undefined8 uStack_98a;
  undefined8 local_50a;
  undefined8 local_4f8;
  undefined6 uStack_4f0;
  undefined8 uStack_4ea;
  undefined8 local_4e2;
  undefined8 uStack_4da;
  undefined8 local_4d2;
  undefined8 uStack_4ca;
  undefined8 local_4a;
  
  bVar14 = 0;
  uVar13 = *(uint *)(param_2 + 1);
  if ((uVar13 ^ *(uint *)((long)param_2 + 4)) < 0x100) {
    pnVar6 = this;
    if (this[0x10] == (net_pc)0x0) {
      std::__throw_bad_optional_access();
LAB_0010ae9e:
      local_9b8._0_2_ = *(undefined2 *)(pnVar6 + 8);
      local_9b8._2_2_ = local_9b8._0_2_;
      uVar3 = *param_2;
      local_9b8[6] = (undefined1)uVar3;
      local_9b8._7_4_ = (undefined4)((ulong)uVar3 >> 8);
      uVar4 = local_9b8._7_4_;
      uStack_9ad = (undefined3)((ulong)uVar3 >> 0x28);
      uStack_9aa = param_2[1];
      local_9a2 = param_2[2];
      uStack_99a = param_2[3];
      local_992 = param_2[4];
      uStack_98a = param_2[5];
      puVar12 = *(undefined8 **)(pnVar6 + 0x48);
      if (puVar12 == (undefined8 *)(*(long *)(pnVar6 + 0x58) + -0x4b6)) {
        local_9b8._4_2_ = 0x30;
        std::deque<frame,std::allocator<frame>>::_M_push_back_aux<frame_const&>
                  ((deque<frame,std::allocator<frame>> *)(pnVar6 + 0x18),(frame *)local_9b8);
      }
      else {
        local_9b8._4_2_ = 0x30;
        local_9b8[7] = (undefined1)((ulong)uVar3 >> 8);
        *puVar12 = CONCAT17(local_9b8[7],
                            CONCAT16(local_9b8[6],
                                     CONCAT24(0x30,CONCAT22(local_9b8._0_2_,local_9b8._0_2_))));
        *(undefined8 *)((long)puVar12 + 0x4ae) = local_50a;
        lVar8 = (long)puVar12 - (long)((ulong)(puVar12 + 1) & 0xfffffffffffffff8);
        puVar11 = (undefined8 *)(local_9b8 + -lVar8);
        puVar12 = (undefined8 *)((ulong)(puVar12 + 1) & 0xfffffffffffffff8);
        for (uVar10 = (ulong)((int)lVar8 + 0x4b6U >> 3); uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar12 = *puVar11;
          puVar11 = puVar11 + (ulong)bVar14 * -2 + 1;
          puVar12 = puVar12 + (ulong)bVar14 * -2 + 1;
        }
        *(long *)(this + 0x48) = *(long *)(this + 0x48) + 0x4b6;
        local_9b8._7_4_ = uVar4;
      }
      (**(code **)**(undefined8 **)(this + 0x70))();
      return;
    }
    if (uVar13 == *(uint *)(this + 0xc)) goto LAB_0010ae9e;
    puVar1 = (uint *)(param_2 + 1);
    this_00 = (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
               *)(this + 0x238);
    p_Var7 = (_Rb_tree_node_base *)(this + 0x240);
    p_Var5 = (_Rb_tree_node_base *)
             std::
             _Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
             ::find(this_00,puVar1);
    if (p_Var7 == p_Var5) {
      local_9b8._0_2_ = *(undefined2 *)(this + 8);
      lVar8 = *(long *)(this + 0x68);
      puVar12 = *(undefined8 **)(lVar8 + 0x40);
      if (puVar12 == (undefined8 *)(*(long *)(lVar8 + 0x50) + -0x4b6)) {
        local_9b8._2_2_ = 0xffff;
        local_9b8._4_2_ = 5;
        local_9b8[6] = 1;
        local_9b8._7_4_ = uVar13;
        std::deque<frame,std::allocator<frame>>::_M_push_back_aux<frame_const&>
                  ((deque<frame,std::allocator<frame>> *)(lVar8 + 0x10),(frame *)local_9b8);
      }
      else {
        local_9b8._2_2_ = 0xffff;
        local_9b8._4_2_ = 5;
        local_9b8[6] = 1;
        local_9b8._7_4_ = uVar13;
        uVar4 = local_9b8._7_4_;
        local_9b8[7] = (undefined1)uVar13;
        *puVar12 = CONCAT17(local_9b8[7],CONCAT16(1,CONCAT24(5,CONCAT22(0xffff,local_9b8._0_2_))));
        *(undefined8 *)((long)puVar12 + 0x4ae) = local_50a;
        lVar9 = (long)puVar12 - (long)((ulong)(puVar12 + 1) & 0xfffffffffffffff8);
        puVar11 = (undefined8 *)(local_9b8 + -lVar9);
        puVar12 = (undefined8 *)((ulong)(puVar12 + 1) & 0xfffffffffffffff8);
        for (uVar10 = (ulong)((int)lVar9 + 0x4b6U >> 3); uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar12 = *puVar11;
          puVar11 = puVar11 + (ulong)bVar14 * -2 + 1;
          puVar12 = puVar12 + (ulong)bVar14 * -2 + 1;
        }
        *(long *)(lVar8 + 0x40) = *(long *)(lVar8 + 0x40) + 0x4b6;
        local_9b8._7_4_ = uVar4;
      }
      (**(code **)**(undefined8 **)(*(long *)(this + 0x68) + 0x68))();
    }
    p_Var5 = (_Rb_tree_node_base *)
             std::
             _Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
             ::find(this_00,puVar1);
    if (p_Var7 == p_Var5) {
      return;
    }
    uVar2 = *(undefined2 *)(this + 8);
    p_Var5 = (_Rb_tree_node_base *)
             std::
             _Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
             ::_M_lower_bound(this_00,*(_Rb_tree_node **)(this + 0x248),p_Var7,puVar1);
    if ((p_Var7 == p_Var5) || (*(uint *)(param_2 + 1) < *(uint *)(p_Var5 + 0x20))) {
      lVar8 = std::__throw_out_of_range("map::at");
    }
    else {
      local_4f8._0_2_ = uVar2;
      local_4f8._2_2_ = *(undefined2 *)(p_Var5 + 0x24);
      local_4f8._6_2_ = (undefined2)*param_2;
      uStack_4f0 = (undefined6)((ulong)*param_2 >> 0x10);
      uStack_4ea = param_2[1];
      local_4e2 = param_2[2];
      uStack_4da = param_2[3];
      local_4d2 = param_2[4];
      uStack_4ca = param_2[5];
      lVar8 = *(long *)(this + 0x68);
      puVar12 = *(undefined8 **)(lVar8 + 0x40);
      if (puVar12 != (undefined8 *)(*(long *)(lVar8 + 0x50) + -0x4b6)) {
        local_4f8._4_2_ = 0x30;
        *puVar12 = CONCAT26(local_4f8._6_2_,
                            CONCAT24(0x30,CONCAT22(*(undefined2 *)(p_Var5 + 0x24),uVar2)));
        *(undefined8 *)((long)puVar12 + 0x4ae) = local_4a;
        lVar9 = (long)puVar12 - (long)((ulong)(puVar12 + 1) & 0xfffffffffffffff8);
        puVar11 = (undefined8 *)((long)&local_4f8 - lVar9);
        puVar12 = (undefined8 *)((ulong)(puVar12 + 1) & 0xfffffffffffffff8);
        for (uVar10 = (ulong)((int)lVar9 + 0x4b6U >> 3); uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar12 = *puVar11;
          puVar11 = puVar11 + (ulong)bVar14 * -2 + 1;
          puVar12 = puVar12 + (ulong)bVar14 * -2 + 1;
        }
        *(long *)(lVar8 + 0x40) = *(long *)(lVar8 + 0x40) + 0x4b6;
        goto LAB_0010ac89;
      }
    }
    local_4f8._4_2_ = 0x30;
    std::deque<frame,std::allocator<frame>>::_M_push_back_aux<frame_const&>
              ((deque<frame,std::allocator<frame>> *)(lVar8 + 0x10),(frame *)&local_4f8);
LAB_0010ac89:
    (**(code **)**(undefined8 **)(*(long *)(this + 0x68) + 0x68))();
    return;
  }
  if (this[0x10] == (net_pc)0x0) {
    std::__throw_bad_optional_access();
LAB_0010adbc:
    local_9b8._0_2_ = *(undefined2 *)(this + 8);
    lVar8 = *(long *)(this + 0x68);
    puVar12 = *(undefined8 **)(lVar8 + 0x40);
    if (puVar12 == (undefined8 *)(*(long *)(lVar8 + 0x50) + -0x4b6)) {
      local_9b8._2_2_ = 0xffff;
      local_9b8._4_2_ = 5;
      local_9b8[6] = 1;
      local_9b8._7_4_ = uVar13;
      std::deque<frame,std::allocator<frame>>::_M_push_back_aux<frame_const&>
                ((deque<frame,std::allocator<frame>> *)(lVar8 + 0x10),(frame *)local_9b8);
    }
    else {
      local_9b8._2_2_ = 0xffff;
      local_9b8._4_2_ = 5;
      local_9b8[6] = 1;
      local_9b8._7_4_ = uVar13;
      uVar4 = local_9b8._7_4_;
      local_9b8[7] = (undefined1)uVar13;
      *puVar12 = CONCAT17(local_9b8[7],CONCAT16(1,CONCAT24(5,CONCAT22(0xffff,local_9b8._0_2_))));
      *(undefined8 *)((long)puVar12 + 0x4ae) = local_50a;
      lVar9 = (long)puVar12 - (long)((ulong)(puVar12 + 1) & 0xfffffffffffffff8);
      puVar11 = (undefined8 *)(local_9b8 + -lVar9);
      puVar12 = (undefined8 *)((ulong)(puVar12 + 1) & 0xfffffffffffffff8);
      for (uVar10 = (ulong)((int)lVar9 + 0x4b6U >> 3); uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + (ulong)bVar14 * -2 + 1;
        puVar12 = puVar12 + (ulong)bVar14 * -2 + 1;
      }
      *(long *)(lVar8 + 0x40) = *(long *)(lVar8 + 0x40) + 0x4b6;
      local_9b8._7_4_ = uVar4;
    }
    (**(code **)**(undefined8 **)(*(long *)(this + 0x68) + 0x68))();
  }
  else {
    uVar13 = *(uint *)(this + 0xc) & 0xffffff00 | 1;
    unaff_R15 = (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
                 *)(this + 0x238);
    unaff_R13 = this + 0x240;
    local_9bc = uVar13;
    pnVar6 = (net_pc *)
             std::
             _Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
             ::find(unaff_R15,&local_9bc);
    if (unaff_R13 == pnVar6) goto LAB_0010adbc;
  }
  uVar2 = *(undefined2 *)(this + 8);
  p_Var7 = (_Rb_tree_node_base *)
           std::
           _Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
           ::_M_lower_bound(unaff_R15,*(_Rb_tree_node **)(this + 0x248),
                            (_Rb_tree_node_base *)unaff_R13,&local_9bc);
  if ((unaff_R13 == (net_pc *)p_Var7) || (uVar13 < *(uint *)(p_Var7 + 0x20))) {
    lVar8 = std::__throw_out_of_range("map::at");
  }
  else {
    local_9b8._0_2_ = uVar2;
    local_9b8._2_2_ = *(undefined2 *)(p_Var7 + 0x24);
    uVar3 = *param_2;
    local_9b8[6] = (undefined1)uVar3;
    local_9b8._7_4_ = (undefined4)((ulong)uVar3 >> 8);
    uVar4 = local_9b8._7_4_;
    uStack_9ad = (undefined3)((ulong)uVar3 >> 0x28);
    uStack_9aa = param_2[1];
    local_9a2 = param_2[2];
    uStack_99a = param_2[3];
    local_992 = param_2[4];
    uStack_98a = param_2[5];
    lVar8 = *(long *)(this + 0x68);
    puVar12 = *(undefined8 **)(lVar8 + 0x40);
    if (puVar12 != (undefined8 *)(*(long *)(lVar8 + 0x50) + -0x4b6)) {
      local_9b8._4_2_ = 0x30;
      local_9b8[7] = (undefined1)((ulong)uVar3 >> 8);
      *puVar12 = CONCAT17(local_9b8[7],
                          CONCAT16(local_9b8[6],
                                   CONCAT24(0x30,CONCAT22(*(undefined2 *)(p_Var7 + 0x24),uVar2))));
      *(undefined8 *)((long)puVar12 + 0x4ae) = local_50a;
      lVar9 = (long)puVar12 - (long)((ulong)(puVar12 + 1) & 0xfffffffffffffff8);
      puVar11 = (undefined8 *)(local_9b8 + -lVar9);
      puVar12 = (undefined8 *)((ulong)(puVar12 + 1) & 0xfffffffffffffff8);
      for (uVar10 = (ulong)((int)lVar9 + 0x4b6U >> 3); uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + (ulong)bVar14 * -2 + 1;
        puVar12 = puVar12 + (ulong)bVar14 * -2 + 1;
      }
      *(long *)(lVar8 + 0x40) = *(long *)(lVar8 + 0x40) + 0x4b6;
      local_9b8._7_4_ = uVar4;
      goto LAB_0010ada5;
    }
  }
  local_9b8._4_2_ = 0x30;
  std::deque<frame,std::allocator<frame>>::_M_push_back_aux<frame_const&>
            ((deque<frame,std::allocator<frame>> *)(lVar8 + 0x10),(frame *)local_9b8);
LAB_0010ada5:
  (**(code **)**(undefined8 **)(*(long *)(this + 0x68) + 0x68))();
  return;
}

