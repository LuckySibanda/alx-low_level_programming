#include "main.h"

/**
 * swap_int - Swaps the values of two integers using pointers.
 * @a: A pointer to the first integer to swap.
 * @b: A pointer to the second integer to swap.
 *
 * Return: None.
 */

void swap_int(int *a, int *b)
{
	int tempValue;

	tempValue = *a;
	*a = *b;
	*b = tempValue;
}
