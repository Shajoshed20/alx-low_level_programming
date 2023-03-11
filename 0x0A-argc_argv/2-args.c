#include "main.h"
#include <stdio.h>

/**
 * main -Entry point for function that prints strings on new lines
 * @argc: variable for number of arguments passed when compiled
 * @argv: variable for array of pointer to argument when compiled
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
