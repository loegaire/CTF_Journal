# Define input list
input_list = [4, 54, 41, 0, 112, 32, 25, 49, 33, 3, 0, 0, 57, 32, 108, 23, 48, 4, 9, 70, 7, 110, 36, 8, 108, 7, 49, 10, 4, 86, 43, 105, 114, 91, 0, 71, 106, 124, 93, 78]

# Construct the key string
key_str = "J"
key_str += "_"
key_str += "o"
key_str += "3"
key_str = "t" + key_str

# Convert key_str into a list of ASCII values
key_list = [ord(char) for char in key_str]

# Extend key_list to match the length of input_list
while len(key_list) < len(input_list):
    key_list.extend(key_list)

# XOR each element of input_list with corresponding element in key_list
result = [a ^ b for a, b in zip(input_list, key_list)]

# Convert the result list to a string
result_text = "".join(map(chr, result))

print(result_text)


