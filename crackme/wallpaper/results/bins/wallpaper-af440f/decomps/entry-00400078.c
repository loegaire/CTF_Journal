
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00400291) */
/* WARNING: Removing unreachable block (ram,0x00400302) */
/* WARNING: Removing unreachable block (ram,0x00400293) */
/* WARNING: Removing unreachable block (ram,0x00400295) */
/* WARNING: Removing unreachable block (ram,0x004001d9) */
/* WARNING: Removing unreachable block (ram,0x00400205) */
/* WARNING: Removing unreachable block (ram,0x004002f9) */
/* WARNING: Removing unreachable block (ram,0x0040025a) */
/* WARNING: Removing unreachable block (ram,0x004002c0) */
/* WARNING: Removing unreachable block (ram,0x0040025c) */
/* WARNING: Removing unreachable block (ram,0x00400258) */
/* WARNING: Removing unreachable block (ram,0x004002c9) */
/* WARNING: Removing unreachable block (ram,0x0040027e) */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void processEntry entry(void)

{
  byte bVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  
  syscall();
  syscall();
  uVar2 = 0x26;
  while( true ) {
    bVar7 = SBORROW8(uVar2,1);
    uVar4 = uVar2 - 1;
    if ((long)uVar4 < 0) break;
    bVar6 = (0xf000000000400U >> ((ulong)*(byte *)(uVar2 + 0x400296) & 0x3f) & 1) != 0;
    uVar2 = uVar4;
    if (!bVar6) goto LAB_00400226;
  }
  uVar2 = 0xb6fd071e9c8a3425;
  while( true ) {
    uVar4 = uVar4 + 1;
    bVar3 = (char)uVar4 * '\x04';
    bVar1 = bVar3 & 0x3f;
    uVar2 = uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
    *(ulong *)((long)register0x00000020 + -8) = uVar2 & 0xffffffffffffff0f;
    *(char *)((long)register0x00000020 + -8) = -*(char *)((long)register0x00000020 + -8);
    if ((char)(uVar2 & 0xffffffffffffff0f) == '\0' &&
        *(char *)((long)register0x00000020 + -8) == '\0') break;
    bVar3 = bVar3 & 0x3f;
    uVar2 = uVar2 << bVar3 | uVar2 >> 0x40 - bVar3;
    uVar4 = uVar4 & 0x3fffffffffffffff;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -8);
  }
  lVar5 = uVar4 * 4;
  bVar7 = SCARRY8(lVar5,0xd0);
  uVar4 = lVar5 + 0xd0;
  bVar6 = false;
  if ((0x3bb97ffd7ffd6eecU >> (uVar4 & 0x3f) & 1) != 0) {
    *(undefined8 *)((long)register0x00000020 + -8) = 0x400165;
                    /* WARNING: Could not recover jumptable at 0x00400169. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(*(long *)((long)register0x00000020 + -8) + 0x1a6))
              (0,(code *)(*(long *)((long)register0x00000020 + -8) + 0x1a6),0x1a6,lVar5);
    return;
  }
LAB_00400226:
  syscall();
  syscall();
  out(0x77,0xf);
  if (uVar4 != 0) {
    if (bVar6) {
      *(undefined8 *)((long)register0x00000020 + -8) = 0x4f4d4320;
      if ((POPCOUNT(uVar4 & 0xff) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      out(0x676e6f72,0xf);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (!bVar7) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  DAT_0000003c = DAT_0000003c + -0x4c;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

