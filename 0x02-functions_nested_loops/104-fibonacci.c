#include <stdio.h>
/*Print 98 fibonacci*/

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int output;
	unsigned long x = 0, y = 1, sum;
	unsigned long half_x1, half_x2, half_y1, half_y2;
	unsigned long half1, half2; /*the half of x and y*/

	for (output = 0; output < 92; output++)
	{
		sum = x + y;
		printf("%lu, ", sum);

		x = y;
		y = sum;
	}
	half_x1 = x / 10000000000;
	half_y1 = y / 10000000000;
	half_x2 = x % 10000000000;
	half_y2 = y % 10000000000;

	for (output = 93; output < 99; output++)
	{
		half1 = half_x1 + half_y1;
		half2 = half_x2 + half_y2;
		if (half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}
		print("%lu%lu", half1, half2);
		if (output != 98)
			printf(", ");

		half_x1 = half_y1;
		half_x2 = half_y2;
		half_y1 = half1;
		half_y2 = half2;
	}
	printf("\n");
	return (0);
}

