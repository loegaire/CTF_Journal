def analyze_string():
    target = b"rcTF"
    try:
        with open("flag.wav", "rb") as f:
            data = f.read()
            idx = data.find(target)
            if idx != -1:
                print(f"Found '{target.decode()}' at index {idx}")
                snippet = data[idx:idx+50]
                print("Snippet (Hex):", snippet.hex())
                print("Snippet (Raw):", snippet)
                
                # Check for "CTF" proximity
                # cTF vs CTF (case diff)
                # Maybe bit flip? 0x20
                transformed = []
                for b in snippet:
                    transformed.append(b ^ 0x20) # Toggle case?
                print("XOR 0x20:", bytes(transformed))

            else:
                print("Target not found.")
    except Exception as e:
        print(f"Error: {e}")

if __name__ == "__main__":
    analyze_string()
