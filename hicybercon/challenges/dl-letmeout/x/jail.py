#!/usr/bin/env python3
import random
import resource
import unicodedata
from jinja2.sandbox import SandboxedEnvironment

NAMES = ("buff", "cuff", "duff", "guff", "huff", "luff",
         "muff", "puff", "ruff", "tuff")

class Tag(str):
    __slots__ = ()
    def __str__(self) -> str:
        return unicodedata.normalize("NFKC", self)

def rich(value) -> Tag:
    return Tag(value)

def plain(value) -> str:
    return str(Tag(value))

def main() -> None:
    resource.setrlimit(resource.RLIMIT_CPU, (5, 5))
    read, write = input, print
    size, unique, sandbox = len, set, SandboxedEnvironment
    max_len, max_letters = 170, 3
    filters = dict(zip(random.sample(NAMES, 2), (rich, plain)))

    for _ in range(32):
        write("> ", end="", flush=True)
        try:
            layout = read()
        except (EOFError, UnicodeDecodeError):
            return
        rendered = ""

        if (
            layout.isascii()
            and size(layout) <= max_len
            and size(unique(c for c in layout if c.isalpha())) <= max_letters
        ):
            try:
                env = sandbox()
                env.globals.clear()
                env.filters.clear()
                env.filters.update(filters)
                rendered = env.from_string(layout).render()
            except Exception:
                rendered = ""

        write(rendered, flush=True)

if __name__ == "__main__":
    main()
