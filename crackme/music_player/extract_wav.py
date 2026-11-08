import struct

def extract_wav():
    filename = "RecordPlayer.exe"
    offset = 493320
    
    try:
        with open(filename, "rb") as f:
            f.seek(offset)
            # Read RIFF header
            header = f.read(8)
            if len(header) < 8:
                print("Error: Could not read RIFF header.")
                return

            riff_sig, file_size = struct.unpack("<4sI", header)
            
            if riff_sig != b'RIFF':
                print(f"Error: Expected 'RIFF', got {riff_sig}")
                return
            
            # Total size = 8 bytes header + file_size
            total_size = file_size + 8
            
            print(f"Found RIFF header. File size: {total_size} bytes.")
            
            f.seek(offset)
            wav_data = f.read(total_size)
            
            if len(wav_data) != total_size:
                print(f"Warning: Expected {total_size} bytes, got {len(wav_data)}")

            with open("flag.wav", "wb") as out_f:
                out_f.write(wav_data)
            
            print(f"Successfully extracted {len(wav_data)} bytes to flag.wav")

    except FileNotFoundError:
        print(f"Error: {filename} not found.")
    except Exception as e:
        print(f"An error occurred: {e}")

if __name__ == "__main__":
    extract_wav()
