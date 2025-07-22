/*#include <stdio.h>

int main() {
    int a = 10;            // Integer variable
    float b = 5.25;        // Float variable
    char c = 'A';          // Character variable

    int *pInt = &a;        // Pointer to integer
    float *pFloat = &b;    // Pointer to float
    char *pChar = &c;      // Pointer to character

    // Printing the addresses and values
    printf("Address of a: %p\n",pInt);
    printf(" Value of a: %d\n", *pInt);
    printf("Address of b: %p," ,pFloat);
    printf(" Value of a: %d\n", *pFloat);
    printf("Address of c: %p", pChar);
    printf("Value of c: %c\n",  *pChar);

    return 0;
}*/
#include <stdio.h>

int main() {
    int var = 20;
    int *ptr;  // Declare a pointer to an integer

    ptr = &var;  // Initialize the pointer with the address of var

    printf("Value of var: %d\n", var);
    printf("Address of var: %p\n", &var);
    printf("Pointer ptr holds the address: %p\n", ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);

    return 0;
}

