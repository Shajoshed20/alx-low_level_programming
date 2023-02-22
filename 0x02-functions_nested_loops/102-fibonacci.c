#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int output; /*the counter*/
	unsigned long x = 0, y = 1, sum; /*variables and the sum*/

	for (output = 0; output < 50; output++)
	{
		sum = x + y;
		printf("%lu", sum);

		x = y;
		y = sum;

		if (output == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
