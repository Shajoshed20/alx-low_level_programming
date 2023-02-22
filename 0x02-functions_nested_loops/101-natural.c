#include <stdio.h>
/**
 * main - computes and prints the summ of all multiple of 3 or 5
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, sum = 0;

	for (a = 0; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			sum += 1;
	}
	printf("%d\n", sum);

	return (0);
}
