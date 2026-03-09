// trace_fixed.js

// 1. CONFIGURATION
// We hook the 'LEA' instruction because 'JMP RAX' is too small.
var leaOffset = 0x7ACE4; 
var jumpTableBaseOffset = 0x7ACEE; // The address used in the LEA instruction

console.log("[*] Tracer loaded. Waiting for process...");

// Get Base Address safely
var mainMod = Process.mainModule;
var baseAddr = mainMod.base;

// Calculate the hook address
var hookAddr = baseAddr.add(leaOffset);

console.log("[*] Hooking LEA instruction at: " + hookAddr);

Interceptor.attach(hookAddr, {
    onEnter: function(args) {
        // At this point in assembly:
        // RAX holds the offset loaded from the jump table.
        // RDX is about to hold the table base (0x7ACEE).
        
        var jumpOffset = this.context.rax;
        var tableBase = baseAddr.add(jumpTableBaseOffset);
        
        // Calculate where the code will jump to
        var targetParams = tableBase.add(jumpOffset);
        
        // Calculate the offset from base (for readability)
        var readableOffset = targetParams.sub(baseAddr);

        console.log("[VM Trace] Jumping to Offset: " + readableOffset);

        // [!!!] ALERT IF WE SEE THE CMP FUNCTION [!!!]
        // You found earlier that CMP is at 0x7BBA1 (start of the block) or 0x7BBA8 (the instruction)
        // Let's check if we are jumping into that block (0x7BBA1)
        if (readableOffset.equals(0x7BBA1)) {
            console.log("    [!!!] FOUND CASE 11 (CMP) !!!");
            console.log("    [+] The VM is verifying your flag now!");
        }
    }
});
