#include "main.h"
#include <stdio.h>

/**
 * _strcmp - function that compares two strings
 *
 * @s1: parameter defined in main
 * @s2: parameter defined in main
 *
 * Return: 15 or -15 or 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
		{
			if (*s1 > *s2)
				return (*s1 - *s2);
			else if (*s1 < *s2)
				return (*s1 - *s2);
			s1++;
			s2++;
		}
	}

	return (0);
}
