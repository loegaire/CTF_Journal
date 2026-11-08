#include <openssl/aes.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char **argv) {
    const unsigned char salt[16] = {0x8d,0xc8,0x52,0xf2,0xee,0x34,0xb2,0xba,0xd7,0xde,0x79,0x2d,0xb5,0x7c,0x6f,0x84};
    const unsigned char counter_cipher[16] = {0x46,0x3f,0x2f,0xc4,0x28,0x04,0xe5,0x4a,0x6e,0xa5,0xcd,0x7a,0x73,0x27,0x6a,0x11};
    const unsigned char ciphertext[16] = {0x78,0x86,0xc0,0x85,0xd2,0x82,0xfb,0x15,0x2e,0x88,0x78,0x72,0x3b,0x57,0x46,0x69};
    for (int arg = 1; arg < argc; arg++) {
        int descriptor = open(argv[arg], O_RDONLY);
        struct stat info;
        if (descriptor < 0 || fstat(descriptor, &info) || info.st_size < 32) continue;
        unsigned char *memory = mmap(NULL, info.st_size, PROT_READ, MAP_PRIVATE, descriptor, 0);
        if (memory == MAP_FAILED) continue;
        for (size_t offset = 0; offset + 32 <= (size_t)info.st_size; offset += 8) {
            int zeros = 0;
            for (int index = 0; index < 32; index++) zeros += memory[offset + index] == 0;
            if (zeros > 3) continue;
            AES_KEY key;
            unsigned char counter[16], stream[16];
            AES_set_encrypt_key(memory + offset, 256, &key);
            AES_encrypt(salt, stream, &key);
            for (int index = 0; index < 16; index++) counter[index] = stream[index] ^ counter_cipher[index];
            AES_encrypt(counter, stream, &key);
            if ((stream[0] ^ ciphertext[0]) != '{' || (stream[1] ^ ciphertext[1]) != '"' || (stream[2] ^ ciphertext[2]) != 'm' || (stream[3] ^ ciphertext[3]) != 'a') continue;
            printf("FOUND %s + 0x%zx KEY ", argv[arg], offset);
            for (int index = 0; index < 32; index++) printf("%02x", memory[offset + index]);
            printf("\n");
            fflush(stdout);
        }
        munmap(memory, info.st_size);
        close(descriptor);
    }
    return 0;
}
