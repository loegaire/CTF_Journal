
int pcap_wait(pcap_t *p,int msec)

{
  undefined4 in_register_00000004;
  pollfd fds [1];
  
                    /* Unresolved local var: int fd@[???] */
  fds[0].revents = (short)((uint)in_register_00000004 >> 0x10);
  fds[0].fd = pcap_get_selectable_fd();
  if (-1 < fds[0].fd) {
    fds[0].events = 1;
    fds[0].fd = poll((pollfd *)fds,1,-(uint)(msec == 0) | msec);
  }
  return fds[0].fd;
}

