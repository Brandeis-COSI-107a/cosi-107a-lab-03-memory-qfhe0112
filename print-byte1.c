#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        int num = atoi(argv[i]);   
        int byte1 = (num >> 8) & 0xFF; 
        printf("%-3d 0x%02X %-3d\n", i, byte1, byte1);
    }
    return 0;
}

