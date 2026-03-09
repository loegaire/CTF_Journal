import ctypes

# Load library
lib = ctypes.CDLL("./libexploit.so")
lib.call_check.argtypes = [ctypes.POINTER(ctypes.c_uint8)]
lib.call_check.restype = ctypes.c_int

# Test with the "solved" input
solved_hex = "91474cb45c12099901877f04981ac73c2c07668b1e47614df375b164143b78ef"
solved_bytes = bytearray.fromhex(solved_hex)

print(f"[*] Testing input: {solved_hex}")
print(f"[*] Bytes: {list(solved_bytes)}")

test_input = (ctypes.c_uint8 * 32).from_buffer_copy(bytes(solved_bytes))
result = lib.call_check(test_input)

print(f"[*] check() returned: {result}")
print(f"[*] Expected: non-zero for success")

if result == 0:
    print("\n[-] check() returned 0 - input is rejected")
    print("[*] Let's try some variations...")
    
    # Try reversing the bytes
    reversed_bytes = bytearray(reversed(solved_bytes))
    print(f"\n[*] Testing reversed bytes: {reversed_bytes.hex()}")
    test_input2 = (ctypes.c_uint8 * 32).from_buffer_copy(bytes(reversed_bytes))
    result2 = lib.call_check(test_input2)
    print(f"[*] check() returned: {result2}")
    
    # Try All zeros
    zeros = bytearray([0] * 32)
    print(f"\n[*] Testing all zeros")
    test_input3 = (ctypes.c_uint8 * 32).from_buffer_copy(bytes(zeros))
    result3 = lib.call_check(test_input3)
    print(f"[*] check() returned: {result3}")
    
    # Try all 0xFF
    ones = bytearray([0xFF] * 32)
    print(f"\n[*] Testing all 0xFF")
    test_input4 = (ctypes.c_uint8 * 32).from_buffer_copy(bytes(ones))
    result4 = lib.call_check(test_input4)
    print(f"[*] check() returned: {result4}")
else:
    print(f"\n[+] SUCCESS! check() returned {result}")
    print(f"[+] Flag: DH{{{solved_hex}}}")
