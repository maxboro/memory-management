#include <stdio.h>
#include <stdlib.h>

void print_element(int* arr, int i){
    printf("%dth element of array\n", i);
    printf("Address: %p\n", (void *)(arr + i));
    printf("Value: %d\n", *(arr + i));
}

int main()
{
    const size_t arr_size = 4;
    
    // Array in dynamically allocated memory location on the heap
    int* array_int = malloc(arr_size * sizeof(int));
    if (array_int == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }
    
    // Before initialization
    printf("Before initialization\n");
    for (int i = 0; i < arr_size; i++){
        print_element(array_int, i);
    }
    
    // Set values
    for (int i = 0; i < arr_size; i++){
        *(array_int + i) = i * 10;
    }
    
    // After initialization
    printf("\nAfter initialization\n");
    for (int i = 0; i < arr_size; i++){
        print_element(array_int, i);
    }
    
    // Deallocate memory of array
    free(array_int);
    
    // After cleaning
    // Would lead to undefined behavior
    printf("\nAfter cleaning\n");
    for (int i = 0; i < arr_size; i++){
        print_element(array_int, i);
    }


    array_int = NULL;
    return 0;
}
