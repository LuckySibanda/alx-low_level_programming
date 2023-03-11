#include <stdio.h>

/**
 * main - prints the name of the program.
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < *argv; i++)
	{
		printf("%s\n", *argv[i]);
	}
	Return(0);
}
