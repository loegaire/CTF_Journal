
/* net_switch::run() */

undefined8 __thiscall net_switch::run(net_switch *this)

{
  _Rb_tree_node_base *p_Var1;
  ushort uVar2;
  ushort uVar3;
  ushort *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ushort *puVar7;
  _Rb_tree_node_base *p_Var8;
  _Rb_tree_node_base *p_Var9;
  _Rb_tree_node_base *p_Var10;
  _Rb_tree_node_base *p_Var11;
  deque<frame,std::allocator<frame>> *this_00;
  long lVar12;
  ulong uVar13;
  long extraout_RDX;
  long lVar14;
  net_switch *pnVar15;
  ushort *puVar16;
  undefined8 *puVar17;
  ushort *puVar18;
  undefined8 *puVar19;
  long lVar20;
  short sVar21;
  bool bVar22;
  byte bVar23;
  undefined1 auVar24 [16];
  ushort local_4f8;
  ushort uStack_4f6;
  undefined4 auStack_4f4 [298];
  undefined8 local_4a;
  
  bVar23 = 0;
  this_00 = (deque<frame,std::allocator<frame>> *)(this + 0x18);
  lVar20 = 0;
  while ((*(long *)(this_00 + 0x10) == *(long *)(this_00 + 0x30) || (*(long *)(this_00 + 0x50) == 0)
         )) {
    lVar20 = lVar20 + 1;
    this_00 = this_00 + 0x70;
    if (lVar20 == 5) {
      return 0;
    }
  }
  puVar4 = *(ushort **)(this + lVar20 * 0x70 + 0x28);
  lVar14 = *(long *)(this + lVar20 * 0x70 + 0x38);
  puVar7 = puVar4;
  if ((long)puVar4 - *(long *)(this + lVar20 * 0x70 + 0x30) != 0) {
    puVar7 = *(ushort **)
              (*(long *)(this + lVar20 * 0x70 + 0x40) +
              ((long)puVar4 - *(long *)(this + lVar20 * 0x70 + 0x30) >> 1) * -0xd95dd2ff9351168);
  }
  puVar16 = puVar7;
  puVar18 = &local_4f8;
  for (lVar12 = 0x96; lVar12 != 0; lVar12 = lVar12 + -1) {
    *(undefined8 *)puVar18 = *(undefined8 *)puVar16;
    puVar16 = puVar16 + 4;
    puVar18 = puVar18 + 4;
  }
  *(undefined4 *)puVar18 = *(undefined4 *)puVar16;
  puVar18[2] = puVar16[2];
  uVar2 = *puVar7;
  uVar3 = puVar7[1];
  uVar6 = *(undefined4 *)puVar7;
  uVar5 = *(undefined4 *)puVar7;
  if (puVar4 == (ushort *)(lVar14 + -0x4b6)) {
    std::deque<frame,std::allocator<frame>>::_M_pop_front_aux(this_00);
  }
  else {
    *(ushort **)(this + lVar20 * 0x70 + 0x28) = puVar4 + 0x25b;
  }
  p_Var1 = (_Rb_tree_node_base *)(this + 0x240);
  p_Var8 = *(_Rb_tree_node_base **)(this + 0x248);
  p_Var10 = p_Var1;
  if (p_Var8 == (_Rb_tree_node_base *)0x0) {
LAB_0010c3c5:
    p_Var8 = operator_new(0x28);
    *(ushort *)(p_Var8 + 0x20) = uVar2;
    p_Var8[0x22] = (_Rb_tree_node_base)0x0;
    auVar24 = std::
              _Rb_tree<unsigned_short,std::pair<unsigned_short_const,unsigned_char>,std::_Select1st<std::pair<unsigned_short_const,unsigned_char>>,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,unsigned_char>>>
              ::_M_get_insert_hint_unique_pos
                        ((_Rb_tree<unsigned_short,std::pair<unsigned_short_const,unsigned_char>,std::_Select1st<std::pair<unsigned_short_const,unsigned_char>>,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,unsigned_char>>>
                          *)(this + 0x238),p_Var10,p_Var8 + 0x20);
    p_Var11 = auVar24._8_8_;
    p_Var10 = auVar24._0_8_;
    if (p_Var11 == (_Rb_tree_node_base *)0x0) {
      operator_delete(p_Var8,0x28);
    }
    else {
      bVar22 = p_Var1 == p_Var11 || p_Var10 != (_Rb_tree_node_base *)0x0;
      if (p_Var1 != p_Var11 && p_Var10 == (_Rb_tree_node_base *)0x0) {
        bVar22 = uVar2 < *(ushort *)(p_Var11 + 0x20);
      }
      std::_Rb_tree_insert_and_rebalance(bVar22,p_Var8,p_Var11,p_Var1);
      *(long *)(this + 0x260) = *(long *)(this + 0x260) + 1;
      p_Var10 = p_Var8;
    }
  }
  else {
    do {
      if (*(ushort *)(p_Var8 + 0x20) < uVar2) {
        p_Var11 = *(_Rb_tree_node_base **)(p_Var8 + 0x18);
      }
      else {
        p_Var11 = *(_Rb_tree_node_base **)(p_Var8 + 0x10);
        p_Var10 = p_Var8;
      }
      p_Var8 = p_Var11;
    } while (p_Var11 != (_Rb_tree_node_base *)0x0);
    if ((p_Var1 == p_Var10) || (uVar2 < *(ushort *)(p_Var10 + 0x20))) goto LAB_0010c3c5;
  }
  p_Var10[0x22] = SUB81(lVar20,0);
  if ((uVar3 == 0xffff) ||
     (p_Var8 = *(_Rb_tree_node_base **)(this + 0x248), p_Var10 = p_Var8, p_Var11 = p_Var1,
     p_Var8 == (_Rb_tree_node_base *)0x0)) goto LAB_0010c5f7;
  do {
    if (*(ushort *)(p_Var10 + 0x20) < uVar3) {
      p_Var9 = *(_Rb_tree_node_base **)(p_Var10 + 0x18);
    }
    else {
      p_Var9 = *(_Rb_tree_node_base **)(p_Var10 + 0x10);
      p_Var11 = p_Var10;
    }
    p_Var10 = p_Var9;
  } while (p_Var9 != (_Rb_tree_node_base *)0x0);
  if ((p_Var1 == p_Var11) || (p_Var10 = p_Var1, uVar3 < *(ushort *)(p_Var11 + 0x20)))
  goto LAB_0010c5f7;
  do {
    if (*(ushort *)(p_Var8 + 0x20) < uVar3) {
      p_Var11 = *(_Rb_tree_node_base **)(p_Var8 + 0x18);
    }
    else {
      p_Var11 = *(_Rb_tree_node_base **)(p_Var8 + 0x10);
      p_Var10 = p_Var8;
    }
    p_Var8 = p_Var11;
  } while (p_Var11 != (_Rb_tree_node_base *)0x0);
  if ((p_Var1 == p_Var10) || (uVar3 < *(ushort *)(p_Var10 + 0x20))) {
    std::__throw_out_of_range("map::at");
    lVar14 = extraout_RDX;
LAB_0010c572:
    local_4f8 = uVar2;
    uStack_4f6 = uVar3;
    std::deque<frame,std::allocator<frame>>::_M_push_back_aux<frame_const&>
              ((deque<frame,std::allocator<frame>> *)(lVar14 + 0x10),(frame *)&local_4f8);
  }
  else {
    lVar14 = *(long *)(this + (ulong)(byte)p_Var10[0x22] * 0x70 + 0x68);
    puVar19 = *(undefined8 **)(lVar14 + 0x40);
    if (puVar19 == (undefined8 *)(*(long *)(lVar14 + 0x50) + -0x4b6)) goto LAB_0010c572;
    local_4f8 = uVar2;
    uStack_4f6 = uVar3;
    *puVar19 = CONCAT44(auStack_4f4[0],uVar5);
    *(undefined8 *)((long)puVar19 + 0x4ae) = local_4a;
    lVar12 = (long)puVar19 - (long)((ulong)(puVar19 + 1) & 0xfffffffffffffff8);
    puVar17 = (undefined8 *)((long)&local_4f8 - lVar12);
    puVar19 = (undefined8 *)((ulong)(puVar19 + 1) & 0xfffffffffffffff8);
    for (uVar13 = (ulong)((int)lVar12 + 0x4b6U >> 3); uVar13 != 0; uVar13 = uVar13 - 1) {
      *puVar19 = *puVar17;
      puVar17 = puVar17 + (ulong)bVar23 * -2 + 1;
      puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
    }
    *(long *)(lVar14 + 0x40) = *(long *)(lVar14 + 0x40) + 0x4b6;
  }
  p_Var8 = *(_Rb_tree_node_base **)(this + 0x248);
  p_Var10 = p_Var1;
  if (p_Var8 != (_Rb_tree_node_base *)0x0) {
    do {
      if (*(ushort *)(p_Var8 + 0x20) < uVar3) {
        p_Var11 = *(_Rb_tree_node_base **)(p_Var8 + 0x18);
      }
      else {
        p_Var11 = *(_Rb_tree_node_base **)(p_Var8 + 0x10);
        p_Var10 = p_Var8;
      }
      p_Var8 = p_Var11;
    } while (p_Var11 != (_Rb_tree_node_base *)0x0);
    if ((p_Var1 != p_Var10) && (*(ushort *)(p_Var10 + 0x20) <= uVar3)) {
      (**(code **)**(undefined8 **)
                    (*(long *)(this + (ulong)(byte)p_Var10[0x22] * 0x70 + 0x68) + 0x68))();
      return 1;
    }
  }
  std::__throw_out_of_range("map::at");
LAB_0010c5f7:
  pnVar15 = this + 0x68;
  sVar21 = 0;
  do {
    lVar14 = *(long *)pnVar15;
    if (((short)lVar20 != sVar21) && (lVar14 != 0)) {
      puVar19 = *(undefined8 **)(lVar14 + 0x40);
      if (puVar19 == (undefined8 *)(*(long *)(lVar14 + 0x50) + -0x4b6)) {
        local_4f8 = uVar2;
        uStack_4f6 = uVar3;
        std::deque<frame,std::allocator<frame>>::_M_push_back_aux<frame_const&>
                  ((deque<frame,std::allocator<frame>> *)(lVar14 + 0x10),(frame *)&local_4f8);
      }
      else {
        local_4f8 = uVar2;
        uStack_4f6 = uVar3;
        *puVar19 = CONCAT44(auStack_4f4[0],uVar6);
        *(undefined8 *)((long)puVar19 + 0x4ae) = local_4a;
        lVar12 = (long)puVar19 - (long)((ulong)(puVar19 + 1) & 0xfffffffffffffff8);
        puVar17 = (undefined8 *)((long)&local_4f8 - lVar12);
        puVar19 = (undefined8 *)((ulong)(puVar19 + 1) & 0xfffffffffffffff8);
        for (uVar13 = (ulong)((int)lVar12 + 0x4b6U >> 3); uVar13 != 0; uVar13 = uVar13 - 1) {
          *puVar19 = *puVar17;
          puVar17 = puVar17 + (ulong)bVar23 * -2 + 1;
          puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
        }
        *(long *)(lVar14 + 0x40) = *(long *)(lVar14 + 0x40) + 0x4b6;
      }
      (**(code **)**(undefined8 **)(*(long *)pnVar15 + 0x68))();
    }
    sVar21 = sVar21 + 1;
    pnVar15 = pnVar15 + 0x70;
  } while (sVar21 != 5);
  return 1;
}

