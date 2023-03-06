#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: destination memory
 * @src: string for copying
 * @n: number of bytes
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + 1) = *(src + i);
		i++;
	}

	return (dest);
}
