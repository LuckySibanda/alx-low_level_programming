#include "main.h"

/**
 * print_line - prints a straight line in the terminal.
 * @n: Number of times the character _ should be printed.
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (int i = 0; i < n; i++)
		_putchar(i + '_');

	_putchar('\n');
}
