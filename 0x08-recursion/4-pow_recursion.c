#include "main.h"

/**
 * _pow_recursion - Function to calculate x raised to power y
 * @x: variable for base integer
 * @y: variable for the power integer
 *
 * Return: int type
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	return (x * _pow_recursion(x, y - 1));
}
