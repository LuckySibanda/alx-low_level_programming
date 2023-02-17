#include <stdio.h>
/*
 * main - the program starts here
 * This prints the alphabet in lower and uppercase using putchar function.
 * Return: always 0(Success)
 *
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
