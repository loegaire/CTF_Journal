#!/bin/bash
if [ "$1" = "work" ]; then
    export HOME=/tmp
    export WINEPREFIX="/tmp/wine-$$"
    export WINEDEBUG=-all
    export DISPLAY=""
    mkdir -p "$WINEPREFIX"
    trap 'rm -rf "$WINEPREFIX"' EXIT
    /usr/bin/wine64-stable /app/project_mangoo.exe
    exit $?
fi

exec socat -T 45 TCP-LISTEN:7250,reuseaddr,fork EXEC:"/app/run_mangoo.sh work",su=ctf,stderr
