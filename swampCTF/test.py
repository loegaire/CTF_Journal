import re

def map_wav_to_binary(wav_file):
    with open(wav_file, 'rb') as f:
        data = f.read().hex()
    
    # Define your patterns (adjust based on actual hex)
    pattern_0 = "ff7fb26233189fc2.*?00000000"  # Regex for Pattern A (0)
    pattern_1 = "ff7f15551cf11f97.*?00000000"  # Regex for Pattern B (1)
    
    # Find all matches
    bits = []
    for match in re.finditer(f"({pattern_0}|{pattern_1})", data):
        chunk = match.group(1)
        if "ff7fb26233189fc2" in chunk:
            bits.append("0")
        elif "ff7f15551cf11f97" in chunk:
            bits.append("1")
    
    # Ignore silence (0000...), return binary string
    return ''.join(bits)

binary_output = map_wav_to_binary("message_from_the_stars.wav")
print(binary_output)
