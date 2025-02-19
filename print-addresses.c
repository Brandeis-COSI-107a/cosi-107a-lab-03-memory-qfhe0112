#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <decimal numbers>\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        unsigned long long decimal_value = strtoull(argv[i], NULL, 10);
        printf("0x%012llX\n", decimal_value & 0xFFFFFFFFFFFFULL);
    }

    return 0;
}

