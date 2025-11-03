#include <stdio.h>

int main() {
    int a = 10;
    int *ptr;   // pointer declaration
    ptr = &a;   // assign address of a to ptr

    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Value stored in ptr: %p\n", ptr);
    printf("Value pointed by ptr: %d\n", *ptr);

    return 0;
}
