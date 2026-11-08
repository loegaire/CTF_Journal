document.addEventListener('DOMContentLoaded', () => {
  const go = new Go();
  fetch('main.wasm')
    .then(response => response.arrayBuffer())
    .then(bytes => WebAssembly.instantiate(bytes, go.importObject))
    .then(result => {
      go.run(result.instance);
      initializeExtension();
    })
    .catch(err => {
      console.error('Failed to load WASM module:', err);
    });
});

function initializeExtension() {
  const input = document.getElementById('input');
  const output = document.getElementById('output');

  document.getElementById('btn-check').addEventListener('click', () => {
    if (typeof window.check !== 'function') return;
    output.innerText = 'Checking...';
    const res = window.check(input.value);
    output.innerText = res;
  });
}
