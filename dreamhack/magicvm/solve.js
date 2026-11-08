// solve_final.js

// --- OFFSETS ---
var cmpOffset = 0x7BBA8;      // The Comparison Instruction
var randomFuncOffset = 0x7A8DA; // The function that picks indices: sub_7A8DA
var stackOffset = 0x23B;      // The offset for the target byte in stack

var mainMod = Process.mainModule;
var baseAddr = mainMod.base;

console.log("[*] Final Solver loaded.");

// We need to track the last index accessed to pair it with the check
var lastIndex = -1;

// 1. Hook the Index Picker (sub_7A8DA)
// This function calculates: return input[(rand() & 0x1F) + offset];
// We want to see that (rand() & 0x1F) value.
Interceptor.attach(baseAddr.add(randomFuncOffset), {
    onLeave: function(retval) {
        // We can't easily see the internal index here without re-implementing logic.
        // EASIER STRATEGY: Hook the instruction *after* rand() inside this function.
    }
});

// BETTER STRATEGY: Hook the 'rand()' call itself inside sub_7A8DA?
// No, let's just trace the VM execution. 
// Actually, let's use the exact instruction in sub_7A8DA that accesses the array.
// But we don't have that offset handy.

// ALTERNATIVE: Hook the CMP and dump the "Expected" values.
// We will manually map them to the indices using a C snippet I will give you after this.
// BUT FIRST, run this to confirm we get the Target bytes cleanly one last time.

var targets = [];

Interceptor.attach(baseAddr.add(cmpOffset), {
    onEnter: function(args) {
        var rbp = this.context.rbp;
        var expectedVal = rbp.sub(stackOffset).readU8();
        
        // Save the target
        targets.push(expectedVal);
        
        // Auto-win to keep loop going
        this.context.rax = ptr(expectedVal);
    },
    onLeave: function(retval) {
        // If we have collected 32 bytes, print the array!
        if (targets.length === 32) {
            console.log("\n[+] CAPTURED 32 TARGET BYTES:");
            console.log(JSON.stringify(targets));
            console.log("\n[+] NOW GENERATING SOLVER CODE...");
        }
    }
});

console.log("[*] Hook installed. Enter 64 dummy chars.");
