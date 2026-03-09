#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    // This executable should be executable but not readable
    puts("TEST{FLAG}");
    return 0;
}