#include <iostream>

int main()
{
    // Dynamically allocate memory on the heap for an integer and initialize it to 5.
    // `new` returns a pointer to the allocated memory.
    int* heap_value = new int(5);
    
    // Print the memory address of the dynamically allocated integer.
    std::cout << "Heap mem loc: " << heap_value << std::endl;

    // Dereference the pointer to print the value stored at the allocated memory.
    std::cout <<  "Value heap: " << *heap_value << std::endl;
    
    // Free the dynamically allocated memory using `delete`.
    // After this point, `heap_value` becomes a dangling pointer because the memory it points to is deallocated.
    delete heap_value;

    // Print the pointer value after deletion.
    // The pointer still holds the address of the previously allocated memory,
    // but accessing it is undefined behavior because the memory has been freed.
    std::cout << "Heap mem loc after free: " << heap_value << std::endl;

    // Dereference the dangling pointer. This is undefined behavior and can cause a crash or unpredictable behavior.
    std::cout << "Value heap after free: " << *heap_value << std::endl;

    return 0;
}
