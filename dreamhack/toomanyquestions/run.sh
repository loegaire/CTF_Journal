#!/bin/bash

rm -f ./tcpdump/*

# 1. Generate flag, key and docker-compose.yml
./gen.py

# 2. Run
docker-compose down --remove-orphans
docker-compose create
docker-compose up -d

# 3. Wait for stop
while :
do
    lc=$(docker-compose ps --all --status=exited | wc -l)
    echo "Waiting... lc: ${lc}"
    if [ $lc -eq 33 ]
    then
        break
    fi
    sleep 1
done

# 4. Stop
docker-compose down --remove-orphans
