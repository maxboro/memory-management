#include <stdio.h>

int main()
{
    // Create a char array in memory and initialize it with "Hello World"
    char str[] = "Hello World";
    printf("String: %s\n", str);
    
    // Create pointer to the first char of the char array
    char* first_char_ptr = str;
    printf("Memory location of first char of string: %p\n", first_char_ptr);
    
    // First char of the char array by dereferensing first_char_ptr
    printf("First char: %c\n", *first_char_ptr);
    
    // Create pointer to second char of the char array
    char* second_char_ptr = first_char_ptr + 1;
    printf("Memory location of second char of string: %p\n", second_char_ptr);
    
    // Second char of the char array by dereferensing second_char_ptr
    printf("Second char: %c\n", *second_char_ptr);
    return 0;
}
