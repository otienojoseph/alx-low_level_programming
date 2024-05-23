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

3. Big O .1
    - 3-O - What is the _space complexity_ (worst case) of an iterative linear search algorithm in an array of size n?

4. Big O .2
    - 4-O - What is the time complexity (worst case) of a binary search in an array of size n?

4. Big O .3
    - 5-O - What is the space complexity (worst case) of a binary search in an array of size n?

4. Big O .4
    - 6-O - What is the space complexity (worst case) of the given algorithm?
    ```
    int **allocate_map(int n, int m)
    {
        int **map;

        map = malloc(sizeof(int *) * n);
        for (size_t i = 0; i < n; i++)
        {
            map[i] = malloc(sizeof(int) * m);
        }
     return (map);
    }

    ```
