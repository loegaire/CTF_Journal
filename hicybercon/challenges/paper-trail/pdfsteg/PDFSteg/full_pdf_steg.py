##############################
#
# PDFSteg: An open-sourced tool which can be used to hide information into the PDF documents. The key idea is to embed sensitive data into PDF documents through imperceptible modifications to the PDF stream operator values. Compared to existing PDF steganography techniques, our proposed design can achieve a higher carrying capacity and embedding rate, while minimizing the visual impacts to the PDF document.
# You can freely redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
# PDFSteg is distributed in the hope that it will be useful,but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
#
# Security and Privacy (SnP) Lab, Michigan Technological University
# https://snp.cs.mtu.edu

# This material is based upon work supported by the US National Science Foundation under Grant Number 1928349: "SaTC: CORE: Small: Collaborative: Hardware-assisted Plausibly Deniable System for Mobile Devices". Any opinions, findings, and conclusions or recommendations expressed in this material are those of the author(s) and do not necessarily reflect the views of the National Science Foundation.
#
###############################
import argparse
import re
import sys
import json
import string 

nums_regex = re.compile(b"[\d\.\-]+")
tj_nums_regex = re.compile(b"[\d\.\-]+(?![^\(]*\))(?![^\<]*\>)")

class PdfStream:
    def __init__(self, start, end, text):
        self.start = start
        self.end = end
        self.text = text

        # See how many of the chars are printable
        printable = bytes(string.printable, 'ascii')
        num_not_printable = 0
        for t in self.text:
            if t not in printable:
                num_not_printable += 1

        # Heuristic: 25%+ unprintable chars is a good heuristic to tell that this is not an operator stream 
        pct_unprintable = 100 * (num_not_printable / len(text))
        self.viable_stream = pct_unprintable < 25

    def viable(self):
        return self.viable_stream
        
class Operator:
    def __init__(self, op_str, min_num_operands, max_num_operands, max_pcts, bits_per_operand, min_value):
        global nums_regex
        self.op_str = op_str
        self.min_num_operands = min_num_operands
        self.max_num_operands = max_num_operands
        self.max_pcts = max_pcts
        self.bits_per_operand = bits_per_operand
        self.regex_number_capture = nums_regex
        self.min_value = min_value
        
        self.pattern = re.compile(b"(?:[\d\.\-]+\s+)" + b"{" + bytes(str(self.min_num_operands), 'ascii')
            + b"," + bytes(str(self.max_num_operands), 'ascii') + b"}" + bytes(self.op_str, 'ascii') + b"[\[\s]")
        
    def find_all(self, text):
        matches = [m for m in self.pattern.finditer(text)]
        return [(m.start(), m.end()) for m in matches]
    
    def embed(self, match, bits):
        parts = [m for m in self.regex_number_capture.finditer(match)]
        parts = [(p.start(), p.end()) for p in parts]
        total_num_bits = self.bits_per_operand * len(parts)
        
        # Problem Line
        bit_pieces = [bits[i:i+self.bits_per_operand] for i in range(0, min(len(bits), total_num_bits), self.bits_per_operand)]
        replacement = b""
        match_index = 0
        part_index = 0
        bits_hidden = 0
        for (p, b) in zip(parts, bit_pieces):
            replacement += match[match_index:p[0]]
            num = match[p[0]:p[1]]
            replacement += embed_bit(num, self.max_pcts[part_index] / 100.0, self.bits_per_operand, b, self.min_value)
            match_index = p[1]
            part_index += 1
            bits_hidden += len(b)
        replacement += match[match_index:]
            
        return replacement, bits_hidden
        
    def extract(self, match):
        parts = [m for m in self.regex_number_capture.finditer(match)]
        parts = [(p.start(), p.end()) for p in parts]
        
        bits = ""
        for p in parts:
            num = match[p[0]:p[1]]
            bits += format_extracted(extract_bit(num, self.bits_per_operand), self.bits_per_operand)
            
        return bits

