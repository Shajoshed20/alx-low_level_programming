#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*print value if positive or negative*/

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d", n);

	/*my code goes here*/
	if (n > 0)
	{
		printf("is positive\n");
	}
	else
	{
		if (n < 0)
		{
			printf("is negative\n");
		}
		else
		{
			printf("is zero\n");
		}
	}
	return (0);
}
