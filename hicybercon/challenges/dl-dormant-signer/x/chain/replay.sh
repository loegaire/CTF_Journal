#!/usr/bin/env bash
# Rebuild the custody-desk archive chain on a fresh local anvil.
#
#   ./replay.sh                 # boots anvil on 127.0.0.1:8545, replays, stays up
#   PORT=9545 ./replay.sh       # pick another port
#   DETACH=1 ./replay.sh        # replay, print the anvil PID, return to the shell
#
# Needs: anvil (Foundry), curl, and a POSIX userland (sed, grep). Nothing is
# fetched over the network. Every transaction in transactions.jsonl is a
# pre-signed legacy (type-0) transaction with its gas limit and gas price fixed
# at signing time, and every block timestamp is pinned, so the rebuilt chain is
# byte-identical on every run: same addresses, same transaction hashes, same
# block hashes. The script checks the final head hash against HEAD at the end.
set -euo pipefail

HERE="$(cd "$(dirname "$0")" && pwd)"
PORT="${PORT:-8545}"
RPC="http://127.0.0.1:${PORT}"
CHAIN_ID=7411

for tool in anvil curl sed grep; do
    command -v "$tool" >/dev/null 2>&1 || { echo "replay: '$tool' not found on PATH" >&2; exit 1; }
done

rpc() {
    curl -s --max-time 30 -X POST -H 'content-type: application/json' \
        --data "{\"jsonrpc\":\"2.0\",\"id\":1,\"method\":\"$1\",\"params\":$2}" "$RPC"
}

field() {   # field <json> <key>   -> first string-or-number value of "key"
    printf '%s' "$1" | sed -nE "s/.*\"$2\":\"?([^\",}]*)\"?.*/\1/p"
}

if rpc eth_chainId '[]' >/dev/null 2>&1; then
    echo "replay: something is already listening on ${RPC}; stop it or set PORT" >&2
    exit 1
fi

# Pinned node configuration. Do not change these: they are part of what makes
# the chain reproducible (the genesis block, the fee market, the EVM rules).
anvil \
    --init "$HERE/genesis.json" \
    --chain-id "$CHAIN_ID" \
    --hardfork cancun \
    --base-fee 0 \
    --gas-limit 30000000 \
    --accounts 0 \
    --disable-default-create2-deployer \
    --port "$PORT" \
    --silent >"$HERE/.anvil.log" 2>&1 &
ANVIL_PID=$!
echo "$ANVIL_PID" >"$HERE/.anvil.pid"

cleanup() { kill "$ANVIL_PID" 2>/dev/null || true; }
if [ -z "${DETACH:-}" ]; then trap cleanup EXIT INT TERM; fi

for _ in $(seq 1 100); do
    rpc eth_chainId '[]' 2>/dev/null | grep -q '"result"' && break
    sleep 0.1
done
rpc eth_chainId '[]' | grep -q "\"result\":\"$(printf '0x%x' "$CHAIN_ID")\"" || { echo "replay: anvil did not come up (see .anvil.log)" >&2; exit 1; }

total=$(grep -c '"raw"' "$HERE/transactions.jsonl")
count=0
while IFS= read -r line; do
    [ -n "$line" ] || continue
    n=$(field "$line" n)
    ts=$(field "$line" timestamp)
    raw=$(field "$line" raw)
    want=$(field "$line" hash)

    rpc evm_setNextBlockTimestamp "[$ts]" | grep -q '"result"' \
        || { echo "replay: could not pin timestamp for tx #$n" >&2; exit 1; }
    resp=$(rpc eth_sendRawTransaction "[\"$raw\"]")
    got=$(field "$resp" result)
    if [ "$got" != "$want" ]; then
        echo "replay: tx #$n rejected or hash mismatch: $resp" >&2
        exit 1
    fi
    receipt=""
    for _ in $(seq 1 200); do
        receipt=$(rpc eth_getTransactionReceipt "[\"$want\"]")
        printf '%s' "$receipt" | grep -q '"blockHash"' && break
        sleep 0.05
    done
    printf '%s' "$receipt" | grep -q '"blockHash"' \
        || { echo "replay: no receipt for tx #$n ($want)" >&2; exit 1; }
    count=$((count + 1))
    if [ $((count % 50)) -eq 0 ]; then echo "replay: $count/$total"; fi
done <"$HERE/transactions.jsonl"

head_hash=$(field "$(rpc eth_getBlockByNumber '["latest",false]')" hash)
echo "replay: $count transactions replayed, head block hash $head_hash"
want_head=$(sed -n '1p' "$HERE/HEAD" 2>/dev/null || true)
if [ -z "$want_head" ]; then
    echo "replay: no HEAD file to compare against"
elif [ "$head_hash" = "$want_head" ]; then
    echo "replay: OK -- head matches HEAD; the chain is byte-identical to the archive"
else
    echo "replay: WARNING -- head does not match HEAD ($want_head)." >&2
    echo "replay: Transaction hashes and contract addresses are fixed by the signed" >&2
    echo "replay: transactions and cannot differ; a different head usually means a" >&2
    echo "replay: different anvil version filled block headers differently. Pinned: anvil 1.8.5." >&2
fi

echo "replay: node is up at ${RPC} (chain id ${CHAIN_ID})"
if [ -n "${DETACH:-}" ]; then
    echo "replay: anvil PID ${ANVIL_PID} (stop it with: kill ${ANVIL_PID})"
    exit 0
fi
echo "replay: Ctrl-C to stop"
wait "$ANVIL_PID"
