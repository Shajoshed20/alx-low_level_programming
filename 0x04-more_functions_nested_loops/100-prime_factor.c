#include <stdio.h>
#include <math.h>

/**
 * main - make the prime factor
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long a, max;
	long num = 612852475143;
	double sq = sqrt(num);

	for (a = 1; a <= sq; a++)
	{
		if (num % a == 0)
		{
			max = num / a;
		}
	}

	prinf("%d\n", max);

	return (0);
}
