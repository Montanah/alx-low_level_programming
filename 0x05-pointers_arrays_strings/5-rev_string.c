#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverses a string value
 *
 * @s: string to print
 */
void rev_string(char *s)
{
	int j;
	char u;

	for (j = 0; j <= _strlen(s) / 2; j++)
	{
		u = s[j];
		s[j] = s[_strlen(s) - j - 1];
		s[_strlen(s) - j - 1] = u;
	}
}
