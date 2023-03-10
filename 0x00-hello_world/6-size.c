#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints the size of various types,
 * It uses the sizeof operator to determine the size of each type,
 * The program returns 0 to indicate successful
 * completion of the program.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	double d;
	char c;

	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));

	return (0);
}
