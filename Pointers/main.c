#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int num = 42;
    int *ptr;  // Declare a pointer to int

    ptr = &num;  // Store address of num in ptr

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value of ptr (address stored): %p\n", ptr);
    printf("Value pointed by ptr: %d\n", *ptr);  // Dereferencing

    // Changing value through pointer
    *ptr = 100;
    printf("\nAfter *ptr = 100:\n");
    printf("Value of num: %d\n", num);

    return 0;
}
