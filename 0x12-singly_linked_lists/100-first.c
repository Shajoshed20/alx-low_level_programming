#include <stdio.h>

void print(void) __attribute__ ((constructor));

/**
 * print - function to print a string before
 *		main function
 *
 * Return: Nothing.
 */
void print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
