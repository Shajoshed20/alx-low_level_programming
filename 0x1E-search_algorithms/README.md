# 0x1E.C - Search Algorithms

## General Learning Objectives :page_with_curl:

* What is a search algorithm
* What is a linear search
* What is a binary search
* What is the best search algorithm to use depending on your needs

## Tasks 

* Task 0 - Write a function that searches for a value in an array of integers using the Linear search algorithm
    - Prototype : `int linear_search(int *array, size_t size, int value);`
    - Where array is a pointer to the first element of the array to search in
    - size is the number of elements in array
    - And value is the value to search for
    - Your function must return the first index where value is located
    - If value is not present in array or if array is NULL, your function must return -1
    - Every time you compare a value in the array to the value you are searching, you have to print this value

* Task 1 - Write a function that searches for a value in a sorted array of integers using the Binary search algorithm
    - Prototype : `int binary_search(int *array, size_t size, int value);`
    - Where array is a pointer to the first element of the array to search in
    - size is the number of elements in array
    - And value is the value to search for
    - Your function must return the index where value is located
    - You can assume that array will be sorted in ascending order
    - You can assume that value won’t appear more than once in array
    - If value is not present in array or if array is NULL, your function must return -1
    - You must print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray)

* Task 2 - What is the time complexity (worst case) of a linear search in an array of size n?

* Task 3 - What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?

* Task 4 - What is the time complexity (worst case) of a binary search in an array of size n?

* Task 5 - What is the space complexity (worst case) of a binary search in an array of size n?

* Task 6 - What is the space complexity of this function / algorithm?
    `int **allocate_map(int n, int m)`
    `{`
         `int **map;`
        ``
         `map = malloc(sizeof(int *) * n);`
         `for (size_t i = 0; i < n; i++)`
         `{`
              `map[i] = malloc(sizeof(int) * m);`
         `}`
         `return (map);`
    `}`

* Task 7 - Write a function that searches for a value in a sorted array of integers using the Jump search algorithm
    - Prototype : `int jump_search(int *array, size_t size, int value);`
    - Where array is a pointer to the first element of the array to search in
    - size is the number of elements in array
    - And value is the value to search for
    - Your function must return the first index where value is located
    - You can assume that array will be sorted in ascending order
    - If value is not present in array or if array is NULL, your function must return -1
    - You have to use the square root of the size of the array as the jump step.
    - You can use the sqrt() function included in <math.h> (don’t forget to compile with -lm)
    - Every time you compare a value in the array to the value you are searching for, you have to print this value

* Task 8 - What is the time complexity (average case) of a jump search in an array of size n, using step = sqrt(n)?

* Task 9 - Prototype : `int interpolation_search(int *array, size_t size, int value);`
    - Where array is a pointer to the first element of the array to search in
    - size is the number of elements in array
    - And value is the value to search for
    - Your function must return the first index where value is located
    - You can assume that array will be sorted in ascending order
    - If value is not present in array or if array is NULL, your function must return -1
    - To determine the probe position, you can use : `size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]))`
    - Every time you compare a value in the array to the value you are searching, you have to print this value

* Task 10 - 
* Task 11 - 
* Task 12 - 
* Task 13 - 

* Task 14 - What is the time complexity (average case) of a jump search in a singly linked list of size n, using step = sqrt(n)?

* Task 15 - What is the time complexity (average case) of a jump search in a skip list of size n, with an express lane using step = sqrt(n)?
