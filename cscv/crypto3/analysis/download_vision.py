"""Fetch only model.visual tensors, preserving exact checkpoint bytes."""
import argparse
import json
import struct
from pathlib import Path

import requests

REVISION = '89644892e4d85e24eaac8bacfd4f463576704203'
URL = f'https://huggingface.co/Qwen/Qwen3-VL-2B-Instruct/resolve/{REVISION}/model.safetensors'


def fetch(start, end):
    # Distinct URLs prevent intermediary caches from reusing a different range.
    with requests.get(URL + f'?range={start}-{end}',
                      headers={'Range': f'bytes={start}-{end}'},
                      stream=True, timeout=120) as response:
        response.raise_for_status()
        if response.status_code != 206:
            raise RuntimeError('Server ignored byte range; refusing full download')
        content_range = response.headers.get('Content-Range', '')
        if not content_range.startswith(f'bytes {start}-{end}/'):
            raise RuntimeError(f'Wrong byte range: {content_range}')
        data = response.content
        if len(data) != end - start + 1:
            raise RuntimeError('Incomplete byte range')
        return data


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--output', type=Path, default=Path('artifacts/vision.safetensors'))
    parser.add_argument('--inspect', action='store_true')
    parser.add_argument('--max-chunks', type=int,
                        help='Download this many 16 MiB ranges, then exit cleanly for later resume.')
    args = parser.parse_args()
    size = struct.unpack('<Q', fetch(0, 7))[0]
    header = json.loads(fetch(8, 7 + size))
    tensors = sorted(((k, v) for k, v in header.items() if k.startswith('model.visual.')),
                     key=lambda item: item[1]['data_offsets'][0])
    start = tensors[0][1]['data_offsets'][0]
    end = tensors[-1][1]['data_offsets'][1]
    assert sum(v['data_offsets'][1] - v['data_offsets'][0] for _, v in tensors) == end - start
    print(json.dumps({'tensors': len(tensors), 'bytes': end - start,
                      'absolute_start': 8 + size + start,
                      'absolute_end_inclusive': 8 + size + end - 1}, indent=2), flush=True)
    if args.inspect:
        # Verify actual data ranges too, without fetching the full vision slice.
        fetch(8 + size + start, 8 + size + start + 31)
        print('Header and tensor byte-range requests verified.')
        return
    compact = {}
    for name, spec in tensors:
        compact[name.removeprefix('model.visual.')] = {
            **spec, 'data_offsets': [offset - start for offset in spec['data_offsets']]}
    encoded = json.dumps(compact, separators=(',', ':')).encode()
    encoded += b' ' * (-len(encoded) % 8)
    args.output.parent.mkdir(parents=True, exist_ok=True)
    partial = args.output.with_suffix('.partial')
    prefix = struct.pack('<Q', len(encoded)) + encoded
    chunk_size = 16 * 1024 * 1024
    if partial.exists():
        existing = partial.stat().st_size
        with partial.open('rb') as handle:
            actual_prefix = handle.read(len(prefix))
        if existing < len(prefix) or actual_prefix != prefix:
            raise RuntimeError(f'Unexpected partial checkpoint format: {partial}')
        downloaded = existing - len(prefix)
        if downloaded > end - start:
            raise RuntimeError(f'Unexpected partial checkpoint length: {existing}')
        # A timed-out process can leave a partial final HTTP chunk. Discard only
        # that incomplete range; every retained range was length-checked by fetch.
        usable = downloaded - downloaded % chunk_size
        if usable != downloaded:
            with partial.open('r+b') as handle:
                handle.truncate(len(prefix) + usable)
            downloaded = usable
        mode = 'ab'
        print(f'Resuming at {downloaded}/{end - start} bytes', flush=True)
    else:
        downloaded = 0
        mode = 'wb'
    with partial.open(mode) as output:
        if not downloaded:
            output.write(prefix)
        count = 0
        for offset in range(start + downloaded, end, chunk_size):
            stop = min(offset + chunk_size, end)
            output.write(fetch(8 + size + offset, 8 + size + stop - 1))
            print(f'{stop - start}/{end - start} bytes', flush=True)
            count += 1
            if args.max_chunks and count >= args.max_chunks:
                print('Paused cleanly for resume.', flush=True)
                return
    partial.replace(args.output)


if __name__ == '__main__':
    main()
