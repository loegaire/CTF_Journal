// reveal.js

// --- CONFIGURATION ---
var cmpOffset = 0x7BBA8;      // The Comparison Instruction offset
var stackOffset = 0x23B;      // The stack offset for the target byte

var mainMod = Process.mainModule;
var baseAddr = mainMod.base;

console.log("[*] Revealer loaded. Base: " + baseAddr);

// 1. HOOK RAND() to see the Indices
// The VM calculates index = rand() & 0x1F. We will print that.
var randFunc = Module.findExportByName(null, "rand");
Interceptor.attach(randFunc, {
    onLeave: function(retval) {
        // The return value of rand() is in retval
        var r = retval.toInt32();
        var index = r & 0x1F; // The VM's logic
        console.log("[RNG] Generated Index: " + index);
    }
});

// 2. HOOK CMP to see the Values
var cmpAddr = baseAddr.add(cmpOffset);
Interceptor.attach(cmpAddr, {
    onEnter: function(args) {
        var rbp = this.context.rbp;
        // Read the expected value from the stack
        var expectedVal = rbp.sub(stackOffset).readU8();
        
        console.log("[CMP] Expecting Value: 0x" + expectedVal.toString(16));
        
        // Auto-win (Cheat) so the VM continues to the next check
        this.context.rax = ptr(expectedVal);
    }
});

console.log("[*] Hooks installed. Enter 64 zeros now!");
