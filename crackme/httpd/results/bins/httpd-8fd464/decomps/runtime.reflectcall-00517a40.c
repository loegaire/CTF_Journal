
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_reflectcall(void)

{
  long *plVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long in_FS_OFFSET;
  byte bVar4;
  undefined8 *in_stack_00000010;
  undefined1 *in_stack_00000018;
  uint in_stack_00000020;
  uint in_stack_00000028;
  undefined1 auStack_80008 [128];
  undefined1 auStack_7ff88 [262016];
  undefined1 auStack_40008 [128];
  undefined1 auStack_3ff88 [130944];
  undefined1 auStack_20008 [128];
  undefined1 auStack_1ff88 [65400];
  undefined8 uStack_10010;
  undefined1 auStack_10008 [128];
  undefined1 auStack_ff88 [32632];
  undefined8 uStack_8010;
  undefined1 auStack_8008 [128];
  undefined1 auStack_7f88 [16248];
  undefined8 uStack_4010;
  undefined1 auStack_4008 [128];
  undefined1 auStack_3f88 [8056];
  undefined8 uStack_2010;
  undefined1 auStack_2008 [128];
  undefined1 auStack_1f88 [3960];
  undefined8 uStack_1010;
  undefined1 auStack_1008 [128];
  undefined1 auStack_f88 [1912];
  undefined8 uStack_810;
  undefined1 auStack_808 [128];
  undefined1 auStack_788 [888];
  undefined8 uStack_410;
  undefined1 auStack_408 [128];
  undefined1 auStack_388 [376];
  undefined8 uStack_210;
  undefined1 auStack_208 [128];
  undefined1 auStack_188 [120];
  undefined8 uStack_110;
  undefined1 auStack_108 [120];
  undefined8 uStack_90;
  undefined1 auStack_88 [56];
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  undefined8 uStack_20;
  undefined1 auStack_18 [16];
  
  bVar4 = 0;
  if (in_stack_00000028 < 0x11) {
    while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
      runtime_morestack_noctxt();
    }
    plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
    if ((plVar1 != (long *)0x0) && ((undefined1 *)*plVar1 == &stack0x00000008)) {
      *plVar1 = (long)auStack_18;
    }
    puVar3 = auStack_18;
    for (uVar2 = (ulong)in_stack_00000020; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *in_stack_00000018;
      in_stack_00000018 = in_stack_00000018 + (ulong)bVar4 * -2 + 1;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
    }
    uStack_20 = 0x517c7e;
    runtime_unspillArgs();
    uStack_20 = 0x517c89;
    (*(code *)*in_stack_00000010)();
    uStack_20 = 0x517c93;
    runtime_spillArgs();
    uStack_20 = 0x517cb6;
    callRet();
    return;
  }
  if (in_stack_00000028 < 0x21) {
    while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
      runtime_morestack_noctxt();
    }
    plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
    if ((plVar1 != (long *)0x0) && ((undefined1 *)*plVar1 == &stack0x00000008)) {
      *plVar1 = (long)auStack_28;
    }
    puVar3 = auStack_28;
    for (uVar2 = (ulong)in_stack_00000020; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *in_stack_00000018;
      in_stack_00000018 = in_stack_00000018 + (ulong)bVar4 * -2 + 1;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
    }
    uStack_30 = 0x517d1e;
    runtime_unspillArgs();
    uStack_30 = 0x517d29;
    (*(code *)*in_stack_00000010)();
    uStack_30 = 0x517d33;
    runtime_spillArgs();
    uStack_30 = 0x517d56;
    callRet();
    return;
  }
  if (in_stack_00000028 < 0x41) {
    while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
      runtime_morestack_noctxt();
    }
    plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
    if ((plVar1 != (long *)0x0) && ((undefined1 *)*plVar1 == &stack0x00000008)) {
      *plVar1 = (long)auStack_48;
    }
    puVar3 = auStack_48;
    for (uVar2 = (ulong)in_stack_00000020; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *in_stack_00000018;
      in_stack_00000018 = in_stack_00000018 + (ulong)bVar4 * -2 + 1;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
    }
    uStack_50 = 0x517dbe;
    runtime_unspillArgs();
    uStack_50 = 0x517dc9;
    (*(code *)*in_stack_00000010)();
    uStack_50 = 0x517dd3;
    runtime_spillArgs();
    uStack_50 = 0x517df6;
    callRet();
    return;
  }
  if (in_stack_00000028 < 0x81) {
    while (&stack0xfffffffffffffff8 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
      runtime_morestack_noctxt();
    }
    plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
    if ((plVar1 != (long *)0x0) && ((undefined1 *)*plVar1 == &stack0x00000008)) {
      *plVar1 = (long)auStack_88;
    }
    puVar3 = auStack_88;
    for (uVar2 = (ulong)in_stack_00000020; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *in_stack_00000018;
      in_stack_00000018 = in_stack_00000018 + (ulong)bVar4 * -2 + 1;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
    }
    uStack_90 = 0x517e7d;
    runtime_unspillArgs();
    uStack_90 = 0x517e8b;
    (*(code *)*in_stack_00000010)();
    uStack_90 = 0x517e98;
    runtime_spillArgs();
    uStack_90 = 0x517ec7;
    callRet();
    return;
  }
  if (in_stack_00000028 < 0x101) {
    while (auStack_88 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
      runtime_morestack_noctxt();
    }
    plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
    if ((plVar1 != (long *)0x0) && ((undefined1 *)*plVar1 == &stack0x00000008)) {
      *plVar1 = (long)auStack_108;
    }
    puVar3 = auStack_108;
    for (uVar2 = (ulong)in_stack_00000020; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *in_stack_00000018;
      in_stack_00000018 = in_stack_00000018 + (ulong)bVar4 * -2 + 1;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
    }
    uStack_110 = 0x517f60;
    runtime_unspillArgs();
    uStack_110 = 0x517f6e;
    (*(code *)*in_stack_00000010)();
    uStack_110 = 0x517f7b;
    runtime_spillArgs();
    uStack_110 = 0x517faa;
    callRet();
    return;
  }
  if (in_stack_00000028 < 0x201) {
    while (auStack_188 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
      runtime_morestack_noctxt();
    }
    plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
    if ((plVar1 != (long *)0x0) && ((undefined1 *)*plVar1 == &stack0x00000008)) {
      *plVar1 = (long)auStack_208;
    }
    puVar3 = auStack_208;
    for (uVar2 = (ulong)in_stack_00000020; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *in_stack_00000018;
      in_stack_00000018 = in_stack_00000018 + (ulong)bVar4 * -2 + 1;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
    }
    uStack_210 = 0x518040;
    runtime_unspillArgs();
    uStack_210 = 0x51804e;
    (*(code *)*in_stack_00000010)();
    uStack_210 = 0x51805b;
    runtime_spillArgs();
    uStack_210 = 0x51808a;
    callRet();
    return;
  }
  if (in_stack_00000028 < 0x401) {
    while (auStack_388 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
      runtime_morestack_noctxt();
    }
    plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
    if ((plVar1 != (long *)0x0) && ((undefined1 *)*plVar1 == &stack0x00000008)) {
      *plVar1 = (long)auStack_408;
    }
    puVar3 = auStack_408;
    for (uVar2 = (ulong)in_stack_00000020; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *in_stack_00000018;
      in_stack_00000018 = in_stack_00000018 + (ulong)bVar4 * -2 + 1;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
    }
    uStack_410 = 0x518120;
    runtime_unspillArgs();
    uStack_410 = 0x51812e;
    (*(code *)*in_stack_00000010)();
    uStack_410 = 0x51813b;
    runtime_spillArgs();
    uStack_410 = 0x51816a;
    callRet();
    return;
  }
  if (in_stack_00000028 < 0x801) {
    while (auStack_788 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
      runtime_morestack_noctxt();
    }
    plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
    if ((plVar1 != (long *)0x0) && ((undefined1 *)*plVar1 == &stack0x00000008)) {
      *plVar1 = (long)auStack_808;
    }
    puVar3 = auStack_808;
    for (uVar2 = (ulong)in_stack_00000020; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *in_stack_00000018;
      in_stack_00000018 = in_stack_00000018 + (ulong)bVar4 * -2 + 1;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
    }
    uStack_810 = 0x518200;
    runtime_unspillArgs();
    uStack_810 = 0x51820e;
    (*(code *)*in_stack_00000010)();
    uStack_810 = 0x51821b;
    runtime_spillArgs();
    uStack_810 = 0x51824a;
    callRet();
    return;
  }
  if (in_stack_00000028 < 0x1001) {
    while( true ) {
      if (((undefined1 *)0xf87 < &stack0x00000000) &&
         (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < auStack_f88)) break;
      runtime_morestack_noctxt();
    }
    plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
    if ((plVar1 != (long *)0x0) && ((undefined1 *)*plVar1 == &stack0x00000008)) {
      *plVar1 = (long)auStack_1008;
    }
    puVar3 = auStack_1008;
    for (uVar2 = (ulong)in_stack_00000020; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *in_stack_00000018;
      in_stack_00000018 = in_stack_00000018 + (ulong)bVar4 * -2 + 1;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
    }
    uStack_1010 = 0x5182e8;
    runtime_unspillArgs();
    uStack_1010 = 0x5182f6;
    (*(code *)*in_stack_00000010)();
    uStack_1010 = 0x518303;
    runtime_spillArgs();
    uStack_1010 = 0x518332;
    callRet();
    return;
  }
  if (in_stack_00000028 < 0x2001) {
    while( true ) {
      if (((undefined1 *)0x1f87 < &stack0x00000000) &&
         (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < auStack_1f88)) break;
      runtime_morestack_noctxt();
    }
    plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
    if ((plVar1 != (long *)0x0) && ((undefined1 *)*plVar1 == &stack0x00000008)) {
      *plVar1 = (long)auStack_2008;
    }
    puVar3 = auStack_2008;
    for (uVar2 = (ulong)in_stack_00000020; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *in_stack_00000018;
      in_stack_00000018 = in_stack_00000018 + (ulong)bVar4 * -2 + 1;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
    }
    uStack_2010 = 0x5183e8;
    runtime_unspillArgs();
    uStack_2010 = 0x5183f6;
    (*(code *)*in_stack_00000010)();
    uStack_2010 = 0x518403;
    runtime_spillArgs();
    uStack_2010 = 0x518432;
    callRet();
    return;
  }
  if (in_stack_00000028 < 0x4001) {
    while( true ) {
      if (((undefined1 *)0x3f87 < &stack0x00000000) &&
         (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < auStack_3f88)) break;
      runtime_morestack_noctxt();
    }
    plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
    if ((plVar1 != (long *)0x0) && ((undefined1 *)*plVar1 == &stack0x00000008)) {
      *plVar1 = (long)auStack_4008;
    }
    puVar3 = auStack_4008;
    for (uVar2 = (ulong)in_stack_00000020; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *in_stack_00000018;
      in_stack_00000018 = in_stack_00000018 + (ulong)bVar4 * -2 + 1;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
    }
    uStack_4010 = 0x5184e8;
    runtime_unspillArgs();
    uStack_4010 = 0x5184f6;
    (*(code *)*in_stack_00000010)();
    uStack_4010 = 0x518503;
    runtime_spillArgs();
    uStack_4010 = 0x518532;
    callRet();
    return;
  }
  if (in_stack_00000028 < 0x8001) {
    while( true ) {
      if (((undefined1 *)0x7f87 < &stack0x00000000) &&
         (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < auStack_7f88)) break;
      runtime_morestack_noctxt();
    }
    plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
    if ((plVar1 != (long *)0x0) && ((undefined1 *)*plVar1 == &stack0x00000008)) {
      *plVar1 = (long)auStack_8008;
    }
    puVar3 = auStack_8008;
    for (uVar2 = (ulong)in_stack_00000020; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *in_stack_00000018;
      in_stack_00000018 = in_stack_00000018 + (ulong)bVar4 * -2 + 1;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
    }
    uStack_8010 = 0x5185e8;
    runtime_unspillArgs();
    uStack_8010 = 0x5185f6;
    (*(code *)*in_stack_00000010)();
    uStack_8010 = 0x518603;
    runtime_spillArgs();
    uStack_8010 = 0x518632;
    callRet();
    return;
  }
  if (in_stack_00000028 < 0x10001) {
    while( true ) {
      if (((undefined1 *)0xff87 < &stack0x00000000) &&
         (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < auStack_ff88)) break;
      runtime_morestack_noctxt();
    }
    plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
    if ((plVar1 != (long *)0x0) && ((undefined1 *)*plVar1 == &stack0x00000008)) {
      *plVar1 = (long)auStack_10008;
    }
    puVar3 = auStack_10008;
    for (uVar2 = (ulong)in_stack_00000020; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *in_stack_00000018;
      in_stack_00000018 = in_stack_00000018 + (ulong)bVar4 * -2 + 1;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
    }
    uStack_10010 = 0x5186e8;
    runtime_unspillArgs();
    uStack_10010 = 0x5186f6;
    (*(code *)*in_stack_00000010)();
    uStack_10010 = 0x518703;
    runtime_spillArgs();
    uStack_10010 = 0x518732;
    callRet();
    return;
  }
  if (in_stack_00000028 < 0x20001) {
    while( true ) {
      if (((undefined1 *)0x1ff87 < &stack0x00000000) &&
         (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < auStack_1ff88)) break;
      runtime_morestack_noctxt();
    }
    plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
    if ((plVar1 != (long *)0x0) && ((undefined1 *)*plVar1 == &stack0x00000008)) {
      *plVar1 = (long)auStack_20008;
    }
    puVar3 = auStack_20008;
    for (uVar2 = (ulong)in_stack_00000020; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *in_stack_00000018;
      in_stack_00000018 = in_stack_00000018 + (ulong)bVar4 * -2 + 1;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
    }
    runtime_unspillArgs();
    (*(code *)*in_stack_00000010)();
    runtime_spillArgs();
    callRet();
    return;
  }
  if (in_stack_00000028 < 0x40001) {
    while( true ) {
      if (((undefined1 *)0x3ff87 < &stack0x00000000) &&
         (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < auStack_3ff88)) break;
      runtime_morestack_noctxt();
    }
    plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
    if ((plVar1 != (long *)0x0) && ((undefined1 *)*plVar1 == &stack0x00000008)) {
      *plVar1 = (long)auStack_40008;
    }
    puVar3 = auStack_40008;
    for (uVar2 = (ulong)in_stack_00000020; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *in_stack_00000018;
      in_stack_00000018 = in_stack_00000018 + (ulong)bVar4 * -2 + 1;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
    }
    runtime_unspillArgs();
    (*(code *)*in_stack_00000010)();
    runtime_spillArgs();
    callRet();
    return;
  }
  if (in_stack_00000028 < 0x80001) {
    while( true ) {
      if (((undefined1 *)0x7ff87 < &stack0x00000000) &&
         (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < auStack_7ff88)) break;
      runtime_morestack_noctxt();
    }
    plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
    if ((plVar1 != (long *)0x0) && ((undefined1 *)*plVar1 == &stack0x00000008)) {
      *plVar1 = (long)auStack_80008;
    }
    puVar3 = auStack_80008;
    for (uVar2 = (ulong)in_stack_00000020; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *in_stack_00000018;
      in_stack_00000018 = in_stack_00000018 + (ulong)bVar4 * -2 + 1;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
    }
    runtime_unspillArgs();
    (*(code *)*in_stack_00000010)();
    runtime_spillArgs();
    callRet();
    return;
  }
  if (in_stack_00000028 < 0x100001) {
    while( true ) {
      if (((undefined1 *)0xfff87 < &stack0x00000000) &&
         (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < &stack0xfffffffffff00078)) break;
      runtime_morestack_noctxt();
    }
    plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
    if ((plVar1 != (long *)0x0) && ((undefined1 *)*plVar1 == &stack0x00000008)) {
      *plVar1 = (long)&stack0xffffffffffeffff8;
    }
    puVar3 = &stack0xffffffffffeffff8;
    for (uVar2 = (ulong)in_stack_00000020; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *in_stack_00000018;
      in_stack_00000018 = in_stack_00000018 + (ulong)bVar4 * -2 + 1;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
    }
    runtime_unspillArgs();
    (*(code *)*in_stack_00000010)();
    runtime_spillArgs();
    callRet();
    return;
  }
  if (in_stack_00000028 < 0x200001) {
    while( true ) {
      if (((undefined1 *)0x1fff87 < &stack0x00000000) &&
         (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < &stack0xffffffffffe00078)) break;
      runtime_morestack_noctxt();
    }
    plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
    if ((plVar1 != (long *)0x0) && ((undefined1 *)*plVar1 == &stack0x00000008)) {
      *plVar1 = (long)&stack0xffffffffffdffff8;
    }
    puVar3 = &stack0xffffffffffdffff8;
    for (uVar2 = (ulong)in_stack_00000020; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *in_stack_00000018;
      in_stack_00000018 = in_stack_00000018 + (ulong)bVar4 * -2 + 1;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
    }
    runtime_unspillArgs();
    (*(code *)*in_stack_00000010)();
    runtime_spillArgs();
    callRet();
    return;
  }
  if (in_stack_00000028 < 0x400001) {
    while( true ) {
      if ((&UNK_003fff87 < &stack0x00000000) &&
         (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < &stack0xffffffffffc00078)) break;
      runtime_morestack_noctxt();
    }
    plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
    if ((plVar1 != (long *)0x0) && ((undefined1 *)*plVar1 == &stack0x00000008)) {
      *plVar1 = (long)&stack0xffffffffffbffff8;
    }
    puVar3 = &stack0xffffffffffbffff8;
    for (uVar2 = (ulong)in_stack_00000020; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *in_stack_00000018;
      in_stack_00000018 = in_stack_00000018 + (ulong)bVar4 * -2 + 1;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
    }
    runtime_unspillArgs();
    (*(code *)*in_stack_00000010)();
    runtime_spillArgs();
    callRet();
    return;
  }
  if (in_stack_00000028 < 0x800001) {
    while( true ) {
      if (((undefined1 *)
           ((long)&github_com_google_gopacket_layers_EthernetTypeMetadata[0x2a7].DecodeWith.data + 7
           ) < &stack0x00000000) &&
         (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < &stack0xffffffffff800078)) break;
      runtime_morestack_noctxt();
    }
    plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
    if ((plVar1 != (long *)0x0) && ((undefined1 *)*plVar1 == &stack0x00000008)) {
      *plVar1 = (long)&stack0xffffffffff7ffff8;
    }
    puVar3 = &stack0xffffffffff7ffff8;
    for (uVar2 = (ulong)in_stack_00000020; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *in_stack_00000018;
      in_stack_00000018 = in_stack_00000018 + (ulong)bVar4 * -2 + 1;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
    }
    runtime_unspillArgs();
    (*(code *)*in_stack_00000010)();
    runtime_spillArgs();
    callRet();
    return;
  }
  if (in_stack_00000028 < 0x1000001) {
    while( true ) {
      if (((undefined1 *)0xffff87 < &stack0x00000000) &&
         (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < &stack0xffffffffff000078)) break;
      runtime_morestack_noctxt();
    }
    plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
    if ((plVar1 != (long *)0x0) && ((undefined1 *)*plVar1 == &stack0x00000008)) {
      *plVar1 = (long)&stack0xfffffffffefffff8;
    }
    puVar3 = &stack0xfffffffffefffff8;
    for (uVar2 = (ulong)in_stack_00000020; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *in_stack_00000018;
      in_stack_00000018 = in_stack_00000018 + (ulong)bVar4 * -2 + 1;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
    }
    runtime_unspillArgs();
    (*(code *)*in_stack_00000010)();
    runtime_spillArgs();
    callRet();
    return;
  }
  if (in_stack_00000028 < 0x2000001) {
    while( true ) {
      if (((undefined1 *)0x1ffff87 < &stack0x00000000) &&
         (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < &stack0xfffffffffe000078)) break;
      runtime_morestack_noctxt();
    }
    plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
    if ((plVar1 != (long *)0x0) && ((undefined1 *)*plVar1 == &stack0x00000008)) {
      *plVar1 = (long)&stack0xfffffffffdfffff8;
    }
    puVar3 = &stack0xfffffffffdfffff8;
    for (uVar2 = (ulong)in_stack_00000020; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *in_stack_00000018;
      in_stack_00000018 = in_stack_00000018 + (ulong)bVar4 * -2 + 1;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
    }
    runtime_unspillArgs();
    (*(code *)*in_stack_00000010)();
    runtime_spillArgs();
    callRet();
    return;
  }
  if (in_stack_00000028 < 0x4000001) {
    while( true ) {
      if (((undefined1 *)0x3ffff87 < &stack0x00000000) &&
         (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < &stack0xfffffffffc000078)) break;
      runtime_morestack_noctxt();
    }
    plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
    if ((plVar1 != (long *)0x0) && ((undefined1 *)*plVar1 == &stack0x00000008)) {
      *plVar1 = (long)&stack0xfffffffffbfffff8;
    }
    puVar3 = &stack0xfffffffffbfffff8;
    for (uVar2 = (ulong)in_stack_00000020; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *in_stack_00000018;
      in_stack_00000018 = in_stack_00000018 + (ulong)bVar4 * -2 + 1;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
    }
    runtime_unspillArgs();
    (*(code *)*in_stack_00000010)();
    runtime_spillArgs();
    callRet();
    return;
  }
  if (in_stack_00000028 < 0x8000001) {
    while( true ) {
      if (((undefined1 *)0x7ffff87 < &stack0x00000000) &&
         (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < &stack0xfffffffff8000078)) break;
      runtime_morestack_noctxt();
    }
    plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
    if ((plVar1 != (long *)0x0) && ((undefined1 *)*plVar1 == &stack0x00000008)) {
      *plVar1 = (long)&stack0xfffffffff7fffff8;
    }
    puVar3 = &stack0xfffffffff7fffff8;
    for (uVar2 = (ulong)in_stack_00000020; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *in_stack_00000018;
      in_stack_00000018 = in_stack_00000018 + (ulong)bVar4 * -2 + 1;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
    }
    runtime_unspillArgs();
    (*(code *)*in_stack_00000010)();
    runtime_spillArgs();
    callRet();
    return;
  }
  if (in_stack_00000028 < 0x10000001) {
    while( true ) {
      if (((undefined1 *)0xfffff87 < &stack0x00000000) &&
         (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < &stack0xfffffffff0000078)) break;
      runtime_morestack_noctxt();
    }
    plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
    if ((plVar1 != (long *)0x0) && ((undefined1 *)*plVar1 == &stack0x00000008)) {
      *plVar1 = (long)&stack0xffffffffeffffff8;
    }
    puVar3 = &stack0xffffffffeffffff8;
    for (uVar2 = (ulong)in_stack_00000020; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *in_stack_00000018;
      in_stack_00000018 = in_stack_00000018 + (ulong)bVar4 * -2 + 1;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
    }
    runtime_unspillArgs();
    (*(code *)*in_stack_00000010)();
    runtime_spillArgs();
    callRet();
    return;
  }
  if (in_stack_00000028 < 0x20000001) {
    while( true ) {
      if (((undefined1 *)0x1fffff87 < &stack0x00000000) &&
         (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < &stack0xffffffffe0000078)) break;
      runtime_morestack_noctxt();
    }
    plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
    if ((plVar1 != (long *)0x0) && ((undefined1 *)*plVar1 == &stack0x00000008)) {
      *plVar1 = (long)&stack0xffffffffdffffff8;
    }
    puVar3 = &stack0xffffffffdffffff8;
    for (uVar2 = (ulong)in_stack_00000020; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *in_stack_00000018;
      in_stack_00000018 = in_stack_00000018 + (ulong)bVar4 * -2 + 1;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
    }
    runtime_unspillArgs();
    (*(code *)*in_stack_00000010)();
    runtime_spillArgs();
    callRet();
    return;
  }
  if (in_stack_00000028 < 0x40000001) {
    while( true ) {
      if (((undefined1 *)0x3fffff87 < &stack0x00000000) &&
         (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < &stack0xffffffffc0000078)) break;
      runtime_morestack_noctxt();
    }
    plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
    if ((plVar1 != (long *)0x0) && ((undefined1 *)*plVar1 == &stack0x00000008)) {
      *plVar1 = (long)&stack0xffffffffbffffff8;
    }
    puVar3 = &stack0xffffffffbffffff8;
    for (uVar2 = (ulong)in_stack_00000020; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *in_stack_00000018;
      in_stack_00000018 = in_stack_00000018 + (ulong)bVar4 * -2 + 1;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
    }
    runtime_unspillArgs();
    (*(code *)*in_stack_00000010)();
    runtime_spillArgs();
    callRet();
    return;
  }
  runtime_badreflectcall();
  return;
}

