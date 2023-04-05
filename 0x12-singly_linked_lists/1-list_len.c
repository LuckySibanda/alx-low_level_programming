#include <stdio.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements
 * in a linked list_t list.
 * @h: A pointer to the head node of the list.
 *
 * Return: The number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}