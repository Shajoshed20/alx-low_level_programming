#include <stdio.h>
#include <math.h>

/**
 * main - make the prime factor
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long num = 612852475143, sq;

	while (sq < (num / 2))
	{
		if ((num % 2) == 0)
		{
			num /= 2;
			continue;
		}

		for (sq = 3; sq < (num / 2); sq += 2)
		{
			if ((num % sq) == 0)
				num /= sq;
		}
	}

	printf("%d\n", num);

	return (0);
}
