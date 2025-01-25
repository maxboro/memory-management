# Memory management cheatsheet for C/C++

## Difference Between Heap and Stack Memory

Heap and stack memory are two areas of memory used for different purposes in programming:

### **Stack Memory**
- **Purpose**: Used for storing temporary, local variables and function call information.
- **Characteristics**:
  - Automatically managed (allocated and deallocated when functions are called and return).
  - Follows a Last In, First Out (LIFO) structure.
  - Fast allocation and deallocation.
  - Size is usually limited and predefined.
- **Example**: Local variables declared in a function (`int x = 10;`).

### **Heap Memory**
- **Purpose**: Used for dynamic memory allocation, where the lifetime of the memory can extend beyond the scope of the function.
- **Characteristics**:
  - Manually managed (you need to explicitly allocate and deallocate memory).
  - Larger in size compared to the stack.
  - Slower to allocate and deallocate because of the need for manual management.
  - Risk of memory leaks if not properly deallocated.
- **Example**: Allocating memory dynamically with `malloc` (C) or `new` (C++/Java).

### **Key Differences**

| Aspect            | Stack                           | Heap                           |
|-------------------|---------------------------------|--------------------------------|
| **Management**    | Automatically managed          | Manually managed              |
| **Speed**         | Faster                         | Slower                        |
| **Lifetime**      | Tied to function scope         | Can persist until explicitly freed |
| **Size**          | Limited and small              | Large and expandable          |
| **Errors**        | Stack overflow (exceeding limit) | Memory leaks or fragmentation |

