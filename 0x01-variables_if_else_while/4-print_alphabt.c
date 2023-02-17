#include <stdio.h>
/**
 * main - Prints the alphabet except for 'e' and 'q'.
 *
 * Return: Always 0.
 */
int main(void)
{

	char aphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'q' && alphabet != 'e')
			putchar(alphabet);
	}

	putchar('\n');

	return (0);

}
