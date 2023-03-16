#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings up to n bytes.
 * @s1: the first string to concatenate.
 * @s2: the second string to concatenate up to n bytes.
 * @n: the maximum number of bytes to concatenate from s2.
 *
 * Return: a pointer to the concatenated string or NULL on failure.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 != NULL)
	{
		for (len1 = 0; s1[len1]; len1++)
			;
	}

	if (s2 != NULL)
	{
		for (len2 = 0; s2[len2]; len2++)
			;
	}

	if (n >= len2)
		n = len2;

	concat = malloc(sizeof(char) * (len1 + n + 1));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		concat[i] = s2[j];
		i++;
	}

	concat[i] = '\0';

	return (concat);
}
