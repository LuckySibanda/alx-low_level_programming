#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output.
 * @c: The character to write.
 *
 * Return: On success, returns the number of byte written (1).
 * On error, returns -1 and sets error.
 */
int _putchar(char c)
{

	return (write(1, &c, 1));
}
