break main
run
# Input will be provided
b *check+0x100
c
# Examine return value location
x/x $rbp-0x210
# Continue to RET
b *check+0x1000
c
x/x $rbp-0x210
# Check what value is returned
finish
p $eax
quit
