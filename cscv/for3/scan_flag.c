#include <stdio.h>
#include <stdint.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int argc, char **argv) {
    for (int arg = 1; arg < argc; arg++) {
        int descriptor = open(argv[arg], O_RDONLY);
        struct stat info;
        if (descriptor < 0 || fstat(descriptor, &info) || !info.st_size) continue;
        uint8_t *data = mmap(NULL, info.st_size, PROT_READ, MAP_PRIVATE, descriptor, 0);
        if (data == MAP_FAILED) { close(descriptor); continue; }
        for (size_t offset = 0; offset + 10 < (size_t)info.st_size; offset++) {
            if (data[offset] != data[offset + 2]) continue;
            int kind = -1;
            int key = data[offset] ^ 'C';
            if ((data[offset + 1] ^ key) == 'S' && (data[offset + 3] ^ key) == 'V' && (data[offset + 4] ^ key) == '{') kind = 0;
            int shift = (data[offset] - 'C' + 94) % 94;
            if (data[offset] >= 33 && data[offset] < 127 && data[offset + 1] == ('S' - 33 + shift) % 94 + 33 && data[offset + 3] == ('V' - 33 + shift) % 94 + 33 && data[offset + 4] == ('{' - 33 + shift) % 94 + 33) kind = 1;
            if (kind < 0) continue;
            char output[201] = {0};
            for (size_t index = 0; index < 200 && offset + index < (size_t)info.st_size; index++) {
                int value = kind ? (data[offset + index] - 33 - shift + 188) % 94 + 33 : data[offset + index] ^ key;
                if (value < 32 || value > 126) break;
                output[index] = value;
                if (value == '}') {
                    printf("%s 0x%zx %s %d %s\n", argv[arg], offset, kind ? "rotate" : "xor", kind ? shift : key, output);
                    break;
                }
            }
        }
        munmap(data, info.st_size);
        close(descriptor);
    }
    return 0;
}
