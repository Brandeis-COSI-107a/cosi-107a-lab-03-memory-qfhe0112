#include <stdio.h>

int main() {
    // Step 1: Declare an integer variable with a value of 978
    int myInt = 978;
    
    // Step 2: Declare an integer pointer variable
    int *intPtr;
    
    // Step 3: Declare a character array variable with size 200
    char charArray[200];
    
    // Step 4: Declare a character pointer variable
    char *charPtr;
    
    // Step 5: Print sizes of various types
    printf("The size of char is %lu\n", sizeof(char));
    printf("The size of short is %lu\n", sizeof(short));
    printf("The size of int is %lu\n", sizeof(int));
    printf("The size of long is %lu\n", sizeof(long));
    printf("The size of long long is %lu\n", sizeof(long long));
    printf("The size of float is %lu\n", sizeof(float));
    printf("The size of double is %lu\n", sizeof(double));
    printf("The size of char* is %lu\n", sizeof(char*));
    printf("The size of int* is %lu\n", sizeof(int*));
    printf("The size of long* is %lu\n", sizeof(long*));
    
    // Step 6: Print size of character array
    printf("The size of my character array is %lu\n", sizeof(charArray));
    
    // Step 7: Set the character pointer to point to the character array
    charPtr = charArray;
    
    // Step 8: Print size of the character pointer
    printf("The size of my character pointer is %lu\n", sizeof(charPtr));
    
    // Step 9: Set the integer pointer to point to the integer variable
    intPtr = &myInt;
    
    // Step 10: Print size of integer pointer
    printf("The size of my int pointer is %lu\n", sizeof(intPtr));
    
    // Step 11: Print size of what the integer pointer points at
    printf("The size of what my integer pointer points at is %lu\n", sizeof(*intPtr));
    
    return 0;
}

