from pwn import *
import re

def main():
    host = "103.69.97.144"
    port = 10001
    p = remote(host, port)
    
    # Receive and start interaction
    print(p.recvuntil(b"start!!!!!!!").decode())
    p.sendline(b"emyeuanhSpid3rdeptrai")
    
    while True:
        data = p.recv().decode().strip()
        print(f"Received: {data}")
        
        if "Question" in data:
            match = re.search(r'Question \d+: ([-+*/\d\s]+) =', data)
            if match:
                expression = match.group(1).strip()
                result = round(eval(expression))
                print(f"Calculated: {result}")
                p.sendline(str(result).encode())
        elif "exit" in data.lower() or "part 2" in data.lower():
            print("Exiting...")
            break
    
    p.close()

if __name__ == "__main__":
    main()

