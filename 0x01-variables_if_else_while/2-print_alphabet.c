#include <stdio.h>

/**
 * main - Entry point for this program
 *
 * This program prints the lowercase alphabet using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
