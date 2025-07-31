a = [
    'b', 'y', None, 'u', 'c', 't', 'f', None, '{', None, '3', 'v', '3', None, None, '~',
    'n', None, '_', None, None, None, None, 'v', '3', None, 'm', 'c', None, 't', 'C', None,
    '0', None, None, 'r', None, None, 's', '"', '_', '2', '4', None, None, 'p', None, None,
    'Z', None, 'p', '3', 'A', '4', 'r', None, None, '_', None, '1', 'n', None, '_', 'S',
    None, None, '!', 'm', '3', None, 'm', None, ';', ')', None, '0', 'r', 'y', '}', '|',
    None, '*', None, None
]
mystery_bool_vector = [
    # Index 0-9
    0, 0, 0, 0, 0, 1}, 1y, 1r, 10, 0,
    # Index 10-19
    0, 0, 0, 1m, 0, 13, 1m, 0, 0, 0,
    # Index 20-29
    0, 1_, 0, 1n, 11, 0, 1_, 0, 0, 1r,
    # Index 30-39
    14, 0, 13, 1p, 0, 0, 0, 0, 1p, 0,
    # Index 40-49
    0, 14, 0, 1_, 0, 1s, 0, 0, 1r, 0,
    # Index 50-59
    0, 10, 0, 0, 1t, 0, 1c, 0, 0, 13,
    # Index 60-69
    1v, 0, 0, 0, 0, 1_, 0, 1n, 0, 0,
    # Index 70-79
    0, 13, 1v, 13, 0, 1{, 0, 1f, 1t, 1c,
    # Index 80-83
    1u, 0, 1y, 1b
]
# Iterate through both lists simultaneously
for char, include in zip(a, b):
    if include == 1 and char is not None:
        flag.append(char)

# Convert the list to a string
flag_str = ''.join(flag)
print(flag_str)
