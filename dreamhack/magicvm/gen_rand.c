#include <stdio.h>
#include <stdlib.h>

int main() {
    srand(0x1337);
    // Print first 1000 rand values
    for (int i = 0; i < 1000; i++) {
        printf("%d\n", rand());
    }
    return 0;
}
