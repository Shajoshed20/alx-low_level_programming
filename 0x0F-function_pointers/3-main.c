#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - main entry point
  * @argc: Variable for number of arguments
  * @argv: Variable for pointer to arguments
  *
  * Return: int type
  */
int main(int argc, char *argv[])
{
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = get_op_func(argv[2]);

	if (!op)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", op(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
