FROM python:3.12-slim

RUN apt-get update && apt-get install -y \
    socat gcc autoconf bison flex g++ git \
    libprotobuf-dev libnl-route-3-dev \
    libtool make pkg-config protobuf-compiler \
    && rm -rf /var/lib/apt/lists/*
RUN python3 -m pip install requests numpy torch transformers

RUN git clone https://github.com/google/nsjail.git /src/nsjail
WORKDIR /src/nsjail
RUN make

COPY ./readflag.c /readflag.c
RUN gcc /readflag.c -o /readflag
RUN rm /readflag.c
RUN chmod 111 /readflag

WORKDIR /app
COPY ./vibe_code.py /app/vibe_code.py
COPY ./run_vibe_code.sh /app/run_vibe_code.sh

RUN useradd -m ctf

RUN mkdir /ctf && chown ctf /ctf && chmod 300 /ctf

USER ctf
RUN python - <<'PY'
from transformers import AutoTokenizer, AutoModelForCausalLM
AutoTokenizer.from_pretrained("openai-community/gpt2")
AutoModelForCausalLM.from_pretrained("openai-community/gpt2")
print("Model prefetched")
PY

EXPOSE 5000
CMD socat TCP-LISTEN:5000,reuseaddr,fork \
  EXEC:'python3 /app/vibe_code.py',pty,setsid,ctty,stderr,echo=0