int main()
{
    // This code allocates 40,000,000 bytes (or approximately 38.15 MB) on the stack,
    // which leads to stack overflow on most computers due to limited stack size.
    int array[10000000]; // 10,000,000 integers (4 bytes each)
    return 0;
}
