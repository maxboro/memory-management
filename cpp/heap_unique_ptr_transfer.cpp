#include <iostream>
#include <memory>

// unique_ptr transfer ownership example
int main()
{
    // Creation of a smart pointer (std::unique_ptr in this case), pointing to a
    // dynamically allocated memory location on the heap initialized with the value 5.
    auto heap_ptr = std::make_unique<int>(5);

    // Memory address of the dynamically allocated location managed by heap_ptr
    std::cout << "Heap mem loc: " << heap_ptr << std::endl;

    // Value stored at this location on heap, obtained by dereferencing heap_ptr
    std::cout << "Value heap: " << *heap_ptr << std::endl;

    // Transfer ownership of the heap memory from heap_ptr to heap_ptr_copy
    std::unique_ptr<int> heap_ptr_copy = std::move(heap_ptr);
    // heap_ptr is now null after the move operation
        
    // Memory address of the dynamically allocated location managed by heap_ptr_copy
    std::cout << "Heap mem loc (copy ptr): " << heap_ptr_copy << std::endl;

    // Value stored at this memory location using heap_ptr_copy
    std::cout << "Value heap (copy ptr): " << *heap_ptr_copy << std::endl;
    
    // Change the value at the memory location managed by heap_ptr_copy
    *heap_ptr_copy = 6;
    std::cout << "Value heap new copy ptr: " << *heap_ptr_copy << std::endl;

    // heap_ptr is null at this point due to the move operation. Dereferencing it
    // results in undefined behavior, which could cause crashes or other issues.
    std::cout << "Value heap original ptr: " << *heap_ptr << std::endl;
    
    return 0;
}
