// Execute recovered source unchanged, altering only player-supplied bounds.
const fs = require('fs'), vm = require('vm'), assert = require('assert');
const source = fs.readFileSync(process.argv[2] || 'artifacts/game.js', 'utf8');
const ctx = vm.createContext({});
vm.runInContext(source, ctx);
// All obstacles appear within [15%,85%] of the supplied road width.
// Initialize at zero, then place zero near the left edge of a huge road.
let input = {up:true, bounds:{left:-100,right:100}};
let res = JSON.parse(ctx.tick(JSON.stringify(input)));
input.bounds = {left:-100,right:1e9};
let frames=1;
while (!res.state.finished && frames < 20000) {
  res = JSON.parse(ctx.tick(JSON.stringify(input)));
  assert(!res.state.crashed && !res.state.blocked);
  frames++;
}
assert(res.state.finished && res.state.currentLap === 28);
console.log(JSON.stringify({frames, state:res.state}, null, 2));
