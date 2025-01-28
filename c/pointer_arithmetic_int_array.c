#include <stdio.h>

int main()
{
    // Create int array in memory and initialize it with 1, 2, 3
    int arr[] = {1, 2, 3};

    // Create pointer to the first int of the array
    int* first_int_ptr = arr;
    printf("Memory location of first int of the array: %p\n", first_int_ptr);
    
    // First int of the array by dereferensing first_int_ptr
    printf("First int: %d\n", *first_int_ptr);
    
    // Create pointer to second int of the array
    // Pointer arithmetic for int* automatically accounts for sizeof(int)
    int* second_int_ptr = first_int_ptr + 1;
    printf("Memory location of second int of the array: %p\n", second_int_ptr);
    
    // Second int of the array by dereferensing second_int_ptr
    printf("Second int: %d\n", *second_int_ptr);
    return 0;
}
