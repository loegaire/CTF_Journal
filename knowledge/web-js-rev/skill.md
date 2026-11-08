# JS client-side flag decoders (web/JS rev)
Root cause: flag is computed entirely in the browser from obfuscated constants + environment values
(document.characterSet, Function.toString().length, timing, mouse button).
Method: pull the constants, replicate each environment input exactly (eval the function in node to get its
toString length; don't hand-count), and cross-check by brute-forcing the small key space against a
known suffix like "@flare-on.com".
