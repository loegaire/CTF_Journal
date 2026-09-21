// final.js

// --- CONFIGURATION ---
var cmpOffset = 0x7BBA8;      // CMP instruction offset
var stackOffset = 0x23B;      // Stack offset for flag byte

var mainMod = Process.mainModule;
var baseAddr = mainMod.base;

console.log("[*] Final Solver loaded. Base: " + baseAddr);

// --- 1. FIND RAND (The Bulletproof Way) ---
var randFunc = null;

// Iterate over ALL modules to find 'rand'
Process.enumerateModules().forEach(function(m) {
    try {
        var exports = m.enumerateExports();
        for (var i = 0; i < exports.length; i++) {
            if (exports[i].name === "rand") {
                randFunc = exports[i].address;
                console.log("[+] Found 'rand' in module '" + m.name + "' at " + randFunc);
                return; // Stop once found
            }
        }
    } catch (e) {}
});

if (!randFunc) {
    console.log("[-] ERROR: Could not find 'rand' anywhere! Trying hardcoded libc lookup...");
    try { randFunc = Module.findExportByName("libc.so.6", "rand"); } catch(e) {}
}

if (randFunc) {
    // Hook RAND to capture the Index
    Interceptor.attach(randFunc, {
        onLeave: function(retval) {
            // VM Logic: index = rand() & 0x1F
            var r = retval.toInt32();
            var index = r & 0x1F; 
            
            // Print neatly
            console.log("-----------------------------------------");
            console.log("[RNG] Checking Index: " + index);
        }
    });
} else {
    console.log("[-] CRITICAL: Failed to hook RNG. Indices will be missing.");
}

// --- 2. HOOK CMP (To capture the Value) ---
var cmpAddr = baseAddr.add(cmpOffset);
Interceptor.attach(cmpAddr, {
    onEnter: function(args) {
        var rbp = this.context.rbp;
        if (rbp.isNull()) return;

        // Read the Expected Value (The Flag Byte)
        var expectedVal = rbp.sub(stackOffset).readU8();
        
        console.log("[CMP] Flag Value:     0x" + expectedVal.toString(16) + " ('" + String.fromCharCode(expectedVal) + "')");
        
        // Auto-win so the VM keeps running
        this.context.rax = ptr(expectedVal);
    }
});

console.log("[*] Hooks ready. Please enter 64 zeros in the main terminal.");
