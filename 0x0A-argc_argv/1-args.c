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
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
