#include <stdio.h>
/*Fibonacci sequence*/

/**
 * main - Find and prinf the sum of even-valued terms
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long n = 0, m = 1, sum;
	float all_sum;

	while (1)
	{
		sum = n + m;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			all_sum += sum;

		n = m;
		m = sum;
	}
	printf("%.0f\n", all_sum);

	return (0);
}
