#include <stdio.h>

int main()
{
    // Create a char array in memory and initialize it with "Hello World"
    char str[] = "Hello World";
    printf("String: %s\n", str);
    
    // Create pointer to the first char of the char array
    char* first_char_ptr = str;
    printf("Memory location of first char of the string: %p\n", first_char_ptr);
    
    // First char of the char array by dereferensing first_char_ptr
    printf("First char: %c\n", *first_char_ptr);
    
    // Create double pointer to first char of the char array
    char** double_ptr = &first_char_ptr;
    printf("Memory location of pointer to the first char of the string: %p\n", double_ptr);
    
    // First char of the char array by dereferensing double pointer
    printf("First char: %c\n", **double_ptr);
    return 0;
}
