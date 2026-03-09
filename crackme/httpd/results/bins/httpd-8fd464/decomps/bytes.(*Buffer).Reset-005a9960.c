
/* WARNING: Unknown calling convention */

void bytes___Buffer__Reset(bytes_Buffer *b)

{
  bytes_Buffer *b_spill;
  
  (b_spill->buf).len = 0;
  b_spill->off = 0;
  b_spill->lastRead = 0;
  return;
}

