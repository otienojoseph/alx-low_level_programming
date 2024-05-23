# 0x1E. C - Search Algorithms

### Header File

- [search_algos.h](./search_algos.h) Header file containing definitions and prototypes for the functions written

### Function prototypes

| File | Function Prototype |
| --------------- | --------------- |
| 0-linear.c | int linear_search(int *array, size_t size, int value); |
| 1-binary.c | int binary_search(int *array, size_t size, int value); |

### Tasks
0. Linear Search
    - 0-linear - Function that searches for a value in an array of integers using linear search
    - If the value is not present or array is *NULL*, return *-1*
        - Otherwise returns the index where *value* is located

1. Binary Search
    - 1-binary = Function that searches for a value in an array of integers using binary search algorithm
    - Assumes array is sorted in ascending order and the value to search for is not repeated in the array
    - If value is not present or array is *NULL*, returns *-1*
        - Otherwise, returns index where *value* is located

2. Big O .0
    - 2-O - What is the time complexity (worst case) of a linear search in an array of size n?

