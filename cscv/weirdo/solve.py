#!/usr/bin/env python3
"""weirdo: MAVLink pcap. Drone 10.13.37.52 GPS_RAW_INT track (fix>=1, sats>=3, alt!=100000) draws the flag text.
Usage: scratch/venv/bin/python solve.py  -> writes artifacts/flag_track.png"""
from scapy.all import PcapReader, UDP, IP
from pymavlink.dialects.v20 import ardupilotmega as m
import numpy as np, matplotlib; matplotlib.use('Agg'); import matplotlib.pyplot as plt
mv=m.MAVLink(None); mv.robust_parsing=True; pts=[]
for p in PcapReader('challenge.pcap'):
    if p[IP].src!='10.13.37.52': continue
    for x in mv.parse_buffer(bytes(p[UDP].payload)) or []:
        if x.get_type()=='GPS_RAW_INT' and x.fix_type>=1 and x.satellites_visible>=3 and x.alt!=100000:
            pts.append((x.time_usec,x.lon,x.lat))
pts.sort(); x=np.array([q[1] for q in pts],float); y=np.array([q[2] for q in pts],float)
x-=x.mean(); y-=y.mean(); a=np.arctan(np.polyfit(x,y,1)[0])
X=x*np.cos(-a)-y*np.sin(-a); Y=x*np.sin(-a)+y*np.cos(-a)
plt.figure(figsize=(40,8)); plt.plot(X,Y,'b',lw=1.5); plt.gca().set_aspect('equal'); plt.axis('off')
plt.savefig('artifacts/flag_track.png',dpi=60,bbox_inches='tight')
print('Track reads: r315en 1943 said: b1rd5_4r3nt_r34l_th3y_ch4rg3_0n_p0w3rl1n3s')
print('CSCV2026{b1rd5_4r3nt_r34l_th3y_ch4rg3_0n_p0w3rl1n3s}')
