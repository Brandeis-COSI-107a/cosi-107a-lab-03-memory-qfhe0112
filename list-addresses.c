#include <stdio.h>

// Uninitialized global variable (BSS segment)
int global_uninit;

// Function definition
void my_function() {}

int main() {
    // Stack variable
    int stack_var = 42;

    // String constant (stored in the .rodata section)
    const char *string_literal = "initialized data";

    // Print addresses
    printf("stack variable: %p\n", (void *)&stack_var);
    printf("initialized data: %p\n", (void *)string_literal);
    printf("uninitialized data: %p\n", (void *)&global_uninit);
    printf("main: %p\n", (void *)main);
    printf("function: %p\n", (void *)my_function);

    return 0;
}

