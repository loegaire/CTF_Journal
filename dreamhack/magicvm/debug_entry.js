// debug_entry.js
var moduleName = "main";
var funcStartOffset = 0x7A96D; // The start of sub_7A96D

console.log("[*] Debug script loaded. Waiting for process...");

var mainMod = Process.mainModule;
var baseAddr = mainMod.base;
var targetAddr = baseAddr.add(funcStartOffset);

console.log("[*] Hooking Function Entry at: " + targetAddr);

Interceptor.attach(targetAddr, {
    onEnter: function(args) {
        console.log("========================================");
        console.log("[!] VM FUNCTION ENTERED!");
        console.log("    The offset is correct.");
        console.log("    We are about to start the VM logic.");
        console.log("========================================");
    }
});
