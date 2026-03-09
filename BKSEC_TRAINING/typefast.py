from pwn import *

# Set up the connection to the server
host = "103.69.97.144"  # Replace with actual host
port = 5811  # Replace with actual port

conn = remote(host, port)

while True:
    line = conn.recvline().decode().strip()  # Receive a line and decode
    print(line)  # Print received message
    
    if "My turn:" in line:
        extracted = line.split("My turn:", 1)[1].strip()  # Extract substring after 'My turn:'
        conn.sendline(extracted)  # Send back extracted string
    
conn.close()
