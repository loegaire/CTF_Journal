import re

blacklist = [ # no built-in funcs -> goodluck :)
    "abs", "aiter", "all", "anext", "any", "ascii",
    "bin", "bool", "breakpoint", "bytearray", "bytes",
    "callable", "chr", "classmethod", "compile", "complex",
    "delattr", "dict", "dir", "divmod",
    "enumerate", "eval", "exec",
    "filter", "float", "format", "frozenset",
    "getattr", "globals",
    "hasattr", "hash", "help", "hex",
    "id", "input", "int", "isinstance", "issubclass", "iter",
    "len", "list", "locals",
    "map", "max", "memoryview", "min",
    "next",
    "object", "oct", "open", "ord",
    "pow", "property",
    "range", "repr", "reversed", "round",
    "set", "setattr", "slice", "sorted", "staticmethod", "str", "sum", "super",
    "tuple", "type",
    "vars",
    "zip",
    "__import__"
]

def findWholeWord(w):
    # is there any vuln in this ???????????????
    return re.compile(r'\b({0})\b'.format(w), flags=re.IGNORECASE).search

def validate(code):
    if "+" in code: # sir, no concaternation!
        return False
    for kw in blacklist:
        if findWholeWord(kw)(str(code)):
            return False
    return True

if __name__ == '__main__':
    print("------------------------------")
    print("Welcome to my very cool python interpreter! \nI hope I blacklisted enough... \nYou can never be too careful with these things...")
    print("Send an empty line to run!")
    print("------------------------------")
    while (True):
        code = input(">>> ")
        if (not validate(code)):
            print("Invalid code!")
            continue
        try:
            if code == "":
                continue
            eval(code)
        except Exception as e:
            print("Your command is so silly, can not run!")
            continue
