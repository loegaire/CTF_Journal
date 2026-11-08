set disable-randomization on
set pagination off
set confirm off
set debuginfod enabled off
starti

dump memory /tmp/bytecode.bin 0x5555555e0020 0x5555555e1020
quit
