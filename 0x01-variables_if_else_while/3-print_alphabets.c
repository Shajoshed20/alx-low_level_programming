#include <stdio.h>
/*for loop for lowercase then upper case */

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	/*prints lower case*/
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	/*prints upper case*/
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
