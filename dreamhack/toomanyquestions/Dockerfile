FROM ubuntu:22.04

RUN apt update && apt install net-tools

WORKDIR /app
ADD ./main /app

ENTRYPOINT ["/app/main"]