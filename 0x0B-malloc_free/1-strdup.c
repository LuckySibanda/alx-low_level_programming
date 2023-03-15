#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * containing a copy of the string given as a parameter.
 * @str: The string to copy.
 *
 * Return: A pointer to the duplicated string or
 * NULL if insufficient memory was available.
 */

char *_strdup(char *str)
{
	int i;
	char *k;

	if (str == NULL)
	{
		return (NULL);
	}
	k = malloc((sizeof(char) * strlen(str)) + 1);
	if (k == NULL)
	{
		return (NULL);
	}
	i = 0;
	if (*str == '\0')
	{
		*k = '\0';
		return (p);
	}
	else
	{
		while (*(str + 1) != '\0')
		{
			*(k + i) = *(str + 1);
			i++;
		}
	}
	return (k);
}
