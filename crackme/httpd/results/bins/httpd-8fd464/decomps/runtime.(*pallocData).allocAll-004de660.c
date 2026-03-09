
/* WARNING: Unknown calling convention */

void runtime___pallocData__allocAll(runtime_pallocData *m)

{
  long in_FS_OFFSET;
  runtime_pallocData *m_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime___pageBits__setAll(m_spill->pallocBits);
  runtime___pageBits__clearAll(&m_spill->scavenged);
  return;
}

