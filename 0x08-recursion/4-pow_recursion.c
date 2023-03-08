#include "main.h"

/**
 * _pow_recursion - function that prints the value of
 * x raised to the power of y.
 * @x: input value one
 * @y: input value two
 * Return: Always 0 (Success)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
