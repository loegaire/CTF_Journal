// solve_accurate.js

// --- CONFIGURATION ---
var cmpOffset = 0x7BBA8; // CMP instruction
var stackOffset = 0x23B; // Flag byte on stack

var mainMod = Process.mainModule;
var baseAddr = mainMod.base;

// We will store the flag bytes here
var flagArray = new Array(32).fill("?"); 

console.log("[*] Accurate Solver running...");

Interceptor.attach(baseAddr.add(cmpOffset), {
    onEnter: function(args) {
        // 1. Get the Index directly from RDX register
        // (The instruction is: movzx eax, byte ptr [rax + rdx])
        var index = this.context.rdx.toInt32();
        
        // 2. Get the Flag Byte from the Stack
        var expectedVal = this.context.rbp.sub(stackOffset).readU8();
        
        // 3. Store it in our array
        if (index >= 0 && index < 32) {
            flagArray[index] = expectedVal;
            
            // Print progress
            console.log("[+] Found Index " + index + " = 0x" + expectedVal.toString(16) + " ('" + String.fromCharCode(expectedVal) + "')");
        }

        // 4. Cheat to keep VM running
        this.context.rax = ptr(expectedVal);
    },
    onLeave: function(retval) {
        // Check if we found everything
        if (!flagArray.includes("?")) {
            console.log("\n[!!!] FULL FLAG RECOVERED [!!!]");
            
            // Convert array of bytes to Hex String
            var hexString = "";
            for (var i = 0; i < 32; i++) {
                var b = flagArray[i];
                // Pad single digits with 0 (e.g., 'A' -> '0A')
                hexString += ("0" + b.toString(16)).slice(-2);
            }
            console.log("Flag Hex: " + hexString);
            console.log("DH{" + hexString + "}");
        }
    }
});

console.log("[*] Hook installed. Enter 64 zeros!");
