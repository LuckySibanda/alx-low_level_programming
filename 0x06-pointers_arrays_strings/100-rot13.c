#include "main.h"
/**
 * rot13 - encodes a string using ROT13
 *
 * @s: pointer to the string to be encoded
 *
 * Return: pointer to the encoded string
 */
char *rot13(char *s)
{
	int i;
	int j;
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}

	return (s);
}
