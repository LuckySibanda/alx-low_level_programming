#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: Number of elements to allocate memory for
 * @size: Size of each element in bytes
 *
 * Return: Pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	char *array;

	j = nmemb * size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array = malloc(j);

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		array[i] = 0;
	}

	return (array);
}
