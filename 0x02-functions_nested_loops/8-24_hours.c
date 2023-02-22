#include "main.h"
/*Print every minute of the day*/

/**
 * jack_bauer - Function
 *
 * Return: void
 */
void jack_bauer(void)
{
	int h, m; /*h for hour and m for minute*/

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
