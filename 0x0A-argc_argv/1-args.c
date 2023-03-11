#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments paased to it.
 * @argc: counts the number of arguments
 * @argv: prints the command line arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", argc);
	}
	return (0);
}
