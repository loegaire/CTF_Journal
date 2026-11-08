import os
import subprocess
import tempfile
from transformers import AutoModelForCausalLM, AutoTokenizer, set_seed
from transformers.utils import logging
import torch

torch.use_deterministic_algorithms(True, warn_only=True)
logging.set_verbosity_error()

def extract_c_code(text):
    inside = False
    out = []
    for line in text.splitlines():
        s = line.strip()
        if not inside:
            if s.startswith("```") and s[3:].strip().lower() == "c":
                inside = True
            continue
        else:
            if s == "```":
                return "\n".join(out)
            out.append(line)
    return None


if __name__ == "__main__":
    model = AutoModelForCausalLM.from_pretrained("openai-community/gpt2", torch_dtype=torch.float16)
    tokenizer = AutoTokenizer.from_pretrained("openai-community/gpt2")
    prompt = input("User: ")
    if "\n" in prompt or "\r" in prompt:
        print("Prompt should be one line.")
        exit(1)
    if "User:" in prompt or "Assistant:" in prompt:
        print("What are you trying to do???")
        exit(1)

    msg = "User: {}\nAssistant: ".format(prompt)
    input_ids = tokenizer.encode(msg, return_tensors="pt")
    output = model.generate(input_ids, pad_token_id=tokenizer.eos_token_id, max_length=512)
    output = tokenizer.decode(output[0], skip_special_tokens=True)
    output = output[len(msg):]

    print("Assistant: {}".format(output))

    c_code = extract_c_code(output)
    if c_code is None:
        print("Missing C code")
        exit(1)

    for blacklist_word in ["system", "exec", "open"]:
        if blacklist_word in c_code.lower():
            print("Blacklisted keyword detected.")
            exit(1)
    print("C Program detected:\n```C\n{}\n```".format(c_code))
    with tempfile.NamedTemporaryFile(suffix=".c", mode="w", dir="/ctf", delete=True) as f:
        f.write(c_code)
        f.seek(0)
    
        jail_cmd = f"/src/nsjail/nsjail -Mo --chroot / -T /tmp --skip_setsid --quiet -- /bin/sh /app/run_vibe_code.sh {f.name}"
        os.system(jail_cmd)