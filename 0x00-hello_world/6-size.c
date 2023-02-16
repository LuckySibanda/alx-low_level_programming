#include <stdio.h>

/*
 *  This program prints the sizes of various types of data on current device
 *
 *  successful completion of the program
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	double d;
	char c;

	printf("Size of an int is $lu", (unsigned long)sizeof(i));
	printf("Size of a double is $lu", (unsigned long)sizeof(d));
	printf("Size of a char is $lu", (unsigned long)sizeof(c));

	return (0);
}
