#include <stdarg.h>
#include <stdio.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 *
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 * @...: The variable arguments passed to the function.
 *
 * Return: Always void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(args);
	va_start(args, n);

	for (unsigned int i = 0; i < n; i++)
	{
		conts char *str = va_arg(args, const char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}
