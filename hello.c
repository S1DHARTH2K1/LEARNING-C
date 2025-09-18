#include <stdio.h>

int main() {
    // 1. A normal integer variable (the "house")
    int num = 42;

    // 2. A pointer variable that can store the address of an integer.
    // The asterisk here declares it as a pointer.
    int *ptr;

    // 3. Let's store the address of 'num' in our pointer.
    // Read this as: "The pointer 'ptr' gets the address of 'num'".
    ptr = &num;

    // Now let's see what we have!
    printf("--- Let's inspect our variables ---\n");
    printf("The value of the variable 'num' is: %d\n", num);
    printf("The memory address of 'num' is: %p\n", &num); // Use %p for printing addresses

    printf("\n--- Let's inspect our pointer ---\n");
    printf("The value of the pointer 'ptr' is: %p\n", ptr); // Note: this is the same address as above!
    printf("The value AT THE ADDRESS the pointer is pointing to is: %d\n", *ptr); // We use '*' to get the value

    return 0;
}