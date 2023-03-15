#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * containing a copy of the string given as a parameter.
 * @str: The string to copy.
 *
 * Return: A pointer to the duplicated string or
 * NULL if insufficient memory was available.
 */

char *_strdup(char *str)
{
char *dup;
int len, i;

if (str == NULL)
return (NULL);

len = 0;
while (str[len] != '\0')
len++;

dub = malloc(sizeof(char) * (len + 1));
if (dup == NULL)
return (NULL);


for (i = 0; i <= len; i++)
dup[i] = str[i];

return (dup);
}
