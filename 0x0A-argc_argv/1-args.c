#include <stdio.h>

/**
 * main - prints number of arguments passed
 * @argc: counts the arguments
 * @argv: argument passed
 * Return: Always 0 (Success)
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
