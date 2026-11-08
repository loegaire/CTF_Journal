
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.mustCIDR(string s, net.IPNet * ~r1) */

net_IPNet * net_mustCIDR(string s)

{
  code *pcVar1;
  uint8 *puVar2;
  long lVar3;
  undefined8 extraout_RDX;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  string s_00;
  interface___ e;
  string val;
  interface___ e_00;
  string s_spill;
  
  puVar5 = (undefined1 *)s.len;
  do {
                    /* Unresolved local var: net.IPNet * ipNet@[???]
                       Unresolved local var: error err@[???] */
    puVar6 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar6 = (undefined1 *)((long)register0x00000020 + -0x48);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      *(undefined8 *)((long)register0x00000020 + -0x48) =
           *(undefined8 *)((long)register0x00000020 + 8);
      *(uint8 **)((long)register0x00000020 + -0x40) = *(uint8 **)((long)register0x00000020 + 0x10);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x57f219;
      s_00.len = (int)puVar5;
      s_00.str = *(uint8 **)((long)register0x00000020 + 0x10);
      net_ParseCIDR(s_00);
      lVar3 = *(long *)((long)register0x00000020 + -0x18);
      uVar4 = *(undefined8 *)((long)register0x00000020 + -0x10);
      puVar5 = *(undefined1 **)((long)register0x00000020 + -0x30);
      if (lVar3 == 0) {
        if (puVar5 == &DAT_00000010) {
          *(net_IPNet **)((long)register0x00000020 + 0x18) =
               *(net_IPNet **)((long)register0x00000020 + -0x20);
          return *(net_IPNet **)((long)register0x00000020 + -0x20);
        }
        *(undefined **)((long)register0x00000020 + -0x48) = &DAT_00225520;
        *(undefined1 **)((long)register0x00000020 + -0x40) = net__stmp_16;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x57f265;
        e.data = puVar5;
        e._type = (runtime__type *)net__stmp_16;
        runtime_gopanic(e);
        uVar4 = extraout_RDX;
      }
      pcVar1 = *(code **)(lVar3 + 0x18);
      *(undefined8 *)((long)register0x00000020 + -0x48) = uVar4;
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x57f26f;
      (*pcVar1)();
      puVar2 = *(uint8 **)((long)register0x00000020 + -0x40);
      *(uint8 **)((long)register0x00000020 + -0x48) = puVar2;
      *(undefined8 *)((long)register0x00000020 + -0x40) =
           *(undefined8 *)((long)register0x00000020 + -0x38);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x57f287;
      val.len = (int)puVar5;
      val.str = puVar2;
      runtime_convTstring(val);
      *(undefined **)((long)register0x00000020 + -0x48) = &DAT_00225520;
      *(runtime__type **)((long)register0x00000020 + -0x40) =
           *(runtime__type **)((long)register0x00000020 + -0x38);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x57f2a5;
      e_00.data = puVar5;
      e_00._type = *(runtime__type **)((long)register0x00000020 + -0x38);
      runtime_gopanic(e_00);
    }
    *(undefined8 *)(puVar6 + -8) = 0x57f2ab;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar6;
  } while( true );
}

