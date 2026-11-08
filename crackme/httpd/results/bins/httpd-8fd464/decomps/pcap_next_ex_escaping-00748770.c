
int pcap_next_ex_escaping(pcap_t *p,uintptr_t pkt_hdr,uintptr_t pkt_data)

{
  int iVar1;
  
                    /* Unresolved local var: int ex@[???] */
  iVar1 = pcap_next_ex();
  if (0 < iVar1) {
    iVar1 = 1;
  }
  return iVar1;
}

