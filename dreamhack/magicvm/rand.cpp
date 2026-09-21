#include <stdio.h>
#include <stdlib.h>

int main() {
    srand(0x1337);
    printf("Random Sequence:\n");
    for(int i=0; i<20; i++) {
        int r = rand();
        // Mimic the logic in sub_7A8DA to see the indices
        int idx1 = r & 0x1F;
        int idx2 = (r >> 5) & 0x1F;
        int idx3 = (r >> 10) & 0x1F;
        printf("%d: %d %d %d\n", i, idx1, idx2, idx3);
    }
    return 0;
}
