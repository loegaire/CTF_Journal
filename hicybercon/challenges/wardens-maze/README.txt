WARDEN'S MAZE
=============

A small terminal arcade game. You are '@', dropped into a maze of corridors
and pellets patrolled by a warden 'G'. Collect pellets for score and explore
the maze. In the very middle is a vault, walled off with a distinct tile ('%')
and sealed on every side.

The prize token ('$') sits inside that vault. There is no key, no switch, and
no door -- by the ordinary rules of movement the vault cannot be entered. And
yet it can be opened. Your job is to work out how.

The game server binary is included so you can study it offline.

Contents
--------
  maze         The game server (x86-64 Linux ELF). The same binary runs the
               live service. Reverse engineer it to understand the maze, the
               movement/collision rules, and the rendering/visibility code.
  README.txt   This file.

How to play
-----------
The game speaks plain, line-oriented text. Each command is a single letter
followed by Enter:
    w = up    s = down    a = left    d = right    q = quit
After every move the whole maze is redrawn. Getting caught by the warden sends
you back to the entrance (your score is kept).

Connecting
----------
  Local testing (your own `docker compose up`): plain TCP, no TLS --
      nc <host> 7700

  Hosted instance (TLS / SNI): the competition platform terminates TLS in
  front of the service and routes by SNI, so plain `nc` will NOT work. Speak
  TLS and present the endpoint hostname as the SNI server name:
      openssl s_client -quiet -connect <HOST>:<PORT> -servername <HOST>
  (<HOST>:<PORT> are shown on the challenge page.) To use a plain-TCP client,
  bridge it through a local TLS tunnel and connect to the local port:
      socat TCP-LISTEN:7700,reuseaddr,fork OPENSSL-CONNECT:<HOST>:<PORT>,snihost=<HOST>
      nc 127.0.0.1 7700

Goal
----
Reach the '$' inside the vault. When you step onto it, the controller prints a
validation token of the form hiCTF{...}. The token is minted per instance and
only appears on a genuine win -- it is not stored in this binary.
