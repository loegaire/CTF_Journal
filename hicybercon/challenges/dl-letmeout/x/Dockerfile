FROM python:3.13-slim-bookworm

ENV PYTHONUNBUFFERED=1 \
    PYTHONDONTWRITEBYTECODE=1 \
    PYTHONUTF8=1 \
    PYTHONIOENCODING=utf-8 \
    LANG=C.UTF-8

WORKDIR /app

RUN apt-get update \
 && apt-get install -yq --no-install-recommends socat \
 && rm -rf /var/lib/apt/lists/*

COPY ./requirements.txt /app/requirements.txt
RUN pip install --no-cache-dir -r /app/requirements.txt

COPY ./jail.py /app/jail.py
COPY ./entrypoint.py /entrypoint.py
COPY flag.txt /flag.txt

RUN mkdir /flags \
 && chmod 555 /flags \
 && chmod 500 /entrypoint.py \
 && chmod 400 /flag.txt \
 && rm -f /bin/sh /bin/dash /bin/bash /usr/bin/sh /usr/bin/dash /usr/bin/bash

EXPOSE 7201
ENTRYPOINT ["python", "/entrypoint.py"]
