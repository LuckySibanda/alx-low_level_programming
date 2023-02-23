#include "main.h"

/**
 * _isdigit - a function that checks for a digit (0 through 9)
 * @c: single letter input
 * Return: 1 if int c is lowercase, 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '1' && c <= '9')
		return (1);
	else
		return (0);
}
