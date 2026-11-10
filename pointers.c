#include <stdio.h>
// pointers in c language
int main() {
    int num = 10;
    int *ptr;

    // Store the address of num in ptr
    ptr = &num;

    printf("Value of num       : %d\n", num);
    printf("Address of num     : %p\n", (void *)&num);
    printf("Value of ptr       : %p\n", (void *)ptr);
    printf("Value using *ptr   : %d\n", *ptr);

    // Changing value using pointer
    *ptr = 20;

    printf("\nAfter changing value using pointer:\n");
    printf("Value of num       : %d\n", num);
    printf("Value using *ptr   : %d\n", *ptr);

    return 0;
}
