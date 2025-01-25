#include <iostream>

void print_element(int* arr, int i){
    std::cout << i << "th element of array" << std::endl;
    std::cout << "Address: " << arr + i << std::endl;
    std::cout << "Value: " << *(arr + i) << std::endl;
}

int main()
{
    const size_t arr_size = 4;
    
    // Array in dynamically allocated memory location on the heap
    int* array_int = new int[arr_size];
    
    
    // Before initialization
    std::cout << "Before initialization" << std::endl;
    for (int i = 0; i < arr_size; i++){
        print_element(array_int, i);
    }
    
    // Set values
    for (int i = 0; i < arr_size; i++){
        *(array_int + i) = i * 10;
    }
    
    // After initialization
    std::cout << "\nAfter initialization" << std::endl;
    for (int i = 0; i < arr_size; i++){
        print_element(array_int, i);
    }
    
    // Deallocate memory of array
    delete[] array_int;
    
    // After cleaning
    // Would lead to undefined behavior
    std::cout << "\nAfter cleaning" << std::endl;
    for (int i = 0; i < arr_size; i++){
        print_element(array_int, i);
    }
    return 0;
}