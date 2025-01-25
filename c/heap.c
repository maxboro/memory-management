#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variable declared in memory statically allocated on stack
    int value = 5;
    printf("Value stack: %d\n", value);
    
    // size of the variable `value`
    printf("Size: %ld bytes\n", sizeof(value));
    
    // Dynamically allocate memory for one integer on heap
    int *value_ptr = malloc(sizeof(value));
    if (value_ptr == NULL) { //check if malloc succeeded
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }
    printf("Heap mem loc: %p\n", (void *)value_ptr);
    
    // Assign a value to the dynamically allocated memory on heap
    *value_ptr = 7;
    printf("Value heap: %d\n", *value_ptr);
    
    // Free the dynamically allocated memory on heap
    free(value_ptr);
    
    // Accessing freed memory is undefined behavior; the value is no longer valid
    printf("Value heap after free %d\n", *value_ptr);
    
    return 0;
}