class TJ_Operator(Operator):
    def __init__(self, op_str, max_pct, bits_per_operand, min_value):
        global tj_nums_regex
        self.op_str = op_str
        self.max_pct = max_pct
        self.bits_per_operand = bits_per_operand
        self.regex_number_capture = tj_nums_regex
        self.min_value = min_value
        
        self.pattern = re.compile(b"\[.+?\]\s*?TJ")
        
    def embed(self, match, bits):
        parts = [m for m in self.regex_number_capture.finditer(match.replace(b"\(", b".."))]
        parts = [(p.start(), p.end()) for p in parts]
        
        total_num_bits = self.bits_per_operand * len(parts)
        
        # Problem Line
        bit_pieces = [bits[i:i+self.bits_per_operand] for i in range(0, min(len(bits), total_num_bits), self.bits_per_operand)]
        replacement = b""
        match_index = 0
        bits_hidden = 0
        for (p, b) in zip(parts, bit_pieces):
            replacement += match[match_index:p[0]]
            num = match[p[0]:p[1]]
            replacement += embed_bit(num, self.max_pct / 100.0, self.bits_per_operand, b, self.min_value)
            match_index = p[1]
            bits_hidden += len(b)
        replacement += match[match_index:]
            
        return replacement, bits_hidden
    
    def extract(self, match):
        parts = [m for m in self.regex_number_capture.finditer(match.replace(b"\(", b".."))]
        parts = [(p.start(), p.end()) for p in parts]

        bits = ""
        for p in parts:
            num = match[p[0]:p[1]]
            bits += format_extracted(extract_bit(num, self.bits_per_operand), self.bits_per_operand)

        return bits

def embed_bit(str_op: bytes, pct: float, n: int, bits: str, min_value: float):
    orig = str_op
    negative = b"-" in str_op
    floating_point = b"." in str_op
    point_loc = len(str_op) if not floating_point else str_op.index(b".")
    str_op = str_op.replace(b"-", b"")
    
    leading_zeroes = 0
    if floating_point:
        for c in str_op.replace(b".", b""):
            if c == ord('0'):
                leading_zeroes += 1
            else:
                break
                
    int_op = int(str_op.replace(b".", b""))
    mask = int(bits, 2)
    if extract_bit(str_op, n) == mask:
        return orig
        
    # Special case for operator = 0
    if int_op == 0:
        if int(bits, 2) <= min_value:
            return bytes(str(int(bits, 2)), 'ascii')

        num_zeroes = 0
        while (True):
            str_val = b"0." + (b"0"*num_zeroes) + bytes(str(int(bits,2)), 'ascii')
            if float(str_val) <= min_value:
                return str_val
            num_zeroes += 1
    
    small_enough_change = False
    working_int_op = int_op
    while (not small_enough_change):
        new_int_op = working_int_op ^ (working_int_op & int("1"*n, 2))
        new_int_op = new_int_op | mask
        
        if (abs(new_int_op - working_int_op) <= pct*working_int_op):
            small_enough_change = True
            working_int_op = new_int_op
        else:
            working_int_op *= 10
                
    return_str = b""
    if negative:
        return_str += b"-"
        
    return_str += b"0"*leading_zeroes
    return_str += bytes(str(working_int_op), 'ascii')
    
    if return_str[point_loc:] != b"":
        return_str = return_str[0:point_loc] + b"." + return_str[point_loc:]
        
    return return_str
    
def extract_bit(str_op: bytes, n: int):
    int_op = int(str_op.replace(b".",b"").replace(b"-", b""))
    mask = int("1"*n, 2)
    return int_op & mask
    
def format_extracted(extracted: int, n: int):
    return "{0:b}".format(extracted).zfill(n)
    
# Build operators from config file
config = []
with open("./config.json") as c:
    config = json.load(c)
    
operators = []    
for op in config:
    if not op["enabled"]:
        continue
    if op["operator"] != "TJ":
        operators.append(Operator(op["operator"], op["min_operands"], op["max_operands"], op["max_pct_per_operand"], 3, op["min_value"]))
    else:
        operators.append(TJ_Operator(op["operator"], op["max_pct_per_operand"][0], 3, op["min_value"]))
    
    
def find_all_streams(in_file):
    filebytes = in_file.read()
    in_file.seek(0)
    
    start = 0
    end = 0
    streams = []

    # Find all streams in the PDF file that are likely to be text streams
    while True:
        try:
            start = filebytes.index(b'stream', start)
            end = filebytes.index(b'endstream', start)
        except:
            break

        if filebytes[(start+6):(start+8)] == b'\r\n':
            stream = PdfStream(start + 8, end - 2, filebytes[(start+8):(end-2)])
            if stream.viable():
                streams.append(PdfStream(start + 8, end - 2, filebytes[(start+8):(end-2)]))
        else:
            stream = PdfStream(start + 7, end - 1, filebytes[(start+7):(end-1)])
            if stream.viable():
                streams.append(PdfStream(start + 7, end - 1, filebytes[(start+7):(end-1)]))
        
        start = end + 9
    
    return streams
    
def collect_all_matches(text):
    global operators  
    matches = {}
    for op in operators:
        op_matches = op.find_all(text)
        for o in op_matches:
            matches[o] = op
            
    return sorted(matches.items(), key=lambda m: m[0][0]) 
    
def msg_to_bits(msg):
    bitstr = b''.join( [bin(b).lstrip('0b').zfill(8).encode() for b in msg]  )
    return ''.join( [chr(b) for b in bitstr] )
    
