from concurrent.futures import ThreadPoolExecutor
from pathlib import Path
import urllib.request


url = "https://kojihub.stream.centos.org/kojifiles/packages/kernel/5.14.0/22.el9/x86_64/kernel-debuginfo-5.14.0-22.el9.x86_64.rpm"
size = 503937869
chunk_size = 32 * 1024 * 1024
destination = Path("tools/kernel-parts")
destination.mkdir(parents=True, exist_ok=True)


def fetch(start):
    end = min(start + chunk_size, size) - 1
    path = destination / f"{start:012d}.part"
    if path.exists() and path.stat().st_size == end - start + 1:
        return path
    request = urllib.request.Request(url, headers={"Range": f"bytes={start}-{end}"})
    with urllib.request.urlopen(request, timeout=180) as response:
        if response.status != 206:
            raise RuntimeError(f"Server did not honor byte range: {response.status}")
        with path.open("wb") as output:
            while data := response.read(1024 * 1024):
                output.write(data)
    if path.stat().st_size != end - start + 1:
        raise RuntimeError(f"Incomplete download: {path}")
    print(f"Downloaded {start}-{end}", flush=True)
    return path


with ThreadPoolExecutor(max_workers=8) as executor:
    paths = list(executor.map(fetch, range(0, size, chunk_size)))
with Path("tools/kernel-debuginfo.rpm").open("wb") as output:
    for path in paths:
        with path.open("rb") as stream:
            while data := stream.read(1024 * 1024):
                output.write(data)
print("Complete", flush=True)
