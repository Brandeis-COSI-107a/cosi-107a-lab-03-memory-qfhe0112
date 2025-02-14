#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        int num = atoi(argv[i]);  
        int low8 = num & 0xFF;    
        printf("%-3d 0x%02X %-3d\n", i, low8, low8);
    }
    return 0;
}

