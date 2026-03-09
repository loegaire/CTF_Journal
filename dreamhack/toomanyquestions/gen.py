#!/usr/bin/env python3
import hashlib
import os

FULL = """version: "3.8"

services:
  dump_packets:
    image: kaazing/tcpdump
    command: ["-v", "-i", "any", "-w", "/tcpdump/tcpdump.pcap", "udp port 13337"]
    volumes:
      - ./tcpdump:/tcpdump
    network_mode: "host"
{worker_code}

networks:
  default:
    ipam:
      driver: default
      config:
        - subnet: "12.34.56.0/24"
          gateway: "12.34.56.78"
"""

WORKER = """  worker{num}:
    build: .
    environment:
      - FLAG={flag_part}
      - KEY={key}
    networks:
      default:
        ipv4_address: "12.34.56.{num}"
"""

def randhex():
    return hashlib.sha256(os.urandom(10)).hexdigest()

def main():
    flag_inner = randhex()
    flag = f"DH{{{flag_inner}}}"
    key = randhex()[:16]

    worker_code = ""
    for i in range(32):
        flag_part = flag_inner[2 * i:2 * i + 2]

        worker_code += WORKER.format(num=i + 1, flag_part=flag_part, key=key)
    
    code = FULL.format(worker_code=worker_code)

    with open('docker-compose.yml', 'w') as f:
        f.write(code)

    with open('flag.txt', 'w') as f:
        f.write(flag)
    with open('key.txt', 'w') as f:
        f.write(key)
    with open('flag_hint.txt', 'w') as f:
        f.write(hashlib.md5(flag.encode()).hexdigest())

if __name__ == "__main__":
    main()
