#include "main.h"

/**
 * wildcmp - function that compares two strings and returns
 * 1 otherwise return 0.
 * @s1: string source 1
 * @s2: string source 2
 * Return: Always 0 (Success)
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
