#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Function for addition operator.
 * @a: Variable for first number.
 * @b: Variable for second number.
 *
 * Return: Integer type.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function for subtraction operator.
 * @a: Variable for first number.
 * @b: Variable for second number.
 *
 * Return:Integer type
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function for mutiplication operator.
 * @a:Variable for first number.
 * @b: Variable for second number.
 *
 * Return: Integer operator.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function for divition operator.
 * @a: Variable for first number.
 * @b: Variable for second number.
 *
 * Return: Integer operator.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Function for modulo operator.
 * @a: Variable for first number.
 * @b: Variable for second number.
 *
 * Return: Integer type.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
