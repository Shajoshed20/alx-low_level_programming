#include <stdio.h>
#include <stdlib.h>

/**
 * main - main entry point with arguments.
 * @argc: Variable for number fo arguments passed.
 * @argv: Variable for pointer to array of arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	int a, i;
	int (*location)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	a = atoi(argv[1]);

	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < a; i++)
	{
		opcode = *(unsigned char *)location;
		printf("%.2x", opcode);

		if (i == a - 1)
			continue;
		printf(" ");

		location++;
	}

	printf("\n");

	return (0);
}
