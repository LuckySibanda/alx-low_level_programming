#include "main.h"

/**
 *set_string - sets the value of a pointer to a char
 *
 *@s: double pointer that points to a char
 *@to: pointer that has the value of the char
 *
 *Return: nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
