#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Destination string.
 * @src: Source string.
 *
 * Return: Pointer to resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int s = 0, i = 0;

	while (dest[i] != 0)
	{
		s++;
	}
	while (src[i] != 0)
	{
		dest[s + i] = src[i];
		i++;
	}

	dest[s + i] = 0;
	return (dest);
}
