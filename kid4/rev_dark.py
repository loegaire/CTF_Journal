from Crypto.Cipher import AES
from Crypto.Util.Padding import pad, unpad
import os
import base64
import random
import hashlib
FLAG = "JlLScp2qTzfFZ7kIYP6Jm5Mv/2h6p26S0OWgmXYdEMAl1Sjg6hwW95bPsZdtiggvHVVv8zM+x7vRw2qOr3ORbw=="
class Cipher:
    def encrypt(self, plainText, key):
        iv = os.urandom(16) 
        privateKey = hashlib.sha256(key.encode("utf-8")).digest()
        cipher = AES.new(privateKey, AES.MODE_CBC, iv)
        encryptedBytes = cipher.encrypt(pad(plainText.encode(), AES.block_size))  
        return base64.b64encode(iv + encryptedBytes).decode()

    def decrypt(self, encrypted, key):
        encryptedData = base64.b64decode(encrypted) 
        iv = encryptedData[:16] 
        privateKey = hashlib.sha256(key.encode("utf-8")).digest()  
        cipher = AES.new(privateKey, AES.MODE_CBC, iv) 
        try:
            decryptedBytes = unpad(cipher.decrypt(encryptedData[16:]), AES.block_size)  
        except:
            print("error")
            return 0
        return decryptedBytes
places = ["Cemetery of Ash", "Grand Archives", "Profaned Capital", "Farron Keep", "Anor Londo", "High Wall of Lothric", "Undead Settlement", "Firelink Shrine", "Road of Sacrifices", "Irithyll Dungeon", "Catacombs of Carthus", "Lothric Castle", "Cathedral of the Deep","Irithyll of the Boreal Valley","Untended Graves","Kiln of the First Flame"]

routes = [
    [60, "Firelink Shrine", "Kiln of the First Flame", "Undead Settlement", "High Wall of Lothric"],
    [-10, "Lothric Castle", "High Wall of Lothric", "Irithyll of the Boreal Valley", "Untended Graves"],
    [12, "Irithyll Dungeon", "Grand Archives", "Undead Settlement", "Kiln of the First Flame"],
    [-5555, "Road of Sacrifices", "Catacombs of Carthus", "Anor Londo", "Cathedral of the Deep"],
    [555, "Irithyll of the Boreal Valley", "Irithyll Dungeon", "High Wall of Lothric", "Cemetery of Ash"],
    [3, "Firelink Shrine", "Undead Settlement", "Lothric Castle", "Untended Graves"],
    [1015, "High Wall of Lothric", "Road of Sacrifices", "Irithyll Dungeon", "Grand Archives"],
    [35, "Kiln of the First Flame", "High Wall of Lothric", "Cemetery of Ash", "Irithyll of the Boreal Valley"],
    [143, "Cathedral of the Deep", "Farron Keep", "Undead Settlement", "Lothric Castle"],
    [1551, "Irithyll of the Boreal Valley", "Profaned Capital", "High Wall of Lothric", "Farron Keep"],
    [70, "Farron Keep", "Irithyll of the Boreal Valley", "Grand Archives", "Firelink Shrine"],
    [77, "High Wall of Lothric", "Untended Graves", "Grand Archives", "Farron Keep"],
    [718640, "Farron Keep", "Road of Sacrifices", "Profaned Capital", "Anor Londo"],
    [869, "Anor Londo", "Irithyll Dungeon", "Catacombs of Carthus", "Road of Sacrifices"],
    [6969, "Lothric Castle", "High Wall of Lothric", "Kiln of the First Flame", "Cathedral of the Deep"]
]
def checkFlag(path):
    aes = Cipher()

    a = "" 
    b = ""
    for p in path:
        if path.index(p) % 2 == 0:
            a += f"{p[0]+p[-1]}"
        else:
            b += f"{p[0]+p[-1]}"

    key = a+b
    attempt = aes.decrypt(FLAG,key)
    if attempt == 0:
        return 0
    elif "KSUS" not in attempt:
        print("ksus")
        return 0
    else:
        print(attempt)
        exit()
def brute():
    for i in range(4):
        filter(i,[],"Cemetery of Ash")
def filter(i,path,position):
    print("filer")
    if position == "Kiln of the First Flame":
        checkFlag(path)
    pos = routes[places.index(position)][0]
    if pos == 60 or pos ==12 or pos==555 or pos==1551 or pos==6969 and i > 1:
        return 0
    elif pos == -10 or pos == 1015 or pos == 35 or pos ==70 and i > 2:
        return 0
    elif pos == -5555 or pos == 143 or pos == 1551 or pos == 77 or pos == 869 and next > 3:
        return 0
    path.append(routes[places.index(position)][next])   
    position = routes[places.index(position)][next]
    for i in range(4):
        filter(i,path,position)
brute()
    
        

    


