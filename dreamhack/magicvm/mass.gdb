
set pagination off
set style enabled off
set confirm off
set disable-randomization on
set logging file trace.log
set logging overwrite on
set logging enabled on

# Define the hook to print the checksum
break *0x5555555cfba8
commands
  silent
  # We only care if AL is the checksum (target is 0x91)
  # But to be safe, we print everything and filter later
  printf "DATA:%02x:%02x\n", $al, *(unsigned char*)($rbp - 0x23B)
  set $eflags |= 0x40
  continue
end

# 1. Run Base
echo [LOG] Running Base\n
file ./main
run < in_base.txt

echo [LOG] Running Byte 0\n
run < in_0.txt
echo [LOG] Running Byte 1\n
run < in_1.txt
echo [LOG] Running Byte 2\n
run < in_2.txt
echo [LOG] Running Byte 3\n
run < in_3.txt
echo [LOG] Running Byte 4\n
run < in_4.txt
echo [LOG] Running Byte 5\n
run < in_5.txt
echo [LOG] Running Byte 6\n
run < in_6.txt
echo [LOG] Running Byte 7\n
run < in_7.txt
echo [LOG] Running Byte 8\n
run < in_8.txt
echo [LOG] Running Byte 9\n
run < in_9.txt
echo [LOG] Running Byte 10\n
run < in_10.txt
echo [LOG] Running Byte 11\n
run < in_11.txt
echo [LOG] Running Byte 12\n
run < in_12.txt
echo [LOG] Running Byte 13\n
run < in_13.txt
echo [LOG] Running Byte 14\n
run < in_14.txt
echo [LOG] Running Byte 15\n
run < in_15.txt
echo [LOG] Running Byte 16\n
run < in_16.txt
echo [LOG] Running Byte 17\n
run < in_17.txt
echo [LOG] Running Byte 18\n
run < in_18.txt
echo [LOG] Running Byte 19\n
run < in_19.txt
echo [LOG] Running Byte 20\n
run < in_20.txt
echo [LOG] Running Byte 21\n
run < in_21.txt
echo [LOG] Running Byte 22\n
run < in_22.txt
echo [LOG] Running Byte 23\n
run < in_23.txt
echo [LOG] Running Byte 24\n
run < in_24.txt
echo [LOG] Running Byte 25\n
run < in_25.txt
echo [LOG] Running Byte 26\n
run < in_26.txt
echo [LOG] Running Byte 27\n
run < in_27.txt
echo [LOG] Running Byte 28\n
run < in_28.txt
echo [LOG] Running Byte 29\n
run < in_29.txt
echo [LOG] Running Byte 30\n
run < in_30.txt
echo [LOG] Running Byte 31\n
run < in_31.txt
quit
