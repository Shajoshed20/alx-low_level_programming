#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -Entry point for function that adds integers
 * @argc: variable for number of arguments passed when compiled
 * @argv: variable for array of pointer to argument when compiled
 * Return: Always 0 and 1 - for none integer and 1 for error
 */
int main(int argc, char *argv[])
{
	int i, intr, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (intr = 0; argv[i][intr]; intr++)
		{
			if (argv[i][intr] < '0' || argv[i][intr] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		add += atoi(argv[i]);
	}

	printf("%d\n", add);

	return (0);
}
