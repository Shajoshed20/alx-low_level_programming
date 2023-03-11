#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for function that prints program name
 * @argc: variable for arguments of number of items wheb compiled
 * @argv: variable for array of pointer to argument
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
}
