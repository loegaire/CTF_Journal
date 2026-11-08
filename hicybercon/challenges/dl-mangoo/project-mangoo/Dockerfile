FROM --platform=linux/amd64 ubuntu:22.04

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y --no-install-recommends \
    wine64 \
    socat \
    && rm -rf /var/lib/apt/lists/*

RUN useradd -M -u 1000 -s /usr/sbin/nologin ctf

WORKDIR /app

COPY project_mangoo.exe /app/project_mangoo.exe
COPY run_mangoo.sh /app/run_mangoo.sh

RUN chmod 555 /app/project_mangoo.exe /app/run_mangoo.sh

EXPOSE 7250

CMD ["/app/run_mangoo.sh"]
