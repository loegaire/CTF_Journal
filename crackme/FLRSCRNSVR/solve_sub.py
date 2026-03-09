
def solve():
    # Alphabet Construction (from code 0x140001300)
    source = ""
    for i in range(ord('a'), ord('z')+1): source += chr(i)
    for i in range(ord('A'), ord('Z')+1): source += chr(i)
    for i in range(ord('0'), ord('9')+1): source += chr(i)
    source += "}_{=-"
    
    # Target (from .rdata 0x1400065f0)
    target = "-={_}9876543210ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba"

    # Suspicious String (Resource 130) -> THIS IS THE WALLPAPER KEY?
    # Wait, FUN_140001300 uses Wallpaper path.
    # FUN_140001ae0 Compares Encrypt(Text) with Target_Of_Goal.
    # Where does Target_Of_Goal come from? FUN_140001890.
    # FUN_140001890 returns either Reg("Quak") or HARDCODED STRING.
    
    # The Hardcoded string in FUN_140001890:
    # L"<Qj\t\x02\a%\x030\b\x04)h$\x01$\x18kw\x0fp6\x02\x0e\v"
    
    # Let's verify the bytes of this string from the binary to be precise.
    # < Q j \t \x02 \a % \x03 0 \b \x04 ) h $ \x01 $ \x18 k w \x0f p 6 \x02 \x0e \v
    # 3c 51 6a 09 02 07 25 03 30 08 04 29 68 24 01 24 18 6b 77 0f 70 36 02 0e 0b
    
    # Wait, the string in decompilation looks weird. It might be binary data.
    
    # HYPOTHESIS: The goal is for Encrypt(Flag, Key=Wallpaper) == HardcodedString.
    # AND The Wallpaper Key IS THE SUSPICIOUS STRING from Resource 130.
    # "#F@1nd0si/si1tk1si0rg2ri2qi3pi9si/QK"
    
    suspicious_key = "#F@1nd0si/si1tk1si0rg2ri2qi3pi9si/QK"
    
    def get_keyed_alphabet(key):
        seen = set()
        new_alpha = ""
        for c in key:
            if c not in seen and c in source:
                seen.add(c)
                new_alpha += c
        for c in source:
            if c not in seen:
                new_alpha += c
        return new_alpha

    # Encrypt: Input (Source) -> Target (Keyed)
    # Wait, FUN_140001300 logic:
    # It builds `local_388` (Default Source) and `local_2e8` (Target).
    # Then it reads Wallpaper Key.
    # It modifies `local_388` (Default Source) by swapping chars based on Key?
    # NO. Let's look at `FUN_140001300` lines 91-99.
    # It iterates over key chars. Finds char in `local_388`.
    # It replaces that char in `local_388` with char from `local_2e8` (Target) at same index?
    # NO. `*(wchar_t *)(param_1 + uVar15 * 2) = local_2e8[...]` -> Wait param_1 is `local_838` (Input Text).
    # This loop encrypts the Input Text (`local_838`) using the mapping?
    # NO. param_1 passed to `FUN_140001300` is `local_838` (Input Text).
    # The loop iterates `uVar15` from 0 to `uVar20` (Length of Input Text).
    # Inside loop:
    # `pwVar12 = wcschr(local_388, *(wchar_t *)(param_1 + uVar15 * 2))` -> Find InputChar in SourceAlpha.
    # If found:
    # `*(wchar_t *)(param_1...) = local_2e8[index]` -> Replace InputChar with TargetAlpha[index].
    
    # So `FUN_140001300` implements Simple Substitution using Source -> Target.
    # BUT, lines 157-160:
    # `*puVar1 = *puVar1 ^ (short)uVar15 + local_688[uVar15 % uVar19]`
    # It XORs the result with index + KeyString?
    # `local_688` is constructed: F L A R E A L F ... (FLAREALF\0)
    # Wait, lines 112-132 build `local_688`:
    # F L A R E R A L F \0 ?
    # Let's trace carefully:
    # 112: F
    # 113: L
    # lVar18 loop (5 times?) lines 114-118 -> local_688[2]...
    # 119: A (idx 2)
    # 120: R (idx 3)
    # 121: E (idx 4)
    # 122: R (idx 5)
    # 128: A (idx 6)
    # 129: L (idx 7)
    # 131: F (idx 8)
    # 132: 0 (idx 9)
    # So KeyString is "FLARERALF".
    
    # WAIT! `FUN_140001300` ALSO has the Wallpaper logic (lines 162-189).
    # If `uVar20 >> 1 != 0` (Input Len > 1) ??
    # It seems to swap bytes of input string?
    # `uVar2` (start) and `*puVar16` (end). Swap start/end chars?
    # And call `RegOpenKeyExW` inside the loop?? This seems simpler:
    # It just reverses the string? `uVar17` increments, `puVar16` decrements.
    # Yes, it REVERSES the encrypted string.
    
    # Summary of `FUN_140001300`:
    # 1. Substitute Input chars using Source -> Target map.
    # 2. XOR each char with `Index + KeyString[Index % Len]`. KeyString="FLARERALF".
    # 3. Reverse the result string.
    
    # So: Encrypt(P) = Reverse( XOR( Subst(P) ) )
    # Target = Hardcoded String in `FUN_140001890`.
    # P = Flag.
    # Flag = InvSubst( XOR( Reverse(Target) ) )
    
    # Hardcoded Target String bytes:
    # We need the raw bytes from `objdump`.
    
    key_str = "FLARERALF"
    
    target_bytes = [
        0x3c, 0x51, 0x6a, 0x09, 0x02, 0x07, 0x25, 0x03, 
        0x30, 0x08, 0x04, 0x29, 0x68, 0x24, 0x01, 0x24, 
        0x18, 0x6b, 0x77, 0x0f, 0x70, 0x36, 0x02, 0x0e, 0x0b
    ]
    # Length 25.
    
    # 1. Reverse
    rev_bytes = target_bytes[::-1]
    
    # 2. XOR
    # C' = C ^ (Index + Key[Index%Len])
    # C = C' ^ (Index + Key[Index%Len])
    xor_res = ""
    for i, b in enumerate(rev_bytes):
        k = ord(key_str[i % len(key_str)])
        val = b ^ (i + k)
        xor_res += chr(val & 0xFF)
        
    print(f"XOR Result: {xor_res}")
    
    # 3. Inverse Subst
    # Map Target -> Source
    dec_map = {t:s for s,t in zip(source, target)}
    
    final_res = ""
    for c in xor_res:
        if c in dec_map:
            final_res += dec_map[c]
        else:
            final_res += c
    
    print(f"Flag: {final_res}")

if __name__ == "__main__":
    solve()