def bits_to_msg(bit_str):
    message = bytearray()
    msgSize = len(bit_str) // 8
    for i in range(msgSize):
        message.append(int(bit_str[(8*i):((8*i) + 8)], 2))
    
    return bytes(message)

def embed(in_file, out_file, msg):
    print("[+] Embedding Message")
    streams = find_all_streams(in_file)
    
    # Append 4-byte size to message, then embed message
    maxsize = stat(in_file)
    size = len(msg)
    print(f"Size of message: {size}")
    if size > maxsize:
        print(f"Message of length {size} exceeds capacity {maxsize}")
        exit(1)
        
    sizebytes = size.to_bytes(4, 'big')
    sizebits = msg_to_bits(sizebytes)
    
    msgbits = msg_to_bits(msg)
    msgbits = sizebits + msgbits
    
    newstreams = []
    
    msgindex = 0
    bytes_added = 0
    for s in streams:
        text = s.text

        if msgindex >= len(msgbits):
            newstreams.append(text)
            continue
    
        matches = collect_all_matches(text)
        if len(matches) == 0:
            newstreams.append(text)
            continue
            
        newtext = b""
        textindex = 0
        for m in matches:
            newtext += text[textindex:m[0][0]]
            
            bits = msgbits[msgindex:]
            
            replacement, bits_hidden = m[1].embed(text[m[0][0]:m[0][1]], bits)
            
            bytes_added += len(replacement) - (m[0][1] - m[0][0])
            msgindex += bits_hidden
            newtext += replacement
            
            textindex = m[0][1]
         
        newtext += text[textindex:]
        
        newstreams.append(newtext)
        
        print(f"{msgindex//8} / {len(msgbits)//8} Embedded ({100*round(float(msgindex)/len(msgbits), 4)}%)")
        
    print(f"Added {bytes_added} more bytes")
    # Assemble the output PDF
    fileindex = 0

    for t, n in zip(streams, newstreams):
        out_file.write(in_file.read(t.start - fileindex))
        out_file.write(n)
        fileindex = t.end
        in_file.seek(fileindex)

    out_file.write(in_file.read())
    print("[-] Message Embedded")

def extract(in_file, out_file):
    print("[+] Extracting Message")
    streams = find_all_streams(in_file)
    
    # Get all bits, then determine actual size from first 4 bytes
    msg_bits = ""
    for s in streams:
        text = s.text
        matches = collect_all_matches(text)
        
        for m in matches:
            msg_bits += m[1].extract(text[m[0][0]:m[0][1]])
    
    sizebits = msg_bits[0:32]

    sizebytes = bits_to_msg(sizebits)
    size = int.from_bytes(sizebytes, byteorder='big')
    print(f"Size of extracted message: {size}")

    relevant_msg_bits = msg_bits[32:32+(size*8)]
    msg = bits_to_msg(relevant_msg_bits)
    out_file.write(msg)
    print("[-] Message Extracted")
   
   
def stat(in_file):
    print("[+] Calculating Allowable Message Size")
    streams = find_all_streams(in_file)
    
    numbits = 0
    for s in streams:
        text = s.text
        matches = collect_all_matches(text)
        for m in matches:
            number_count = m[1].bits_per_operand * len(m[1].regex_number_capture.findall(text[m[0][0]:m[0][1]]))
            numbits += number_count
    
    # 4 bytes reserved for size info
    bytes_available = (numbits // 8) - 4
    print("[-] Message Size Calculated")
    
    return bytes_available
    
    
if __name__ == "__main__":
    usagestr = "Usage: python full_pdf_steg.py\n\tstat <in-file>\n\tembed <cover-file> <out-file> <message-file>\n\textract <in-file> <out-file>"
    if len(sys.argv) < 3:
        print(usagestr)
        exit(1) 
        
    in_file = open(sys.argv[2], "rb")

    if (sys.argv[1] == "stat"):
        n = stat(in_file)
        print(f"{max(n, 0)} bytes are hideable in this file with current config")
        in_file.close()
        exit(0)
        
    elif (sys.argv[1] == "embed"):
        if len(sys.argv) < 5:
            print(usagestr)
            exit(1)
            
        out_file = open(sys.argv[3], "wb")
        message_file = open(sys.argv[4], "rb")
        embed(in_file, out_file, message_file.read())
        print("Message successfully embedded")
        
        in_file.close()
        out_file.close()
        message_file.close()
        exit(0)
        
    elif (sys.argv[1] == "extract"):
        if len(sys.argv) < 4:
            print(usagestr)
            exit(1)
            
        out_file = open(sys.argv[3], "wb")
        extract(in_file, out_file)
        print("Message successfully extracted")
        
        in_file.close()
        out_file.close()
        exit(0)
        
    else:
        print(usagestr)
        in_file.close()
        exit(1)
