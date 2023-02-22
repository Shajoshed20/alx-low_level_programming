#include"main.h"
/*Print lower case 10 times*/

/**
 * print_alphabet_x10 - Function
 *
 * Return: void type
 */
void print_alphabet_x10(void)
{
	char lowerCase;
	int i = 0;

	while (i < 10)
	{
		for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
		{
			_putchar(lowerCase);
		}
		_putchar('\n');
		i++;
	}
}
