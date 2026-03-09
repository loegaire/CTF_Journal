// solve_magic.js

// --- OFFSETS ---
var checkFuncOffset = 0x7A96D; // check()
var cmpOffset = 0x7BBA8;       // CMP instruction
var stackOffset = 0x23B;       // Flag byte (rbp - 23b)
var inputVarOffset = 0x23C;    // Input byte (rbp - 23c)

var mainMod = Process.mainModule;
var baseAddr = mainMod.base;

// Create Rainbow Pattern [0, 1, 2 ... 31]
var rainbowPattern = [];
for (var i = 0; i < 32; i++) rainbowPattern.push(i);

var flagMap = new Array(32).fill("?");

console.log("[*] Magic Solver loaded. Base: " + baseAddr);

// 1. Hook check() to INJECT the pattern
Interceptor.attach(baseAddr.add(checkFuncOffset), {
    onEnter: function(args) {
        var inputPtr = args[0]; // This is the address of 'jumbled_input'
        
        // --- THE FIX ---
        // We wrap this in a try-catch and use a manual fallback loop 
        // if writeByteArray fails.
        try {
            // Try the fast way
            ptr(inputPtr).writeByteArray(rainbowPattern);
            console.log("[+] Injected pattern via writeByteArray");
        } catch (e) {
            // Fallback: Write byte-by-byte manually
            console.log("[!] Fast write failed (" + e + "). Using fallback loop...");
            for (var i = 0; i < 32; i++) {
                ptr(inputPtr).add(i).writeU8(i);
            }
            console.log("[+] Injected pattern via manual loop");
        }
    }
});

// 2. Hook CMP to READ the result
Interceptor.attach(baseAddr.add(cmpOffset), {
    onEnter: function(args) {
        var rbp = this.context.rbp;
        
        // Read the Input Value (which matches our Index because of injection)
        var index = rbp.sub(inputVarOffset).readU8(); 
        var expectedVal = rbp.sub(stackOffset).readU8();
        
        // Map: Index -> Flag Character
        if (index >= 0 && index < 32) {
            flagMap[index] = expectedVal;
        }

        // Cheat to keep the loop going
        this.context.rax = ptr(expectedVal);
    },
    onLeave: function(retval) {
        // Print Progress
        var hex = "";
        var complete = true;
        for(var i=0; i<32; i++) {
            if(flagMap[i] !== "?") {
                hex += ("0" + flagMap[i].toString(16)).slice(-2);
            } else {
                hex += "__";
                complete = false;
            }
        }
        
        console.log("Flag: DH{" + hex + "}");
        
        if (complete) {
            console.log("\n[!!!] FLAG CAPTURED [!!!]");
            console.log("DH{" + hex + "}");
            // Optional: Detach once done to stop spam
            // Interceptor.detachAll(); 
        }
    }
});

console.log("[*] Hooks installed. Please enter 64 zeros.");
