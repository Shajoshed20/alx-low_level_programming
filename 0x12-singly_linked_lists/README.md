# 0x12. C - Singly linked lists

## General Learning Objectives
* When and why using linked lists vs arrays
* How to build and use linked lists

## Tasks
* Task 0 - Write a function that prints all the elements of a list_t list.
* Task 1 - Write a function that returns the number of elements in a linked list_t list.
* Task 2 - Write a function that adds a new node at the beginning of a list_t list.
* Task 3 - Write a function that adds a new node at the end of a list_t list.
* Task 4 - Write a function that frees a list_t list.
* Task 5 - Write a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.
* Task 6 - Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.

## More Info
Please use this data structure for this project:

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
