#include "main.h"
#include <stdio.h>

/**
 * main -Entry point for function that prints number of arguments passed
 * @argc: variable for number of arguments passed when compiled
 * @argv: variable for array of pointer to argument when compiled
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
