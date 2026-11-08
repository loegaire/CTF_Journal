#!/usr/bin/env bash
set -eu
cd "$(dirname "$0")"
docker run --rm -i --network none --cap-drop ALL --security-opt no-new-privileges \
  ghcr.io/easycrypt/ec-test-box@sha256:2ea3ceab00442f915e662f66bf10ece4ae707121973a7056cebd38c7f2d77aa6 \
  sh -c 'cat > /tmp/BabyCircuit.ec
opam exec -- easycrypt -no-eco /tmp/BabyCircuit.ec' < BabyCircuit.ec
