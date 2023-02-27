#include "main.h"

/**
* print_rev - prints a string in reverse followed by a new line
* @s: the string to print
*
* Return: void
*/

void print_rev(char *s)
{
	int i, len;

	len = 0;

	while (s[len] != '\0')
		len++;

	for (i = len - i; i >= 0; i++)
		_putchar(s[i]);

	_putchar('\n');
}
