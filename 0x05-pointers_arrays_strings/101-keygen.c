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
	char pword[84];
	int a = 0, sum = 0, f_half, s_half;

	srand(time(0));

	while (sum < 2772)
	{
		pword[a] = (sum - 2772) / 2;
		sum += pword[a++];
	}

	pword[a] = '\0';

	if (sum != 2772)
	{
		f_half = (sum - 2772) / 2;
		s_half = (sum - 2772) / 2;

		if ((sum - 2772) % 2 != 0)
			f_half++;

		for (a = 0; pword[a]; a++)
		{
			if (pword[a] >= (33 + s_half))
			{
				pword[a] -= s_half;
				break;
			}
		}
	}

	printf("%s", pword);

	return (0);
}
