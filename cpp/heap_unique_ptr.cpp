#include <iostream>
#include <memory>

int main()
{
    // Creation of a smart pointer (std::unique_ptr in this case), pointing to a
    // dynamically allocated memory location on the heap initialized with the value 5.
    auto heap_ptr = std::make_unique<int>(5);
    
    // Memory address of the dynamically allocated location on the heap
    std::cout << "Heap mem loc: " << heap_ptr << std::endl;
    
    // Value stored at this location on heap
    std::cout << "Value heap: " << *heap_ptr << std::endl;
    
    // Change the value at the memory location managed by the unique_ptr
    *heap_ptr = 6;
    std::cout << "Value heap new: " << *heap_ptr << std::endl;
    
    // There is no need to manually free heap memory in this case.
    // The memory will be automatically released when heap_ptr goes out of scope,
    // as unique_ptr ensures the proper cleanup of the resource it manages.
    return 0;
}
