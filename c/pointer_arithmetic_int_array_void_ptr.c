#include <stdio.h>

int main()
{
    // Create an int array in memory and initialize it with 1, 2, 3
    int arr[] = {1, 2, 3};

    // Create a void pointer to the first int of the array
    void* first_int_ptr = arr;
    printf("Memory location of first int of the array: %p\n", (int *)first_int_ptr);
    
    // First int of the array by dereferensing first_int_ptr
    printf("First int: %d\n", *(int *)first_int_ptr);
    
    // Create void pointer to second int of the array
    // Cast to char* for pointer arithmetic
    void* second_int_ptr = (char*)first_int_ptr + sizeof(int);
    printf("Memory location of second int of the array: %p\n", (int *)second_int_ptr);
    
    // Second int of the array by dereferensing second_int_ptr
    printf("Second int: %d\n", *(int *)second_int_ptr);
    return 0;
}
