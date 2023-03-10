#include "main.h"
/**
 * _strcmp - Compares two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Difference between the ASCII values
 * of the first non-matching values
 * or 0 if the strings are identical.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}

	return (0);
}
