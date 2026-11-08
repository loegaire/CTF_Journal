from unicorn import *
from unicorn.x86_const import *
from elftools.elf.elffile import ELFFile
import struct
from pathlib import Path
u=Uc(UC_ARCH_X86,UC_MODE_64)
u.mem_map(0,0x1500000)
with open(Path(__file__).resolve().parents[1] / 'artifacts/neon_outrun','rb') as f:
 e=ELFFile(f)
 for s in e.iter_segments():
  if s['p_type']=='PT_LOAD':u.mem_write(s['p_vaddr'],s.data())
 for r in e.get_section_by_name('.rela.dyn').iter_relocations():
  if r['r_info_type']==8: u.mem_write(r['r_offset'],struct.pack('<Q',r['r_addend']))
u.mem_map(0x70000000,0x100000)
def run(start,end,**regs):
 u.reg_write(UC_X86_REG_RSP,0x70080000)
 u.mem_write(0x70080000,struct.pack('<Q',0x70000000))
 for k,v in regs.items():u.reg_write(globals()['UC_X86_REG_'+k.upper()],v)
 u.emu_start(start,end,count=1000000)
 assert u.reg_read(UC_X86_REG_RIP) == end, 'Emulation did not reach expected endpoint'
 return {k:u.reg_read(globals()['UC_X86_REG_'+k.upper()]) for k in ['rax','rdx','rdi','rsi','r9','r13','r14','rip']}
