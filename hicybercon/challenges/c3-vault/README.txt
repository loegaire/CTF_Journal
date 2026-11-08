C3 Vault
========
A retired ESP32-C3 gateway still has access to a remote vault. Recover
its enrollment credentials from the lab acquisition and authenticate
to the supplied TCP endpoint to retrieve the event flag.

The endpoint is a host-side verifier of the device authentication
protocol, not an emulated shell. HELP describes the transport syntax.
No physical board, brute force or private author source is required.
Use recovery.txt for acquisition details. Flag format: hiCTF{...}.
