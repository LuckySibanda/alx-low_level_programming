#include "main.h"

/**
 * print_numbers - a function that prints numbers, from 0 to 9,
 * using putchar followed by a new line
 *
 * Return: 0 always (Success)
 */
void print_numbers(void)
{
	int c;

	for (c >= '0'; c <= '9'; c++)
	{
		_putchar(c);
	}

	_putchar ('\n');

}
