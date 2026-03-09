// solve_mem.js

// --- OFFSETS ---
var checkFuncOffset = 0x7A96D; // The 'check' function
var cmpOffset = 0x7BBA8;       // The CMP instruction
var stackOffset = 0x23B;       // Flag byte offset from RBP

var mainMod = Process.mainModule;
var baseAddr = mainMod.base;

var inputBuffer = null;
var lastAccessedIndex = -1;
var flagMap = new Array(32).fill("?");

console.log("[*] Memory Monitor Solver loaded.");

// 1. Hook 'check' to find the address of the input buffer
Interceptor.attach(baseAddr.add(checkFuncOffset), {
    onEnter: function(args) {
        // 'check(char *input)' -> First arg (RDI) is the pointer
        inputBuffer = args[0];
        console.log("[+] Input Buffer found at: " + inputBuffer);

        // 2. Monitor the Input Buffer for Reads
        // We watch 32 bytes (size of the jumbled flag)
        MemoryAccessMonitor.enable({
            base: inputBuffer,
            size: 32
        }, {
            onAccess: function(details) {
                // details.offset is the byte offset (0-31)
                // details.operation should be 'read'
                if (details.operation === 'read') {
                    lastAccessedIndex = details.offset;
                    // console.log("-> VM Reading Index: " + lastAccessedIndex);
                }
            }
        });
        console.log("[+] Memory Monitor Active!");
    }
});

// 3. Hook CMP to grab the Flag Byte
Interceptor.attach(baseAddr.add(cmpOffset), {
    onEnter: function(args) {
        // If we just saw a memory read, this check belongs to that index!
        if (lastAccessedIndex !== -1) {
            var rbp = this.context.rbp;
            var flagChar = rbp.sub(stackOffset).readU8();
            
            // Map it!
            flagMap[lastAccessedIndex] = flagChar;
            
            // Reset index so we don't map it twice
            lastAccessedIndex = -1;
        }

        // Auto-win (Cheat)
        var correctVal = this.context.rbp.sub(stackOffset).readU8();
        this.context.rax = ptr(correctVal);
    },
    onLeave: function(retval) {
        // Print Status
        var hex = "";
        var count = 0;
        for(var i=0; i<32; i++) {
            if(flagMap[i] !== "?") {
                hex += ("0" + flagMap[i].toString(16)).slice(-2);
                count++;
            } else {
                hex += "__";
            }
        }
        
        console.log("Flag State: DH{" + hex + "}");
        
        if (count === 32) {
            console.log("\n[!!!] FLAG CAPTURED [!!!]");
            console.log("DH{" + hex + "}");
        }
    }
});

console.log("[*] Waiting for execution. Enter 64 zeros!");
