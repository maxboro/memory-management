#include <stdio.h>

int main()
{
    // Declare an integer on the stack and initialize it to 5.
    int stack_value = 5;

    // Print the memory address of the stack variable.
    printf("%p\n", &stack_value);

    // Print the value stored in the stack variable.
    printf("%d", stack_value);

    // There is no need to manually free stack memory.
    // The memory for `stack_value` will automatically be reclaimed when the variable goes out of scope.
    return 0;
}
