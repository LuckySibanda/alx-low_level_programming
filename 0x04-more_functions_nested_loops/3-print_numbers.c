#include "main.h"

/**
 * print_numbers - a function that prints numbers, from 0 to 9,
 * using putchar followed by a new line
 *
 * Return: 0 always (Success)
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
