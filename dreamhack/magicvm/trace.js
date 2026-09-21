// trace.js
var moduleName = "main";
var switchJumpOffset = 0x7ACEE; // The 'jmp rax' instruction offset

console.log("[*] Tracer loaded. Waiting for process...");

// Safe base address lookup
var mainMod = Process.mainModule;
var baseAddr = mainMod.base;

var targetAddress = baseAddr.add(switchJumpOffset);
console.log("[*] Hooking Switch Dispatcher at: " + targetAddress);

Interceptor.attach(targetAddress, {
    onEnter: function(args) {
        // RAX holds the destination address
        var destAddr = this.context.rax;
        var offset = destAddr.sub(baseAddr);

        // Print the offset we are jumping TO
        console.log("[VM Trace] Opcode executed. Jumping to offset: 0x" + offset.toString(16));
        
        // OPTIONAL: If we see the Case 11 offset (0x7BBA1), ALERT US!
        if (offset.equals(0x7BBA1)) {
            console.log("    [!!!] CASE 11 (CMP) DETECTED [!!!]");
        }
    }
});
