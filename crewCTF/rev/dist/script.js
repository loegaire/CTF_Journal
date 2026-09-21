async function load() {
    window.vault = await WebAssembly.instantiateStreaming(fetch("vault.wasm"), {
        env: {
            x(number) {
                let result = 0;
                while (number !== 0) {
                    result ^= number & 1;
                    number >>>= 1;
                }
                return result;
            }
        }
    });
}

function unlock() {
    const field = document.getElementById("vault");
    const flag = field.value;

    const flagEncoded = new TextEncoder().encode(flag);

    if (flagEncoded.length >= 0x100) {
        return false;
    }

    new Uint8Array(window.vault.instance.exports.memory.buffer).set(flagEncoded);
    new Uint8Array(window.vault.instance.exports.memory.buffer).set([0], flagEncoded.length);

    const result = window.vault.instance.exports.unlock() != 0;

    if (result) {
        field.classList.remove("is-danger");
        field.classList.add("is-success");
    } else {
        field.classList.remove("is-success");
        field.classList.add("is-danger");
    }
}

load();
