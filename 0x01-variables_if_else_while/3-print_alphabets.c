#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point for the program
 *
 * This function generates the alphabet in lowercase and uppercase
 * using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
	putchar(alphabet);
}

for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
{
	putchar(alphabet);
}

putchar('\n');

return (0);
}
