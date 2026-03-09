var cmpOffset = 0x7BBA8; // CMP instruction
var mainMod = Process.mainModule;
var baseAddr = mainMod.base;

console.log("[*] Register Finder running...");

Interceptor.attach(baseAddr.add(cmpOffset), {
    onEnter: function(args) {
        var ctx = this.context;
        
        // Print all general purpose registers
        console.log("---------------------------------------------------");
        console.log("RAX: " + ctx.rax + " | RBX: " + ctx.rbx + " | RCX: " + ctx.rcx);
        console.log("RDX: " + ctx.rdx + " | RSI: " + ctx.rsi + " | RDI: " + ctx.rdi);
        console.log("R8:  " + ctx.r8  + " | R9:  " + ctx.r9  + " | R10: " + ctx.r10);
        
        // Auto-win to keep loop going
        // We know from previous runs that the flag byte is at [rbp-0x23B]
        var expectedVal = ctx.rbp.sub(0x23B).readU8();
        this.context.rax = ptr(expectedVal); 
    }
});
