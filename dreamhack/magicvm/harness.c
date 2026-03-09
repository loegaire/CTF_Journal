#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dlfcn.h>

typedef unsigned char (*transform_func_t)(unsigned char *, unsigned char);

unsigned long find_base(const char *libname) {
    FILE *maps = fopen("/proc/self/maps", "r");
    char line[512];
    unsigned long base = 0;
    while (fgets(line, sizeof(line), maps)) {
        if (strstr(line, libname) && strstr(line, "r-x")) {
            unsigned long map_addr = strtoul(line, NULL, 16);
            unsigned long offset = 0;
            char *p = strchr(line, ' ');
            if (p) p = strchr(p+1, ' ');
            if (p) offset = strtoul(p+1, NULL, 16);
            base = map_addr - offset;
            break;
        }
    }
    fclose(maps);
    return base;
}

int main() {
    void *handle = dlopen("./main.so", RTLD_NOW);
    if (!handle) { fprintf(stderr, "dlopen: %s\n", dlerror()); return 1; }
    
    unsigned long base = find_base("main.so");
    transform_func_t transform = (transform_func_t)(base + 0x7a8da);
    
    unsigned char input[32];
    int sensitive_count = 0;
    
    // Test all 256 bytecode indices, with 100 different rand states each,
    // comparing zeros vs 0xff inputs
    printf("=== Full sensitivity scan: 256 indices × 100 rand states ===\n");
    
    for (int idx = 0; idx < 256; idx++) {
        int is_sensitive = 0;
        for (int advance = 0; advance < 100 && !is_sensitive; advance++) {
            memset(input, 0, 32);
            srand(0x1337);
            for (int i = 0; i < advance; i++) rand();
            unsigned char r0 = transform(input, idx);
            
            memset(input, 0xff, 32);
            srand(0x1337);
            for (int i = 0; i < advance; i++) rand();
            unsigned char rff = transform(input, idx);
            
            if (r0 != rff) {
                printf("SENSITIVE: idx=%3d advance=%d zeros=%02x ff=%02x\n",
                       idx, advance, r0, rff);
                is_sensitive = 1;
                sensitive_count++;
            }
        }
    }
    
    printf("\nSensitive: %d / 256\n", sensitive_count);
    
    if (sensitive_count == 0) {
        printf("\n=== NONE sensitive! Transform truly ignores input! ===\n");
        printf("The transform function output only depends on:\n");
        printf("  1. The bytecode_idx argument\n");
        printf("  2. The internal rand() state\n");
        printf("\nThis means the VM execution is DETERMINISTIC regardless of input.\n");
        printf("The input must be checked some other way.\n");
        
        // Let's verify: the first arg to transform is the input pointer
        // Maybe the function uses it not as input[idx] but as some other state?
        // Let me check if check() stores anything in the input buffer area
        // and the transform reads from a different offset
        
        printf("\n=== Testing with different pointer values ===\n");
        unsigned char input2[64];
        memset(input2, 0xAA, 64);
        
        srand(0x1337);
        unsigned char r1 = transform(input, 0); // input = zeros, 32 bytes
        
        srand(0x1337);
        unsigned char r2 = transform(input2, 0); // input2 = 0xAA, 64 bytes
        
        printf("transform(zeros32, 0) = %02x\n", r1);
        printf("transform(0xAA*64, 0) = %02x\n", r2);
    }
    
    dlclose(handle);
    return 0;
}
