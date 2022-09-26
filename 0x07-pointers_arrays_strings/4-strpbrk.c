#include "main.h"

/**
 * _strpbrk - searches a string
 *
 * @s: string to find any set of bytes
 *
 * @accept: accepting arrays
 *
 * Returns: returns new value
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[i] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
