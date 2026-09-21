var cmpOffset = 0x7BBA8; 
var mainMod = Process.mainModule;
var baseAddr = mainMod.base;
var target = baseAddr.add(cmpOffset);

console.log("[*] Dumping Code BEFORE the check...");

// Go back 60 bytes to ensure we see the array access
var start = target.sub(60);

for (var i = 0; i < 15; i++) {
    try {
        var ins = Instruction.parse(start);
        console.log(ins.address.sub(baseAddr) + ":  " + ins.toString());
        start = ins.next;
    } catch (e) { break; }
}
