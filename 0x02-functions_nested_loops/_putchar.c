#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output.
 * @c: The character to write.
 *
 * Return: On success, returns the number of bytes written (1).
 * On error, returns -1 and sets errno.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}
