#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Function to return random valid passwords
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int pword[100];
	int a, sum, n;

	sum = 0;

	srand(time('\0'));

	for (a = 0; a < 100; a++)
	{
		pword[a] = rand() % 78;
		sum += (pword[a] + '0');
		putchar(pword[a] + '0');

		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar (n + '0');
			break;
		}
	}

	return (0);
}
