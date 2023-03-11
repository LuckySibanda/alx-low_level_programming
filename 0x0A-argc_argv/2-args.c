#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments passed to it
 * @argc: the number of arguments passed
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
