
set pagination off
set style enabled off
set height 0
set width 0
set confirm off

# Load binary
file ./main

# Start to locate PIE base
start

# Breakpoint at the CMP instruction offset (0x7BBA8)
# We calculate it relative to the current RIP at entry to be safe
break *($rip - 0x129B + 0x7BBA8)

commands
  silent
  # Print the comparison values.
  # We focus on the final check (Result vs Target)
  printf "DATA:%02x:%02x\n", $al, *(unsigned char*)($rbp - 0x23B)
  
  # Force Success to ensure execution finishes
  set $eflags |= 0x40
  continue
end

# Run with the input file
run < input.txt
quit
