#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -Entry point for function that multiplies two integers
 * @argc: variable for number of arguments passed when compiled
 * @argv: variable for array of pointer to argument when compiled
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, j, mul = 0;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mul = i * j;

	printf("%d\n", mul);

	return (0);
}
